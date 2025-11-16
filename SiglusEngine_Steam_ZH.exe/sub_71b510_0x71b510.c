// 函数: sub_71b510
// 地址: 0x71b510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d2f23
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_19c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1 = arg3
int32_t* result = result_1
char* result_2 = result_1
int32_t var_180 = 0
int32_t var_8_1 = 1
*(result_1 + 0x14) = 0xf
*(result_1 + 0x10) = 0
*result_1 = 0
sub_541eb0(arg3, &data_b0018c, nullptr)
int32_t var_180_1 = 1
int32_t var_17c
char* eax_3 = sub_7171a0(&var_17c, 1)
var_8_1.b = 2
char var_14c
char* eax_4 = sub_715ae0(eax_3, 9, &var_14c, 8, 0)
var_8_1.b = 3
char var_164
char* eax_5 = sub_715ae0(eax_4, 0xa, &var_164, 8, 0)
var_8_1.b = 4
char var_11c
char* eax_6 = sub_715ae0(eax_5, 0x11, &var_11c, 8, 0)
var_8_1.b = 5
char var_ec
char* eax_7 = sub_715ae0(eax_6, 0x10, &var_ec, 8, 0)
var_8_1.b = 6
char var_bc
char* eax_8 = sub_70ce80(eax_7.b, 0xb09a70, &var_bc, eax_7)
var_8_1.b = 7
char var_8c
char* eax_9 = sub_6bdb10(eax_8.b, eax_8, &var_8c, ".xyz = mul($(In.tangent), (float3x3)Comb);\n\t")
var_8_1.b = 8
char var_5c
char* eax_10 = sub_70ce20(eax_9, eax_9, &var_5c, eax_6)
var_8_1.b = 9
char var_44
char* eax_11 =
    sub_6bdb10(eax_10.b, eax_10, &var_44, ".xyz = mul($(In.binormal), (float3x3)Comb);\n\t")
var_8_1.b = 0xa
char var_2c
char* eax_12 = sub_70ce20(eax_11, eax_11, &var_2c, eax_5)
var_8_1.b = 0xb
char var_d4
char* eax_13 =
    sub_6bdb10(eax_12.b, eax_12, &var_d4, ".xyz = mul($(In.normal), (float3x3)Comb);\n\t")
var_8_1.b = 0xc
char var_134
char* eax_14 = sub_70ce20(eax_13, eax_13, &var_134, eax_4)
var_8_1.b = 0xd
char var_a4
char* eax_15 = sub_6bdb10(eax_14.b, eax_14, &var_a4, ".xyz = g_CameraWorldPos - ")
var_8_1.b = 0xe
char var_104
char* eax_16 = sub_70ce20(eax_15, eax_15, &var_104, eax_3)
var_8_1.b = 0xf
var_8_1.b = 0x10
char var_74
sub_6b3810(result, sub_6bdb10(eax_16.b, eax_16, &var_74, ".xyz;\n"), nullptr, 0xffffffff)
int32_t var_60

if (var_60 u>= 0x10)
    j__free(var_74.d)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74 = 0
int32_t var_f0

if (var_f0 u>= 0x10)
    j__free(var_104.d)

int32_t var_f0_1 = 0xf
int32_t var_f4 = 0
var_104 = 0
int32_t var_90

if (var_90 u>= 0x10)
    j__free(var_a4.d)

int32_t var_90_1 = 0xf
int32_t var_94 = 0
var_a4 = 0
int32_t var_120

if (var_120 u>= 0x10)
    j__free(var_134.d)

int32_t var_120_1 = 0xf
int32_t var_124 = 0
var_134 = 0
int32_t var_c0

if (var_c0 u>= 0x10)
    j__free(var_d4.d)

int32_t var_c0_1 = 0xf
int32_t var_c4 = 0
var_d4 = 0
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
int32_t var_78

if (var_78 u>= 0x10)
    j__free(var_8c.d)

int32_t var_78_1 = 0xf
int32_t var_7c = 0
var_8c = 0
int32_t var_a8

if (var_a8 u>= 0x10)
    j__free(var_bc.d)

int32_t var_a8_1 = 0xf
int32_t var_ac = 0
var_bc = 0
int32_t var_d8

if (var_d8 u>= 0x10)
    j__free(var_ec.d)

int32_t var_d8_1 = 0xf
int32_t var_dc = 0
var_ec = 0
int32_t var_108

if (var_108 u>= 0x10)
    j__free(var_11c.d)

int32_t var_108_1 = 0xf
int32_t var_10c = 0
var_11c = 0
int32_t var_150

if (var_150 u>= 0x10)
    j__free(var_164.d)

int32_t var_150_1 = 0xf
int32_t var_154 = 0
var_164 = 0
int32_t var_138

if (var_138 u>= 0x10)
    j__free(var_14c.d)

int32_t var_138_1 = 0xf
int32_t var_13c = 0
var_14c = 0
int32_t var_168

if (var_168 u>= 0x10)
    j__free(var_17c)

if (arg5 u>= 0x10)
    j__free(arg4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
