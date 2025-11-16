// 函数: sub_4571ac
// 地址: 0x4571ac
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0
int32_t edi
int32_t var_10 = edi
int32_t edi_1 = 1
int32_t esi_1

if (arg2 s>= 0)
    *(*(arg1 + 0xc4) + 4) = 0
    **(arg1 + 0xc4) = 3
    *(*(arg1 + 0xc4) + 0x10) = 0
    *(*(arg1 + 0xc4) + 0x14) = 1
    *(*(arg1 + 0xc4) + 0x18) = 1
    esi_1 = sub_4538a9(arg1, arg2, 1, 1)
    
    if (esi_1 != 0)
        goto label_4571ff
else
    esi_1 = not.d(arg2)
label_4571ff:
    int32_t* eax_4 = *(esi_1 + 4)
    
    if (eax_4[4] == 0 || *(esi_1 + 8) != 0xffffffff)
        if (*(arg1 + 0x3c) == 3)
            void* var_14_1 = arg1
            return sub_44ddc7(arg1, not.d(esi_1), fconvert.s(fconvert.t(arg3)))
        
        int32_t ecx_3 = eax_4[1]
        
        if (ecx_3 s>= 0 && ecx_3 s<= 3 && eax_4[5] == 1 && eax_4[6] == 1)
            int32_t eax_6 = *eax_4
            
            if (eax_6 == 1)
                long double x87_r7_4 = fconvert.t(arg3)
                long double x87_r6_2 = fconvert.t(0f)
                x87_r6_2 - x87_r7_4
                int32_t eax_7
                eax_7.w = (x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe
                bool p_2 = unimplemented  {test ah, 0x44}
                int32_t eax_12
                
                eax_12 = not(p_2) ? 0 : 1
                
                int32_t* ecx_5 = *esi_1
                
                if (*ecx_5 == eax_12)
                    return result
                
                long double x87_r7_5 = fconvert.t(arg3)
                long double x87_r6_3 = fconvert.t(0f)
                x87_r6_3 - x87_r7_5
                eax_12.w = (x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (not(p_3))
                    edi_1 = 0
                
                *ecx_5 = edi_1
                return sub_448129(arg1, esi_1)
            
            if (eax_6 == 2)
                int32_t* edi_2 = *esi_1
                int16_t x87control
                int32_t eax_11 = __ftol(x87control, fconvert.t(arg3))
                
                if (*edi_2 == eax_11)
                    return result
                
                *edi_2 = eax_11
                return sub_448129(arg1, esi_1)
            
            if (eax_6 == 3)
                float* ecx_4 = *esi_1
                long double x87_r7_2 = fconvert.t(arg3)
                long double x87_r6_1 = fconvert.t(*ecx_4)
                x87_r6_1 - x87_r7_2
                int32_t eax_9
                eax_9.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (not(p_1))
                    return result
                
                *ecx_4 = arg3
                return sub_448129(arg1, esi_1)
return 0x8876086c
