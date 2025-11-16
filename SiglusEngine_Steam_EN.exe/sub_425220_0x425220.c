// 函数: sub_425220
// 地址: 0x425220
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg5

if (*result != 0 && result[5] == 2)
    int32_t* edx = result[1]
    result = arg6
    
    if (result s>= 0 && result s< *edx)
        void* ecx = edx[result * 2 + 1]
        
        if (ecx != 0 && edx[result * 2 + 2] != 0)
            void* esi_1 = ecx + edx
            
            if (esi_1 != 0)
                void* ecx_1 = esi_1
                void* esi_2 = esi_1 + 0x74
                void* var_20_1 = ecx_1
                result = zx.d(*(ecx_1 + 2))
                int32_t* var_c_1 = result
                
                if (result s> 0)
                    int32_t* i
                    
                    do
                        int32_t ebx_1 = 0
                        uint32_t edx_1 = zx.d(*esi_2)
                        int32_t edi_1 = zx.d(*(esi_2 + 8))
                        uint32_t edx_2 = zx.d(*(esi_2 + 2))
                        uint32_t edx_3 = zx.d(*(esi_2 + 6))
                        result = arg7
                        uint32_t var_8_1 = edx_3
                        
                        if (result s> 0)
                            arg5 = result
                            int32_t* j
                            
                            do
                                int32_t var_30_1 = 0xff
                                int32_t var_34_1 = 0xffffffff
                                int32_t var_38_1 = 0xffffffff
                                int32_t var_3c_1 = 0xffffffff
                                int32_t eax_2 = edx_1 + ebx_1
                                result = sub_584e80(eax_2, arg2, arg3, arg4, esi_2 + 0x5c, edx_3, 
                                    edi_1, *(ecx_1 + 0x14), *(ecx_1 + 0x18), 0, eax_2, edx_2, 0xff)
                                ecx_1 = var_20_1
                                edx_3 = var_8_1
                                ebx_1 += *(ecx_1 + 0x1c)
                                j = arg5
                                arg5 -= 1
                            while (j != 1)
                        
                        i = var_c_1
                        var_c_1 -= 1
                        esi_2 = esi_2 + 0x5c + ((edi_1 * edx_3) << 2)
                    while (i != 1)

return result
