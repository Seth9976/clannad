// 函数: sub_718320
// 地址: 0x718320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d2719
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_104 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg1
int32_t var_8_1 = 0
int32_t var_f0 = 0
*(result + 0x14) = 0xf
*(result + 0x10) = 0
char* result_1 = result
*result = 0
int32_t var_8_2 = 0
int32_t var_f0_1 = 1
int32_t var_ec
char* eax_4 = sub_715ae0(sub_541eb0(arg1, &data_b0018c, nullptr), 0x12, &var_ec, 3, 0)
int32_t var_8_3 = 1
char var_bc
char* eax_5 = sub_715ae0(eax_4, 0x15, &var_bc, 3, 0)
var_8_3.b = 2
char var_d4
char* eax_6 = sub_715ae0(eax_5, 0x16, &var_d4, 3, 0)
var_8_3.b = 3
char var_8c
char* eax_7 =
    sub_70ce80(eax_6.b, "\tfloat3 L = -g_LightWorldDir;\n\tfloat3 N = normalize(", &var_8c, eax_6)
var_8_3.b = 4
char var_5c
char* eax_8 = sub_6bdb10(eax_7.b, eax_7, &var_5c, ".xyz);\n\tfloat3 H = normalize(L + normalize(")
var_8_3.b = 5
char var_2c
char* eax_9 = sub_70ce20(eax_8, eax_8, &var_2c, eax_5)
var_8_3.b = 6
char var_44
char* eax_10 = sub_6bdb10(eax_9.b, eax_9, &var_44, 
    ".xyz));\n\tfloat4 specular = pow(max(0,dot(N, H)), g_MaterialSpecularPower);\n\t$(Out.color0) = ")
var_8_3.b = 7
char var_a4
char* eax_11 = sub_70ce20(eax_10, eax_10, &var_a4, eax_4)
var_8_3.b = 8
var_8_3.b = 9
char var_74
sub_6b3810(result, 
    sub_6bdb10(eax_11.b, eax_11, &var_74, 
        " * $(meshSampler)($(In.tex0).xy) + specular;\n\t$(Out.color0).a = 1.0f;\n"), 
    nullptr, 0xffffffff)
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
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_48

if (var_48 u>= 0x10)
    j__free(var_5c.d)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0
int32_t var_78

if (var_78 u>= 0x10)
    j__free(var_8c.d)

int32_t var_78_1 = 0xf
int32_t var_7c = 0
var_8c = 0
int32_t var_c0

if (var_c0 u>= 0x10)
    j__free(var_d4.d)

int32_t var_c0_1 = 0xf
int32_t var_c4 = 0
var_d4 = 0
int32_t var_a8

if (var_a8 u>= 0x10)
    j__free(var_bc.d)

int32_t var_a8_1 = 0xf
int32_t var_ac = 0
var_bc = 0
int32_t var_d8

if (var_d8 u>= 0x10)
    j__free(var_ec)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
