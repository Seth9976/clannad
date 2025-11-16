// 函数: sub_74b1ed
// 地址: 0x74b1ed
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0xb48dd8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb48dd8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_74b1f9
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t result

if (arg1 != 0)
    __lock_file(arg1)
    int32_t var_8_1 = 0
    int32_t result_1 = sub_74b13a(arg1)
    int32_t result_2 = result_1
    int32_t var_8_2 = 0xfffffffe
    sub_74b23e(arg1)
    result = result_1
else
    result = _flsall(0)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_74b237
return result
