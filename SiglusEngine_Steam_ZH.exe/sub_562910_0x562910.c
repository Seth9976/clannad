// 函数: sub_562910
// 地址: 0x562910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2f56
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
int32_t var_8_1 = 0
*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0
var_8_1.b = 1
sub_6efae0(arg1 + 0x2c)
*(arg1 + 0x14c) = 0
*(arg1 + 0x150) = 0
*(arg1 + 0x154) = 0
*(arg1 + 0x158) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
