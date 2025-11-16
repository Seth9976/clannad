// 函数: sub_762ab2
// 地址: 0x762ab2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0x1c
int32_t var_8 = 0xb493c8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb493c8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_40 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_40
void* const var_44_3 = &data_762abe
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t* edi = nullptr
int32_t var_24 = 0
int32_t var_28 = 0
int32_t var_2c = 0
int32_t eax
eax.b = arg1 != 0
int32_t result

if (eax != 0)
    *arg1 = nullptr
    
    if (__mtinitlocknum(2) != 0)
        __lock(2)
        int32_t var_8_1 = 0
        
        if (data_b9c120 != 0)
            if (sub_762c46(&data_b9c120, 0x110, 0x7fffffff) == 0)
            label_762b57:
                edi = __getstream()
                int32_t* var_24_1 = edi
                
                if (edi != 0)
                    int32_t var_2c_1 = 1
                    int32_t eax_8 = *__errno()
                    *__errno() = 0
                    int32_t var_20
                    int32_t i
                    
                    do
                        if (sub_75eccc(&var_20, &data_b9c120, 0x42, arg2, 0x180) != 0x11)
                            break
                        
                        i = sub_762c46(&data_b9c120, 0x110, 0x7fffffff)
                    while (i == 0)
                    
                    if (*__errno() == 0)
                        *__errno() = eax_8
                    
                    if (var_20 != 0xffffffff)
                        char* eax_13 = __strdup(&data_b9c120)
                        edi[7] = eax_13
                        
                        if (eax_13 != 0)
                            edi[1] = 0
                            *edi = 0
                            edi[2] = 0
                            edi[3] = data_b95ab0 | 0x80
                            edi[4] = var_20
                            *arg1 = edi
                        else
                            sub_758896(var_20)
                else
                    int32_t var_44_1 = 0x18
                    result_1 = 0x18
                    int32_t var_28_1 = 0x18
        else if (sub_762cdc(1) == 0)
            goto label_762b57
        
        int32_t var_8_2 = 0xfffffffe
        $LN22(&__saved_ebp, edi)
        
        if (result_1 != 0)
            *__errno() = result_1
        
        result = result_1
    else
        result = *__errno()
else
    int32_t var_44 = 0x16
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x16

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_762c29
return result
