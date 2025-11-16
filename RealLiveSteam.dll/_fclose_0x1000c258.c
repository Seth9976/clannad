// 函数: _fclose
// 地址: 0x1000c258
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x10016150
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x10016150 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_1000c264
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0xffffffff
int32_t var_20 = 0xffffffff
int32_t eax
eax.b = arg1 != 0

if (eax == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
else if ((arg1[3].b & 0x40) == 0)
    __lock_file(arg1)
    int32_t var_8_1 = 0
    result = __fclose_nolock(arg1)
    int32_t result_1 = result
    int32_t var_8_2 = 0xfffffffe
    $LN10(arg1)
else
    arg1[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_1000c28f
return result
