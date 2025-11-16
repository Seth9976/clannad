// 函数: sub_6f1a40
// 地址: 0x6f1a40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cce10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int16_t var_2c
sub_6f17f0(&var_2c, arg3)
var_8_1.b = 1
int32_t arg_4
sub_6b9da0(&var_2c, &arg_4)
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t result = 0
int32_t var_18_1 = 7
int32_t var_1c = 0
var_2c = 0

if (arg4 u>= 8)
    result = j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
