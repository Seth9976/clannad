// 函数: sub_698a90
// 地址: 0x698a90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9218
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
*arg1 = 0
arg1[1] = 0
*arg1 = sub_642730()
int32_t var_8_1 = 0
var_8_1.b = 1
sub_698b30(arg1, arg2, 0.d)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
