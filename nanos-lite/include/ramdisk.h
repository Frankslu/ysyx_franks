#ifndef RAMDISK_H
#define RAMDISK_H
#include <common.h>

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
void init_ramdisk();
size_t get_ramdisk_size();

#endif