// 函数: sub_712f50
// 地址: 0x712f50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1572
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_d3d_effect_source_creator::VTable** var_14 = arg1
*arg1 = &NT3::C_d3d_effect_source_creator::`vftable'
sub_70f5e0(&arg1[1])
arg1[0x78] = 0xf
arg1[0x77] = 0
arg1[0x73].b = 0
int32_t var_8_1 = 0
char var_44
char* var_18 = &var_44
*arg1 =
    &NT3::C_d3d_effect_source_creator_shadow_map::`vftable'{for `NT3::C_d3d_effect_source_creator'}
void* var_48 = nullptr
int32_t var_30 = 0xf
int32_t var_34 = 0
int32_t* var_4c = &data_b0018c
var_44 = 0
sub_541eb0(&var_44, var_4c, var_48)
var_8_1.b = 1
char var_5c
char* var_1c = &var_5c
void* var_60 = 2
int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
int32_t* var_64 = &data_b08ff0
var_5c = 0
sub_541eb0(&var_5c, var_64, var_60)
var_8_1.b = 2
char var_74
char* var_20 = &var_74
void* var_78 = 0xc
int32_t var_60_1 = 0xf
int32_t var_64_1 = 0
int32_t* var_7c = "MAX_MATRICES"
var_74 = 0
sub_541eb0(&var_74, var_7c, var_78)
var_8_1.b = 3
int32_t var_78_1 = 0xf
int32_t var_7c_1 = 0
char var_8c = 0
sub_541eb0(&var_8c, "static const int", 0x10)
var_8_1.b = 0
sub_701410(&arg1[0x79], var_8c)
var_8_1.b = 4
char* var_24 = &var_44
void* var_48_2 = nullptr
int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
int32_t* var_4c_2 = &data_b0018c
var_44 = 0
sub_541eb0(&var_44, var_4c_2, var_48_2)
var_8_1.b = 5
char* var_20_1 = &var_5c
void* var_60_2 = nullptr
int32_t var_48_3 = 0xf
int32_t var_4c_3 = 0
int32_t* var_64_2 = &data_b0018c
var_5c = 0
sub_541eb0(&var_5c, var_64_2, var_60_2)
var_8_1.b = 6
char* var_1c_1 = &var_74
int32_t var_60_3 = 0xf
void* var_78_2 = 0x1f
int32_t var_64_3 = 0
int32_t* var_7c_2 = "mWorldMatrixArray[MAX_MATRICES]"
var_74 = 0
sub_541eb0(&var_74, var_7c_2, var_78_2)
var_8_1.b = 7
int32_t var_78_3 = 0xf
int32_t var_7c_3 = 0
var_8c = 0
sub_541eb0(&var_8c, "float4x3", 8)
var_8_1.b = 4
sub_701410(&arg1[0x93], var_8c)
var_8_1.b = 8
char* var_24_1 = &var_44
void* var_48_4 = nullptr
int32_t var_30_2 = 0xf
int32_t var_34_2 = 0
int32_t* var_4c_4 = &data_b0018c
var_44 = 0
sub_541eb0(&var_44, var_4c_4, var_48_4)
var_8_1.b = 9
char* var_20_2 = &var_5c
void* var_60_4 = 1
int32_t var_48_5 = 0xf
int32_t var_4c_5 = 0
int32_t* var_64_4 = &data_b09020
var_5c = 0
sub_541eb0(&var_5c, var_64_4, var_60_4)
var_8_1.b = 0xa
char* var_1c_2 = &var_74
void* var_78_4 = 0xb
int32_t var_60_5 = 0xf
int32_t var_64_5 = 0
int32_t* var_7c_4 = "CurNumBones"
var_74 = 0
sub_541eb0(&var_74, var_7c_4, var_78_4)
var_8_1.b = 0xb
int32_t var_78_5 = 0xf
int32_t var_7c_5 = 0
var_8c = 0
sub_541eb0(&var_8c, &data_b08bbc, 3)
var_8_1.b = 8
sub_701410(&arg1[0xad], var_8c)
var_8_1.b = 0xc
char* var_24_2 = &var_44
void* var_48_6 = nullptr
int32_t var_30_3 = 0xf
int32_t var_34_3 = 0
int32_t* var_4c_6 = &data_b0018c
var_44 = 0
sub_541eb0(&var_44, var_4c_6, var_48_6)
var_8_1.b = 0xd
char* var_20_3 = &var_5c
int32_t var_48_7 = 0xf
void* var_60_6 = nullptr
int32_t var_4c_7 = 0
int32_t* var_64_6 = &data_b0018c
var_5c = 0
sub_541eb0(&var_5c, var_64_6, var_60_6)
var_8_1.b = 0xe
char* var_1c_3 = &var_74
void* var_78_6 = 8
int32_t var_60_7 = 0xf
int32_t var_64_7 = 0
int32_t* var_7c_6 = "mLightVP"
var_74 = 0
sub_541eb0(&var_74, var_7c_6, var_78_6)
var_8_1.b = 0xf
int32_t var_78_7 = 0xf
int32_t var_7c_7 = 0
var_8c = 0
sub_541eb0(&var_8c, "float4x4", 8)
var_8_1.b = 0xc
sub_701410(&arg1[0xc7], var_8c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
