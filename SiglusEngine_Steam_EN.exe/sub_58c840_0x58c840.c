// 函数: sub_58c840
// 地址: 0x58c840
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1c0551f != 0)
    return 

int64_t xmm0_1 = (zx.o(0)).q
int32_t i = 0
int64_t var_c_1 = (zx.o(0)).q

do
    double xmm0_3 = xmm0_1 f* 3.1415000000000002 / 180.0
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    int64_t xmm0_4
    x87control_1, xmm0_4 = __libm_sse2_sin_precise(mxcsr, x87control, xmm0_3)
    *(i + &data_1c459a0) = xmm0_4
    double* eax
    int64_t xmm0_6
    eax, x87control, xmm0_6 = __libm_sse2_cos_precise(mxcsr, x87control_1, xmm0_3)
    *(i + &data_1ccd2a0) = xmm0_6
    i += 8
    xmm0_1 = var_c_1 f+ 0.10000000000000001
    var_c_1 = xmm0_1
while (i s< 0x7080)

data_1c0551f = 1
