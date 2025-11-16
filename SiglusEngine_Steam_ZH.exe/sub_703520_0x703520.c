// 函数: sub_703520
// 地址: 0x703520
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cef41
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_d3d_effect_global_val::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_d3d_effect_global_val::VTable** var_14_1 = arg1
*arg1 = &NT3::C_d3d_effect_global_val::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
sub_541b40(&arg1[1], arg2 + 4, 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0
sub_541b40(&arg1[7], arg2 + 0x1c, 0, 0xffffffff)
var_8_1.b = 1
arg1[0x12] = 0xf
arg1[0x11] = 0
arg1[0xd].b = 0
sub_541b40(&arg1[0xd], arg2 + 0x34, 0, 0xffffffff)
var_8_1.b = 2
arg1[0x18] = 0xf
arg1[0x17] = 0
arg1[0x13].b = 0
sub_541b40(&arg1[0x13], arg2 + 0x4c, 0, 0xffffffff)
arg1[0x19] = *(arg2 + 0x64)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
