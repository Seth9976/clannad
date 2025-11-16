// 函数: sub_4bb169
// 地址: 0x4bb169
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t edi
int32_t var_c = edi

if (*(arg1 + 0x4c) u> 0)
    do
        int32_t eax_1 = *(arg1 + 0x230)
        int32_t* edx_1 = *(eax_1 + (i << 2))
        
        if (edx_1 != 0)
            int32_t eax_3 = **(eax_1 + (i << 2))
            
            if ((eax_3 & 0xfff00000) == 0x60500000 || (*edx_1 & 0xfff00000) == 0x60000000)
                void* eax_9 = *(*(arg1 + 0x14) + (*(edx_1[2] + ((eax_3 & 0xfffff) << 2)) << 2))
                
                if (*(eax_9 + 4) == *(arg1 + 0x88))
                    int32_t result =
                        sub_4bad8c(arg1, *(arg1 + 0x22c), *(arg1 + 0x220), *(eax_9 + 0xc))
                    
                    if (result s< 0)
                        return result
        
        i += 1
    while (i u< *(arg1 + 0x4c))

return 0
