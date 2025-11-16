// 函数: sub_6ba1a0
// 地址: 0x6ba1a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b017b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[7] = 7
arg1[6] = 0
arg1[2].w = 0
sub_52e3c0(&arg1[2], &arg2[2], 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[0xd] = 7
arg1[0xc] = 0
arg1[8].w = 0
sub_52e3c0(&arg1[8], &arg2[8], 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
