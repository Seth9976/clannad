// 函数: sub_6cbac0
// 地址: 0x6cbac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg2
int32_t ebx_1 = arg2[2] + eax
int32_t ebx_2 = ebx_1 + arg2[1]

if (ebx_1 != neg.d(arg2[1]))
    double xmm2_1 = 100000.0
    double xmm3_1 = 0.5
    double var_48
    int32_t mxcsr
    int16_t x87control
    
    if (eax == 0)
        *arg1 = 0
    label_6cbb70:
        int32_t eax_2 = arg2[1]
        
        if (eax_2 == 0)
            arg1[1] = 0
        label_6cbbe5:
            int32_t eax_4 = *arg2
            int32_t edx = arg2[1]
            int32_t edx_1 = arg2[3]
            int32_t eax_7 = arg2[5] + edx_1 + arg2[4]
            double var_88
            var_88:4.d = eax_7
            var_88.d = 0x186a0
            var_48.d = eax_7
            int32_t eax_8 = sub_6cd450(eax_7, edx_1, &arg1[2], 0x186a0)
            
            if (eax_8 != 0)
                var_88:4.d = var_48.d
                var_88.d = 0x186a0
                
                if (sub_6cd450(eax_8, arg2[4], &arg1[3], 0x186a0) != 0)
                    int32_t eax_11 = eax_4 + arg2[3]
                    int32_t edx_3 = arg2[6]
                    int32_t ebx_3 = ebx_2 + var_48.d
                    int32_t eax_13 = edx + arg2[4]
                    int32_t eax_16 = arg2[8] + edx_3 + arg2[7]
                    var_88:4.d = eax_16
                    var_88.d = 0x186a0
                    var_48.d = eax_16
                    int32_t eax_17 = sub_6cd450(eax_16, edx_3, &arg1[4], 0x186a0)
                    
                    if (eax_17 != 0)
                        var_88:4.d = var_48.d
                        var_88.d = 0x186a0
                        
                        if (sub_6cd450(eax_17, arg2[7], &arg1[5], 0x186a0) != 0)
                            int32_t ebx_4 = ebx_3 + var_48.d
                            int32_t eax_20 = eax_13 + arg2[7]
                            var_88:4.d = ebx_4
                            var_88.d = 0x186a0
                            int32_t eax_21 = sub_6cd450(eax_20, eax_11 + arg2[6], &arg1[6], 0x186a0)
                            
                            if (eax_21 != 0)
                                var_88:4.d = ebx_4
                                int32_t eax_22 = sub_6cd450(eax_21, eax_20, &arg1[7], 0x186a0)
                                int32_t eax_23 = neg.d(eax_22)
                                return sbb.d(eax_23, eax_23, eax_22 != 0) + 1
        else
            var_48 = fconvert.d(sub_74c3d0(mxcsr, x87control, 
                fconvert.d(fconvert.t(
                    _mm_cvtepi32_pd(zx.q(eax_2)) * xmm2_1 / _mm_cvtepi32_pd(zx.q(ebx_2))
                    + xmm3_1))))
            
            if (not(0x41dfffffffc00000 f< var_48) && not(var_48 < -2147483648.0))
                arg1[1] = int.d(var_48)
                goto label_6cbbe5
    else
        long double st0_1
        st0_1, x87control = sub_74c3d0(mxcsr, x87control, 
            fconvert.d(fconvert.t(_mm_cvtepi32_pd(zx.q(eax)) * xmm2_1 / _mm_cvtepi32_pd(zx.q(ebx_2))
                + xmm3_1)))
        var_48 = fconvert.d(st0_1)
        
        if (not(0x41dfffffffc00000 f< var_48) && not(var_48 < -2147483648.0))
            xmm2_1 = 100000.0
            xmm3_1 = 0.5
            *arg1 = int.d(var_48)
            goto label_6cbb70

return 1
