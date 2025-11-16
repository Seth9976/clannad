// 函数: sub_42b3e4
// 地址: 0x42b3e4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_48 = edi
void* result

if ((*(arg1 + 0x28) & 2) == 0)
    result = nullptr
else if (&arg2[1] u>= *(arg1 + 4))
    result = nullptr
else if (_isalpha(sx.d(*arg2)) == 0)
    result = nullptr
else if (_isalpha(sx.d(arg2[1])) == 0 || &arg2[2] u>= *(arg1 + 4) || arg2[2] != 0x2e)
    result = nullptr
else
    int32_t var_2c
    void* eax_5 = sub_42b1a8(arg1, &arg2[3], &var_2c)
    
    if (eax_5 == 0 || var_2c u> 0xff)
        result = nullptr
    else
        char* edi_4 = &arg2[3] + eax_5
        
        if (edi_4 u>= *(arg1 + 4) || *edi_4 != 0x2e)
            result = nullptr
        else
            void* eax_6 = sub_42b1a8(arg1, &edi_4[1], &var_2c)
            
            if (eax_6 != 0)
                goto label_42b4a7
            
            eax_6 = sub_42a8d4(arg1, &edi_4[1], &var_2c)
            
            if (eax_6 == 0)
                result = nullptr
            else
                var_2c = 0
            label_42b4a7:
                
                if (var_2c u> 0xff)
                    result = nullptr
                else
                    void* result_1 = &edi_4[1] + eax_6 - arg2
                    
                    if (result_1 u>= 0x20)
                        result = nullptr
                    else
                        char var_28[0x20]
                        int32_t esi_2
                        int32_t edi_7
                        edi_7, esi_2 = __builtin_memcpy(&var_28, arg2, result_1 u>> 2 << 2)
                        __builtin_memcpy(edi_7, esi_2, result_1 & 3)
                        *(&var_28 + result_1) = 0
                        void var_40
                        
                        if (sub_46b27d(&var_28, 1, &var_40) s< 0)
                            result = nullptr
                        else
                            int32_t var_3c
                            *arg3 = var_3c
                            result = result_1

sub_745f2b(__security_cookie_1)
return result
