// 函数: sub_7081b0
// 地址: 0x7081b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0510
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_d8 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_8_1 = 0
char var_fc
char* var_d4 = &var_fc
void* var_100 = nullptr
int32_t var_e8 = 0xf
int32_t var_ec = 0
int32_t* var_104 = &data_b0018c
var_fc = 0
sub_541eb0(&var_fc, var_104, var_100)
var_8_1.b = 1
char var_114
char* var_cc = &var_114
void* var_118 = 0x27
int32_t var_100_1 = 0xf
int32_t var_104_1 = 0
int32_t* var_11c = "float4(0.2989f, 0.5886f, 0.1145f, 0.0f)"
var_114 = 0
sub_541eb0(&var_114, var_11c, var_118)
var_8_1.b = 2
char var_12c
char* var_d0 = &var_12c
void* var_130 = 6
int32_t var_118_1 = 0xf
int32_t var_11c_1 = 0
int32_t* var_134 = "g_Mono"
var_12c = 0
sub_541eb0(&var_12c, var_134, var_130)
var_8_1.b = 3
int32_t var_130_1 = 0xf
int32_t var_134_1 = 0
char var_144 = 0
sub_541eb0(&var_144, "float4", 6)
var_8_1.b = 0
var_8_1.b = 4
struct NT3::C_d3d_effect_global_val::VTable* var_ac
sub_70c4d0(arg1, sub_701410(&var_ac, var_144))
var_8_1.b = 0
sub_702710(&var_ac)
char* var_c8 = &var_fc
void* var_100_2 = nullptr
int32_t var_e8_2 = 0xf
int32_t var_ec_1 = 0
int32_t* var_104_2 = &data_b0018c
var_fc = 0
sub_541eb0(&var_fc, var_104_2, var_100_2)
var_8_1.b = 5
char* var_d0_1 = &var_114
void* var_118_2 = 0x1e
int32_t var_100_3 = 0xf
int32_t var_104_3 = 0
int32_t* var_11c_2 = "float4(0.0f, 0.0f, 0.0f, 0.0f)"
var_114 = 0
sub_541eb0(&var_114, var_11c_2, var_118_2)
var_8_1.b = 6
char* var_cc_1 = &var_12c
void* var_130_2 = 4
int32_t* var_134_2 = "g_C0"
int32_t var_118_3 = 0xf
int32_t var_11c_3 = 0
var_12c = 0
sub_541eb0(&var_12c, var_134_2, var_130_2)
var_8_1.b = 7
int32_t var_130_3 = 0xf
int32_t var_134_3 = 0
var_144 = 0
sub_541eb0(&var_144, "float4", 6)
var_8_1.b = 0
var_8_1.b = 8
sub_70c4d0(arg1, sub_701410(&var_ac, var_144))
var_8_1.b = 0
sub_702710(&var_ac)
char* var_c8_1 = &var_fc
void* var_100_4 = nullptr
int32_t var_e8_4 = 0xf
int32_t var_ec_2 = 0
int32_t* var_104_4 = &data_b0018c
var_fc = 0
sub_541eb0(&var_fc, var_104_4, var_100_4)
var_8_1.b = 9
char* var_d0_2 = &var_114
void* var_118_4 = 0x1e
int32_t var_100_5 = 0xf
int32_t var_104_5 = 0
int32_t* var_11c_4 = "float4(0.0f, 0.0f, 0.0f, 0.0f)"
var_114 = 0
sub_541eb0(&var_114, var_11c_4, var_118_4)
var_8_1.b = 0xa
char* var_cc_2 = &var_12c
void* var_130_4 = 4
int32_t var_118_5 = 0xf
int32_t var_11c_5 = 0
int32_t* var_134_4 = "g_C1"
var_12c = 0
sub_541eb0(&var_12c, var_134_4, var_130_4)
var_8_1.b = 0xb
int32_t var_130_5 = 0xf
int32_t var_134_5 = 0
var_144 = 0
sub_541eb0(&var_144, "float4", 6)
var_8_1.b = 0
var_8_1.b = 0xc
sub_70c4d0(arg1, sub_701410(&var_ac, var_144))
var_8_1.b = 0
sub_702710(&var_ac)
char* var_c8_2 = &var_fc
void* var_100_6 = nullptr
int32_t var_e8_6 = 0xf
int32_t var_ec_3 = 0
int32_t* var_104_6 = &data_b0018c
var_fc = 0
sub_541eb0(&var_fc, var_104_6, var_100_6)
var_8_1.b = 0xd
char* var_d0_3 = &var_114
void* var_118_6 = 0x1e
int32_t var_100_7 = 0xf
int32_t var_104_7 = 0
int32_t* var_11c_6 = "float4(0.0f, 0.0f, 0.0f, 0.0f)"
var_114 = 0
sub_541eb0(&var_114, var_11c_6, var_118_6)
var_8_1.b = 0xe
char* var_cc_3 = &var_12c
void* var_130_6 = 4
int32_t var_118_7 = 0xf
int32_t var_11c_7 = 0
int32_t* var_134_6 = "g_C2"
var_12c = 0
sub_541eb0(&var_12c, var_134_6, var_130_6)
var_8_1.b = 0xf
int32_t var_130_7 = 0xf
int32_t var_134_7 = 0
var_144 = 0
sub_541eb0(&var_144, "float4", 6)
var_8_1.b = 0
var_8_1.b = 0x10
sub_70c4d0(arg1, sub_701410(&var_ac, var_144))
var_8_1.b = 0
sub_702710(&var_ac)
char* var_c8_3 = &var_fc
void* var_100_8 = nullptr
int32_t var_e8_8 = 0xf
int32_t var_ec_4 = 0
int32_t* var_104_8 = &data_b0018c
var_fc = 0
sub_541eb0(&var_fc, var_104_8, var_100_8)
var_8_1.b = 0x11
char* var_d0_4 = &var_114
void* var_118_8 = 0x1e
int32_t var_100_9 = 0xf
int32_t var_104_9 = 0
int32_t* var_11c_8 = "float4(0.0f, 0.0f, 0.0f, 0.0f)"
var_114 = 0
sub_541eb0(&var_114, var_11c_8, var_118_8)
var_8_1.b = 0x12
char* var_cc_4 = &var_12c
sub_541920(&var_12c, "g_C3")
var_8_1.b = 0x13
sub_541920(&var_144, "float4")
var_8_1.b = 0
var_8_1.b = 0x14
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0
sub_702710(&var_ac)
char* var_c8_4 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0x15
char* var_d0_5 = &var_114
sub_541920(&var_114, "float4(0.0f, 0.0f, 0.0f, 1.0f)")
var_8_1.b = 0x16
char* var_cc_5 = &var_12c
sub_541920(&var_12c, "g_MaterialDiffuse")
var_8_1.b = 0x17
sub_541920(&var_144, "float4")
var_8_1.b = 0
var_8_1.b = 0x18
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0
sub_702710(&var_ac)
char* var_c8_5 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0x19
char* var_d0_6 = &var_114
sub_541920(&var_114, "float4(0.0f, 0.0f, 0.0f, 1.0f)")
var_8_1.b = 0x1a
char* var_cc_6 = &var_12c
sub_541920(&var_12c, "g_MaterialAmbient")
var_8_1.b = 0x1b
sub_541920(&var_144, "float4")
var_8_1.b = 0
var_8_1.b = 0x1c
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0
sub_702710(&var_ac)
char* var_c8_6 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0x1d
char* var_d0_7 = &var_114
sub_541920(&var_114, "float4(1.0f, 1.0f, 1.0f, 1.0f)")
var_8_1.b = 0x1e
char* var_cc_7 = &var_12c
sub_541920(&var_12c, "g_MaterialSpecular")
var_8_1.b = 0x1f
sub_541920(&var_144, "float4")
var_8_1.b = 0
var_8_1.b = 0x20
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0
sub_702710(&var_ac)
char* var_c8_7 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0x21
char* var_d0_8 = &var_114
sub_541920(&var_114, "float(1.0f)")
var_8_1.b = 0x22
char* var_cc_8 = &var_12c
sub_541920(&var_12c, "g_MaterialSpecularPower")
var_8_1.b = 0x23
sub_541920(&var_144, "float")
var_8_1.b = 0
var_8_1.b = 0x24
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0
sub_702710(&var_ac)
char* var_c8_8 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0x25
char* var_d0_9 = &var_114
sub_541920(&var_114, "float4(0.0f, 0.0f, 0.0f, 0.0f)")
var_8_1.b = 0x26
char* var_cc_9 = &var_12c
sub_541920(&var_12c, "g_MaterialEmissive")
var_8_1.b = 0x27
sub_541920(&var_144, "float4")
var_8_1.b = 0
var_8_1.b = 0x28
sub_70c4d0(arg1, sub_701410(&var_ac))
int32_t ecx_70 = sub_702710(&var_ac)
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
int32_t var_e8_15 = ecx_70
var_8_1.b = 0x29
int32_t var_2c
sub_6ad9b0(&var_2c)
var_8_1.b = 0x2a
char var_c4
char* eax_14 = sub_6af1a0(&var_c4)
var_8_1.b = 0x2b

