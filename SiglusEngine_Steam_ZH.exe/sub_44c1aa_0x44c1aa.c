// 函数: sub_44c1aa
// 地址: 0x44c1aa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
*arg5 = 0
int32_t* ebx_2 = arg2 * 0x64 + *(arg1 + 0x2c)
int32_t* eax
eax.w = *(ebx_2 + 0x1a)
int32_t result = 0

if (eax.w != 0xffff)
    int32_t* esi_3 = zx.d(eax.w) * 0x64 + ebx_2[1]
    int32_t eax_1 = esi_3[0x16]
    
    if (eax_1 == 0xa000000 || eax_1 == 0xb000000)
        int32_t eax_21 = esi_3[7] << 2
        void* edx_4 = *(eax_21 + *(arg1 + 0xb0))
        int32_t eax_23
        
        if (*(edx_4 + 0x40) != 0)
            void* eax_24 = *(eax_21 + *(arg1 + 0xb0))
            eax_23 = *(*(*(eax_24 + 0x40) + 8)
                + (*(*(eax_24 + 0x30) + esi_3[9] + *(*(arg1 + 0x38) + 0x10)) << 2))
        else
            eax_23 = *(*(edx_4 + 0x30) + esi_3[9] + *(arg1 + 0x20))
        
        void* esi_6 = *(arg1 + 0x18) + eax_23 * 0x18
        int32_t eax_28 = *(esi_6 + 0x14)
        
        if ((eax_28.b & 1) == 0)
            goto label_44c3cf
        
        if (*(esi_6 + 4) != 0)
            int32_t result_1 = sub_448f57(arg1, esi_6)
            result = result_1
            
            if (result_1 s>= 0)
                goto label_44c3cb
        else
            *(esi_6 + 0x14) = eax_28 | 2
            *(esi_6 + 0xc) = 0
        label_44c3cb:
            *(esi_6 + 0x14) &= 0xfffffffe
        label_44c3cf:
            
            if (*(esi_6 + 4) != 0 || (*(esi_6 + 0x14) & 2) == 0)
                int32_t* esi_7 = *(esi_6 + 8)
                *arg5 = (*(*esi_7 + 0xc))(esi_7)
    else if (eax_1 == 0xe000000)
        if (*esi_3 != 0)
            *esi_3 = esi_3[1]
            int16_t x87control_1 = sub_44b676(arg1, arg2, zx.d(*(ebx_2 + 0x1a)))
            result = 0
            int32_t* eax_4 = esi_3[0xe]
            int32_t edi_1 = *ebx_2
            eax_1 = __ftol(x87control_1, 
                fconvert.t(*(*((*(*eax_4 + 0xc))(eax_4) + 0xc) + edi_1)) + fconvert.t(0.001))
            int16_t* edi_3 = esi_3[0x12] + edi_1
            
            if (edi_3[1] != eax_1.w)
                if (*(esi_3[3] + 0x10) u<= zx.d(eax_1.w))
                    return 0x80004005
                
                arg2 = 0
                
                if (*(esi_3 + 0x56) u> 0)
                    int32_t eax_8 = neg.d(arg4)
                    int32_t eax_9 = sbb.d(eax_8, eax_8, arg4 != 0)
                    int32_t ecx_3 = neg.d(arg3)
                    int32_t ecx_4 = sbb.d(ecx_3, ecx_3, arg3 != 0)
                    int32_t var_10_1 = eax_9
                    int32_t var_14_1 = ecx_4
                    
                    while (true)
                        sub_442a01(arg1, zx.d(edi_3[1]) + zx.d(*edi_3) - 1, ecx_4, eax_9)
                        result = 0
                        arg2 += 1
                        
                        if (arg2.w u>= *(esi_3 + 0x56))
                            break
                        
                        eax_9 = var_10_1
                        ecx_4 = var_14_1
                
                arg2 = 0
                edi_3[1] = eax_1.w
                
                if (*(esi_3 + 0x56) u> 0)
                    int32_t eax_13
                    eax_13.b = arg4 != 0
                    int32_t eax_14
                    eax_14.b = arg3 != 0
                    
                    do
                        sub_442a01(arg1, zx.d(edi_3[1]) + zx.d(*edi_3) - 1, eax_14, eax_13)
                        result = 0
                        arg2 += 1
                        eax_1.w = arg2.w
                    while (eax_1.w u< *(esi_3 + 0x56))
        
        int16_t* esi_5 = esi_3[0x12] + *ebx_2
        eax_1.w = *esi_5
        
        if (eax_1.w != 0)
            return sub_44c1aa(zx.d(esi_5[1]) + zx.d(eax_1.w) - 1, arg3, arg4, arg5)

return result
