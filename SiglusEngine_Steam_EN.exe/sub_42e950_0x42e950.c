// 函数: sub_42e950
// 地址: 0x42e950
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t ebx = 0
void* eax = &data_13747c8
int32_t i_1 = 0x200
int32_t i

do
    *eax = 0
    eax += 0x74
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t i_2 = i_1

if (*(arg1 + 0x54) s> i_1)
    int32_t* ecx = *(arg1 + 0x50) + 0x174
    int32_t* var_c_1 = ecx
    
    do
        int32_t j = 0
        int32_t j_1 = 0
        
        if (*ecx s> 0)
            int32_t* esi_2 = ecx[-1] + 0x2c
            
            do
                int32_t k = 0
                
                if (*esi_2 s> 0)
                    int32_t* ecx_2 = esi_2[-1] + 4
                    
                    do
                        int32_t eax_2 = *ecx_2
                        
                        if (eax_2 != 0xffffffff && eax_2 u<= 0x1ff
                                && *(eax_2 * 0x74 + &data_13747c8) == 0)
                            ebx += 1
                            *(eax_2 * 0x74 + &data_13747c8) = 1
                            result += *(eax_2 * 0x74 + 0x13747cc)
                        
                        k += 1
                        ecx_2 = &ecx_2[0x2e]
                    while (k s< *esi_2)
                    
                    j = j_1
                
                ecx = var_c_1
                j += 1
                esi_2 = &esi_2[0xc]
                j_1 = j
            while (j s< *ecx)
            
            i_1 = i_2
        
        i_1 += 1
        ecx = &ecx[0x5e]
        i_2 = i_1
        var_c_1 = ecx
    while (i_1 s< *(arg1 + 0x54))

*(arg1 + 0xc) = result
*(arg1 + 8) = ebx
return result
