// 函数: sub_423120
// 地址: 0x423120
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t result = timeGetTime()
uint32_t result_1 = result

if (data_13702a0 == 0)
    if (data_131274c == 2)
        int32_t edx_2 = data_1312764
        
        if (edx_2 != 0)
            int32_t ecx_6 = data_13126fc
            data_1312768 = 1
            data_131276c = ecx_6
            data_1312770 = ecx_6 + edx_2 * 0x1c
            result = timeGetTime()
            data_1312774 = result
    
    data_131274c = 0
    goto label_423271

result = data_131274c
data_1312768 = 0

if (result == 0)
    result = data_131d2cc
    
    if (result != 0)
        int32_t ecx_1 = data_1320e58
        
        if (ecx_1 != 0)
            data_1312750 = result
            data_1312754 = ecx_1
            data_131274c = 1
else
    int32_t ecx_4
    int32_t edx_1
    int32_t edi_1
    
    if (result != 1)
        ecx_4 = data_1312760
        edi_1 = data_1312754
        edx_1 = data_1320e58
    label_4231f3:
        
        if (result == 2)
            if (result_1 - data_131275c u>= 0x19)
                data_131275c = result_1
                data_1312764 = ecx_4 - edx_1
                data_1312760 = edx_1
            
            result = data_1312758 - edx_1 + edi_1
            data_13126fc = result
            goto label_423271
        
    label_423271:
        
        if (data_1312768 != 0)
            int32_t esi = result_1 - data_1312774
            int32_t edx_3 = data_131276c
            int32_t ecx_7 = data_1312770
            
            if (edx_3 == ecx_7)
                data_13126fc = ecx_7
                data_1312768 = 0
            else if (esi s< 0)
                data_13126fc = ecx_7
                data_1312768 = 0
            else if (esi s< 0x1324)
                double xmm0_2 = _mm_cvtepi32_pd(zx.q(esi - 0x1324))
                double xmm1_7 = xmm0_2 * xmm0_2 * xmm0_2 * xmm0_2
                    * _mm_cvtepi32_pd(zx.q(edx_3 - ecx_7)) / 576480100000000.0
                    + _mm_cvtepi32_pd(zx.q(ecx_7))
                double xmm0_7
                
                xmm0_7 = xmm1_7 < 0.0 ? -0.5 : 0.5
                
                result = int.d(xmm0_7 + xmm1_7)
                data_13126fc = result
                
                if (result == ecx_7)
                    data_1312768 = 0
            else
                data_13126fc = ecx_7
                data_1312768 = 0
            
            if (data_137027d != 0 || data_1370331 != 0 || data_1370334 != 0 || data_1370108 != 0
                    || data_1370355 != 0 || data_1370358 != 0 || data_1370104 != 0)
                data_1312768 = 0
    else
        if (data_1312750 == data_131d2cc)
            result = data_1312754
        
        if (data_1312750 != data_131d2cc || result != data_1320e58)
            int32_t eax_1 = data_13126fc
            data_131274c = 2
            data_1312758 = eax_1
            uint32_t eax_2 = timeGetTime()
            edi_1 = data_1312754
            edx_1 = data_1320e58
            data_1312764 = edi_1 - edx_1
            ecx_4 = edx_1
            data_131275c = eax_2
            result = data_131274c
            data_1312760 = ecx_4
            goto label_4231f3

return result
