// 函数: sub_4cf2b0
// 地址: 0x4cf2b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t result = sub_4d0f10(arg3, "PDT10")

if (result == 0)
    uint32_t result_1 = *(arg3 + 0x10)
    int32_t edi_1 = *(arg3 + 0xc)
    result = (result_1 + 4) * edi_1
    
    if (result != 0)
        BOOL ecx = *arg2
        BOOL var_1c_1 = ecx
        void* var_c
        BOOL var_8
        BOOL ebx_1
        
        if (ecx != 0)
            ebx_1 = *arg4
        else
            var_c = ecx
            var_8 = ecx
            sub_4d6960(result, &var_8, &var_c, result, "PDT_UNPACK10_MASK_DATA")
            ebx_1 = var_8
            var_1c_1 = var_c
        
        *arg7 = 0
        
        if (*(arg3 + 0x1c) == 0)
            var_c = nullptr
            var_8 = 0
            sub_4cf1e0(&var_8, &var_c, arg3, &var_8, arg5, arg6, arg7, 0)
            
            if (var_c != 0)
                int32_t i_2 = result_1 * edi_1
                BOOL var_14_2 = ebx_1
                
                if (i_2 s> 0)
                    void* esi_6 = var_8 + 2
                    int32_t i
                    
                    do
                        uint32_t ecx_5 = zx.d(*(esi_6 + 1))
                        esi_6 += 4
                        char ebx_6 = ((*(data_1cd432c + (ecx_5 << 2))
                            + *(data_1cd4334 + (zx.d(*(esi_6 - 5)) << 2))
                            + *(data_1cd4330 + (zx.d(*(esi_6 - 4)) << 2))) s>> 8).b
                        *var_14_2 = ebx_6
                        var_14_2 += 1
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                sub_4d6c40(&var_c, &var_8)
        else
            *arg7 = 1
            void* eax_4 = *(arg3 + 0x1c) + arg3
            var_c = *(arg3 + 8) + arg3
            void* esi_1 = eax_4
            char* edi_2 = ebx_1
            int16_t edx_1 = 0
            
            while (esi_1 s< var_c)
                edx_1:1.b = edx_1:1.b
                
                if (edx_1:1.b != 0)
                    if ((edx_1.b & 0x80) == 0)
                        int32_t eax_7
                        eax_7.w = *esi_1
                        uint32_t ecx_3 = zx.d(eax_7.b)
                        eax_7.b = eax_7:1.b
                        eax_7:1.b = 0
                        int32_t i_1 = ecx_3 + 2
                        char* esi_4 = edi_2 - (eax_7 + 1)
                        
                        do
                            *edi_2 = *esi_4
                            edi_2 = &edi_2[1]
                            esi_4 = &esi_4[1]
                            i_1 -= 1
                        while (i_1 != 0)
                        
                        esi_1 += 2
                    else
                        *edi_2 = *esi_1
                        edi_2 = &edi_2[1]
                        esi_1 += 1
                    
                    edx_1.b <<= 1
                    edx_1:1.b -= 1
                else
                    edx_1.b = *esi_1
                    esi_1 += 1
                    edx_1:1.b = 8
        
        int32_t* eax_15 = arg2
        
        if (*eax_15 == 0)
            *eax_15 = var_1c_1
            *arg4 = ebx_1
        
        *arg5 = edi_1
        result = result_1
        *arg6 = result

return result
