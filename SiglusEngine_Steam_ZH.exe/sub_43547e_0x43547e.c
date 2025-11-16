// 函数: sub_43547e
// 地址: 0x43547e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_10 = edi
int32_t result = 0

if (arg3 == 0)
    return 0x8876086c

int32_t eax_1 = sub_433f9c(arg1, arg2, 1)

if (eax_1 != 0)
    void* ecx_5 = *(*(eax_1 + 4) + 0x40) + *(arg1 + 0x344) + *(eax_1 + 0x18)
    
    if (*(ecx_5 + 0x10) == 0 || *(eax_1 + 0x10) != 0xffffffff)
        int32_t edx_1 = *(ecx_5 + 4)
        
        if (edx_1 s>= 0 && edx_1 s<= 3 && *(ecx_5 + 0x14) == 1 && *(ecx_5 + 0x18) == 1)
            void* eax_3 = *(*(eax_1 + 0x1c) + 8)
            int32_t ecx_6 = *(eax_3 + 0x10)
            
            if (ecx_6 == 0 || ecx_6 == 1 || ecx_6 == 2)
                int32_t ecx_11
                ecx_11.b = *(eax_3 + 0x18) != 0
                *arg3 = ecx_11
                return result
            
            if (ecx_6 == 3)
                long double x87_r7_1 = fconvert.t(*(eax_3 + 0x18))
                long double x87_r6_1 = fconvert.t(0.0)
                x87_r6_1 - x87_r7_1
                eax_3.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                int32_t eax_4
                
                eax_4 = not(p_1) ? 0 : 1
                
                *arg3 = eax_4
                return result

return 0x8876086c