if (&var_44 != eax_14)
    sub_541b40(&var_44, eax_14, 0, 0xffffffff)

int32_t var_b0

if (var_b0 u>= 0x10)
    j__free(var_c4.d)

var_8_1.b = 0x29
int32_t var_b0_1 = 0xf
int32_t var_b4 = 0
var_c4 = 0
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c)

char* var_c8_9 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0x2c
char* var_d0_10 = &var_114
void* var_118_14 = 0xffffffff
int32_t var_11c_9 = 0
int32_t var_100_16 = 0xf
int32_t var_104_10 = 0
void** var_120 = &var_44
var_114 = 0
sub_541b40(&var_114, var_120, var_11c_9, var_118_14)
var_8_1.b = 0x2d
char* var_cc_10 = &var_12c
sub_541920(&var_12c, "DLIGHT_MAX")
var_8_1.b = 0x2e
sub_541920(&var_144, "static const int")
var_8_1.b = 0x29
var_8_1.b = 0x2f
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_10 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0x30
char* var_d0_11 = &var_114
sub_541920(&var_114, "0")
var_8_1.b = 0x31
char* var_cc_11 = &var_12c
sub_541920(&var_12c, "g_DLightNum")
var_8_1.b = 0x32
sub_541920(&var_144, "int")
var_8_1.b = 0x29
var_8_1.b = 0x33
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_11 = &var_fc
var_8_1.b = 0x34
int32_t* eax_18 = sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
    "@float4(0.7f, 0.7f, 0.7f, 1.0f)@")
