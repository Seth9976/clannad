// 函数: sub_6cd5e0
// 地址: 0x6cd5e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0 && arg2 != 0)
    int32_t mxcsr
    int16_t x87control
    double var_c_2 = fconvert.d(sub_74c3d0(mxcsr, x87control, 
        fconvert.d(fconvert.t(
            1000000000000000.0 / _mm_cvtepi32_pd(zx.q(arg1)) / _mm_cvtepi32_pd(zx.q(arg2)) + 0.5))))
    
    if (not(0x41dfffffffc00000 f< var_c_2) && not(var_c_2 < -2147483648.0))
        return int.d(var_c_2)

return 0
