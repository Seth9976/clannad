// 函数: sub_5aada0
// 地址: 0x5aada0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9fcb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[8] = 7
arg1[7] = 0
arg1[3].w = 0
sub_52e3c0(&arg1[3], &arg2[3], 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[0xe] = 7
arg1[0xd] = 0
arg1[9].w = 0
sub_52e3c0(&arg1[9], &arg2[9], 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
