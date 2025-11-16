// 函数: sub_4572d6
// 地址: 0x4572d6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg3
int32_t edi
int32_t var_c = edi
int32_t result = 0

if (esi != 0)
    int32_t eax_1 = sub_4538a9(arg1, arg2, 1, 0)
    
    if (eax_1 != 0)
        int32_t* ecx_2 = *(eax_1 + 4)
        
        if (ecx_2[4] == 0 || *(eax_1 + 8) != 0xffffffff)
            int32_t edx_1 = ecx_2[1]
            
            if (edx_1 s>= 0 && edx_1 s<= 3 && ecx_2[5] == 1 && ecx_2[6] == 1)
                int32_t ecx_3 = *ecx_2
                
                if (ecx_3 == 1)
                    int32_t ecx_7
                    ecx_7.b = **eax_1 != 0
                    *esi = fconvert.s(float.t(ecx_7))
                    return result
                
                if (ecx_3 == 2)
                    *esi = fconvert.s(float.t(**eax_1))
                    return result
                
                if (ecx_3 == 3)
                    *esi = **eax_1
                    return result

return 0x8876086c
