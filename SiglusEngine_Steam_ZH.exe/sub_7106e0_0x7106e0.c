// 函数: sub_7106e0
// 地址: 0x7106e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cab38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_44 = 0xf
int32_t var_48 = 0
char var_58 = 0
sub_541b40(&var_58, arg2, 0, 0xffffffff)
int32_t var_30
int32_t* result = sub_70fbf0(arg1 + 4, &var_30, var_58)
int32_t var_8_1 = 0

if (arg2 != result)
    result = sub_541b40(arg2, result, 0, 0xffffffff)

int32_t var_1c

if (var_1c u>= 0x10)
    result = j__free(var_30)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
