// 函数: __mbsstr_l
// 地址: 0x5f1c14
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_1c
sub_5f1b77(&var_1c, arg3)
void* result = nullptr
void* var_18
int32_t xmm0[0x4]

if (*(var_18 + 8) == 0)
    result = _strstr(xmm0, arg1, arg2)
else if (arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
else if (*arg2 != 0)
    void* result_1 = arg1
    
    if (result_1 != 0)
        void* esi_2 = result_1 - _strlen(arg2)
        void* eax_6 = _strlen(result_1) + esi_2
        void* var_c_1 = eax_6
        
        if (*result_1 != 0)
            char* edx_1 = arg2
            void* ecx_4 = result_1 - edx_1
            
            while (result_1 u<= eax_6)
                char* eax_7 = edx_1
                edx_1.b = *result_1
                char var_6_1 = edx_1.b
                bool cond:0_1 = edx_1.b == 0
                edx_1 = arg2
                
                if (not(cond:0_1))
                    do
                        edx_1.b = *eax_7
                        
                        if (edx_1.b == 0)
                            goto label_5f1cde
                        
                        bool cond:1_1 = *(ecx_4 + eax_7) != edx_1.b
                        edx_1 = arg2
                        
                        if (cond:1_1)
                            break
                        
                        eax_7 = &eax_7[1]
                    while (*(ecx_4 + eax_7) != 0)
                
                if (*eax_7 == 0)
                label_5f1cde:
                    result = result_1
                    break
                
                result_1 += 1
                ecx_4 += 1
                uint32_t eax_8
                eax_8.b = *(zx.d(var_6_1) + var_18 + 0x19)
                eax_8.b &= 4
                
                if (eax_8.b != 0)
                    if (*result_1 == 0)
                        break
                    
                    result_1 += 1
                    ecx_4 += 1
                
                eax_6 = var_c_1
                
                if (*result_1 == 0)
                    break
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
else
    result = arg1
char var_10
void* var_14

if (var_10 != 0)
    *(var_14 + 0x70) &= 0xfffffffd
return result