var_8_1.b = 0x35
char* var_d0_12 = &var_114
void* var_118_16 = 0xffffffff
int32_t var_11c_10 = 0
int32_t var_100_20 = 0xf
int32_t var_104_11 = 0
var_114 = 0
sub_541b40(&var_114, eax_18, var_11c_10, var_118_16)
var_8_1.b = 0x36
char* var_cc_12 = &var_12c
sub_541920(&var_12c, "g_DLightDiffuse[DLIGHT_MAX]")
var_8_1.b = 0x37
sub_541920(&var_144, "float4")
var_8_1.b = 0x38
var_8_1.b = 0x39
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29

if (var_18 u>= 0x10)
    j__free(var_2c)

char* var_c8_12 = &var_fc
var_8_1.b = 0x3a
int32_t* eax_21 = sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
    "@float4(0.3f, 0.3f, 0.3f, 1.0f)@")
var_8_1.b = 0x3b
char* var_d0_13 = &var_114
void* var_118_17 = 0xffffffff
int32_t var_11c_11 = 0
int32_t var_100_23 = 0xf
int32_t var_104_12 = 0
var_114 = 0
sub_541b40(&var_114, eax_21, var_11c_11, var_118_17)
var_8_1.b = 0x3c
char* var_cc_13 = &var_12c
sub_541920(&var_12c, "g_DLightAmbient[DLIGHT_MAX]")
var_8_1.b = 0x3d
sub_541920(&var_144, "float4")
var_8_1.b = 0x3e
var_8_1.b = 0x3f
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29

if (var_18 u>= 0x10)
    j__free(var_2c)

char* var_c8_13 = &var_fc
var_8_1.b = 0x40
int32_t* eax_24 = sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
    "@float4(0.3f, 0.3f, 0.3f, 1.0f)@")
var_8_1.b = 0x41
char* var_d0_14 = &var_114
void* var_118_18 = 0xffffffff
int32_t var_11c_12 = 0
int32_t var_100_26 = 0xf
int32_t var_104_13 = 0
var_114 = 0
sub_541b40(&var_114, eax_24, var_11c_12, var_118_18)
var_8_1.b = 0x42
char* var_cc_14 = &var_12c
sub_541920(&var_12c, "g_DLightSpecular[DLIGHT_MAX]")
var_8_1.b = 0x43
sub_541920(&var_144, "float4")
var_8_1.b = 0x44
var_8_1.b = 0x45
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29

if (var_18 u>= 0x10)
    j__free(var_2c)

char* var_c8_14 = &var_fc
var_8_1.b = 0x46
int32_t* eax_27 = sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
    "@float4(0.0f, 0.0f, 0.0f, 0.0f)@")
