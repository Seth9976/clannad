// 函数: sub_64b7d0
// 地址: 0x64b7d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t xmm0 = (zx.o(0)).q
int64_t var_c = (zx.o(0)).q
double* result

for (int32_t i = 0; i s< 0x7080; )
    double xmm0_2 = xmm0 f* 3.1415000000000002 / 180.0
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    int64_t xmm0_3
    x87control_1, xmm0_3 = __libm_sse2_sin_precise(mxcsr, x87control, xmm0_2)
    *(i + &data_4ebee70) = xmm0_3
    int64_t xmm0_5
    result, x87control, xmm0_5 = __libm_sse2_cos_precise(mxcsr, x87control_1, xmm0_2)
    *(i + &data_4ec5ef0) = xmm0_5
    i += 8
    xmm0 = var_c f+ 0.10000000000000001
    var_c = xmm0

data_bac4f4 = 1
return result
