#include <fs.h>
#include <ramdisk.h>

size_t serial_write(const void *buf, size_t offset, size_t len);

typedef size_t(*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

#define FILETABLE_LEN (int)(sizeof(file_table) / sizeof(Finfo))

size_t open_offset[FILETABLE_LEN];

int fs_open(const char *pathname, int flags, int mode){
  for (int i = 0; i < FILETABLE_LEN; i++){
    if (strcmp(file_table[i].name, pathname) == 0){
      open_offset[i] = 0;
      return i;
    }
  }
  Log("file %s not found\n", pathname);
  assert(0);
}

size_t fs_read(int fd, void *buf, size_t len){
  switch (fd){
  case 0:
  case 1:
  case 2:
    return 0;
  default:
    if (open_offset[fd] >= file_table[fd].size){
      Log("Read Out of Range\n");
      assert(0);
    }
    size_t filesize = file_table[fd].size;
    len = open_offset[fd] + len > filesize ? filesize - open_offset[fd] : len;
    size_t offset = open_offset[fd] + file_table[fd].disk_offset;
    open_offset[fd] += len;
    return ramdisk_read(buf, offset, len);
  }
}

size_t fs_write(int fd, const void *buf, size_t len){
  switch (fd){
  case 0:
    return 0;
  case 1:
  case 2:
    file_table[fd].write(buf, file_table[fd].disk_offset, len);
    return 0;
  default:
    if (open_offset[fd] >= file_table[fd].size){
      Log("Write Out of Range\n");
      assert(0);
    }
    size_t filesize = file_table[fd].size;
    len = open_offset[fd] + len > filesize ? filesize - open_offset[fd] : len;
    size_t offset = open_offset[fd] + file_table[fd].disk_offset;
    open_offset[fd] += len;
    return ramdisk_write(buf, offset, len);
  }
}

size_t fs_lseek(int fd, size_t offset, int whence){
  size_t fsize = file_table[fd].size;
  switch (whence){
  case SEEK_SET:
    assert(offset <= fsize);
    open_offset[fd] = offset;
    return open_offset[fd];

  case SEEK_CUR:
    assert(offset + open_offset[fd] <= fsize);
    open_offset[fd] += offset;
    return open_offset[fd];

  case SEEK_END:
    assert((signed)offset <= 0);
    open_offset[fd] = fsize + offset;
    return open_offset[fd];

  default:
    panic("whence error\n");
    break;
  }

  return 0;
}

int fs_close(int fd){
  open_offset[fd] = 0;
  return 0;
}