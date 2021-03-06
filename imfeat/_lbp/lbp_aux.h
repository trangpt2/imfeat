#ifndef LBP_AUX_H
#define LBP_AUX_H
#include <stdint.h>
void make_lbp_mask_fast(uint8_t *data, const int height, const int width, uint8_t *out);
void make_lbp_mask_pool_fast(uint8_t *data, const int height, const int width, const int radius, uint8_t *hist);
#endif
