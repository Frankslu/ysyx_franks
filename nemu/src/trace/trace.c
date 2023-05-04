#include <trace/trace.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <elf.h>
#include <assert.h>

#ifdef CONFIG_TRACE

Iring_t iring;
Mring_t mring;
Func_t func[24];

void iring_init();
void mring_init();

void init_trace(){
    IFDEF(CONFIG_IRING, iring_init());
    IFDEF(CONFIG_MTRACE, mring_init());
}

void iring_init(){
    for (int i=0; i<IRING_BUFSIZE; i++){
        iring.buf[i][0] = '\0';
    }
    iring.pos = 0;
}

void mring_init(){
    for (int i=0; i<MRING_BUFSIZE; i++){
        mring.pc[i] = 0;
        mring.addr[i] = 0;
        mring.wr[i] = INVALID;
    }
    mring.pos = 0;
}


#ifdef CONFIG_IRING
void iring_write(char *_buf){
    strcpy(iring.buf[iring.pos], _buf);
    iring.pos = iring.pos == (IRING_BUFSIZE - 1) ? 0 : (iring.pos + 1);
}

void display_iring(){
    
    for (int i=0; i<IRING_BUFSIZE; i++){
        if (iring.buf[iring.pos][0] != '\0'){
            printf("%s\n", iring.buf[iring.pos]);
        }
        iring.pos = iring.pos == (IRING_BUFSIZE - 1) ? 0 : (iring.pos + 1);
    }
}
#endif



#ifdef CONFIG_MTRACE
void record_read(vaddr_t addr){
    if(addr < CONFIG_MTRACE_START || addr > CONFIG_MTRACE_END)
        return;
    mring.pc[mring.pos] = cpu.pc;
    mring.addr[mring.pos] = addr;
    mring.wr[mring.pos] = READ;
    mring.pos = mring.pos == (MRING_BUFSIZE - 1) ? 0 : (mring.pos + 1);
}

void record_write(vaddr_t addr){
    if(addr < CONFIG_MTRACE_START || addr > CONFIG_MTRACE_END)
        return;
    mring.pc[mring.pos] = cpu.pc;
    mring.addr[mring.pos] = addr;
    mring.wr[mring.pos] = WRITE;
    mring.pos = mring.pos == (MRING_BUFSIZE - 1) ? 0 : (mring.pos + 1);
}

void display_mring(){
    for (int i=0; i<MRING_BUFSIZE; i++){
        if (mring.wr[mring.pos] != INVALID){
            printf("%x  %s %x\n", mring.pc[mring.pos], mring.wr[mring.pos] == READ ? "read" : "write", mring.addr[mring.pos]);
        }
        mring.pos = mring.pos == (MRING_BUFSIZE - 1) ? 0 : (mring.pos + 1);
    }
}
#endif


// #ifdef CONFIG_FTRACE
// void init_ftrace(char elf_file){
//     if (elf_file == NULL){
//         Log("no input elf file");
//         return;
//     }

//     int count;
//     FILE *fp;
//     fp = fopen(elf_file, "rb");
//     Assert(fp, "Can not open %s", elf_file);

//     char *buf;
//     buf = (char *)malloc(9192 * sizeof(unsigned char));
//     int ret = fread(buf, sizeof(unsigned char), 9192, fp);
//     assert(ret == 1);

//     Elf32_Ehdr *ehdr = (Elf32_Ehdr *)buf;
//     Elf32_Shdr *shdr = (Elf32_Shdr *)(buf + ehdr->e_shoff);
//     Elf32_Shdr *shdr_strtab = NULL;
//     Elf32_Shdr *shdr_symtab = NULL;

//     for (int i = 0; shdr_strtab == NULL || shdr_symtab == NULL; i++)
//     {
//         if (shdr[i].sh_type == SHT_SYMTAB)
//         {
//             shdr_symtab = &shdr[i];
//         }
//         else if (shdr[i].sh_type == SHT_STRTAB)
//         {
//             shdr_strtab = &shdr[i];
//             break;
//         }
//     }

//     Elf32_Sym *table_sym = (Elf32_Sym *)(buf + shdr_symtab->sh_offset);

//     for (int i = 0; i <= shdr_symtab->sh_size / shdr_symtab->sh_entsize; i++)
//     {
//         if (ELF64_ST_TYPE(table_sym[i].st_info) == STT_FUNC)
//         {
//             func[count].addr = table_sym[i].st_value;
//             strcpy(func[count].name, (char *)(buf + shdr_strtab->sh_offset + table_sym[i].st_name));
//             count++;
//         }
//     }

//     free(buf);
//     return;
// }
// #endif

#endif