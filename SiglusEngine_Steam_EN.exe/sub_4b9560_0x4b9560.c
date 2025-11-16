// 函数: sub_4b9560
// 地址: 0x4b9560
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg2[0x14]
int32_t ebx_1 = arg2[1] + eax
int32_t eax_1 = arg2[0x15]
int32_t eax_3 = arg2[2] + arg2[0x15]
uint32_t eax_4 = *(arg1 + 0x14)

if (eax_4 == 0 || eax_4 == 1)
    if (*arg2 == 0)
        uint32_t var_28_2 = zx.d(arg2[0x22].b)
        int32_t ecx_4 = *(arg1 + 0x10)
        int32_t* edx_4 = *(arg1 + 0xc)
        return sub_429860(edx_4 - 1, edx_4, *(arg1 + 4), ecx_4, nullptr, 0, edx_4 - 1, ecx_4 - 1, 
            eax, eax_1, ecx_4, data_20740d8, data_20740dc, data_20740e0, ebx_1, eax_3, arg2[0x1e], 
            arg2[0x1f], arg2[0x20], arg2[0x21], arg2[0x18], arg2[0x16], (arg2[0x17]).b, arg2[4], 
            zx.d(arg2[5].b), arg2[6], arg2[7], arg2[8], arg2[9], (arg2[0xa]).b, (arg2[0xb]).b, 
            arg2[0xc].b, *(arg2 + 0x31), *(arg2 + 0x32), *(arg2 + 0x33), zx.d(arg2[0xd].b), 
            zx.d(*(arg2 + 0x35)), arg2[0xe], arg2[0xf], (arg2[0x10]).b, arg2[0x11], 
            zx.d(arg2[0x12].b), arg2[3], nullptr, nullptr, 0, 0, 0)
else if (eax_4 == 2)
    eax_4 = *arg2
    int32_t* ecx = *(arg1 + 4)
    
    if (eax_4 s>= 0 && eax_4 s< *ecx)
        int32_t edx = ecx[eax_4 * 2 + 1]
        
        if (edx != 0 && ecx[eax_4 * 2 + 2] != 0)
            void* ecx_1 = ecx + edx
            
            if (ecx != neg.d(edx) && *(ecx_1 + 2) == 1)
                eax_4 = zx.d(*(ecx_1 + 0x74))
                
                if (*(ecx_1 + 4) == eax_4)
                    eax_4 = zx.d(*(ecx_1 + 0x76))
                    
                    if (*(ecx_1 + 8) == eax_4)
                        eax_4 = zx.d(*(ecx_1 + 0x7a))
                        int32_t* edi_1 = *(ecx_1 + 0xc)
                        
                        if (edi_1 == eax_4)
                            int32_t eax_5 = *(ecx_1 + 0x10)
                            eax_4 = zx.d(*(ecx_1 + 0x7c))
                            
                            if (*(ecx_1 + 0x10) == eax_4)
                                uint32_t var_28_1 = zx.d(arg2[0x22].b)
                                int32_t eax_23 = sub_429860(edi_1 - 1, edi_1, ecx_1 + 0xd0, eax_5, 
                                    nullptr, 0, edi_1 - 1, eax_5 - 1, 
                                    *(ecx_1 + 0x14) - *(ecx_1 + 4) + eax, 
                                    *(ecx_1 + 0x18) - *(ecx_1 + 8) + eax_1, ecx_1 + 0x74, 
                                    data_20740d8, data_20740dc, data_20740e0, ebx_1, eax_3, 
                                    arg2[0x1e], arg2[0x1f], arg2[0x20], arg2[0x21], arg2[0x18], 
                                    arg2[0x16], (arg2[0x17]).b, arg2[4], zx.d(arg2[5].b), arg2[6], 
                                    arg2[7], arg2[8], arg2[9], (arg2[0xa]).b, (arg2[0xb]).b, 
                                    arg2[0xc].b, *(arg2 + 0x31), *(arg2 + 0x32), *(arg2 + 0x33), 
                                    zx.d(arg2[0xd].b), zx.d(*(arg2 + 0x35)), arg2[0xe], arg2[0xf], 
                                    (arg2[0x10]).b, arg2[0x11], zx.d(arg2[0x12].b), arg2[3], 
                                    nullptr, nullptr, 0, 0, 0)
                                return eax_23

return eax_4
