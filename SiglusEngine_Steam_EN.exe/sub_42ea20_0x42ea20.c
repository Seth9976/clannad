// 函数: sub_42ea20
// 地址: 0x42ea20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg1
int32_t i = 0
void* var_c = edx
int32_t i_1 = 0
int32_t* result = *(edx + 0x50)

if (*(edx + 0x54) s> 0)
    int32_t* ebx_1 = &result[0x5d]
    
    do
        int32_t j = 0
        
        if (*ebx_1 s> 0)
            int32_t* esi_2 = ebx_1[-1] + 0x2c
            
            do
                result = esi_2[-1]
                int32_t k = 0
                
                if (*esi_2 s> 0)
                    result = &result[1]
                    
                    do
                        if (result[1].b != 0)
                            int32_t ecx_1 = *result
                            
                            if (ecx_1 != 0xffffffff && ecx_1 u<= 0x1ff)
                                *(ecx_1 * 0x74 + &data_13747ac) += 1
                        
                        k += 1
                        result = &result[0x2e]
                    while (k s< *esi_2)
                
                j += 1
                esi_2 = &esi_2[0xc]
            while (j s< *ebx_1)
            
            i = i_1
            edx = var_c
        
        i += 1
        ebx_1 = &ebx_1[0x5e]
        i_1 = i
    while (i s< *(edx + 0x54))

return result
