// 函数: sub_4242c0
// 地址: 0x4242c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg3
void* var_8 = esi
uint32_t result = *(esi + 0x14)

if (result == 0 || result == 1)
    return sub_42a0c0(result, *(esi + 0xc), *(esi + 4), *(esi + 0x10), arg2, arg4, arg5, arg6, 
        arg7, arg8)

if (result == 2)
    int32_t* ebx_1 = *(esi + 4)
    int32_t i_1 = *ebx_1
    void* ebx_2 = &ebx_1[1]
    int32_t i_2 = i_1
    
    if (i_1 s> 0)
        int32_t i
        
        do
            result = *ebx_2
            int32_t ecx_1 = *(ebx_2 + 4)
            ebx_2 += 8
            
            if (result != 0 && ecx_1 s> 0)
                void* esi_2 = *(esi + 4) + result
                result = zx.d(*(esi_2 + 2))
                void* esi_3 = esi_2 + 0x74
                uint32_t result_1 = result
                
                if (result s> 0)
                    uint32_t ebx_3 = result
                    uint32_t j
                    
                    do
                        uint32_t eax = zx.d(*(esi_3 + 8))
                        sub_42a0c0(eax, zx.d(*(esi_3 + 6)), esi_3 + 0x5c, eax, arg2, arg4, arg5, 
                            arg6, arg7, arg8)
                        result = zx.d(*(esi_3 + 6))
                        esi_3 = esi_3 + 0x5c + ((zx.d(*(esi_3 + 8)) * result) << 2)
                        j = ebx_3
                        ebx_3 -= 1
                    while (j != 1)
                    i_1 = i_2
                
                esi = var_8
            
            i = i_1
            i_1 -= 1
            i_2 = i_1
        while (i != 1)
else if (result == 3)
    int16_t* ecx_5 = *(esi + 4)
    return sub_42a0c0(result, zx.d(*ecx_5), &ecx_5[1], 1, arg2, arg4, arg5, arg6, arg7, arg8)

return result
