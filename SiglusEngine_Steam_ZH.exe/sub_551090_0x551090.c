// 函数: sub_551090
// 地址: 0x551090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b19d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
*(arg1 + 0x7c) = 0
*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
int32_t var_8_1 = 0
sub_54eb30(arg1 + 0xa0)
*(arg1 + 0x274) = 7
*(arg1 + 0x270) = 0
*(arg1 + 0x260) = 0
*(arg1 + 0x28c) = 7
*(arg1 + 0x288) = 0
*(arg1 + 0x278) = 0
*(arg1 + 0x2a4) = 7
*(arg1 + 0x2a0) = 0
*(arg1 + 0x290) = 0
var_8_1.b = 4
*(arg1 + 0x2b0) = 0
*(arg1 + 0x2b4) = 0
*(arg1 + 0x2b8) = 0
*(arg1 + 0x2bc) = 0
EnumC13Lines::EnumC13Lines(arg1 + 0x2c0)
__builtin_memset(arg1 + 0x304, 0, 0x1c)
var_8_1.b = 8
sub_6efae0(arg1 + 0x320)
*(arg1 + 0x440) = 0
*(arg1 + 0x444) = 0
*(arg1 + 0x448) = 0
*(arg1 + 0x44c) = 0
var_8_1.b = 9
sub_6efae0(arg1 + 0x450)
*(arg1 + 0x570) = 0
*(arg1 + 0x574) = 0
*(arg1 + 0x578) = 0
*(arg1 + 0x57c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
