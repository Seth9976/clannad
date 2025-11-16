// 函数: sub_45f869
// 地址: 0x45f869
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_54 = edi
int32_t* edi_1 = arg1 + (arg2 << 2)
int32_t esi = *edi_1
int32_t ecx_2 = *arg5
void* edx_3 = esi * 0x44 + ecx_2
int32_t result = 0

if (*(edx_3 + 0x3c) != 0)
    if (arg3 u<= 0)
        while (true)
            if (*(edx_3 + 0x3a) == arg3)
                fconvert.t(*(edx_3 + 0x24)) - fconvert.t(*arg4)
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (not(p_1))
                    fconvert.t(*(edx_3 + 0x28)) - fconvert.t(*(arg4 + 4))
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_2))
                        fconvert.t(*(edx_3 + 0x2c)) - fconvert.t(*(arg4 + 8))
                        bool p_3 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_3))
                            break
            
            esi = *(esi * 0x44 + ecx_2 + 0x34)
            
            if (esi == *edi_1)
                goto label_45f8d7
    else
        while (*(edx_3 + 0x3a) != arg3)
            esi = *(esi * 0x44 + ecx_2 + 0x34)
            
            if (esi == *edi_1)
                goto label_45f8d7
    
    if (esi == 0xffffffff)
    label_45f8d7:
        int32_t eax_2 = *(edx_3 + 0x30)
        void var_4c
        __builtin_memcpy(&var_4c, edx_3, 0x44)
        int32_t var_1c_1 = eax_2
        eax_2.w = arg3
        int16_t var_12_1 = eax_2.w
        int16_t var_10_1 = 1
        int32_t var_28_1 = *arg4
        void var_24
        int32_t* edi_6 = &var_24
        void* esi_8 = arg4 + 4
        *edi_6 = *esi_8
        edi_6[1] = *(esi_8 + 4)
        int32_t esi_11 = *arg6
        
        if (sub_45f4b6(arg5, &var_4c, arg6, arg7) == 0)
            return 0x8007000e
        
        int32_t ecx_6 = *arg5
        int32_t eax_9 = var_1c_1 * 0x44
        *(esi_11 * 0x44 + ecx_6 + 0x34) = *(eax_9 + ecx_6 + 0x34)
        *(*arg5 + eax_9 + 0x34) = esi_11
        *edi_1 = esi_11
    else
        int32_t eax_6 = esi * 0x44
        *(eax_6 + ecx_2 + 0x3c) += 1
        float* eax_7 = *arg5 + eax_6 + 0x24
        *eax_7 = fconvert.s(fconvert.t(*arg4) + fconvert.t(*eax_7))
        eax_7[1] = fconvert.s(fconvert.t(*(arg4 + 4)) + fconvert.t(eax_7[1]))
        eax_7[2] = fconvert.s(fconvert.t(*(arg4 + 8)) + fconvert.t(eax_7[2]))
        *edi_1 = esi
else
    *(edx_3 + 0x3c) = 1
    *(edx_3 + 0x3a) = arg3
    *(edx_3 + 0x24) = *arg4
    void* edi_3 = edx_3 + 0x28
    void* esi_2 = arg4 + 4
    *edi_3 = *esi_2
    *(edi_3 + 4) = *(esi_2 + 4)

return result
