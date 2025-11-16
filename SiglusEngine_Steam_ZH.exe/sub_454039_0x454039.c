// 函数: sub_454039
// 地址: 0x454039
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_2 = arg2 * 0x64 + *(arg1 + 0x2c)
int32_t* ebx_2 = arg3 * 0x64 + *(eax_2 + 4)
int32_t eax_5 = *(zx.d(*(ebx_2 + 0x52)) * 0x1c + 0xac1bb4)

if (eax_5 != 0x10 && eax_5 != 0xf && eax_5 != 5 && eax_5 != 0xa)
    return 0x80004005

int32_t edi
int32_t var_24_1 = edi
int32_t* edi_1 = arg4
uint32_t var_8
int32_t* esi_1

if (edi_1 == 0)
    esi_1 = arg5
else
    int32_t eax_7 = (*(*edi_1 + 0x10))(edi_1)
    esi_1 = arg5
    
    if (*esi_1 + 1 u<= eax_7)
        var_8 = *((*(*edi_1 + 0xc))(edi_1) + (*esi_1 << 2))

*esi_1 += 1
int32_t eax_12

if (edi_1 != 0)
    eax_12 = (*(*edi_1 + 0x10))(edi_1)

if (edi_1 == 0 || eax_12 u< *esi_1 || var_8 u< 2)
    arg5 = 0x80004005
else
    char* eax_13 = sub_745f3f(var_8)
    
    if (eax_13 != 0)
        if (var_8 != 0)
            int32_t eax_15 = var_8 & 3
            char temp1_1 = eax_15.b
            eax_15.b = neg.b(eax_15.b)
            int32_t eax_18 = neg.d(sbb.d(eax_15, eax_15, temp1_1 != 0)) + (var_8 u>> 2)
            int32_t eax_20 = (*(*edi_1 + 0x10))(edi_1)
            
            if (*esi_1 + eax_18 u<= eax_20)
                int32_t esi_3
                int32_t edi_3
                edi_3, esi_3 = __builtin_memcpy(eax_13, (*(*edi_1 + 0xc))(edi_1) + (*esi_1 << 2), 
                    var_8 u>> 2 << 2)
                __builtin_memcpy(edi_3, esi_3, var_8 & 3)
                esi_1 = arg5
                edi_1 = arg4
            
            *esi_1 += eax_18
        
        if ((*(*edi_1 + 0x10))(edi_1) u< *esi_1)
            arg5 = 0x80004005
        else
            arg5 = nullptr
            
            if (eax_13[var_8 - 1] != 0)
                arg5 = 0x80004005
            else
                int32_t eax_28 = sub_4538a9(arg1, eax_13, 2, 0)
                
                if (eax_28 == 0)
                    arg5 = 0x80004005
                else
                    void* ecx_16 = *(*(arg1 + 0xb0) + (*(eax_28 + 0x14) << 2))
                    int32_t edx_2
                    
                    if (*(ecx_16 + 0x40) != 0)
                        edx_2 = *(*(arg1 + 0x38) + 0x10)
                    else
                        edx_2 = *(arg1 + 0x20)
                    
                    int32_t edx_4 = *(*(ecx_16 + 0x2c) + *(eax_28 + 0x18) + edx_2)
                    uint32_t ecx_19 = zx.d(*(ebx_2 + 0x52))
                    ebx_2[0xc] &= 0xfffffffd
                    int32_t ecx_21 = *(ecx_19 * 0x1c + 0xac1bb4)
                    
                    if (ecx_21 == 5)
                        if (edx_4 != 5 && edx_4 != 6 && edx_4 != 7 && edx_4 != 8 && edx_4 != 9)
                            arg5 = 0x80004005
                        
                        *ebx_2 = 1
                    label_45427d:
                        
                        if (arg5 s>= 0)
                            goto label_45428a
                    else
                        if (ecx_21 == 0xa)
                            if (edx_4 != 0xa && edx_4 != 0xb && edx_4 != 0xc && edx_4 != 0xd
                                    && edx_4 != 0xe)
                                arg5 = 0x80004005
                            
                            *ebx_2 = 0
                            goto label_45427d
                        
                        if (ecx_21 s<= 0xe || ecx_21 s> 0x10)
                        label_45428a:
                            __builtin_memcpy(&ebx_2[2], eax_28, 0x28)
                            ebx_2[0xa] = 0
                            ebx_2[0xb] = 0
                            int32_t* eax_30 = sub_745f3f(0x24)
                            void* esi_6
                            
                            if (eax_30 == 0)
                                esi_6 = nullptr
                            else
                                esi_6 = &eax_30[1]
                                *eax_30 = 1
                                sub_61cdd0(esi_6, 0x20, 1, sub_44325c)
                            
                            ebx_2[0xd] = esi_6
                            
                            if (esi_6 == 0)
                                arg5 = 0x8007000e
                            else
                                ebx_2[0x14].w = 1
                                *(ebx_2 + 0x4e) = 1
                                sub_4438fa(arg1, arg2, arg3, 0, eax_28, 0)
                                arg5 = nullptr
                        else if (ecx_21 == edx_4)
                            __builtin_memcpy(&ebx_2[2], eax_28, 0x28)
                            ebx_2[0x15].w = 0xffff
                            ebx_2[0xa] = 0
                            ebx_2[0xb] = 0
                            *ebx_2 = 0
                            *(ebx_2 + 0x52) = 0xb3
                            ebx_2[0x16] = 0xe000000
                            *(ebx_2 + 0x56) = 1
                            int32_t ecx_22 = *(eax_2 + 0xc)
                            *(eax_2 + 0x34) += 1
                            int32_t ecx_24 = (ecx_22 & 3) + (ecx_22 u>> 2 << 2)
                            *(eax_2 + 0xc) = ecx_24
                            ebx_2[0x12] = ecx_24
                            *(eax_2 + 0xc) += 4
                        else
                            arg5 = 0x80004005
    else
        arg5 = 0x8007000e
    
    if (eax_13 != 0)
        j__free(eax_13)

return arg5
