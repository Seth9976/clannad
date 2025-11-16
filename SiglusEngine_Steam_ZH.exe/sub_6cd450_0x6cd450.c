// 函数: sub_6cd450
// 地址: 0x6cd450
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg5 != 0)
    if (arg2 == 0 || arg4 == 0)
        *arg3 = 0
        return 1
    
    int32_t mxcsr
    int16_t x87control
    double var_48_2 = fconvert.d(sub_74c3d0(mxcsr, x87control, 
        fconvert.d(fconvert.t(
            _mm_cvtepi32_pd(zx.q(arg2)) * _mm_cvtepi32_pd(zx.q(arg4)) / _mm_cvtepi32_pd(zx.q(arg5))
            + 0.5))))
    
    if (not(0x41dfffffffc00000 f< var_48_2) && not(var_48_2 < -2147483648.0))
        *arg3 = int.d(var_48_2)
        return 1

return 0
