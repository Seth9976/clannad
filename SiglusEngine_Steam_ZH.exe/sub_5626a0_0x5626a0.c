// 函数: sub_5626a0
// 地址: 0x5626a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2ec7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1
*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x74) = 7
*(arg1 + 0x70) = 0
*(arg1 + 0x60) = 0
int32_t var_8_1 = 0
__builtin_memset(arg1 + 0x78, 0, 0x1c)
var_8_1.b = 1
sub_6efae0(arg1 + 0x94)
*(arg1 + 0x1b4) = 0
*(arg1 + 0x1b8) = 0
*(arg1 + 0x1bc) = 0
*(arg1 + 0x1c0) = 0
var_8_1.b = 2
sub_6efae0(arg1 + 0x1c4)
*(arg1 + 0x2e4) = 0
*(arg1 + 0x2e8) = 0
*(arg1 + 0x2ec) = 0
*(arg1 + 0x2f0) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
