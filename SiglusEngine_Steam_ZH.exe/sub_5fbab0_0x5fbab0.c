// 函数: sub_5fbab0
// 地址: 0x5fbab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd54b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_180 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0xb4) = 1
*(arg1 + 0xb8) = 0
*(arg1 + 0xbc) = 0
sub_5fb9f0(arg1)
*(arg1 + 0xa4) = arg2
*(arg1 + 0xa8) = arg3
*(arg1 + 0xb0) = arg4
*(arg1 + 0xc0) = arg5
*(arg1 + 0xc4) = arg6
*(arg1 + 0xd0) = arg7
int32_t result = arg8
*(arg1 + 0xa0) = 0
*(arg1 + 0xac) = 0
*(arg1 + 0xd4) = result

if (arg9 != 0)
    int32_t var_170
    sub_54aed0(&var_170)
    int32_t var_8_1 = 0
    var_170 = 0x25
    void var_16c
    __builtin_memcpy(&var_16c, arg1, 0x80)
    char var_30_1 = arg10
    void var_2d8
    sub_54cf80(&var_2d8, &var_170)
    sub_6766e0()
    void var_e4
    result = sub_54ae40(&var_e4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
