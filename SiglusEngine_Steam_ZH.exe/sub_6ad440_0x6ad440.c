// 函数: sub_6ad440
// 地址: 0x6ad440
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg4
int16_t* esi = arg1
int16_t* edx = &esi[-1]

if (edx u>= ecx)
    int32_t ebx_1 = arg5
    
    if (edx u< ebx_1 && esi u>= ecx && esi u< ebx_1)
        int32_t eax_2 = (sx.d(*esi) - sx.d(*edx)) s>> 1
        arg5 = eax_2
        
        if (arg2 s> 0)
            int32_t eax_3 = arg2
            int32_t edi_2 = eax_3
            
            while (edx u>= ecx)
                if (edx u>= ebx_1)
                    break
                
                double xmm0_2 = _mm_cvtepi32_pd(zx.q(eax_3))
                int32_t ecx_1 =
                    int.d(_mm_cvtepi32_pd(zx.q(arg5)) / xmm0_2 * _mm_cvtepi32_pd(zx.q(edi_2)))
                
                if (ecx_1 == 0)
                    break
                
                int32_t ecx_2 = ecx_1 + sx.d(*edx)
                
                if (ecx_2 s< 0xffff8008)
                    ecx_2 = 0xffff8008
                else if (ecx_2 s> 0x7ff8)
                    ecx_2 = 0x7ff8
                
                eax_3 = arg2
                edi_2 -= 1
                *edx = ecx_2.w
                edx -= 2
                ecx = arg4
                
                if (edi_2 s<= 0)
                    break
            
            esi = arg1
            eax_2 = arg5
        
        int32_t edx_1 = arg3
        
        if (edx_1 s> 0)
            int32_t ecx_3 = edx_1
            
            while (esi u>= arg4)
                if (esi u>= ebx_1)
                    break
                
                double xmm0_6 = _mm_cvtepi32_pd(zx.q(edx_1))
                int32_t edx_2 =
                    int.d(_mm_cvtepi32_pd(zx.q(eax_2)) / xmm0_6 * _mm_cvtepi32_pd(zx.q(ecx_3)))
                
                if (edx_2 == 0)
                    break
                
                int32_t eax_6 = sx.d(*esi) - edx_2
                
                if (eax_6 s< 0xffff8008)
                    eax_6 = 0xffff8008
                else if (eax_6 s> 0x7ff8)
                    eax_6 = 0x7ff8
                
                edx_1 = arg3
                ecx_3 -= 1
                *esi = eax_6.w
                esi = &esi[1]
                eax_2 = arg5
                
                if (ecx_3 s<= 0)
                    break
        
        return arg5

return 0
