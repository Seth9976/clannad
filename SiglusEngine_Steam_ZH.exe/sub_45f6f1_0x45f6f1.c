// 函数: sub_45f6f1
// 地址: 0x45f6f1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t* eax_1 = &arg1[arg2]
float* eax_2 = *eax_1
int32_t ebx_1 = eax_2 * 0x44
void* edx_1 = *arg5 + ebx_1
int32_t edi
int32_t var_58 = edi

if (*(edx_1 + 0x38) == 0)
    void* esi_1 = arg3
    *(edx_1 + 0x38) = 1
    
    if (esi_1 != 0)
        *(edx_1 + 0x24) = *esi_1
        void* edi_2 = edx_1 + 0x28
        void* esi_2 = esi_1 + 4
        *edi_2 = *esi_2
        *(edi_2 + 4) = *(esi_2 + 4)
    
    if (arg4 != 0)
        *(edx_1 + 0x1c) = *arg4
        *(edx_1 + 0x20) = arg4[1]
else
    int32_t* eax_3
    
    if (arg3 == 0)
    label_45f785:
        
        if (arg4 != 0)
            long double x87_r7_4 = fconvert.t(*arg4)
            long double x87_r6_4 = fconvert.t(*(edx_1 + 0x1c))
            x87_r6_4 - x87_r7_4
            eax_3.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                goto label_45f7b6
            
            long double x87_r7_5 = fconvert.t(arg4[1])
            long double x87_r6_5 = fconvert.t(*(edx_1 + 0x20))
            x87_r6_5 - x87_r7_5
            eax_3.w = (x87_r6_5 < x87_r7_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_5, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_5 == x87_r7_5 ? 1 : 0) << 0xe
            bool p_5 = unimplemented  {test ah, 0x44}
            
            if (p_5)
                goto label_45f7b6
    else
        long double x87_r7_1 = fconvert.t(*arg3)
        long double x87_r6_1 = fconvert.t(*(edx_1 + 0x24))
        x87_r6_1 - x87_r7_1
        eax_3.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            long double x87_r7_2 = fconvert.t(arg3[1])
            long double x87_r6_2 = fconvert.t(*(edx_1 + 0x28))
            x87_r6_2 - x87_r7_2
            eax_3.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                goto label_45f7b6
            
            long double x87_r7_3 = fconvert.t(arg3[2])
            long double x87_r6_3 = fconvert.t(*(edx_1 + 0x2c))
            x87_r6_3 - x87_r7_3
            eax_3.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (p_3)
                goto label_45f7b6
            
            goto label_45f785
        
    label_45f7b6:
        void var_4c
        __builtin_memcpy(&var_4c, edx_1, 0x44)
        
        if (arg3 != 0)
            float var_28_1 = *arg3
            void var_24
            int32_t* edi_5 = &var_24
            void* esi_7 = &arg3[1]
            *edi_5 = *esi_7
            edi_5[1] = *(esi_7 + 4)
        
        if (arg4 != 0)
            *(edx_1 + 0x1c) = *arg4
            *(edx_1 + 0x20) = arg4[1]
        
        int32_t esi_10 = *arg5
        arg3 = eax_2
        
        while (true)
            int32_t* eax_11 = arg3 * 0x44 + esi_10
            
            if (eax_11[0xe].b != 0 && sub_45f419(eax_11, &var_4c) != 0)
                *eax_1 = arg3
                break
            
            float* eax_13 = eax_11[0xd]
            arg3 = eax_13
            
            if (eax_13 == eax_2)
                int32_t ebx_2 = *(esi_10 + ebx_1 + 0x30)
                int32_t esi_11 = *arg6
                int32_t var_1c_1 = ebx_2
                
                if (sub_45f4b6(arg5, &var_4c, arg6, arg7) == 0)
                    return 0x8007000e
                
                int32_t ecx_6 = *arg5
                int32_t eax_18 = ebx_2 * 0x44
                *(esi_11 * 0x44 + ecx_6 + 0x34) = *(eax_18 + ecx_6 + 0x34)
                *(*arg5 + eax_18 + 0x34) = esi_11
                *eax_1 = esi_11
                break

return result
