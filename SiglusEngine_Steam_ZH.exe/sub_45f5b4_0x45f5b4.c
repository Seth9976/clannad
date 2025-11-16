// 函数: sub_45f5b4
// 地址: 0x45f5b4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t* eax_1 = arg1 + (arg2 << 2)
void* edx = *eax_1 * 0x44 + *arg4
int32_t edi
int32_t var_54 = edi

if (*(edx + 0x38) != 0)
    long double x87_r7_1 = fconvert.t(*arg3)
    long double x87_r6_1 = fconvert.t(*(edx + 0xc))
    x87_r6_1 - x87_r7_1
    void* eax_3
    eax_3.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
    label_45f642:
        void var_4c
        __builtin_memcpy(&var_4c, edx, 0x44)
        int32_t edi_6 = *eax_1
        int32_t esi_7 = edi_6
        
        while (true)
            long double x87_r7_5 = fconvert.t(*arg3)
            void* ecx_5 = esi_7 * 0x44 + *arg4
            long double x87_r6_5 = fconvert.t(*(ecx_5 + 0xc))
            x87_r6_5 - x87_r7_5
            int32_t eax_6
            eax_6.w = (x87_r6_5 < x87_r7_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_5, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_5 == x87_r7_5 ? 1 : 0) << 0xe
            bool p_5 = unimplemented  {test ah, 0x44}
            
            if (not(p_5))
                long double x87_r7_6 = fconvert.t(*(arg3 + 4))
                long double x87_r6_6 = fconvert.t(*(ecx_5 + 0x10))
                x87_r6_6 - x87_r7_6
                eax_6.w = (x87_r6_6 < x87_r7_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_6, x87_r7_6) ? 1 : 0) << 0xa
                    | (x87_r6_6 == x87_r7_6 ? 1 : 0) << 0xe
                bool p_6 = unimplemented  {test ah, 0x44}
                
                if (not(p_6))
                    long double x87_r7_7 = fconvert.t(*(arg3 + 8))
                    long double x87_r6_7 = fconvert.t(*(ecx_5 + 0x14))
                    x87_r6_7 - x87_r7_7
                    eax_6.w = (x87_r6_7 < x87_r7_7 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_7, x87_r7_7) ? 1 : 0) << 0xa
                        | (x87_r6_7 == x87_r7_7 ? 1 : 0) << 0xe
                    bool p_7 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_7))
                        long double x87_r7_8 = fconvert.t(*(arg3 + 0xc))
                        long double x87_r6_8 = fconvert.t(*(ecx_5 + 0x18))
                        x87_r6_8 - x87_r7_8
                        eax_6.w = (x87_r6_8 < x87_r7_8 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_8, x87_r7_8) ? 1 : 0) << 0xa
                            | (x87_r6_8 == x87_r7_8 ? 1 : 0) << 0xe
                        bool p_8 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_8))
                            break
            
            esi_7 = *(ecx_5 + 0x34)
            
            if (esi_7 == edi_6)
                int32_t ebx_2 = *(edx + 0x30)
                int32_t var_40_1 = *arg3
                void var_3c
                int32_t* edi_7 = &var_3c
                void* esi_9 = arg3 + 4
                *edi_7 = *esi_9
                int32_t* edi_8 = &edi_7[1]
                void* esi_10 = esi_9 + 4
                *edi_8 = *esi_10
                edi_8[1] = *(esi_10 + 4)
                esi_7 = *arg5
                int32_t var_1c_1 = ebx_2
                
                if (sub_45f4b6(arg4, &var_4c, arg5, arg6) == 0)
                    return 0x8007000e
                
                int32_t ecx_6 = *arg4
                int32_t eax_10 = ebx_2 * 0x44
                *(esi_7 * 0x44 + ecx_6 + 0x34) = *(eax_10 + ecx_6 + 0x34)
                *(*arg4 + eax_10 + 0x34) = esi_7
                break
        
        *eax_1 = esi_7
    else
        long double x87_r7_2 = fconvert.t(*(arg3 + 4))
        long double x87_r6_2 = fconvert.t(*(edx + 0x10))
        x87_r6_2 - x87_r7_2
        eax_3.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            goto label_45f642
        
        long double x87_r7_3 = fconvert.t(*(arg3 + 8))
        long double x87_r6_3 = fconvert.t(*(edx + 0x14))
        x87_r6_3 - x87_r7_3
        eax_3.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            goto label_45f642
        
        long double x87_r7_4 = fconvert.t(*(arg3 + 0xc))
        long double x87_r6_4 = fconvert.t(*(edx + 0x18))
        x87_r6_4 - x87_r7_4
        eax_3.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            goto label_45f642
else
    *(edx + 0x38) = 1
    *(edx + 0xc) = *arg3
    void* edi_2 = edx + 0x10
    void* esi_2 = arg3 + 4
    *edi_2 = *esi_2
    void* edi_3 = edi_2 + 4
    void* esi_3 = esi_2 + 4
    *edi_3 = *esi_3
    *(edi_3 + 4) = *(esi_3 + 4)

return result
