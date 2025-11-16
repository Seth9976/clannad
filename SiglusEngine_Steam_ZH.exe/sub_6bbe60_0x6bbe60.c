// 函数: sub_6bbe60
// 地址: 0x6bbe60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbb08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
*arg1 = 0
arg1[1] = 0
*arg1 = sub_58f9d0()
int32_t var_8_1 = 0
var_8_1.b = 1
sub_6bc0f0(arg1, arg2, 0.d)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
