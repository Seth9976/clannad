// 函数: sub_6b3f90
// 地址: 0x6b3f90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b14a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
int16_t* result = sub_6b4010(&ExceptionList, arg1, &var_2c, arg2)
int32_t var_8_1 = 0

if (arg1 != result)
    result = sub_52e3c0(arg1, result, 0, 0xffffffff)

int32_t var_18

if (var_18 u>= 8)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
