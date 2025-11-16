// 函数: sub_4243d0
// 地址: 0x4243d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg5

if (*result != 0)
    int32_t esi_1 = result[5]
    
    if (esi_1 == 0 || esi_1 == 1)
        int32_t __saved_ebx = 0xff
        int32_t __saved_edi = 0xffffffff
        int32_t var_1c_2 = 0xffffffff
        int32_t var_20_2 = 0xffffffff
        return sub_584e80(result, arg2, arg3, arg4, result[1], result[3], result[4], 0, 0, 0, 0, 0, 
            0xff)
    
    if (esi_1 == 2)
        int32_t* ecx = result[1]
        result = arg6
        
        if (result s>= 0 && result s< *ecx)
            void* edx = ecx[result * 2 + 1]
            
            if (edx != 0 && ecx[result * 2 + 2] != 0)
                void* ebx_1 = edx + ecx
                
                if (ebx_1 != 0)
                    result = zx.d(*(ebx_1 + 2))
                    arg5 = result
                    
                    if (result s> 0)
                        void* ebx_3 = ebx_1 + 0x74
                        int32_t* i
                        
                        do
                            int32_t var_1c_1 = 0xff
                            int32_t var_20_1 = 0xffffffff
                            int32_t var_24_1 = 0xffffffff
                            int16_t* ecx_1 = ebx_3
                            int32_t var_28_1 = 0xffffffff
                            int32_t esi_2 = zx.d(ecx_1[4])
                            uint32_t edi_1 = zx.d(ecx_1[3])
                            uint32_t eax_1 = zx.d(*ecx_1)
                            result = sub_584e80(eax_1, arg2, arg3, arg4, ebx_3 + 0x5c, edi_1, 
                                esi_2, 0, 0, 0, eax_1, zx.d(ecx_1[1]), 0xff)
                            i = arg5
                            arg5 -= 1
                            ebx_3 = ebx_3 + 0x5c + ((esi_2 * edi_1) << 2)
                        while (i != 1)

return result
