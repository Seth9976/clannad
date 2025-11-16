// 函数: sub_5535f0
// 地址: 0x5535f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2196
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
*(arg1 + 0x7c) = 0
*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
int32_t var_8_1 = 0
*(arg1 + 0x128) = 0
*(arg1 + 0x1a8) = 0
sub_553b30(arg1 + 0x1ac)
*(arg1 + 0x12d8) = 0
*(arg1 + 0x12dc) = 0
FI::`default constructor closure'(arg1 + 0x12d0)
sub_54eb30(arg1 + 0x1390)
*(arg1 + 0x154c) = 0
*(arg1 + 0x1550) = 0
*(arg1 + 0x1554) = 0
__builtin_memset(arg1 + 0x155c, 0, 0x40)
var_8_1.b = 9
EnumC13Lines::EnumC13Lines(arg1 + 0x159c)
*(arg1 + 0x15e0) = 0
*(arg1 + 0x15e4) = 0
*(arg1 + 0x15ec) = 0
*(arg1 + 0x15f0) = 0
*(arg1 + 0x15f4) = 0
*(arg1 + 0x15f8) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
