// 函数: sub_5f0cc8
// 地址: 0x5f0cc8
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x62a610
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5f4b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x62a610 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_5f0cd4
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t eax
eax.b = arg1 != 0
int32_t result

if (eax != 0 && (arg3 == FILE_BEGIN || arg3 == FILE_CURRENT || arg3 == FILE_END))
    __lock_file(arg1)
    int32_t var_8_1 = 0
    int32_t result_1 = __fseek_nolock(arg1, arg2, arg3)
    int32_t result_2 = result_1
    int32_t var_8_2 = 0xfffffffe
    sub_5f0d43(arg1)
    result = result_1
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_5f0d3c
return result
