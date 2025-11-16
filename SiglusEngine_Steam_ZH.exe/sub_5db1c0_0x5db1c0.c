// 函数: sub_5db1c0
// 地址: 0x5db1c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1b19
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
sub_6efae0(arg1 + 0x24)
*(arg1 + 0x144) = 0
*(arg1 + 0x148) = 0
*(arg1 + 0x14c) = 0
*(arg1 + 0x150) = 0
int32_t var_8_1 = 0
sub_6efae0(arg1 + 0x154)
*(arg1 + 0x274) = 0
*(arg1 + 0x278) = 0
*(arg1 + 0x27c) = 0
*(arg1 + 0x280) = 0
var_8_1.b = 1
sub_6efae0(arg1 + 0x284)
*(arg1 + 0x3a4) = 0
*(arg1 + 0x3a8) = 0
*(arg1 + 0x3ac) = 0
*(arg1 + 0x3b0) = 0
__builtin_memset(arg1, 0, 0x18)
*(arg1 + 0x20) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
