// 函数: sub_563270
// 地址: 0x563270
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b3127
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
*arg1 = *arg2
*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x4c) = *(arg2 + 0x4c)
arg1[0x15] = arg2[0x15]
arg1[0x16] = arg2[0x16]
arg1[0x17] = arg2[0x17]
arg1[0x1d] = 7
arg1[0x1c] = 0
arg1[0x18].w = 0
sub_52e3c0(&arg1[0x18], &arg2[0x18], 0, 0xffffffff)
int32_t var_8_1 = 0
*(arg1 + 0x78) = *(arg2 + 0x78)
sub_551e70(&arg1[0x22], &arg2[0x22])
var_8_1.b = 1
sub_551c30(&arg1[0x25], &arg2[0x25])
*(arg1 + 0x1b4) = *(arg2 + 0x1b4)
var_8_1.b = 2
sub_551c30(&arg1[0x71], &arg2[0x71])
*(arg1 + 0x2e4) = *(arg2 + 0x2e4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
