// 函数: sub_455ea3
// 地址: 0x455ea3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_10 = edi
int32_t result = 0

if (arg3 != 0)
    int32_t eax_1 = sub_4538a9(arg1, arg2, 1, 0)
    
    if (eax_1 != 0)
        int32_t* ecx_2 = *(eax_1 + 4)
        
        if (ecx_2[4] == 0 || *(eax_1 + 8) != 0xffffffff)
            int32_t edx_1 = ecx_2[1]
            
            if (edx_1 s>= 0 && edx_1 s<= 3 && ecx_2[5] == 1 && ecx_2[6] == 1)
                int32_t ecx_3 = *ecx_2
                
                if (ecx_3 == 1 || ecx_3 == 2)
                    int32_t ecx_7
                    ecx_7.b = **eax_1 != 0
                    *arg3 = ecx_7
                    return result
                
                if (ecx_3 == 3)
                    long double x87_r7_1 = fconvert.t(**eax_1)
                    long double x87_r6_1 = fconvert.t(0f)
                    x87_r6_1 - x87_r7_1
                    float* eax_2
                    eax_2.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x44}
                    int32_t eax_3
                    
                    eax_3 = not(p_1) ? 0 : 1
                    
                    *arg3 = eax_3
                    return result

return 0x8876086c
