// 函数: sub_7112d0
// 地址: 0x7112d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1277
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_d3d_effect_global_val::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_d3d_effect_global_val::NT3::C_d3d_effect_global_sampler_val::VTable** result = arg1
struct NT3::C_d3d_effect_global_val::NT3::C_d3d_effect_global_sampler_val::VTable** result_1 =
    result
sub_703520(arg1, arg2)
int32_t var_8_1 = 0
*result = &NT3::C_d3d_effect_global_sampler_val::`vftable'{for `NT3::C_d3d_effect_global_val'}
sub_703520(&result[0x1a], arg2 + 0x68)
result[0x1a] = &NT3::C_d3d_effect_global_texture_val::`vftable'{for `NT3::C_d3d_effect_global_val'}
var_8_1.b = 1
sub_711460(&result[0x34], arg2 + 0xd0)
var_8_1.b = 2
result[0x4a] = 0xf
result[0x49] = 0
result[0x45].b = 0
sub_541b40(&result[0x45], arg2 + 0x114, 0, 0xffffffff)
var_8_1.b = 3
result[0x50] = 0xf
result[0x4f] = 0
result[0x4b].b = 0
sub_541b40(&result[0x4b], arg2 + 0x12c, 0, 0xffffffff)
var_8_1.b = 4
result[0x56] = 0xf
result[0x55] = 0
result[0x51].b = 0
sub_541b40(&result[0x51], arg2 + 0x144, 0, 0xffffffff)
var_8_1.b = 5
result[0x5c] = 0xf
result[0x5b] = 0
result[0x57].b = 0
sub_541b40(&result[0x57], arg2 + 0x15c, 0, 0xffffffff)
var_8_1.b = 6
result[0x62] = 0xf
result[0x61] = 0
result[0x5d].b = 0
sub_541b40(&result[0x5d], arg2 + 0x174, 0, 0xffffffff)
var_8_1.b = 7
result[0x68] = 0xf
result[0x67] = 0
result[0x63].b = 0
sub_541b40(&result[0x63], arg2 + 0x18c, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return result
