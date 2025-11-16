// 函数: sub_70e3a0
// 地址: 0x70e3a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cab38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
int32_t var_30
char* eax_3 = sub_70e1d0(arg1 + 0xd0, &var_30)
int32_t var_8_1 = 0
arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0
sub_541b40(arg2, eax_3, 0, 0xffffffff)
int32_t var_1c

if (var_1c u>= 0x10)
    j__free(var_30)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2
