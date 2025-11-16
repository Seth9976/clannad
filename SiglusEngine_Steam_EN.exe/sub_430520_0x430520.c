// 函数: sub_430520
// 地址: 0x430520
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = 0
int32_t edi = *(arg1 + 0x54)

if (edi s> 0)
    int32_t* eax = *(arg1 + 0x50) + 0xc
    
    do
        if (eax[8] == 0)
            int32_t esi_1 = eax[0x59]
            
            if (esi_1 != 0)
                int32_t ecx = *eax
                
                if (ecx s>= 0 && ecx s< eax[0x5a])
                    int32_t ecx_2 = ecx * 6
                    
                    if (*(esi_1 + (ecx_2 << 3) + 0x18) == 1)
                        int32_t ecx_3 = *(esi_1 + (ecx_2 << 3) + 0x1c)
                        
                        if (ecx_3 == 2 || ecx_3 == 3)
                            return 1
        
        edx += 1
        eax = &eax[0x5e]
    while (edx s< edi)

return 0
