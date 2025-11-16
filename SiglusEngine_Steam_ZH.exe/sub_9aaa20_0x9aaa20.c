// 函数: sub_9aaa20
// 地址: 0x9aaa20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
float edi = arg2
void* esi = *(edi i+ 0x14)
int32_t eax = sub_742fa0(arg1 + 4, *(esi + 0xc))

if (eax s> 0)
    int32_t edx_1 = 0
    int32_t eax_2 = (1 << (*(esi + 0xc)).b) - 1
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(eax))
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_2))
    uint32_t i = *(esi + 0x14)
    float xmm1_4 = xmm1_2 / xmm0_2 * _mm_cvtepi32_ps(zx.o(*(esi + 0x10)))
    
    for (; i != 0; i u>>= 1)
        edx_1 += 1
    
    int32_t eax_3 = sub_742fa0(arg1 + 4, edx_1)
    
    if (eax_3 != 0xffffffff && eax_3 s< *(esi + 0x14))
        arg2 = 0f
        int32_t* ebx_1 =
            *(*(*(*(arg1 + 0x40) + 4) + 0x1c) + 0xb20) + *(esi + (eax_3 << 2) + 0x18) * 0x38
        int32_t result = sub_99cca0(arg1, ((*(edi i+ 4) + *ebx_1) << 2) + 4)
        
        if (sub_99e110(arg1 + 4, result, ebx_1, arg1 + 4, *(edi i+ 4)) != 0xffffffff)
            int32_t edx_8 = *(edi i+ 4)
            int32_t eax_12 = 0
            
            if (edx_8 s> 0)
                do
                    int32_t i_1 = 0
                    
                    if (eax_12 s< edx_8)
                        while (i_1 s< *ebx_1)
                            i_1 += 1
                            *(result + (eax_12 << 2)) = *(result + (eax_12 << 2)) + arg2
                            eax_12 += 1
                            
                            if (eax_12 s>= *(edi i+ 4))
                                break
                    
                    edx_8 = *(edi i+ 4)
                    arg2 = *(result + (eax_12 << 2) - 4)
                while (eax_12 s< edx_8)
            
            *(result + (*(edi i+ 4) << 2)) = xmm1_4
            return result

return 0
