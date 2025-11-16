// 函数: sub_6054b0
// 地址: 0x6054b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b479b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = arg2
arg1[1] = 0
int32_t* var_20 = &arg1[1]
int32_t var_8_1 = 0
sub_605770(&arg1[1], arg2, arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
