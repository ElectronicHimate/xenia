#include <stddef.h>
#include <stdint.h>

// --- CPU & Alignment Stubs ---
int ff_get_cpu_flags_arm(void) { return 0; }
int ff_get_cpu_flags_ppc(void) { return 0; }
int ff_get_cpu_flags_mips(void) { return 0; }
int ff_get_cpu_flags_x86(void) { return 0; }

size_t ff_get_cpu_max_align_arm(void) { return 8; }
size_t ff_get_cpu_max_align_ppc(void) { return 8; }
size_t ff_get_cpu_max_align_mips(void) { return 8; }
size_t ff_get_cpu_max_align_x86(void) { return 8; }

// --- Float DSP Init Stubs ---
void ff_float_dsp_init_ppc(void* cursor) {}
void ff_float_dsp_init_x86(void* cursor) {}
void ff_float_dsp_init_mips(void* cursor) {}
void ff_float_dsp_init_arm(void* cursor) {}

// --- MPADSP (Audio) Architecture Stubs ---
void ff_mpadsp_init_x86_tabs(void) {}
void ff_mpadsp_init_x86(void* s) {}
void ff_mpadsp_init_ppc(void* s) {}
void ff_mpadsp_init_arm(void* s) {}
void ff_mpadsp_init_mipsdsp(void* s) {}
void ff_mpadsp_init_mipsfpu(void* s) {}

// --- DCT & Transform Stubs ---
void ff_dct_init_x86(void* s) {}
void ff_fft_init_x86(void* s) {}
void ff_fft_init_arm(void* s) {}
void ff_fft_init_mips(void* s) {}
void ff_fft_init_ppc(void* s) {}
void ff_fft_init_aarch64(void* s) {}
void ff_rdft_init_arm(void* s) {}

// --- NEON Math Stubs (Fallback for ASM failures) ---
void ff_vector_fmul_scalar_neon(void* s) {}
void ff_scalarproduct_float_neon(void* s) {}
void ff_butterflies_float_neon(void* s) {}
void ff_vector_fmul_add_neon(void* s) {}
void ff_vector_fmul_window_neon(void* s) {}
void ff_vector_dmul_scalar_neon(void* s) {}
void ff_vector_fmac_scalar_neon(void* s) {}
void ff_vector_fmul_reverse_neon(void* s) {}
void ff_vector_fmul_neon(void* s) {}
void ff_mpadsp_apply_window_float_neon(void* s) {}
void ff_mpadsp_apply_window_fixed_neon(void* s) {}

// --- Legacy Bitstream Filter API Stub ---
int av_bitstream_filter_filter(void* bsfc, void* avctx, const char* args,
                               uint8_t** poutbuf, int* poutbuf_size,
                               const uint8_t* buf, int buf_size, int keyframe) {
    return 0; 
}

// --- Threading & Video Encoding Stubs ---
void ff_frame_thread_encoder_free(void* avctx) {}
int ff_frame_thread_encoder_init(void* avctx) { return 0; }
int ff_thread_video_encode_frame(void* avctx, void* pkt, void* frame, int* got_packet) { return 0; }
