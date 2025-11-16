// 函数: sub_697100
// 地址: 0x697100
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8f98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_8_1 = 0
sub_697190(&arg1[3])
__builtin_memset(&arg1[0x15], 0, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
