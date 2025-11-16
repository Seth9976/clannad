// 函数: sub_552860
// 地址: 0x552860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1fc2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_54ace0(arg1, arg2)
int32_t var_8_1 = 0
__builtin_memcpy(arg1 + 0xa0, arg2 + 0xa0, 0x80)
*(arg1 + 0x120) = *(arg2 + 0x120)
*(arg1 + 0x124) = *(arg2 + 0x124)
*(arg1 + 0x128) = *(arg2 + 0x128)
*(arg1 + 0x140) = 7
*(arg1 + 0x13c) = 0
*(arg1 + 0x12c) = 0
sub_52e3c0(arg1 + 0x12c, arg2 + 0x12c, 0, 0xffffffff)
var_8_1.b = 1
*(arg1 + 0x158) = 7
*(arg1 + 0x154) = 0
*(arg1 + 0x144) = 0
sub_52e3c0(arg1 + 0x144, arg2 + 0x144, 0, 0xffffffff)
var_8_1.b = 2
sub_54d080(arg1 + 0x15c, arg2 + 0x15c)
*(arg1 + 0x15c) = &C_tnm_prop_list::`vftable'{for `C_elm_list<class C_tnm_prop>'}
var_8_1.b = 3
sub_54ace0(arg1 + 0x214, arg2 + 0x214)
*(arg1 + 0x2b4) = *(arg2 + 0x2b4)
*(arg1 + 0x2c4) = *(arg2 + 0x2c4)
int32_t eax_9
eax_9.b = *(arg2 + 0x2c8)
*(arg1 + 0x2c8) = eax_9.b
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
