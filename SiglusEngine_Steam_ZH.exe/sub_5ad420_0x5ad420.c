// 函数: sub_5ad420
// 地址: 0x5ad420
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba31b
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
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[0xa] = 7
arg1[9] = 0
arg1[5].w = 0
sub_52e3c0(&arg1[5], &arg2[5], 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[0x10] = 7
arg1[0xf] = 0
arg1[0xb].w = 0
sub_52e3c0(&arg1[0xb], &arg2[0xb], 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
