// 函数: sub_4cdfa0
// 地址: 0x4cdfa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int16_t* edi = arg3
int32_t ecx = arg5
int16_t* esi = &edi[-1]

if (esi u< ecx || esi u>= arg6 || edi u< ecx || edi u>= arg6)
    return 0

int32_t eax_1 = arg2
int32_t result_1 = (sx.d(*edi) - sx.d(*esi)) s>> 1
int32_t result = result_1

if (eax_1 s> 0)
    int32_t edx_2 = eax_1
    
    while (esi u>= ecx)
        if (esi u>= arg6)
            break
        
        double xmm0_2 = _mm_cvtepi32_pd(zx.q(eax_1))
        int32_t ecx_1 = int.d(_mm_cvtepi32_pd(zx.q(result)) / xmm0_2 * _mm_cvtepi32_pd(zx.q(edx_2)))
        
        if (ecx_1 == 0)
            break
        
        int32_t ecx_2 = ecx_1 + sx.d(*esi)
        
        if (ecx_2 s< 0xffff8008)
            ecx_2 = 0xffff8008
        else if (ecx_2 s> 0x7ff8)
            ecx_2 = 0x7ff8
        
        eax_1 = arg2
        edx_2 -= 1
        *esi = ecx_2.w
        esi -= 2
        ecx = arg5
        
        if (edx_2 s<= 0)
            break
    
    result_1 = result

int32_t eax_3 = arg4

if (eax_3 s> 0)
    int32_t ecx_3 = eax_3
    
    while (edi u>= arg5)
        if (edi u>= arg6)
            break
        
        double xmm0_6 = _mm_cvtepi32_pd(zx.q(eax_3))
        int32_t edx_3 =
            int.d(_mm_cvtepi32_pd(zx.q(result_1)) / xmm0_6 * _mm_cvtepi32_pd(zx.q(ecx_3)))
        
        if (edx_3 == 0)
            break
        
        int32_t eax_5 = sx.d(*edi) - edx_3
        
        if (eax_5 s< 0xffff8008)
            eax_5 = 0xffff8008
        else if (eax_5 s> 0x7ff8)
            eax_5 = 0x7ff8
        
        result_1 = result
        ecx_3 -= 1
        *edi = eax_5.w
        edi = &edi[1]
        eax_3 = arg4
        
        if (ecx_3 s<= 0)
            break

return result
