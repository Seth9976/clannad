// 函数: sub_7138c0
// 地址: 0x7138c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1643
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
data_4ebee3c = 0
data_4ebee40 = 0
data_4ebee44 = 0
int32_t var_8_1 = 0
data_4ebee48 =
    &NT3::C_d3d_directional_light_creator::`vftable'{for `NT3::C_d3d_light_creator_interface'}
data_4ebee4c = &NT3::C_d3d_point_light_creator::`vftable'{for `NT3::C_d3d_light_creator_interface'}
data_4ebee50 = &NT3::C_d3d_spot_light_creator::`vftable'{for `NT3::C_d3d_light_creator_interface'}
var_8_1.b = 1
int32_t* var_1c = &data_4ebee3c
int32_t var_20 = ecx
sub_579a70(nullptr, 0)
int32_t eax_3 = data_4ebee3c
int32_t ecx_2 = data_4ebee44 - eax_3
data_4ebee40 = eax_3
int32_t ecx_3 = ecx_2 s>> 3

if (ecx_3 u< 0x80)
    ecx_3 = sub_713b40(0x80)

int32_t var_1c_1 = ecx_3
sub_713a40()
fsbase->NtTib.ExceptionList = ExceptionList
return &data_4ebee3c
