// 函数: sub_590400
// 地址: 0x590400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7cc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 7
int32_t var_38 = 0
int16_t var_48 = 0
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
int32_t var_8_1 = 0

if (&var_48 != arg2)
    sub_52e3c0(&var_48, arg2, 0, 0xffffffff)

if (&var_30 != arg3)
    sub_52e3c0(&var_30, arg3, 0, 0xffffffff)

int32_t var_18 = arg4
sub_5904f0(arg1 + 0xd4, &var_48)

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t result = 0
int32_t var_1c_1 = 7
int32_t var_20_1 = 0
var_30 = 0

if (var_34 u>= 8)
    result = j__free(var_48.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
