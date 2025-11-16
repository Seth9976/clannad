// 函数: sub_645e20
// 地址: 0x645e20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

double xmm2 = 90.0
int32_t eax_1 = *(arg3 + 0xc) - 1
int32_t ecx = arg4
int32_t eax_3 = *(arg3 + 0x10) - 1
int32_t esi = arg5
arg5:3.b = 0
int32_t esi_1 = esi - arg2
int32_t edi_1 = arg6 - ecx
int32_t var_2c = arg2
*arg7 = (zx.o(0)).q
int32_t i = 0
arg6:3.b = 0
*arg8 = xmm2
int64_t* eax_11

do
    int32_t var_28 = arg2
    int32_t var_24 = ecx
    int32_t i_1
    
    if (i s>= 0)
        i_1 = i
        
        if (i s> 0x5a)
            i_1 = 0x5a
    else
        i_1 = 0
    
    double xmm0_5 = _mm_cvtepi32_pd(zx.q(i_1)) * 1.5707500000000001 / xmm2 + 0.0
    double var_20 = xmm0_5
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    double xmm0_6
    x87control_1, xmm0_6 = __libm_sse2_sin_precise(mxcsr, x87control, xmm0_5)
    double var_18 = xmm0_6
    double xmm0_8
    x87control, xmm0_8 = __libm_sse2_cos_precise(mxcsr, x87control_1, var_20)
    double xmm3_1 = var_18
    double xmm4_2 = _mm_cvtepi32_pd(zx.q(esi_1))
    double xmm5_2 = _mm_cvtepi32_pd(zx.q(edi_1))
    var_20:4.d = int.d(xmm0_8 * xmm4_2 - xmm3_1 * xmm5_2 + 0.5) + var_2c
    var_18:4.d = int.d(xmm0_8 * xmm5_2 + xmm3_1 * xmm4_2 + 0.5) + arg4
    eax_11 = sub_64c5e0(&var_20:4, &var_24, &var_28, &var_20:4, &var_18:4, 0, 0, eax_1, eax_3)
    
    if (arg6:3.b != 0)
        if (eax_11.b == 0)
            *arg8 = _mm_cvtepi32_pd(zx.q(i))
            int64_t* eax_13
            eax_13.b = arg5:3.b
            return eax_13
        
        eax_11.b = arg5:3.b
    else if (eax_11.b == 0)
        eax_11.b = arg5:3.b
    else
        int32_t eax_12
        
        if (i != 0)
            eax_12 = i - 1
        else
            eax_12 = 0
        
        arg6:3.b = 1
        *arg7 = _mm_cvtepi32_pd(zx.q(eax_12))
        eax_11.b = 1
        arg5:3.b = 1
    
    xmm2 = 90.0
    i += 1
    arg2 = var_2c
    ecx = arg4
while (i s<= 0x5a)

return eax_11
