// 函数: sub_749f69
// 地址: 0x749f69
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0xb48d78
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb48d78 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_749f75
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
uint32_t result

if (arg2 == 0 || arg3 == 0)
    result = 0
else
    int32_t eax
    eax.b = arg4 != 0
    
    if (eax != 0)
        __lock_file(arg4)
        int32_t var_8_1 = 0
        uint32_t result_1 = sub_749e10(arg1, arg2, arg3, arg4)
        uint32_t result_2 = result_1
        int32_t var_8_2 = 0xfffffffe
        sub_749fe3(arg4)
        result = result_1
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_749faa
return result
