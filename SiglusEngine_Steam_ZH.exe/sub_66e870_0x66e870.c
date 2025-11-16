// 函数: sub_66e870
// 地址: 0x66e870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6790
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e3c0(&var_44, arg2 - 0x30, 0, 0xffffffff)
int32_t var_8_1 = 0
int16_t var_2c = 0
int32_t var_18 = 7
int32_t var_1c = 0
sub_52e3c0(&var_2c, arg2 - 0x18, 0, 0xffffffff)
int32_t var_8_2 = 1

if (arg2 - 0x30 != arg3)
    sub_52e3c0(arg2 - 0x30, arg3, 0, 0xffffffff)

if (arg2 - 0x18 != &arg3[6])
    sub_52e3c0(arg2 - 0x18, &arg3[6], 0, 0xffffffff)

void* eax_8 = (arg2 - arg3 - 0x30) s/ 0x30
sub_66de30(eax_8, nullptr, arg3, eax_8, &var_44, arg4)

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t result = 0
int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0

if (var_30 u>= 8)
    result = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
