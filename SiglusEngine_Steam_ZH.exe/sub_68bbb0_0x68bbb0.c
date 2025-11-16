// 函数: sub_68bbb0
// 地址: 0x68bbb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8a88
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
*(arg1 + 0x34) = 7
*(arg1 + 0x30) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x50) = 7
*(arg1 + 0x4c) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x6c) = 7
*(arg1 + 0x68) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x88) = 7
*(arg1 + 0x84) = 0
*(arg1 + 0x74) = 0
*(arg1 + 0xa4) = 7
*(arg1 + 0xa0) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0xc0) = 7
*(arg1 + 0xbc) = 0
*(arg1 + 0xac) = 0
*(arg1 + 0xdc) = 7
*(arg1 + 0xd8) = 0
*(arg1 + 0xc8) = 0
*(arg1 + 0xf8) = 7
*(arg1 + 0xf4) = 0
*(arg1 + 0xe4) = 0
*(arg1 + 0x114) = 7
*(arg1 + 0x110) = 0
*(arg1 + 0x100) = 0
*(arg1 + 0x130) = 7
*(arg1 + 0x12c) = 0
*(arg1 + 0x11c) = 0
*(arg1 + 0x14c) = 7
*(arg1 + 0x148) = 0
*(arg1 + 0x138) = 0
*(arg1 + 0x168) = 7
*(arg1 + 0x164) = 0
*(arg1 + 0x154) = 0
*(arg1 + 0x184) = 7
*(arg1 + 0x180) = 0
*(arg1 + 0x170) = 0
*(arg1 + 0x1a0) = 7
*(arg1 + 0x19c) = 0
*(arg1 + 0x18c) = 0
int32_t (__fastcall* var_20)(void* arg1) = sub_5a3e30
var_8_1.b = 0xe
sub_74675f(arg1 + 0x1a8, 0x1c, 4, sub_68cd50)
int32_t (__fastcall* var_20_1)(void* arg1) = sub_68cde0
var_8_1.b = 0xf
sub_74675f(arg1 + 0x21c, 0xe4, 4, sub_68cd70)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
