// 函数: sub_717ec0
// 地址: 0x717ec0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d2678
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_184 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1 = arg3
int32_t* result = result_1
char* result_2 = result_1
int32_t var_16c = 0
int32_t var_8_1 = 1
*(result_1 + 0x14) = 0xf
*(result_1 + 0x10) = 0
*result_1 = 0
int32_t var_16c_1 = 1
int32_t var_164
char* eax_4 = sub_715ae0(sub_541eb0(arg3, &data_b0018c, nullptr), 6, &var_164, 3, 0)
var_8_1.b = 2
char var_104
char* eax_5 = sub_715ae0(eax_4, 9, &var_104, 3, 0)
var_8_1.b = 3
char var_14c
char* eax_6 = sub_715ae0(eax_5, 0xa, &var_14c, 3, 0)
var_8_1.b = 4
char var_11c
char* eax_7 = sub_7171a0(&var_11c, 1)
var_8_1.b = 5
char var_d4
void* arg_4
int32_t* eax_9 = sub_6fdbd0(&arg_4, "\tfloat3 N = ", &var_d4, &arg_4)
var_8_1.b = 6
char var_a4
char* eax_10 = sub_6bdb10(eax_9.b, eax_9, &var_a4, 
    ";\n\tfloat3 L = -g_LightWorldDir;\n\tfloat3 E = g_CameraWorldPos - ")
var_8_1.b = 7
char var_74
char* eax_11 = sub_70ce20(eax_10, eax_10, &var_74, eax_7)
var_8_1.b = 8
char var_5c
char* eax_12 = sub_6bdb10(eax_11.b, eax_11, &var_5c, 
    ".xyz;\n\tfloat4 diffuse = g_LightAmbient * g_MaterialAmbient + g_LightDiffuse * g_MaterialDiffuse * "
"max(0, dot(N, L));\n\t")
var_8_1.b = 9
char var_44
char* eax_13 = sub_70ce20(eax_12, eax_12, &var_44, eax_6)
var_8_1.b = 0xa
char var_2c
char* eax_14 = sub_6bdb10(eax_13.b, eax_13, &var_2c, ".xyz = N;\n\t")
var_8_1.b = 0xb
char var_134
char* eax_15 = sub_70ce20(eax_14, eax_14, &var_134, eax_5)
var_8_1.b = 0xc
char var_bc
char* eax_16 = sub_6bdb10(eax_15.b, eax_15, &var_bc, ".xyz = E;\n\t")
var_8_1.b = 0xd
char var_ec
char* eax_17 = sub_70ce20(eax_16, eax_16, &var_ec, eax_4)
var_8_1.b = 0xe
var_8_1.b = 0xf
char var_8c
sub_6b3810(result, 
    sub_6bdb10(eax_17.b, eax_17, &var_8c, " = diffuse;\n\t$(Out.color0) = $(In.color);\n"), 
    nullptr, 0xffffffff)
int32_t var_78

if (var_78 u>= 0x10)
    j__free(var_8c.d)

int32_t var_78_1 = 0xf
int32_t var_7c = 0
var_8c = 0
int32_t var_d8

if (var_d8 u>= 0x10)
    j__free(var_ec.d)

int32_t var_d8_1 = 0xf
int32_t var_dc = 0
var_ec = 0
int32_t var_a8

if (var_a8 u>= 0x10)
    j__free(var_bc.d)

int32_t var_a8_1 = 0xf
int32_t var_ac = 0
var_bc = 0
int32_t var_120

if (var_120 u>= 0x10)
    j__free(var_134.d)

int32_t var_120_1 = 0xf
int32_t var_124 = 0
var_134 = 0
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
int32_t var_48

if (var_48 u>= 0x10)
    j__free(var_5c.d)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0
int32_t var_60

if (var_60 u>= 0x10)
    j__free(var_74.d)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74 = 0
int32_t var_90

if (var_90 u>= 0x10)
    j__free(var_a4.d)

int32_t var_90_1 = 0xf
int32_t var_94 = 0
var_a4 = 0
int32_t var_c0

if (var_c0 u>= 0x10)
    j__free(var_d4.d)

int32_t var_c0_1 = 0xf
int32_t var_c4 = 0
var_d4 = 0
int32_t var_108

if (var_108 u>= 0x10)
    j__free(var_11c.d)

int32_t var_108_1 = 0xf
int32_t var_10c = 0
var_11c = 0
int32_t var_138

if (var_138 u>= 0x10)
    j__free(var_14c.d)

int32_t var_138_1 = 0xf
int32_t var_13c = 0
var_14c = 0
int32_t var_f0

if (var_f0 u>= 0x10)
    j__free(var_104.d)

int32_t var_f0_1 = 0xf
int32_t var_f4 = 0
var_104 = 0
int32_t var_150

if (var_150 u>= 0x10)
    j__free(var_164)

if (arg4 u>= 0x10)
    j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
