// 函数: sub_563f40
// 地址: 0x563f40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b3266
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
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
*(arg1 + 0x2c) = *(arg2 + 0x2c)
sub_551b10(&arg1[0xf], &arg2[0xf])
var_8_1.b = 1
sub_551e70(&arg1[0x20], &arg2[0x20])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