var_8_1.b = 0x47
char* var_d0_15 = &var_114
void* var_118_19 = 0xffffffff
int32_t var_11c_13 = 0
int32_t var_100_29 = 0xf
int32_t var_104_14 = 0
var_114 = 0
sub_541b40(&var_114, eax_27, var_11c_13, var_118_19)
var_8_1.b = 0x48
char* var_cc_15 = &var_12c
sub_541920(&var_12c, "g_DLightLocalDir[DLIGHT_MAX]")
var_8_1.b = 0x49
sub_541920(&var_144, "float4")
var_8_1.b = 0x4a
var_8_1.b = 0x4b
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29

if (var_18 u>= 0x10)
    j__free(var_2c)

char* var_c8_15 = &var_fc
var_8_1.b = 0x4c
int32_t* eax_30 = sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
    "@float4(0.0f, 0.0f, 0.0f, 0.0f)@")
var_8_1.b = 0x4d
char* var_d0_16 = &var_114
void* var_118_20 = 0xffffffff
int32_t var_11c_14 = 0
int32_t var_100_32 = 0xf
int32_t var_104_15 = 0
var_114 = 0
sub_541b40(&var_114, eax_30, var_11c_14, var_118_20)
var_8_1.b = 0x4e
char* var_cc_16 = &var_12c
sub_541920(&var_12c, "g_DLightWorldDir[DLIGHT_MAX]")
var_8_1.b = 0x4f
sub_541920(&var_144, "float4")
var_8_1.b = 0x50
var_8_1.b = 0x51
sub_70c4d0(arg1, sub_701410(&var_ac))
int32_t ecx_128 = sub_702710(&var_ac)
var_8_1.b = 0x29

if (var_18 u>= 0x10)
    ecx_128 = j__free(var_2c)

int32_t var_e8_31 = ecx_128
sub_6ad9b0(&var_2c)
var_8_1.b = 0x52
char* eax_33 = sub_6af1a0(&var_c4)
var_8_1.b = 0x53

if (&var_44 != eax_33)
    sub_541b40(&var_44, eax_33, 0, 0xffffffff)

if (var_b0_1 u>= 0x10)
    j__free(var_c4.d)

var_8_1.b = 0x29
int32_t var_b0_2 = 0xf
int32_t var_b4_1 = 0
var_c4 = 0

if (var_18 u>= 8)
    j__free(var_2c)

char* var_c8_16 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0x54
char* var_d0_17 = &var_114
void* var_118_21 = 0xffffffff
int32_t var_11c_15 = 0
int32_t var_100_34 = 0xf
int32_t var_104_16 = 0
void** var_120_6 = &var_44
var_114 = 0
sub_541b40(&var_114, var_120_6, var_11c_15, var_118_21)
var_8_1.b = 0x55
char* var_cc_17 = &var_12c
sub_541920(&var_12c, "PLIGHT_MAX")
var_8_1.b = 0x56
sub_541920(&var_144, "static const int")
var_8_1.b = 0x29
var_8_1.b = 0x57
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_17 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0x58
char* var_d0_18 = &var_114
sub_541920(&var_114, "0")
var_8_1.b = 0x59
char* var_cc_18 = &var_12c
sub_541920(&var_12c, "g_PLightNum")
var_8_1.b = 0x5a
sub_541920(&var_144, "int")
var_8_1.b = 0x29
var_8_1.b = 0x5b
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_18 = &var_fc
var_8_1.b = 0x5c
int32_t* eax_37 = sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
    "@float4(0.7f, 0.7f, 0.7f, 1.0f)@")
var_8_1.b = 0x5d
char* var_d0_19 = &var_114
void* var_118_23 = 0xffffffff
int32_t var_11c_16 = 0
int32_t var_100_38 = 0xf
int32_t var_104_17 = 0
var_114 = 0
sub_541b40(&var_114, eax_37, var_11c_16, var_118_23)
var_8_1.b = 0x5e
char* var_cc_19 = &var_12c
sub_541920(&var_12c, "g_PLightDiffuse[PLIGHT_MAX]")
var_8_1.b = 0x5f
sub_541920(&var_144, "float4")
var_8_1.b = 0x60
var_8_1.b = 0x61
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29

if (var_18 u>= 0x10)
    j__free(var_2c)

char* var_c8_19 = &var_fc
var_8_1.b = 0x62
int32_t* eax_40 = sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
    "@float4(0.3f, 0.3f, 0.3f, 1.0f)@")
