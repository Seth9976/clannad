// 函数: sub_66f040
// 地址: 0x66f040
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e3c0(&var_2c, arg1, 0, 0xffffffff)
int32_t var_8_1 = 0

if (arg1 != arg2)
    sub_52e3c0(arg1, arg2, 0, 0xffffffff)

int32_t* result = &var_2c

if (arg2 != &var_2c)
    result = sub_52e3c0(arg2, &var_2c, 0, 0xffffffff)

if (var_18 u>= 8)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
