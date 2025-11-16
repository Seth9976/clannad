// 函数: sub_4d9150
// 地址: 0x4d9150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xfffffffe
int32_t var_c = 0x629dc0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5f4b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_c_1 = var_c ^ __security_cookie_1
int32_t __saved_ebp
int32_t eax_1 = __security_cookie_1 ^ &__saved_ebp
int32_t var_34 = eax_1
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = &var_34
int32_t ebx
ebx.b = 1
int32_t var_8_1 = 0

if (0xffffffff - arg1 u< 0x2000)
    ebx.b = 0
    char var_21_1 = 0
else
    __alloca_probe_16(arg1 + 0x2000)
    int32_t* var_1c_1 = &var_34

int32_t var_8_2 = 0xfffffffe
void* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
