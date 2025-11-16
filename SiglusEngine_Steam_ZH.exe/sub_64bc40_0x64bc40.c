// 函数: sub_64bc40
// 地址: 0x64bc40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = int.d(fconvert.t(*arg16))
double* result
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, result, x87control_1 = sub_762040(mxcsr, x87control, fconvert.d(fconvert.t(arg16[2])))
int32_t edi = int.d(fconvert.t(fconvert.d(st0)))

if (ebx s<= arg5 && edi s>= 0)
    double var_18
    var_18:4.d = edi - ebx + 1
    arg16 = int.d(fconvert.t(*arg15))
    long double st0_1
    st0_1, result = sub_762040(mxcsr, x87control_1, fconvert.d(fconvert.t(arg15[1])))
    double* result_1 = arg16
    int32_t result_2 = int.d(fconvert.t(fconvert.d(st0_1)))
    
    if (result_1 s> result_2)
        result = result_1
        result_1 = result_2
        arg16 = result_1
        result_2 = result
    
    if (result_1 s<= arg4 && result_2 s>= 0)
        double* ecx_1 = arg16
        double xmm2_2 = _mm_cvtepi32_pd(zx.q(arg11))
        double xmm5_4 = _mm_cvtepi32_pd(zx.q(result_1 - arg13)) / arg17 + xmm2_2
        result = edi - arg14
        double xmm6_4 = _mm_cvtepi32_pd(zx.q(result_2 - arg13)) / arg17 + xmm2_2
        double xmm4_3 = _mm_cvtepi32_pd(zx.q(ebx - arg14)) / arg18
        double xmm2_4 = _mm_cvtepi32_pd(zx.q(result))
        double xmm3_2 = _mm_cvtepi32_pd(zx.q(arg12))
        double xmm4_4 = xmm4_3 + xmm3_2
        double xmm6_6 = (xmm6_4 - xmm5_4) / _mm_cvtepi32_pd(zx.q(result_2 - ecx_1 + 1))
        double xmm2_8 = (xmm2_4 / arg18 + xmm3_2 - xmm4_4) / _mm_cvtepi32_pd(zx.q(var_18:4.d))
        
        if (ecx_1 s< 0)
            uint64_t xmm0_5 = zx.q(neg.d(ecx_1))
            ecx_1 = nullptr
            xmm5_4 = _mm_cvtepi32_pd(xmm0_5) * xmm6_6 + xmm5_4
        
        if (result_2 s> arg4)
            result_2 = arg4
        
        if (ebx s< 0)
            uint64_t xmm0_9 = zx.q(neg.d(ebx))
            ebx = 0
            xmm4_4 = _mm_cvtepi32_pd(xmm0_9) * xmm2_8 + xmm4_4
        
        if (edi s> arg5)
            edi = arg5
        
        int32_t i_1 = edi - ebx + 1
        void* ebx_4 = arg3 + ((ebx * arg2 + ecx_1) << 2)
        
        if (i_1 s> 0)
            int32_t i
            
            do
                int64_t var_40_2 = (zx.o(0)).q
                double var_48_1 = xmm6_6
                double var_60_1 = xmm4_4
                double var_68_1 = xmm5_4
                sub_64b850(arg9, arg10, arg6, arg7, arg8, ebx_4, result_2 - ecx_1 + 1)
                xmm4_4 = xmm4_4 + xmm2_8
                result = arg2 << 2
                ebx_4 += result
                i = i_1
                i_1 -= 1
            while (i != 1)

return result
