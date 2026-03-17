#include <stddef.h>

int ff_get_cpu_flags_arm(void) { return 0; }
int ff_get_cpu_flags_ppc(void) { return 0; }
int ff_get_cpu_flags_mips(void) { return 0; }
int ff_get_cpu_flags_x86(void) { return 0; }

size_t ff_get_cpu_max_align_arm(void) { return 8; }
size_t ff_get_cpu_max_align_ppc(void) { return 8; }
size_t ff_get_cpu_max_align_mips(void) { return 8; }
size_t ff_get_cpu_max_align_x86(void) { return 8; }

void ff_frame_thread_encoder_free(void* avctx) {}
int ff_frame_thread_encoder_init(void* avctx) { return 0; }
int ff_thread_video_encode_frame(void* avctx, void* pkt, void* frame, int* got_packet) { return 0; }

void ff_mpadsp_init_x86_tabs(void) {}
void ff_mpadsp_init_ppc(void* s) {}
void ff_mpadsp_init_mipsdsp(void* s) {}
void ff_mpadsp_init_mipsfpu(void* s) {}
void ff_mpadsp_init_x86(void* s) {}
void ff_mpadsp_init_arm(void* s) {}
void ff_dct_init_x86(void* s) {}
