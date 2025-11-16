// 函数: sub_5d55c0
// 地址: 0x5d55c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc14a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
*(arg1 + 0x18) = 7
*(arg1 + 0x14) = 0
*(arg1 + 4) = 0
int32_t var_8_1 = 0
*(arg1 + 0x30) = 7
*(arg1 + 0x2c) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x48) = 7
*(arg1 + 0x44) = 0
*(arg1 + 0x34) = 0
var_8_1.b = 2
sub_5d56e0(arg1 + 0x4c)
var_8_1.b = 3
*(arg1 + 0x20c) = 0
*(arg1 + 0x210) = 0
sub_5535f0(arg1 + 0x21c)
var_8_1.b = 4
sub_5535f0(arg1 + 0x1818)
__builtin_memset(arg1 + 0x2e14, 0, 0x18)
*(arg1 + 0x2e44) = 7
*(arg1 + 0x2e40) = 0
*(arg1 + 0x2e30) = 0
*(arg1 + 0x2e50) = 0
*(arg1 + 0x2e54) = 0
*(arg1 + 0x2e58) = 0
*(arg1 + 0x2e5c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
