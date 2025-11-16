// 函数: sub_5ed940
// 地址: 0x5ed940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int64_t* ecx = arg21
double xmm1 = *((arg19 << 3) + &data_1c459a0)
double xmm5 = *ecx
double xmm3 = ecx[1]
double xmm2 = xmm5
double xmm6 = *arg20
double xmm4 = ecx[3]
double xmm7 = xmm6
int32_t edi = int.d(xmm2)
int32_t esi = 0
int32_t var_14 = 0
int32_t var_10 = 0
double var_24 = arg20[1]
double var_34 = arg20[3]
double xmm0_2 = *((arg19 << 3) + &data_1ccd2a0)
int32_t result = edi * arg12
int64_t* edx_1 = edi - arg14
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
        
        xmm6 = arg20[1]
        xmm5 = ecx[1]
        xmm3 = ecx[2]
        var_6c = xmm6
        var_64 = xmm5
        var_24 = arg20[2]
        var_54 = xmm3
        var_14 = 1
    
    if (not(xmm2 <= xmm4))
        if (var_10 != 0)
            break
        
        xmm7 = arg20[3]
        xmm4 = ecx[2]
        var_2c = ecx[3]
        var_74 = xmm7
        var_34 = arg20[2]
        var_5c = xmm4
        var_10 = 1
    
    if (edi s>= arg16 && edi s<= arg18)
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
        st0_1, x87control = sub_5f2940(mxcsr, x87control, fconvert.d(fconvert.t(var_3c_1)))
        int32_t edx_2 = int.d(fconvert.t(fconvert.d(st0_1)))
        
        if (esi_1 s<= arg17 && edx_2 s>= arg15)
            double xmm3_2 = _mm_cvtepi32_pd(zx.q(edx_1))
            double xmm2_6 = xmm3_2 * xmm1
            double xmm4_2 = _mm_cvtepi32_pd(zx.q(esi_1 - arg13))
            double xmm6_2 = _mm_cvtepi32_pd(zx.q(edx_2 - arg13))
            double xmm3_3 = xmm3_2 * xmm0_2
            double xmm1_7 = _mm_cvtepi32_pd(zx.q(arg9))
            double xmm5_5 = (xmm4_2 * xmm0_2 - xmm2_6) / arg23 + xmm1_7
            double xmm7_5 = (xmm6_2 * xmm0_2 - xmm2_6) / arg23 + xmm1_7
            double xmm0_16 = _mm_cvtepi32_pd(zx.q(arg10))
            double xmm4_6 = (xmm4_2 * xmm1 + xmm3_3) / arg24 + xmm0_16
            double xmm6_6 = (xmm6_2 * xmm1 + xmm3_3) / arg24 + xmm0_16
            double xmm0_18 = _mm_cvtepi32_pd(zx.q(edx_2 - esi_1 + 1))
            double xmm2_9 = (xmm7_5 - xmm5_5) / xmm0_18
            double xmm3_6 = (xmm6_6 - xmm4_6) / xmm0_18
            
            if (esi_1 s< arg15)
                int32_t eax_7 = arg15 - esi_1
                esi_1 = arg15
                double xmm1_10 = _mm_cvtepi32_pd(zx.q(eax_7))
                xmm5_5 = xmm5_5 + xmm1_10 * xmm2_9
                xmm4_6 = xmm1_10 * xmm3_6 + xmm4_6
            
            if (edx_2 s> arg17)
                edx_2 = arg17
            
            double var_8c_1
            var_8c_1:4.d = 0
            data_1c4598c = esi_1
            var_8c_1.d = edx_2 - esi_1 + 1
            data_1ccd290 = edi
            int32_t eax_10 = arg11 + ((result + esi_1) << 2)
            
            if (data_1c0529f == 0)
                if (arg22 == 0)
                    sub_5ee940(arg5, arg6, arg7, arg8, xmm5_5, xmm4_6, xmm7_5, xmm6_6, arg3, arg2, 
                        arg4, eax_10, xmm2_9, xmm3_6, var_8c_1)
                else
                    sub_5eec70(arg5, arg6, arg7, arg8, xmm5_5, xmm4_6, xmm7_5, xmm6_6, arg3, arg2, 
                        arg4, eax_10, xmm2_9, xmm3_6, var_8c_1)
            else if (arg22 == 0)
                sub_5ee390(arg5, arg6, arg7, arg8, xmm5_5, xmm4_6, xmm7_5, xmm6_6, arg3, arg2, 
                    arg4, eax_10, xmm2_9, xmm3_6, var_8c_1)
            else
                sub_5ee500(arg5, arg6, arg7, arg8, xmm5_5, xmm4_6, xmm7_5, xmm6_6, arg3, arg2, 
                    arg4, eax_10, xmm2_9, xmm3_6, var_8c_1)
        
        ecx = arg21
    
    xmm2 = xmm2 + 1.0
    xmm3 = var_54
    edi += 1
    xmm4 = var_5c
    edx_1 += 1
    result += arg12
    xmm5 = var_64
    xmm6 = var_6c
    xmm7 = var_74
    esi = var_14

return result