var_8_1.b = 0x63
char* var_d0_20 = &var_114
void* var_118_24 = 0xffffffff
int32_t var_11c_17 = 0
int32_t var_100_41 = 0xf
int32_t var_104_18 = 0
var_114 = 0
sub_541b40(&var_114, eax_40, var_11c_17, var_118_24)
var_8_1.b = 0x64
char* var_cc_20 = &var_12c
sub_541920(&var_12c, "g_PLightAmbient[PLIGHT_MAX]")
var_8_1.b = 0x65
sub_541920(&var_144, "float4")
var_8_1.b = 0x66
var_8_1.b = 0x67
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29

if (var_18 u>= 0x10)
    j__free(var_2c)

char* var_c8_20 = &var_fc
var_8_1.b = 0x68
int32_t* eax_43 = sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
    "@float4(0.3f, 0.3f, 0.3f, 1.0f)@")
var_8_1.b = 0x69
char* var_d0_21 = &var_114
void* var_118_25 = 0xffffffff
int32_t var_11c_18 = 0
int32_t var_100_44 = 0xf
int32_t var_104_19 = 0
var_114 = 0
sub_541b40(&var_114, eax_43, var_11c_18, var_118_25)
var_8_1.b = 0x6a
char* var_cc_21 = &var_12c
sub_541920(&var_12c, "g_PLightSpecular[PLIGHT_MAX]")
var_8_1.b = 0x6b
sub_541920(&var_144, "float4")
var_8_1.b = 0x6c
var_8_1.b = 0x6d
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29

if (var_18 u>= 0x10)
    j__free(var_2c)

char* var_c8_21 = &var_fc
var_8_1.b = 0x6e
int32_t* eax_46 = sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
    "@float4(0.0f, 0.0f, 0.0f, 0.0f)@")
var_8_1.b = 0x6f
char* var_d0_22 = &var_114
void* var_118_26 = 0xffffffff
int32_t var_11c_19 = 0
int32_t var_100_47 = 0xf
int32_t var_104_20 = 0
var_114 = 0
sub_541b40(&var_114, eax_46, var_11c_19, var_118_26)
var_8_1.b = 0x70
char* var_cc_22 = &var_12c
sub_541920(&var_12c, "g_PLightLocalPos[PLIGHT_MAX]")
var_8_1.b = 0x71
sub_541920(&var_144, "float4")
var_8_1.b = 0x72
var_8_1.b = 0x73
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29

if (var_18 u>= 0x10)
    j__free(var_2c)

char* var_c8_22 = &var_fc
var_8_1.b = 0x74
int32_t* eax_49 = sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
    "@float4(0.0f, 0.0f, 0.0f, 0.0f)@")
var_8_1.b = 0x75
char* var_d0_23 = &var_114
void* var_118_27 = 0xffffffff
int32_t var_11c_20 = 0
int32_t var_100_50 = 0xf
int32_t var_104_21 = 0
var_114 = 0
sub_541b40(&var_114, eax_49, var_11c_20, var_118_27)
var_8_1.b = 0x76
char* var_cc_23 = &var_12c
sub_541920(&var_12c, "g_PLightWorldPos[PLIGHT_MAX]")
var_8_1.b = 0x77
sub_541920(&var_144, "float4")
var_8_1.b = 0x78
var_8_1.b = 0x79
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29

if (var_18 u>= 0x10)
    j__free(var_2c)

char* var_c8_23 = &var_fc
var_8_1.b = 0x7a
int32_t* eax_52 = sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
    "@float4(0.001f, 0.0f, 0.0f, 0.0f)@")
var_8_1.b = 0x7b
char* var_d0_24 = &var_114
void* var_118_28 = 0xffffffff
int32_t var_11c_21 = 0
int32_t var_100_53 = 0xf
int32_t var_104_22 = 0
var_114 = 0
sub_541b40(&var_114, eax_52, var_11c_21, var_118_28)
var_8_1.b = 0x7c
char* var_cc_24 = &var_12c
sub_541920(&var_12c, "g_PLightAttenuationsRange[PLIGHT_MAX]")
var_8_1.b = 0x7d
sub_541920(&var_144, "float4")
var_8_1.b = 0x7e
var_8_1.b = 0x7f
sub_70c4d0(arg1, sub_701410(&var_ac))
int32_t ecx_194 = sub_702710(&var_ac)
var_8_1.b = 0x29

if (var_18 u>= 0x10)
    ecx_194 = j__free(var_2c)

int32_t var_e8_49 = ecx_194
sub_6ad9b0(&var_c4)
var_8_1.b = 0x80
char* eax_55 = sub_6af1a0(&var_2c)
var_8_1.b = 0x81

