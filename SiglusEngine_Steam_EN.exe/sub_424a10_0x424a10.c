// 函数: sub_424a10
// 地址: 0x424a10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg3
void* var_24 = eax

if (*eax != 0 && arg2[0x13] != 0)
    arg3.b = arg2[0x12].b
    
    if (arg3.b != 0)
        int32_t ecx = arg2[0x1e]
        double* ecx_1
        int32_t edx
        void* ebx_1
        int32_t edi_1
        
        if (ecx != 0xffffffff || arg2[0x1f] != ecx || arg2[0x20] != ecx || arg2[0x21] != ecx)
            edi_1 = data_702ff4
            void* eax_1 = arg2[0x20]
            ebx_1 = data_702ffc
            
            if (ecx s> edi_1)
                edi_1 = ecx
            
            ecx_1 = data_702ff8
            edx = data_703000
            
            if (eax_1 s< ebx_1)
                ebx_1 = eax_1
            
            int32_t eax_2 = arg2[0x21]
            
            if (arg2[0x1f] s> ecx_1)
                ecx_1 = arg2[0x1f]
            
            if (eax_2 s< edx)
                edx = eax_2
            
            eax = var_24
        else
            edi_1 = data_702ff4
            ebx_1 = data_702ffc
            ecx_1 = data_702ff8
            edx = data_703000
        
        if (edi_1 s<= ebx_1 && ecx_1 s<= edx)
            int32_t ecx_2 = arg2[0x14]
            int32_t edx_1 = *arg2
            int32_t ecx_4 = arg2[1] + arg2[0x14]
            int32_t ecx_5 = arg2[0x15]
            int32_t ecx_7 = arg2[2] + arg2[0x15]
            int32_t ecx_8 = *(eax + 0x14)
            
            if (ecx_8 == 0 || ecx_8 == 1)
                if (edx_1 == 0)
                    int32_t ecx_13 = *(eax + 0x10)
                    int32_t* edx_5 = *(eax + 0xc)
                    uint32_t var_38_2 = zx.d(arg2[0x22].b)
                    return sub_429860(edx_5 - 1, edx_5, *(var_24 + 4), ecx_13, nullptr, 0, 
                        edx_5 - 1, ecx_13 - 1, ecx_2, ecx_5, ecx_13, arg4, arg5, arg6, ecx_4, 
                        ecx_7, edi_1, ecx_1, ebx_1, edx, arg2[0x18], arg2[0x16], (arg2[0x17]).b, 
                        arg2[4], zx.d(arg2[5].b), arg2[6], arg2[7], arg2[8], arg2[9], 
                        (arg2[0xa]).b, (arg2[0xb]).b, arg2[0xc].b, *(arg2 + 0x31), *(arg2 + 0x32), 
                        *(arg2 + 0x33), zx.d(arg2[0xd].b), zx.d(*(arg2 + 0x35)), arg2[0xe], 
                        arg2[0xf], (arg2[0x10]).b, arg2[0x11], arg3, arg2[3], nullptr, nullptr, 0, 
                        0, 0)
            else if (ecx_8 == 2)
                eax = sub_4d25b0(*(eax + 4), edx_1)
                
                if (eax != 0)
                    void* edx_2 = eax
                    void* ecx_11 = eax + 0x74
                    
                    if (*(edx_2 + 2) == 1)
                        eax = zx.d(*ecx_11)
                        
                        if (*(edx_2 + 4) == eax)
                            eax = zx.d(*(ecx_11 + 2))
                            
                            if (*(edx_2 + 8) == eax)
                                int32_t* eax_3 = *(edx_2 + 0xc)
                                eax = zx.d(*(ecx_11 + 6))
                                
                                if (*(edx_2 + 0xc) == eax)
                                    int32_t eax_4 = *(edx_2 + 0x10)
                                    eax = zx.d(*(ecx_11 + 8))
                                    
                                    if (*(edx_2 + 0x10) == eax)
                                        uint32_t var_38_1 = zx.d(arg2[0x22].b)
                                        int32_t eax_21 = sub_429860(eax_3 - 1, eax_3, 
                                            ecx_11 + 0x5c, eax_4, nullptr, 0, eax_3 - 1, eax_4 - 1, 
                                            *(edx_2 + 0x14) - *(edx_2 + 4) + ecx_2, 
                                            *(edx_2 + 0x18) - *(edx_2 + 8) + ecx_5, ecx_11, arg4, 
                                            arg5, arg6, ecx_4, ecx_7, edi_1, ecx_1, ebx_1, edx, 
                                            arg2[0x18], arg2[0x16], (arg2[0x17]).b, arg2[4], 
                                            zx.d(arg2[5].b), arg2[6], arg2[7], arg2[8], arg2[9], 
                                            (arg2[0xa]).b, (arg2[0xb]).b, arg2[0xc].b, 
                                            *(arg2 + 0x31), *(arg2 + 0x32), *(arg2 + 0x33), 
                                            zx.d(arg2[0xd].b), zx.d(*(arg2 + 0x35)), arg2[0xe], 
                                            arg2[0xf], (arg2[0x10]).b, arg2[0x11], arg3, arg2[3], 
                                            nullptr, nullptr, 0, 0, 0)
                                        return eax_21

return eax
