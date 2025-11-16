// 函数: sub_5fee10
// 地址: 0x5fee10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd7e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
sub_5feed0(arg1, arg2)
int32_t var_8_1 = 0
arg1[0x4a] = arg2[0x4a]
arg1[0x4b] = arg2[0x4b]
arg1[0x4c] = arg2[0x4c]
arg1[0x52] = 7
arg1[0x51] = 0
arg1[0x4d].w = 0
sub_52e3c0(&arg1[0x4d], &arg2[0x4d], 0, 0xffffffff)
var_8_1.b = 1
arg1[0x53] = arg2[0x53]
sub_5360a0(&arg1[0x54], &arg2[0x54])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
