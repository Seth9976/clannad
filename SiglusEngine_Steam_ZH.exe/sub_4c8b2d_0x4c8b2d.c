// 函数: sub_4c8b2d
// 地址: 0x4c8b2d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t edi
int32_t var_14 = edi
int32_t* eax = *(arg1 + 0x100)
int32_t esi_1 = *eax & 0xfffff

if (esi_1 == eax[3] && sub_49e81b(eax) == 0)
    int32_t eax_2 = sub_49ea13(*(arg1 + 0x100))
    int32_t eax_3
    
    if (eax_2 != 0)
        eax_3 = sub_49e8a9(*(arg1 + 0x100))
    
    if ((eax_2 == 0 || eax_3 != 0) && esi_1 u<= 4 && esi_1 != 0)
        int32_t var_8_1 = 0
        
        if (esi_1 u> 0)
            do
                int32_t eax_5 = esi_1 - var_8_1
                int32_t i = 0
                
                if (eax_5 != 1)
                    do
                        int32_t ecx_3 = *(arg1 + 0x14)
                        int32_t* eax_9 = *(*(arg1 + 0x100) + 0x10) + (i << 2)
                        
                        if (*(*(ecx_3 + (*eax_9 << 2)) + 0x10)
                                u> *(*(ecx_3 + (eax_9[1] << 2)) + 0x10))
                            sub_4c8ac2(*(arg1 + 0x100), i)
                        
                        i += 1
                    while (i u< eax_5 - 1)
                
                var_8_1 += 1
            while (var_8_1 u< esi_1)
        
        return 0

return 1
