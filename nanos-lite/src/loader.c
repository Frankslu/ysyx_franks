#include <proc.h>
#include <elf.h>
#include <fs.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_LOONGARCH32R__)
# define EXPECT_TYPE 258
#else
# error Unsupported ISA
#endif

extern size_t get_ramdisk_size();
extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);

static uintptr_t loader(PCB *pcb, const char *filename) {
  int fd = fs_open(filename, 0, 0);
  
  Elf_Ehdr *elf_head = (Elf_Ehdr *)malloc(sizeof(Elf_Ehdr));
  fs_read(fd, elf_head, sizeof(Elf_Ehdr));
  bool is_elf = elf_head->e_ident[EI_MAG0] == ELFMAG0 &&
    elf_head->e_ident[EI_MAG1] == ELFMAG1 &&
    elf_head->e_ident[EI_MAG2] == ELFMAG2 &&
    elf_head->e_ident[EI_MAG3] == ELFMAG3;
  assert(is_elf);
  assert(elf_head->e_machine == 258);
  
  Elf_Phdr *phdr = (Elf_Phdr *)malloc(sizeof(Elf_Phdr) * elf_head->e_phnum);
  fs_lseek(fd, elf_head->e_phoff, SEEK_SET);
  fs_read(fd, phdr, sizeof(Elf_Phdr) * elf_head->e_phnum);

  for (Elf_Phdr *p = phdr; p < phdr + elf_head->e_phnum; p++){
    fs_lseek(fd, p->p_offset, SEEK_SET);
    fs_read(fd, (void *)(p->p_vaddr), p->p_filesz);
    memset((void *)(p->p_vaddr+p->p_filesz), 0, p->p_memsz - p->p_filesz);
  }

  free(elf_head);
  free(phdr);
  fs_close(fd);

  return elf_head->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

