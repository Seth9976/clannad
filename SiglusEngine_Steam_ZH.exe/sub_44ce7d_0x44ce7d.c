// 函数: sub_44ce7d
// 地址: 0x44ce7d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
void* eax_2 = arg2 * 0x64 + *(arg1 + 0x2c)
int32_t* ebx_2 = arg3 * 0x64 + *(eax_2 + 4)
int32_t eax_5 = *(zx.d(*(ebx_2 + 0x52)) * 0x1c + 0xac1bb4)

if (eax_5 == 0x10 || eax_5 == 0xf)
    int32_t* eax_6 = arg4
    int32_t edi
    int32_t var_20_1 = edi
    int32_t* edi_1
    
    if (eax_6 == 0)
        edi_1 = arg5
    else
        int32_t eax_7 = (*(*eax_6 + 0x10))(eax_6)
        edi_1 = arg5
        eax_6 = arg4
        
        if (*edi_1 + 1 u<= eax_7)
            arg2 = *((*(*eax_6 + 0xc))(eax_6) + (*edi_1 << 2))
            eax_6 = arg4
    
    *edi_1 += 1
    
    if (eax_6 == 0)
        result = 0x80004005
    else if ((*(*eax_6 + 0x10))(eax_6) u>= *edi_1)
        int32_t* eax_12 = *(arg1 + 0xb0) + (ebx_2[7] << 2)
        void* ecx_7 = *eax_12
        int32_t eax_14
        
        if (*(ecx_7 + 0x40) != 0)
            void* eax_15 = *eax_12
            eax_14 = *(*(*(eax_15 + 0x40) + 8)
                + (*(*(eax_15 + 0x30) + ebx_2[9] + *(*(arg1 + 0x38) + 0x10)) << 2))
        else
            eax_14 = *(*(ecx_7 + 0x30) + ebx_2[9] + *(arg1 + 0x20))
        
        int32_t* edi_2 = *(arg1 + 0x18) + eax_14 * 0x18
        int32_t eax_18
        eax_18.w = *(arg1 + 0x30)
        
        if (*(arg1 + 0x34) u<= zx.d(eax_18.w))
            result = 0x80004005
        else
            edi_2[4].w = eax_18.w
            *(arg1 + 0x30) += 1
            int32_t result_1 = sub_44cc21(zx.d(edi_2[4].w) * 0x64 + *(arg1 + 0x2c), 1)
            result = result_1
            
            if (result_1 s>= 0)
                int32_t ecx_18 = *(zx.d(*(ebx_2 + 0x52)) * 0x1c + 0xac1bb4)
                int32_t eax_22 = zx.d(edi_2[4].w) * 0x64
                *edi_2 = ecx_18
                void* eax_23 = eax_22 + *(arg1 + 0x2c)
                void* ecx_19 = *(eax_23 + 4)
                
                if (ecx_18 != 0x10)
                    *(eax_23 + 0x1a) = 0
                    *(ecx_19 + 0x52) = 0x93
                    *(*(eax_23 + 4) + 0x58) = 0xb000000
                else
                    *(eax_23 + 0x18) = 0
                    *(ecx_19 + 0x52) = 0x92
                    *(*(eax_23 + 4) + 0x58) = 0xa000000
                
                *(*(eax_23 + 4) + 0x54) = 0xffff
                *(*(eax_23 + 4) + 0x56) = 1
                void* ecx_24 = *(eax_23 + 4)
                *(ecx_24 + 0x30) |= 1
                **(eax_23 + 4) = 1
                __builtin_memcpy(*(eax_23 + 4) + 8, &ebx_2[2], 0x28)
                *(*(eax_23 + 4) + 0x28) = 0
                *(*(eax_23 + 4) + 0x2c) = 0
                
                if (arg2 != 0)
                    void* var_24_4 = &edi_2[2]
                    int32_t var_28_1 = arg2
                    int32_t result_2 = sub_458de2()
                    result = result_2
                    
                    if (result_2 s>= 0)
                        int32_t* eax_25 = edi_2[2]
                        int32_t eax_26 = (*(*eax_25 + 0xc))(eax_25)
                        int32_t* esi_4 = arg4
                        int32_t eax_28 = arg2 & 3
                        char temp1_1 = eax_28.b
                        eax_28.b = neg.b(eax_28.b)
                        int32_t eax_31 = neg.d(sbb.d(eax_28, eax_28, temp1_1 != 0)) + (arg2 u>> 2)
                        int32_t eax_33 = (*(*esi_4 + 0x10))(esi_4)
                        int32_t* edi_7 = arg5
                        
                        if (*edi_7 + eax_31 u<= eax_33)
                            int32_t esi_6
                            int32_t edi_9
                            edi_9, esi_6 = __builtin_memcpy(eax_26, 
                                (*(*esi_4 + 0xc))(esi_4) + (*edi_7 << 2), arg2 u>> 2 << 2)
                            __builtin_memcpy(edi_9, esi_6, arg2 & 3)
                            esi_4 = arg4
                            edi_7 = arg5
                        
                        *edi_7 += eax_31
                        
                        if ((*(*esi_4 + 0x10))(esi_4) u< *edi_7)
                            result = 0x80004005
                        else
                            result = 0
                            
                            if (*edi_2 != 0x10)
                                sub_4435aa(arg1, edi_2)
                            else
                                sub_44354c(arg1, edi_2)
                            
                            ebx_2[0x15].w = 0xffff
                            *ebx_2 = 0
                            *(ebx_2 + 0x52) = 0xb3
                            ebx_2[0x16] = 0xe000000
                            *(ebx_2 + 0x56) = 1
                            int32_t ecx_36 = *(eax_2 + 0xc)
                            *(eax_2 + 0x34) += 1
                            int32_t ecx_38 = (ecx_36 & 3) + (ecx_36 u>> 2 << 2)
                            *(eax_2 + 0xc) = ecx_38
                            ebx_2[0x12] = ecx_38
                            *(eax_2 + 0xc) += 4
    else
        result = 0x80004005

return result
