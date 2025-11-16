// 函数: sub_70f5e0
// 地址: 0x70f5e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0e4a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = 0
arg1[1] = 0
*arg1 = sub_711250()
int32_t var_8_1 = 0
arg1[2] = 0
arg1[3] = 0
arg1[2] = sub_711280()
var_8_1.b = 1
sub_70e6c0(&arg1[4])
var_8_1.b = 2
sub_70ed40(&arg1[0x24])
var_8_1.b = 3
sub_70f1d0(&arg1[0x43])
var_8_1.b = 4
sub_70f2b0(&arg1[0x62])
arg1[0x71] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
