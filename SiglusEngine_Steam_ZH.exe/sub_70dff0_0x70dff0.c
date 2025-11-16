// 函数: sub_70dff0
// 地址: 0x70dff0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0b78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_541eb0(&var_28, "VertexColor", 0xb)
int32_t var_8_1 = 0
*arg1 = &NT3::C_d3d_effect_func_interface::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
sub_541b40(&arg1[1], &var_28, 0, 0xffffffff)

if (var_14 u>= 0x10)
    j__free(var_28.d)

*arg1 = &NT3::C_d3d_effect_vertex_color_func::`vftable'{for `NT3::C_d3d_effect_func_interface'}
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
