// 函数: sub_5fbd10
// 地址: 0x5fbd10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd32b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_17c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0xb4) = 1
*(arg1 + 0xb8) = 0
*(arg1 + 0xbc) = 0
sub_5fb9f0(arg1)
*(arg1 + 0xa8) = arg2
*(arg1 + 0xb0) = arg3
*(arg1 + 0xc0) = arg4
*(arg1 + 0xc4) = arg5
*(arg1 + 0xc8) = arg6
*(arg1 + 0xcc) = arg7
*(arg1 + 0xd0) = arg8
int32_t result = arg9
*(arg1 + 0xa0) = 2
*(arg1 + 0xac) = 0
*(arg1 + 0xd4) = result

if (arg10 != 0)
    int32_t var_16c
    sub_54aed0(&var_16c)
    int32_t var_8_1 = 0
    var_16c = 0x25
    void var_168
    __builtin_memcpy(&var_168, arg1, 0x80)
    char var_2c_1 = arg11
    void var_2d4
    sub_54cf80(&var_2d4, &var_16c)
    sub_6766e0()
    void var_e0
    result = sub_54ae40(&var_e0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
