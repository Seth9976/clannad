// 函数: sub_5327a0
// 地址: 0x5327a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
int32_t var_30
int32_t* eax_4 = sub_5326e0(arg4, arg2, &var_30, arg4)
int32_t var_8_1 = 0
*(arg3 + 0x14) = 7
*(arg3 + 0x10) = 0
*arg3 = 0
sub_52e3c0(arg3, eax_4, 0, 0xffffffff)
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
