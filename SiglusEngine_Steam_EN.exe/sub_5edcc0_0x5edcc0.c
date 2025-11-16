// 函数: sub_5edcc0
// 地址: 0x5edcc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = int.d(fconvert.t(*arg20))
int32_t result
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, result, x87control_1 = sub_5f2940(mxcsr, x87control, fconvert.d(fconvert.t(arg20[2])))
int32_t ebx = int.d(fconvert.t(fconvert.d(st0)))

if (edi s<= arg18 && ebx s>= arg16)
    arg20 = int.d(fconvert.t(*arg19))
    long double st0_1
    st0_1, result = sub_5f2940(mxcsr, x87control_1, fconvert.d(fconvert.t(arg19[1])))
    double* result_2 = arg20
    int32_t result_3 = int.d(fconvert.t(fconvert.d(st0_1)))
    
    if (result_2 s> result_3)
        result = result_2
        result_2 = result_3
        arg20 = result_2
        result_3 = result
    
    if (result_2 s<= arg17 && result_3 s>= arg15)
        double* ecx_1 = arg20
        double xmm2_2 = _mm_cvtepi32_pd(zx.q(arg9))
        double xmm5_4 = _mm_cvtepi32_pd(zx.q(result_2 - arg13)) / arg22 + xmm2_2
        double var_24_2 = xmm5_4
        double xmm6_4 = _mm_cvtepi32_pd(zx.q(result_3 - arg13)) / arg22 + xmm2_2
        double var_3c_1 = xmm6_4
        double xmm7_3 = _mm_cvtepi32_pd(zx.q(ebx - arg14)) / arg23
        double xmm4_2 = _mm_cvtepi32_pd(zx.q(edi - arg14))
        double xmm3_2 = _mm_cvtepi32_pd(zx.q(arg10))
        double xmm4_4 = xmm4_2 / arg23 + xmm3_2
        double var_1c_1 = xmm4_4
        double xmm2_5 = (xmm6_4 - xmm5_4) / _mm_cvtepi32_pd(zx.q(result_3 - ecx_1 + 1))
        double var_34_1 = xmm2_5
        double xmm7_6 = (xmm7_3 + xmm3_2 - xmm4_4) / _mm_cvtepi32_pd(zx.q(ebx - edi + 1))
        
        if (ecx_1 s< arg15)
            void* eax_17 = arg15 - ecx_1
            ecx_1 = arg15
            arg20 = ecx_1
            xmm5_4 = _mm_cvtepi32_pd(zx.q(eax_17)) * xmm2_5 + xmm5_4
            var_24_2 = xmm5_4
        
        if (result_3 s> arg17)
            result_3 = arg17
        
        if (edi s< arg16)
            int32_t eax_19 = arg16 - edi
            edi = arg16
            xmm4_4 = _mm_cvtepi32_pd(zx.q(eax_19)) * xmm7_6 + xmm4_4
            var_1c_1 = xmm4_4
        
        if (ebx s> arg18)
            ebx = arg18
        
        arg18 = ebx - edi + 1
        int32_t ebx_3 = arg11 + ((edi * arg12 + arg20) << 2)
        result = arg12 << 2
        int32_t result_1 = result
        
        if (arg18 s> 0)
            int32_t ecx_6 = arg8
            int32_t edx_2 = arg7
            int32_t i
            
            do
                double var_54_1
                var_54_1:4.d = 0
                var_54_1.d = result_3 - ecx_1 + 1
                data_1c4598c = arg20
                data_1ccd290 = edi
                int64_t var_5c_1 = (zx.o(0)).q
                
                if (data_1c0529f == 0)
                    if (arg21 == 0)
                        result = sub_5ee940(arg5, arg6, edx_2, ecx_6, xmm5_4, xmm4_4, xmm6_4, 
                            xmm4_4, arg3, arg2, arg4, ebx_3, xmm2_5, var_5c_1, var_54_1)
                    else
                        result = sub_5eec70(arg5, arg6, edx_2, ecx_6, xmm5_4, xmm4_4, xmm6_4, 
                            xmm4_4, arg3, arg2, arg4, ebx_3, xmm2_5, var_5c_1, var_54_1)
                else if (arg21 == 0)
                    result = sub_5ee390(arg5, arg6, edx_2, ecx_6, xmm5_4, xmm4_4, xmm6_4, xmm4_4, 
                        arg3, arg2, arg4, ebx_3, xmm2_5, var_5c_1, var_54_1)
                else
                    result = sub_5ee500(arg5, arg6, edx_2, ecx_6, xmm5_4, xmm4_4, xmm6_4, xmm4_4, 
                        arg3, arg2, arg4, ebx_3, xmm2_5, var_5c_1, var_54_1)
                
                ebx_3 += result_1
                edi += 1
                i = arg18
                arg18 -= 1
                xmm5_4 = var_24_2
                xmm2_5 = var_34_1
                xmm6_4 = var_3c_1
                xmm4_4 = xmm7_6 + var_1c_1
                ecx_6 = arg8
                edx_2 = arg7
                var_1c_1 = xmm4_4
            while (i != 1)

return result
