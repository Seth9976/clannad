// 函数: sub_5633a0
// 地址: 0x5633a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b315b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = *arg2
*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x4c) = *(arg2 + 0x4c)
arg1[0x1a] = 7
arg1[0x19] = 0
arg1[0x15].w = 0
sub_52e3c0(&arg1[0x15], &arg2[0x15], 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[0x1b] = arg2[0x1b]
arg1[0x1c] = arg2[0x1c]
arg1[0x1d] = arg2[0x1d]
int32_t eax_7
eax_7.b = arg2[0x1e].b
arg1[0x1e].b = eax_7.b
sub_563540(&arg1[0x1f], &arg2[0x1f])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
