// 函数: sub_7155f0
// 地址: 0x7155f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1cfa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_158 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1 = arg3
int32_t* result = result_1
int32_t var_8_1 = 0
int32_t var_13c = 0
*(result_1 + 0x14) = 0xf
*(result_1 + 0x10) = 0
char* result_2 = result_1
*result_1 = 0
int32_t var_8_2 = 0
int32_t var_13c_1 = 1
int32_t var_138
char* eax_4 = sub_715ae0(sub_541eb0(arg3, &data_b0018c, nullptr), 0xf, &var_138, arg2, arg4)
int32_t var_8_3 = 1
char var_78
char* eax_5 = sub_7171a0(&var_78, 1)
var_8_3.b = 2
char var_120
char* eax_6 = sub_7171a0(&var_120, 1)
var_8_3.b = 3
char var_f0
char* eax_7 = sub_7171a0(&var_f0, 3)
var_8_3.b = 4
char var_c0
char* eax_8 = sub_70ce80(eax_7.b, "\tfloat RimP = 1.0f - max( 0.0f, dot(normalize(", &var_c0, eax_7)
var_8_3.b = 5
char var_90
char* eax_9 = sub_6bdb10(eax_8.b, eax_8, &var_90, ".xyz), normalize(g_CameraWorldPos.xyz - ")
var_8_3.b = 6
char var_48
char* eax_10 = sub_70ce20(eax_9, eax_9, &var_48, eax_6)
var_8_3.b = 7
char var_30
char* eax_11 = sub_6bdb10(eax_10.b, eax_10, &var_30, 
    ".xyz)) );\n\tRimP = RimP * g_RimLightPower;\n\tRimP = RimP * RimP;\n\tfloat RimPower = max( 0.0f, "
"dot(normalize(g_CameraWorldPos.xyz - ")
var_8_3.b = 8
char var_108
char* eax_12 = sub_70ce20(eax_11, eax_11, &var_108, eax_5)
var_8_3.b = 9
char var_a8
char* eax_13 =
    sub_6bdb10(eax_12.b, eax_12, &var_a8, ".xyz), normalize(g_LightWorldDir.xyz)) );\n\t")
var_8_3.b = 0xa
char var_d8
char* eax_14 = sub_70ce20(eax_13, eax_13, &var_d8, eax_4)
var_8_3.b = 0xb
var_8_3.b = 0xc
char var_60
sub_6b3810(result, 
    sub_6bdb10(eax_14.b, eax_14, &var_60, " = 1.0f + g_RimLightColor * RimPower * RimP;\n"), 
    nullptr, 0xffffffff)
int32_t var_4c

if (var_4c u>= 0x10)
    j__free(var_60.d)

int32_t var_4c_1 = 0xf
int32_t var_50 = 0
var_60 = 0
int32_t var_c4

if (var_c4 u>= 0x10)
    j__free(var_d8.d)

int32_t var_c4_1 = 0xf
int32_t var_c8 = 0
var_d8 = 0
int32_t var_94

if (var_94 u>= 0x10)
    j__free(var_a8.d)

int32_t var_94_1 = 0xf
int32_t var_98 = 0
var_a8 = 0
int32_t var_f4

if (var_f4 u>= 0x10)
    j__free(var_108.d)

int32_t var_f4_1 = 0xf
int32_t var_f8 = 0
var_108 = 0
int32_t var_1c

if (var_1c u>= 0x10)
    j__free(var_30.d)

int32_t var_1c_1 = 0xf
int32_t var_20 = 0
var_30 = 0
int32_t var_34

if (var_34 u>= 0x10)
    j__free(var_48.d)

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0
int32_t var_7c

if (var_7c u>= 0x10)
    j__free(var_90.d)

int32_t var_7c_1 = 0xf
int32_t var_80 = 0
var_90 = 0
int32_t var_ac

if (var_ac u>= 0x10)
    j__free(var_c0.d)

int32_t var_ac_1 = 0xf
int32_t var_b0 = 0
var_c0 = 0
int32_t var_dc

if (var_dc u>= 0x10)
    j__free(var_f0.d)

int32_t var_dc_1 = 0xf
int32_t var_e0 = 0
var_f0 = 0
int32_t var_10c

if (var_10c u>= 0x10)
    j__free(var_120.d)

int32_t var_10c_1 = 0xf
int32_t var_110 = 0
var_120 = 0
int32_t var_64

if (var_64 u>= 0x10)
    j__free(var_78.d)

int32_t var_64_1 = 0xf
int32_t var_68 = 0
var_78 = 0
int32_t var_124

if (var_124 u>= 0x10)
    j__free(var_138)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
