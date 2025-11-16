// 函数: sub_717940
// 地址: 0x717940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d2517
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_13c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1 = arg3
int32_t* result = result_1
char* result_2 = result_1
int32_t var_124 = 0
int32_t var_8_1 = 1
*(result_1 + 0x14) = 0xf
*(result_1 + 0x10) = 0
*result_1 = 0
int32_t var_124_1 = 1
int32_t var_11c
char* eax_4 = sub_715ae0(sub_541eb0(arg3, &data_b0018c, nullptr), 7, &var_11c, 2, 0)
var_8_1.b = 2
char var_8c
char* eax_5 = sub_715ae0(eax_4, 6, &var_8c, 2, 0)
var_8_1.b = 3
char var_104
char* eax_6 = sub_7171a0(&var_104, 1)
var_8_1.b = 4
char var_d4
void* arg_4
int32_t* eax_8 = sub_6fdbd0(&arg_4, "\tfloat3 N = ", &var_d4, &arg_4)
var_8_1.b = 5
char var_a4
char* eax_9 = sub_6bdb10(eax_8.b, eax_8, &var_a4, 
    ";\n\tfloat3 L = -g_LightWorldDir;\n\tfloat3 E = normalize(g_CameraWorldPos - ")
var_8_1.b = 6
char var_5c
char* eax_10 = sub_70ce20(eax_9, eax_9, &var_5c, eax_6)
var_8_1.b = 7
char var_44
char* eax_11 = sub_6bdb10(eax_10.b, eax_10, &var_44, 
    ".xyz);\n\tfloat3 H = normalize(L+E);\n\tfloat4 diffuse = g_LightAmbient * g_MaterialAmbient + "
"g_LightDiffuse * g_MaterialDiffuse * max(0, dot(N, L));\n\tfloat4 specular = pow(max(0,dot(N, H)), "
"g_MaterialSpecularPower);\n\t$(Out.color0) = diffuse + ")
var_8_1.b = 8
char var_2c
char* eax_12 = sub_70ce20(eax_11, eax_11, &var_2c, eax_5)
var_8_1.b = 9
char var_bc
char* eax_13 = sub_6bdb10(eax_12.b, eax_12, &var_bc, " = diffuse;\n\t")
var_8_1.b = 0xa
char var_ec
char* eax_14 = sub_70ce20(eax_13, eax_13, &var_ec, eax_4)
var_8_1.b = 0xb
var_8_1.b = 0xc
char var_74
sub_6b3810(result, sub_6bdb10(eax_14.b, eax_14, &var_74, " = specular;\n"), nullptr, 0xffffffff)
int32_t var_60

if (var_60 u>= 0x10)
    j__free(var_74.d)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74 = 0
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
int32_t var_f0

if (var_f0 u>= 0x10)
    j__free(var_104.d)

int32_t var_f0_1 = 0xf
int32_t var_f4 = 0
var_104 = 0
int32_t var_78

if (var_78 u>= 0x10)
    j__free(var_8c.d)

int32_t var_78_1 = 0xf
int32_t var_7c = 0
var_8c = 0
int32_t var_108

if (var_108 u>= 0x10)
    j__free(var_11c)

if (arg4 u>= 0x10)
    j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