if (&var_44 != eax_55)
    sub_6aff80(eax_55)

sub_53f510(&var_2c)
var_8_1.b = 0x29
sub_52e8a0(&var_c4)
char* var_c8_24 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0x82
char* var_d0_25 = &var_114
sub_670320(&var_114, &var_44)
var_8_1.b = 0x83
char* var_cc_25 = &var_12c
sub_541920(&var_12c, "SLIGHT_MAX")
var_8_1.b = 0x84
sub_541920(&var_144, "static const int")
var_8_1.b = 0x29
var_8_1.b = 0x85
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_25 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0x86
char* var_d0_26 = &var_114
sub_541920(&var_114, "0")
var_8_1.b = 0x87
char* var_cc_26 = &var_12c
sub_541920(&var_12c, "g_SLightNum")
var_8_1.b = 0x88
sub_541920(&var_144, "int")
var_8_1.b = 0x29
var_8_1.b = 0x89
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_26 = &var_fc
var_8_1.b = 0x8a
var_8_1.b = 0x8b
char* var_d0_27 = &var_114
sub_6693e0(&var_114, 
    sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
        "@float4(0.7f, 0.7f, 0.7f, 1.0f)@"))
var_8_1.b = 0x8c
char* var_cc_27 = &var_12c
sub_541920(&var_12c, "g_SLightDiffuse[SLIGHT_MAX]")
var_8_1.b = 0x8d
sub_541920(&var_144, "float4")
var_8_1.b = 0x8e
var_8_1.b = 0x8f
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29
sub_53f510(&var_2c)
char* var_c8_27 = &var_fc
var_8_1.b = 0x90
var_8_1.b = 0x91
char* var_d0_28 = &var_114
sub_6693e0(&var_114, 
    sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
        "@float4(0.3f, 0.3f, 0.3f, 1.0f)@"))
var_8_1.b = 0x92
char* var_cc_28 = &var_12c
sub_541920(&var_12c, "g_SLightAmbient[SLIGHT_MAX]")
var_8_1.b = 0x93
sub_541920(&var_144, "float4")
var_8_1.b = 0x94
var_8_1.b = 0x95
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29
sub_53f510(&var_2c)
char* var_c8_28 = &var_fc
var_8_1.b = 0x96
var_8_1.b = 0x97
char* var_d0_29 = &var_114
sub_6693e0(&var_114, 
    sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
        "@float4(0.3f, 0.3f, 0.3f, 1.0f)@"))
var_8_1.b = 0x98
char* var_cc_29 = &var_12c
sub_541920(&var_12c, "g_SLightSpecular[SLIGHT_MAX]")
var_8_1.b = 0x99
sub_541920(&var_144, "float4")
var_8_1.b = 0x9a
var_8_1.b = 0x9b
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29
sub_53f510(&var_2c)
char* var_c8_29 = &var_fc
var_8_1.b = 0x9c
var_8_1.b = 0x9d
char* var_d0_30 = &var_114
sub_6693e0(&var_114, 
    sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
        "@float4(0.0f, 0.0f, 0.0f, 0.0f)@"))
var_8_1.b = 0x9e
char* var_cc_30 = &var_12c
sub_541920(&var_12c, "g_SLightLocalDir[SLIGHT_MAX]")
var_8_1.b = 0x9f
sub_541920(&var_144, "float4")
var_8_1.b = 0xa0
var_8_1.b = 0xa1
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29
sub_53f510(&var_2c)
char* var_c8_30 = &var_fc
var_8_1.b = 0xa2
var_8_1.b = 0xa3
char* var_d0_31 = &var_114
sub_6693e0(&var_114, 
    sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
        "@float4(0.0f, 0.0f, 0.0f, 0.0f)@"))
var_8_1.b = 0xa4
char* var_cc_31 = &var_12c
sub_541920(&var_12c, "g_SLightWorldDir[SLIGHT_MAX]")
var_8_1.b = 0xa5
sub_541920(&var_144, "float4")
var_8_1.b = 0xa6
var_8_1.b = 0xa7
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29
sub_53f510(&var_2c)
char* var_c8_31 = &var_fc
var_8_1.b = 0xa8
var_8_1.b = 0xa9
char* var_d0_32 = &var_114
sub_6693e0(&var_114, 
    sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
        "@float4(0.0f, 0.0f, 0.0f, 0.0f)@"))
