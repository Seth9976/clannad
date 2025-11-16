// 函数: sub_5fecc0
// 地址: 0x5fecc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd7b4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
sub_54ace0(arg1, arg2)
int32_t var_8_1 = 0
*(arg1 + 0xb4) = 7
*(arg1 + 0xb0) = 0
*(arg1 + 0xa0) = 0
sub_52e3c0(arg1 + 0xa0, arg2 + 0xa0, 0, 0xffffffff)
var_8_1.b = 1
*(arg1 + 0xcc) = 7
*(arg1 + 0xc8) = 0
*(arg1 + 0xb8) = 0
sub_52e3c0(arg1 + 0xb8, arg2 + 0xb8, 0, 0xffffffff)
var_8_1.b = 2
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xd4) = *(arg2 + 0xd4)
*(arg1 + 0xd8) = *(arg2 + 0xd8)
*(arg1 + 0xdc) = *(arg2 + 0xdc)
*(arg1 + 0xe0) = *(arg2 + 0xe0)
*(arg1 + 0xe4) = *(arg2 + 0xe4)
*(arg1 + 0xe8) = *(arg2 + 0xe8)
*(arg1 + 0xec) = *(arg2 + 0xec)
*(arg1 + 0xed) = *(arg2 + 0xed)
*(arg1 + 0xee) = *(arg2 + 0xee)
*(arg1 + 0xef) = *(arg2 + 0xef)
*(arg1 + 0xf0) = *(arg2 + 0xf0)
sub_5fee10(arg1 + 0xf4, arg2 + 0xf4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
