// 函数: sub_75ebb5
// 地址: 0x75ebb5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0x14
int32_t var_8 = 0xb492b8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb492b8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_2 = &data_75ebc1
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t var_24 = 0
int32_t eax
eax.b = arg5 != 0
int32_t result

if (eax != 0)
    *arg5 = 0xffffffff
    int32_t eax_2
    eax_2.b = arg1 != 0
    
    if (eax_2 == 0)
        goto label_75ebdc
    
    int32_t eax_4
    int32_t eax_5
    
    if (arg6 != 0)
        eax_4 = arg4 & 0xfffffe7f
        eax_5 = neg.d(eax_4)
    
    if (arg6 != 0 && sbb.d(eax_5, eax_5, eax_4 != 0) == 0xffffffff)
        goto label_75ebdc
    
    int32_t var_8_1 = 0
    int32_t edx
    int32_t result_1 =
        sub_75ec7e(&var_24, edx, nullptr, &var_24, arg5, arg1, arg2, arg3, arg4.b, arg6)
    int32_t result_2 = result_1
    int32_t var_8_2 = 0xfffffffe
    sub_75ec52(&__saved_ebp, arg5, result_1)
    
    if (result_1 != 0)
        *arg5 = 0xffffffff
    
    result = result_1
else
label_75ebdc:
    int32_t var_3c = 0x16
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x16

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_75ec4b
return result
