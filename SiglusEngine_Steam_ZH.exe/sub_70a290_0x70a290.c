// 函数: sub_70a290
// 地址: 0x70a290
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d07dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &NT3::C_d3d_effect_source_creator::`vftable'
sub_70f5e0(&arg1[1])
arg1[0x78] = 0xf
arg1[0x77] = 0
arg1[0x73].b = 0
int32_t var_8_1 = 0
char var_6c
char* var_18 = &var_6c
*arg1 = &
    NT3::C_d3d_effect_source_creator_skinned_mesh::`vftable'{for `NT3::C_d3d_effect_source_creator'}
void* var_70 = nullptr
int32_t var_58 = 0xf
int32_t var_5c = 0
int32_t* var_74 = &data_b0018c
var_6c = 0
sub_541eb0(&var_6c, var_74, var_70)
var_8_1.b = 1
char var_84
char* var_1c = &var_84
void* var_88 = 2
int32_t var_70_1 = 0xf
int32_t var_74_1 = 0
int32_t* var_8c = &data_b08ff0
var_84 = 0
sub_541eb0(&var_84, var_8c, var_88)
var_8_1.b = 2
char var_9c
char* var_20 = &var_9c
void* var_a0 = 0xc
int32_t var_88_1 = 0xf
int32_t var_8c_1 = 0
int32_t* var_a4 = "MAX_MATRICES"
var_9c = 0
sub_541eb0(&var_9c, var_a4, var_a0)
var_8_1.b = 3
void* var_b8 = 0x10
int32_t var_a0_1 = 0xf
int32_t var_a4_1 = 0
int32_t* var_bc = "static const int"
char var_b4 = 0
sub_541eb0(&var_b4, var_bc, var_b8)
var_8_1.b = 0
sub_701410(&arg1[0x79], var_b4)
var_8_1.b = 4
char* var_24 = &var_6c
void* var_70_2 = nullptr
int32_t var_58_1 = 0xf
int32_t var_5c_1 = 0
int32_t* var_74_2 = &data_b0018c
var_6c = 0
sub_541eb0(&var_6c, var_74_2, var_70_2)
var_8_1.b = 5
char* var_20_1 = &var_84
void* var_88_2 = nullptr
int32_t var_70_3 = 0xf
int32_t var_74_3 = 0
int32_t* var_8c_2 = &data_b0018c
var_84 = 0
sub_541eb0(&var_84, var_8c_2, var_88_2)
var_8_1.b = 6
char* var_1c_1 = &var_9c
void* var_a0_2 = 0x1f
int32_t var_88_3 = 0xf
int32_t var_8c_3 = 0
int32_t* var_a4_2 = "mWorldMatrixArray[MAX_MATRICES]"
var_9c = 0
sub_541eb0(&var_9c, var_a4_2, var_a0_2)
var_8_1.b = 7
void* var_b8_1 = 8
int32_t var_a0_3 = 0xf
int32_t var_a4_3 = 0
int32_t* var_bc_1 = "float4x3"
var_b4 = 0
sub_541eb0(&var_b4, var_bc_1, var_b8_1)
var_8_1.b = 4
sub_701410(&arg1[0x93], var_b4)
var_8_1.b = 8
char* var_24_1 = &var_6c
void* var_70_4 = nullptr
int32_t var_58_2 = 0xf
int32_t var_5c_2 = 0
int32_t* var_74_4 = &data_b0018c
var_6c = 0
sub_541eb0(&var_6c, var_74_4, var_70_4)
var_8_1.b = 9
char* var_20_2 = &var_84
void* var_88_4 = nullptr
int32_t var_70_5 = 0xf
int32_t var_74_5 = 0
int32_t* var_8c_4 = &data_b0018c
var_84 = 0
sub_541eb0(&var_84, var_8c_4, var_88_4)
var_8_1.b = 0xa
char* var_1c_2 = &var_9c
void* var_a0_4 = 6
int32_t var_88_5 = 0xf
int32_t var_8c_5 = 0
int32_t* var_a4_4 = "mWorld"
var_9c = 0
sub_541eb0(&var_9c, var_a4_4, var_a0_4)
var_8_1.b = 0xb
void* var_b8_2 = 8
int32_t var_a0_5 = 0xf
int32_t var_a4_5 = 0
int32_t* var_bc_2 = "float4x4"
var_b4 = 0
sub_541eb0(&var_b4, var_bc_2, var_b8_2)
var_8_1.b = 8
sub_701410(&arg1[0xad], var_b4)
var_8_1.b = 0xc
char* var_24_2 = &var_6c
void* var_70_6 = nullptr
int32_t var_58_3 = 0xf
int32_t var_5c_3 = 0
int32_t* var_74_6 = &data_b0018c
var_6c = 0
sub_541eb0(&var_6c, var_74_6, var_70_6)
var_8_1.b = 0xd
char* var_20_3 = &var_84
void* var_88_6 = nullptr
int32_t var_70_7 = 0xf
int32_t var_74_7 = 0
int32_t* var_8c_6 = &data_b0018c
var_84 = 0
sub_541eb0(&var_84, var_8c_6, var_88_6)
var_8_1.b = 0xe
char* var_1c_3 = &var_9c
void* var_a0_6 = 6
int32_t var_88_7 = 0xf
int32_t var_8c_7 = 0
int32_t* var_a4_6 = "mLocal"
var_9c = 0
sub_541eb0(&var_9c, var_a4_6, var_a0_6)
var_8_1.b = 0xf
void* var_b8_3 = 8
int32_t var_a0_7 = 0xf
int32_t var_a4_7 = 0
int32_t* var_bc_3 = "float4x4"
var_b4 = 0
sub_541eb0(&var_b4, var_bc_3, var_b8_3)
var_8_1.b = 0xc
sub_701410(&arg1[0xc7], var_b4)
var_8_1.b = 0x10
char* var_24_3 = &var_6c
void* var_70_8 = nullptr
int32_t var_58_4 = 0xf
int32_t var_5c_4 = 0
int32_t* var_74_8 = &data_b0018c
var_6c = 0
sub_541eb0(&var_6c, var_74_8, var_70_8)
var_8_1.b = 0x11
char* var_20_4 = &var_84
void* var_88_8 = nullptr
int32_t var_70_9 = 0xf
int32_t var_74_9 = 0
int32_t* var_8c_8 = &data_b0018c
var_84 = 0
sub_541eb0(&var_84, var_8c_8, var_88_8)
var_8_1.b = 0x12
char* var_1c_4 = &var_9c
void* var_a0_8 = 5
int32_t var_88_9 = 0xf
int32_t var_8c_9 = 0
int32_t* var_a4_8 = "mView"
var_9c = 0
sub_541eb0(&var_9c, var_a4_8, var_a0_8)
var_8_1.b = 0x13
void* var_b8_4 = 8
int32_t var_a0_9 = 0xf
int32_t var_a4_9 = 0
int32_t* var_bc_4 = "float4x4"
var_b4 = 0
sub_541eb0(&var_b4, var_bc_4, var_b8_4)
var_8_1.b = 0x10
sub_701410(&arg1[0xe1], var_b4)
var_8_1.b = 0x14
char* var_24_4 = &var_6c
void* var_70_10 = nullptr
int32_t var_58_5 = 0xf
int32_t var_5c_5 = 0
int32_t* var_74_10 = &data_b0018c
var_6c = 0
sub_541eb0(&var_6c, var_74_10, var_70_10)
var_8_1.b = 0x15
char* var_20_5 = &var_84
void* var_88_10 = nullptr
int32_t var_70_11 = 0xf
int32_t var_74_11 = 0
int32_t* var_8c_10 = &data_b0018c
var_84 = 0
sub_541eb0(&var_84, var_8c_10, var_88_10)
var_8_1.b = 0x16
char* var_1c_5 = &var_9c
void* var_a0_10 = 5
int32_t var_88_11 = 0xf
int32_t var_8c_11 = 0
int32_t* var_a4_10 = "mProj"
var_9c = 0
sub_541eb0(&var_9c, var_a4_10, var_a0_10)
var_8_1.b = 0x17
void* var_b8_5 = 8
int32_t var_a0_11 = 0xf
int32_t var_a4_11 = 0
int32_t* var_bc_5 = "float4x4"
var_b4 = 0
sub_541eb0(&var_b4, var_bc_5, var_b8_5)
var_8_1.b = 0x14
sub_701410(&arg1[0xfb], var_b4)
var_8_1.b = 0x18
char* var_24_5 = &var_6c
sub_541920(&var_6c, &data_b0018c)
var_8_1.b = 0x19
char* var_20_6 = &var_84
sub_541920(&var_84, &data_b0018c)
var_8_1.b = 0x1a
char* var_1c_6 = &var_9c
sub_541920(&var_9c, "mLightVP")
var_8_1.b = 0x1b
sub_541920(&var_b4, "float4x4")
var_8_1.b = 0x18
sub_701410(&arg1[0x115])
var_8_1.b = 0x1c
char* var_24_6 = &var_6c
sub_541920(&var_6c, &data_b0018c)
var_8_1.b = 0x1d
char* var_20_7 = &var_84
sub_541920(&var_84, &data_b0018c)
var_8_1.b = 0x1e
char* var_1c_7 = &var_9c
sub_541920(&var_9c, "mScaleBias")
var_8_1.b = 0x1f
sub_541920(&var_b4, "float4x4")
var_8_1.b = 0x1c
sub_701410(&arg1[0x12f])
var_8_1.b = 0x20
char* var_24_7 = &var_6c
sub_541920(&var_6c, &data_b0018c)
var_8_1.b = 0x21
char* var_20_8 = &var_84
sub_541920(&var_84, "1")
var_8_1.b = 0x22
char* var_1c_8 = &var_9c
sub_541920(&var_9c, "CurNumBones")
var_8_1.b = 0x23
sub_541920(&var_b4, "int")
var_8_1.b = 0x20
sub_701410(&arg1[0x149])
var_8_1.b = 0x24
sub_541920(&var_6c, "MESHTEXTURE")
sub_7140e0(&arg1[0x163], var_6c)
var_8_1.b = 0x25
char* var_24_8 = &var_6c
sub_541920(&var_6c, "Wrap")
var_8_1.b = 0x26
char* var_20_9 = &var_84
sub_541920(&var_84, "Wrap")
var_8_1.b = 0x27
struct NT3::C_d3d_effect_global_val::VTable* var_ec
struct NT3::C_d3d_effect_global_val::VTable** var_1c_9 = &var_ec
sub_703520(&var_ec, &arg1[0x163])
var_ec = &NT3::C_d3d_effect_global_texture_val::`vftable'{for `NT3::C_d3d_effect_global_val'}
var_8_1.b = 0x28
void var_104
sub_541920(&var_104, "meshSampler")
int32_t var_108_1 = 0
int128_t var_44
int128_t* var_10c = &var_44
var_8_1.b = 0x25
var_44 = data_b0db60
sub_702880(&arg1[0x17d], var_10c, var_108_1)
var_8_1.b = 0x29
sub_541920(&var_6c, "SHADOWTEXTURE")
sub_7140e0(&arg1[0x1e6])
var_8_1.b = 0x2a
char* var_24_9 = &var_6c
sub_541920(&var_6c, "0xFFFFFFFF")
var_8_1.b = 0x2b
char* var_20_10 = &var_84
sub_541920(&var_84, "Linear")
var_8_1.b = 0x2c
char* var_1c_10 = &var_9c
sub_541920(&var_9c, "Point")
var_8_1.b = 0x2d
char* var_18_1 = &var_b4
sub_541920(&var_b4, "Point")
var_8_1.b = 0x2e
void var_cc
void* var_28 = &var_cc
sub_541920(&var_cc, "Border")
var_8_1.b = 0x2f
void var_e4
void* var_2c = &var_e4
sub_541920(&var_e4, "Border")
var_8_1.b = 0x30
struct NT3::C_d3d_effect_global_val::VTable* var_14c
struct NT3::C_d3d_effect_global_val::VTable** var_30 = &var_14c
sub_703520(&var_14c, &arg1[0x1e6])
var_14c = &NT3::C_d3d_effect_global_texture_val::`vftable'{for `NT3::C_d3d_effect_global_val'}
var_8_1.b = 0x31
void var_164
sub_541920(&var_164, "shadowSampler")
var_8_1.b = 0x2a
var_44 = data_b0db10
sub_702bd0(&arg1[0x200], &var_44, 1)
var_8_1.b = 0x32
sub_541920(&var_6c, "TOONTEXTURE")
sub_7140e0(&arg1[0x269])
var_8_1.b = 0x33
char* var_34 = &var_6c
sub_541920(&var_6c, "0x00000000")
var_8_1.b = 0x34
char* var_30_1 = &var_84
sub_541920(&var_84, "Linear")
var_8_1.b = 0x35
char* var_2c_1 = &var_9c
sub_541920(&var_9c, "Linear")
var_8_1.b = 0x36
char* var_28_1 = &var_b4
sub_541920(&var_b4, "Linear")
var_8_1.b = 0x37
void* var_24_10 = &var_cc
sub_541920(&var_cc, "Clamp")
var_8_1.b = 0x38
void* var_20_11 = &var_e4
sub_541920(&var_e4, "Clamp")
var_8_1.b = 0x39
struct NT3::C_d3d_effect_global_val::VTable** var_1c_11 = &var_14c
sub_703520(&var_14c, &arg1[0x269])
var_14c = &NT3::C_d3d_effect_global_texture_val::`vftable'{for `NT3::C_d3d_effect_global_val'}
var_8_1.b = 0x3a
sub_541920(&var_164, "toonSampler")
var_44 = data_b0db60
var_8_1.b = 0x33
sub_702bd0(&arg1[0x283], &var_44, 0)
var_8_1.b = 0x3b
sub_541920(&var_6c, "NORMALTEXTURE")
sub_7140e0(&arg1[0x2ec])
var_8_1.b = 0x3c
char* var_34_1 = &var_6c
sub_541920(&var_6c, "0x00000000")
var_8_1.b = 0x3d
char* var_30_2 = &var_84
sub_541920(&var_84, "None")
var_8_1.b = 0x3e
char* var_2c_2 = &var_9c
sub_541920(&var_9c, "Linear")
var_8_1.b = 0x3f
char* var_28_2 = &var_b4
sub_541920(&var_b4, "Linear")
var_8_1.b = 0x40
void* var_24_11 = &var_cc
sub_541920(&var_cc, "Clamp")
var_8_1.b = 0x41
void* var_20_12 = &var_e4
sub_541920(&var_e4, "Clamp")
var_8_1.b = 0x42
struct NT3::C_d3d_effect_global_val::VTable** var_1c_12 = &var_14c
sub_703520(&var_14c, &arg1[0x2ec])
var_14c = &NT3::C_d3d_effect_global_texture_val::`vftable'{for `NT3::C_d3d_effect_global_val'}
var_8_1.b = 0x43
sub_541920(&var_164, "normalSampler")
var_8_1.b = 0x3c
var_44 = data_b0db60
sub_702bd0(&arg1[0x306], &var_44, 0)
var_8_1.b = 0x44
sub_7081b0(&arg1[0x36f])
var_8_1.b = 0x45
sub_6b3720(&arg1[0x73], &data_b090bc, 3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