var_8_1.b = 0xaa
char* var_cc_32 = &var_12c
sub_541920(&var_12c, "g_SLightLocalPos[SLIGHT_MAX]")
var_8_1.b = 0xab
sub_541920(&var_144, "float4")
var_8_1.b = 0xac
var_8_1.b = 0xad
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29
sub_53f510(&var_2c)
char* var_c8_32 = &var_fc
var_8_1.b = 0xae
var_8_1.b = 0xaf
char* var_d0_33 = &var_114
sub_6693e0(&var_114, 
    sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
        "@float4(0.0f, 0.0f, 0.0f, 0.0f)@"))
var_8_1.b = 0xb0
char* var_cc_33 = &var_12c
sub_541920(&var_12c, "g_SLightWorldPos[SLIGHT_MAX]")
var_8_1.b = 0xb1
sub_541920(&var_144, "float4")
var_8_1.b = 0xb2
var_8_1.b = 0xb3
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29
sub_53f510(&var_2c)
char* var_c8_33 = &var_fc
var_8_1.b = 0xb4
var_8_1.b = 0xb5
char* var_d0_34 = &var_114
sub_6693e0(&var_114, 
    sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
        "@float4(0.001f, 0.0f, 0.0f, 0.0f)@"))
var_8_1.b = 0xb6
char* var_cc_34 = &var_12c
sub_541920(&var_12c, "g_SLightAttenuationsRange[SLIGHT_MAX]")
var_8_1.b = 0xb7
sub_541920(&var_144, "float4")
var_8_1.b = 0xb8
var_8_1.b = 0xb9
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29
sub_53f510(&var_2c)
char* var_c8_34 = &var_fc
var_8_1.b = 0xba
var_8_1.b = 0xbb
char* var_d0_35 = &var_114
sub_6693e0(&var_114, 
    sub_70cd30(sub_541920(&var_fc, &data_b0018c), &var_44, &var_2c, 
        "@float4(0.0f, 0.0f, 0.0f, 0.0f)@"))
