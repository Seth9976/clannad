// 函数: sub_5c51d0
// 地址: 0x5c51d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb59b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t result_1
int32_t result_2 = result_1
int32_t var_424 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
OLECHAR** var_404 = arg2
*arg2 = 0
int32_t result

if (arg1 == 0)
    result = 0
else
    int16_t var_40c
    int32_t var_400
    result = (*(*arg1 + 0xc))(arg1, &var_40c, 2, &var_400)
    
    if (result s>= 0)
        void var_414
        result = (*(*arg1 + 0xc))(arg1, &var_414, 4, &var_400)
        
        if (result s>= 0)
            uint32_t var_408
            result = (*(*arg1 + 0xc))(arg1, &var_408, 4, &var_400)
            
            if (result s>= 0)
                uint32_t eax_7 = var_408
                
                if (eax_7 == 0)
                    goto label_5c5310
                
                BSTR var_410
                sub_5c4ab0(&var_410, eax_7)
                int32_t var_8_1 = 0
                BSTR esi_1 = var_410
                
                if (SysStringLen(esi_1) != 0)
                    _memset(esi_1, 0, (var_408 << 1) + 2)
                    result_1 = (*(*arg1 + 0xc))(arg1, esi_1, var_408 * 2, &var_400)
                    
                    if (result_1 s>= 0)
                        int32_t var_8_2 = 0xffffffff
                        *var_404 = esi_1
                        SysFreeString(nullptr)
                    label_5c5310:
                        int16_t ecx = var_40c
                        
                        if (ecx == 0x37a || ecx == 0x37b)
                            result = (*(*arg1 + 0xc))(arg1, &var_404, 4, &var_400)
                            
                            if (result s>= 0)
                                OLECHAR** edx = var_404
                                void* edx_1 = edx - 4
                                var_404 = edx_1
                                
                                if (edx != 4)
                                    bool cond:2_1
                                    
                                    do
                                        void* eax_16 = 0x3e8
                                        
                                        if (edx_1 u< 0x3e8)
                                            eax_16 = edx_1
                                        
                                        void var_3fc
                                        result = (*(*arg1 + 0xc))(arg1, &var_3fc, eax_16, &var_400)
                                        
                                        if (result s< 0)
                                            goto label_5c53ac
                                        
                                        OLECHAR** edx_2 = var_404
                                        edx_1 = edx_2 - var_400
                                        cond:2_1 = edx_2 != var_400
                                        var_404 = edx_1
                                    while (cond:2_1)
                                
                                result = 0
                        else
                            result = 0x80004005
                            
                            if (ecx == 0x376)
                                result = 0
                    else
                        SysFreeString(esi_1)
                        result = result_1
                else
                    SysFreeString(esi_1)
                    result = 0x8007000e

label_5c53ac:
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
