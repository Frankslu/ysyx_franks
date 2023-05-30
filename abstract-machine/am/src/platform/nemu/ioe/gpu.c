#include <am.h>
#include <nemu.h>
#include <klib.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
	uint32_t vgactl = inl(VGACTL_ADDR);
	*cfg = (AM_GPU_CONFIG_T) {
		.present = true, .has_accel = false,
		.width = vgactl >> 16, .height = vgactl & 0xffff,
		.vmemsz = 0
	};
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
	int width = inl(VGACTL_ADDR) >> 16;
	int pix_pos = 0;
	int j_offset = 0;
	uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
	fb += ctl->y * width + ctl->x;
	uint32_t *pixels = ctl->pixels;
	int i, j;
	for (j = 0; j < ctl->h; j++){
		for (i = 0; i < ctl->w - 1; i += 2){
			fb[j_offset + i] = pixels[pix_pos + i];
			fb[j_offset + i + 1] = pixels[pix_pos + i + 1];
		}

		// if(i < ctl->w)
		// 	fb[j_offset + i] = pixels[pix_pos + i];

		pix_pos += ctl->w;
		j_offset += width;
	}
	
	if (ctl->sync)
		outl(SYNC_ADDR, 1);
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
	status->ready = true;
}