var_8_1.b = 0xbc
char* var_cc_35 = &var_12c
sub_541920(&var_12c, "g_SLightThetaPhiFalloff[SLIGHT_MAX]")
var_8_1.b = 0xbd
sub_541920(&var_144, "float4")
var_8_1.b = 0xbe
var_8_1.b = 0xbf
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
var_8_1.b = 0x29
sub_53f510(&var_2c)
char* var_c8_35 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xc0
char* var_d0_36 = &var_114
sub_541920(&var_114, "float4(0.0f, 0.0f, 0.0f, 1.0f)")
var_8_1.b = 0xc1
char* var_cc_36 = &var_12c
sub_541920(&var_12c, "g_GlobalAmbient")
var_8_1.b = 0xc2
sub_541920(&var_144, "float4")
var_8_1.b = 0x29
var_8_1.b = 0xc3
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_36 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xc4
char* var_d0_37 = &var_114
sub_541920(&var_114, "float4(0.0f, 0.0f, 0.0f, 0.0f)")
var_8_1.b = 0xc5
char* var_cc_37 = &var_12c
sub_541920(&var_12c, "g_LightLocalDir")
var_8_1.b = 0xc6
sub_541920(&var_144, "float4")
var_8_1.b = 0x29
var_8_1.b = 0xc7
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_37 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xc8
char* var_d0_38 = &var_114
sub_541920(&var_114, "float4(0.0f, 0.0f, 0.0f, 0.0f)")
var_8_1.b = 0xc9
char* var_cc_38 = &var_12c
sub_541920(&var_12c, "g_LightWorldDir")
var_8_1.b = 0xca
sub_541920(&var_144, "float4")
var_8_1.b = 0x29
var_8_1.b = 0xcb
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_38 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xcc
char* var_d0_39 = &var_114
sub_541920(&var_114, "float4(0.0f, 0.0f, 0.0f, 0.0f)")
var_8_1.b = 0xcd
char* var_cc_39 = &var_12c
sub_541920(&var_12c, "g_LightLocalPos")
var_8_1.b = 0xce
sub_541920(&var_144, "float4")
var_8_1.b = 0x29
var_8_1.b = 0xcf
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_39 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xd0
char* var_d0_40 = &var_114
sub_541920(&var_114, "float4(0.0f, 0.0f, 0.0f, 0.0f)")
var_8_1.b = 0xd1
char* var_cc_40 = &var_12c
sub_541920(&var_12c, "g_LightWorldPos")
var_8_1.b = 0xd2
sub_541920(&var_144, "float4")
var_8_1.b = 0x29
var_8_1.b = 0xd3
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_40 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xd4
char* var_d0_41 = &var_114
sub_541920(&var_114, "float4(0.7f, 0.7f, 0.7f, 1.0f)")
var_8_1.b = 0xd5
char* var_cc_41 = &var_12c
sub_541920(&var_12c, "g_LightDiffuse")
var_8_1.b = 0xd6
sub_541920(&var_144, "float4")
var_8_1.b = 0x29
var_8_1.b = 0xd7
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_41 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xd8
char* var_d0_42 = &var_114
sub_541920(&var_114, "float4(0.3f, 0.3f, 0.3f, 1.0f)")
var_8_1.b = 0xd9
char* var_cc_42 = &var_12c
sub_541920(&var_12c, "g_LightAmbient")
var_8_1.b = 0xda
sub_541920(&var_144, "float4")
var_8_1.b = 0x29
var_8_1.b = 0xdb
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_42 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xdc
char* var_d0_43 = &var_114
sub_541920(&var_114, "float4(0.001f, 0.0f, 0.0f, 0.0f)")
var_8_1.b = 0xdd
char* var_cc_43 = &var_12c
sub_541920(&var_12c, "g_LightAttenuations")
var_8_1.b = 0xde
sub_541920(&var_144, "float4")
var_8_1.b = 0x29
var_8_1.b = 0xdf
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_43 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xe0
char* var_d0_44 = &var_114
sub_541920(&var_114, "float4(0.0f, 0.0f, 0.0f, 0.0f)")
var_8_1.b = 0xe1
char* var_cc_44 = &var_12c
sub_541920(&var_12c, "g_CameraLocalPos")
var_8_1.b = 0xe2
sub_541920(&var_144, "float4")
var_8_1.b = 0x29
var_8_1.b = 0xe3
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_44 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xe4
char* var_d0_45 = &var_114
sub_541920(&var_114, "float4(0.0f, 0.0f, 0.0f, 0.0f)")
var_8_1.b = 0xe5
char* var_cc_45 = &var_12c
sub_541920(&var_12c, "g_CameraWorldPos")
var_8_1.b = 0xe6
sub_541920(&var_144, "float4")
var_8_1.b = 0x29
var_8_1.b = 0xe7
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_45 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xe8
char* var_d0_46 = &var_114
sub_541920(&var_114, "float(0.03f)")
var_8_1.b = 0xe9
char* var_cc_46 = &var_12c
sub_541920(&var_12c, "g_DBSBias")
var_8_1.b = 0xea
sub_541920(&var_144, "float")
var_8_1.b = 0x29
var_8_1.b = 0xeb
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_46 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xec
char* var_d0_47 = &var_114
sub_541920(&var_114, "float(0.5f)")
var_8_1.b = 0xed
char* var_cc_47 = &var_12c
sub_541920(&var_12c, "g_RimLightPower")
var_8_1.b = 0xee
sub_541920(&var_144, "float")
var_8_1.b = 0x29
var_8_1.b = 0xef
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_47 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xf0
char* var_d0_48 = &var_114
sub_541920(&var_114, "float4(1.0f, 1.0f, 1.0f, 1.0f)")
var_8_1.b = 0xf1
char* var_cc_48 = &var_12c
sub_541920(&var_12c, "g_RimLightColor")
var_8_1.b = 0xf2
sub_541920(&var_144, "float4")
var_8_1.b = 0x29
var_8_1.b = 0xf3
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_48 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xf4
char* var_d0_49 = &var_114
sub_541920(&var_114, "float(1.0f)")
var_8_1.b = 0xf5
char* var_cc_49 = &var_12c
sub_541920(&var_12c, "g_VertexColorRate")
var_8_1.b = 0xf6
sub_541920(&var_144, "float")
var_8_1.b = 0x29
var_8_1.b = 0xf7
sub_70c4d0(arg1, sub_701410(&var_ac))
var_8_1.b = 0x29
sub_702710(&var_ac)
char* var_c8_49 = &var_fc
sub_541920(&var_fc, &data_b0018c)
var_8_1.b = 0xf8
char* var_d0_50 = &var_114
sub_541920(&var_114, "float(0.016f)")
var_8_1.b = 0xf9
char* var_cc_50 = &var_12c
sub_541920(&var_12c, "g_ParallaxMaxHeight")
var_8_1.b = 0xfa
sub_541920(&var_144, "float")
var_8_1.b = 0x29
var_8_1.b = 0xfb
sub_70c4d0(arg1, sub_701410(&var_ac))
sub_702710(&var_ac)
sub_53f510(&var_44)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
