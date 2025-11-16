// 函数: sub_552410
// 地址: 0x552410
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1b19
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int128_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2].b = arg2[2].b
*(arg1 + 0x21) = *(arg2 + 0x21)
sub_551c30(arg1 + 0x24, arg2 + 0x24)
*(arg1 + 0x144) = *(arg2 + 0x144)
int32_t var_8_1 = 0
sub_551c30(arg1 + 0x154, arg2 + 0x154)
*(arg1 + 0x274) = *(arg2 + 0x274)
var_8_1.b = 1
sub_551c30(arg1 + 0x284, arg2 + 0x284)
*(arg1 + 0x3a4) = *(arg2 + 0x3a4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
