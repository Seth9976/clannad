// 函数: sub_64b910
// 地址: 0x64b910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t* ecx = arg17
double xmm1 = *((arg15 << 3) + &data_4ebee70)
double xmm5 = *ecx
double xmm3 = ecx[1]
double xmm2 = xmm5
double xmm6 = *arg16
double xmm4 = ecx[3]
double xmm7 = xmm6
int32_t edi = int.d(xmm2)
int32_t esi = 0
int32_t var_c = 0
int32_t var_8 = 0
double var_24 = arg16[1]
double var_34 = arg16[3]
double xmm0_2 = *((arg15 << 3) + &data_4ec5ef0)
int64_t* result = edi * arg2
int32_t edx_1 = edi - arg14
double var_6c = xmm6
double var_64 = xmm5
double var_54 = xmm3
double var_74 = xmm7
double var_2c = xmm5
double var_5c = xmm4

while (true)
    if (not(xmm2 <= xmm3))
        if (esi != 0)
            break
        
        xmm6 = arg16[1]
        xmm5 = ecx[1]
        xmm3 = ecx[2]
        var_6c = xmm6
        var_64 = xmm5
        var_24 = arg16[2]
        var_54 = xmm3
        var_c = 1
    
    if (not(xmm2 <= xmm4))
        if (var_8 != 0)
            break
        
        xmm7 = arg16[3]
        xmm4 = ecx[2]
        var_2c = ecx[3]
        var_74 = xmm7
        var_34 = arg16[2]
        var_5c = xmm4
        var_8 = 1
    
    if (edi s>= 0 && edi s<= arg5)
        double xmm1_5 = (xmm2 - xmm5) * (var_24 - xmm6) / (xmm3 - xmm5) + xmm6
        double xmm2_4 = (xmm2 - var_2c) * (var_34 - xmm7) / (xmm4 - var_2c) + xmm7
        double var_3c_1 = xmm2_4
        
        if (not(xmm1_5 <= xmm2_4))
            double xmm0_14 = xmm1_5
            xmm1_5 = xmm2_4
            var_3c_1 = xmm0_14
        
        int32_t esi_1 = int.d(xmm1_5)
        int32_t mxcsr
        int16_t x87control
        long double st0_1
        st0_1, x87control = sub_762040(mxcsr, x87control, fconvert.d(fconvert.t(var_3c_1)))
        int32_t edx_2 = int.d(fconvert.t(fconvert.d(st0_1)))
        
        if (esi_1 s<= arg4 && edx_2 s>= 0)
            double xmm4_2 = _mm_cvtepi32_pd(zx.q(edx_1))
            double xmm4_3 = xmm4_2 * xmm0_2
            double xmm3_2 = xmm4_2 * xmm1
            double xmm5_2 = _mm_cvtepi32_pd(zx.q(esi_1 - arg13))
            double xmm7_2 = _mm_cvtepi32_pd(zx.q(edx_2 - arg13))
            double xmm1_7 = _mm_cvtepi32_pd(zx.q(arg11))
            double xmm2_6 = _mm_cvtepi32_pd(zx.q(arg12))
            double xmm4_6 = xmm7_2 * xmm0_2 - xmm3_2
            double var_3c_3 = xmm4_6
            double xmm6_5 = (xmm5_2 * xmm0_2 - xmm3_2) / arg18 + xmm1_7
            double xmm5_6 = (xmm5_2 * xmm1 + xmm4_3) / arg19 + xmm2_6
            double xmm0_16 = _mm_cvtepi32_pd(zx.q(edx_2 - esi_1 + 1))
            double xmm3_7 = (xmm4_6 / arg18 + xmm1_7 - xmm6_5) / xmm0_16
            double xmm7_8 = ((xmm7_2 * xmm1 + xmm4_3) / arg19 + xmm2_6 - xmm5_6) / xmm0_16
            
            if (esi_1 s< 0)
                uint64_t xmm1_9 = zx.q(neg.d(esi_1))
                esi_1 = 0
                double xmm1_10 = _mm_cvtepi32_pd(xmm1_9)
                xmm6_5 = xmm6_5 + xmm1_10 * xmm3_7
                xmm5_6 = xmm1_10 * xmm7_8 + xmm5_6
            
            if (edx_2 s> arg4)
                edx_2 = arg4
            
            double var_94_2 = xmm7_8
            double var_9c_1 = xmm3_7
            double var_b4_1 = xmm5_6
            double var_bc_1 = xmm6_5
            sub_64b850(arg9, arg10, arg6, arg7, arg8, arg3 + ((result + esi_1) << 2), 
                edx_2 - esi_1 + 1)
        
        ecx = arg17
    
    xmm2 = xmm2 + 1.0
    xmm3 = var_54
    edi += 1
    xmm4 = var_5c
    edx_1 += 1
    result += arg2
    xmm5 = var_64
    xmm6 = var_6c
    xmm7 = var_74
    esi = var_c

return result
