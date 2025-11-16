// 函数: sub_5cb740
// 地址: 0x5cb740
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b14a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_2c
BOOL result = sub_6b4cb0(sub_5c4880(&var_2c))
int32_t var_18

if (var_18 u>= 8)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
