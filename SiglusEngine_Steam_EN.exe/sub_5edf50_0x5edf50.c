// 函数: sub_5edf50
// 地址: 0x5edf50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int64_t* ebx = arg20
int64_t* esi = arg21
double xmm2 = *ebx
int32_t edi = 0
double xmm0 = *esi
double var_38 = xmm0
double var_60 = xmm0
double var_58 = ebx[1]
double var_68 = ebx[3]
int32_t var_1c = 0
int32_t var_18 = 0
double var_40 = xmm2
double var_30 = esi[1]
double var_50 = xmm2
double var_48 = esi[3]
int32_t result
int32_t mxcsr
int16_t x87control
long double st0
st0, result = sub_5f2940(mxcsr, x87control, fconvert.d(fconvert.t(xmm0)))
double xmm3 = fconvert.d(st0)

while (true)
    double xmm4_1 = var_30
    double xmm2_1
    double xmm6_1
    
    if (xmm3 <= xmm4_1)
        xmm2_1 = var_38
        xmm6_1 = var_40
    else
        if (edi != 0)
            break
        
        xmm6_1 = ebx[1]
        xmm2_1 = esi[1]
        xmm4_1 = esi[2]
        var_40 = xmm6_1
        var_38 = xmm2_1
        var_58 = ebx[2]
        var_30 = xmm4_1
        var_1c = 1
    
    double xmm5_1 = var_48
    double xmm7_1
    
    if (xmm3 <= xmm5_1)
        xmm7_1 = var_50
    else
        if (var_18 != 0)
            break
        
        xmm7_1 = ebx[3]
        xmm5_1 = esi[2]
        var_60 = esi[3]
        var_50 = xmm7_1
        var_68 = ebx[2]
        var_48 = xmm5_1
        var_18 = 1
    
    if (not(xmm3 f< _mm_cvtepi32_pd(zx.q(arg16))) && not(_mm_cvtepi32_pd(zx.q(arg18)) f< xmm3))
        int128_t xmm1_6 = (xmm3 - xmm2_1) * (var_58 - xmm6_1) / (xmm4_1 - xmm2_1) + xmm6_1
        int128_t xmm2_6 = (xmm3 - var_60) * (var_68 - xmm7_1) / (xmm5_1 - var_60) + xmm7_1
        
        if (not(xmm1_6 f<= xmm2_6))
            int128_t xmm0_18 = xmm1_6
            xmm1_6 = xmm2_6
            xmm2_6 = xmm0_18
        
        result = int.d(xmm1_6)
        int32_t edx = int.d(xmm2_6)
        int32_t ecx = int.d(xmm3)
        int32_t var_10_1 = ecx
        
        if (result s<= arg17 && edx s>= arg15)
            double xmm3_2 = _mm_cvtepi32_pd(zx.q(arg9))
            double xmm1_8 = _mm_cvtepi32_pd(zx.q(ecx - arg14))
            double xmm5_2 = *((arg19 << 3) + &data_1ccd2a0)
            double xmm7_2 = *((arg19 << 3) + &data_1c459a0)
            double xmm6_3 = _mm_cvtepi32_pd(zx.q(result - arg13))
            int32_t result_1 = result
            int32_t edx_2 = edx - result_1 + 1
            int32_t esi_2 = ecx * arg12
            double xmm4_3 = xmm7_2 * xmm1_8
            double xmm2_8 = xmm5_2 * xmm1_8
            int32_t esi_4 = esi_2 + result_1 + arg11
            double xmm1_10 = _mm_cvtepi32_pd(zx.q(arg10))
            
            if (result_1 s< arg15)
                result_1 = arg15
            
            int32_t ecx_3 = edx
            
            if (ecx_3 s> arg17)
                ecx_3 = arg17
            
            int32_t var_8c_1 = arg8
            int32_t var_90_1 = arg7
            int32_t var_94_1 = arg6
            int32_t var_98_1 = arg5
            double xmm0_30 = _mm_cvtepi32_pd(zx.q(edx - arg13))
            int32_t eax_9 = result_1 + esi_2 + arg11
            result = sub_5ef270(eax_9, edx_2, esi_4, eax_9, ecx_3 + esi_2 + arg11, arg3, arg2, 
                arg4, int.d((xmm5_2 * xmm6_3 - xmm4_3) / arg22 + xmm3_2), 
                int.d((xmm7_2 * xmm6_3 + xmm2_8) / arg23 + xmm1_10), 
                int.d((xmm5_2 * xmm0_30 - xmm4_3) / arg22 + xmm3_2), 
                int.d((xmm7_2 * xmm0_30 + xmm2_8) / arg23 + xmm1_10))
            ebx = arg20
            esi = arg21
    
    xmm3 = xmm3 + 1.0
    edi = var_1c

return result
