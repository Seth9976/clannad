// 函数: sub_7187c0
// 地址: 0x7187c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d2801
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg1
int32_t var_8_1 = 0
int32_t var_60 = 0
*(result + 0x14) = 0xf
*(result + 0x10) = 0
char* result_1 = result
*result = 0
int32_t var_8_2 = 0
int32_t var_60_1 = 1
int32_t var_5c
char* eax_4 = sub_715ae0(sub_541eb0(arg1, &data_b0018c, nullptr), 0x16, &var_5c, 4, 0)
int32_t var_8_3 = 1
char var_44
char* eax_5 = sub_70ce80(eax_4.b, 
    "\tfloat p = g_LightAmbient * g_MaterialAmbient + g_LightDiffuse * g_MaterialDiffuse * max(0, "
"dot(normalize(", 
    &var_44, eax_4)
var_8_3.b = 2
var_8_3.b = 3
char var_2c
sub_6b3810(result, 
    sub_6bdb10(eax_5.b, eax_5, &var_2c, 
        ".xyz), -g_LightWorldDir.xyz));\n\tp = p * 0.5f + 0.5f;\n\tp = p * p;\n\t$(Out.color0) = p * "
"$(meshSampler)($(In.tex0).xy);\n\t$(Out.color0).a = 1.0f;\n"), 
    nullptr, 0xffffffff)
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
    j__free(var_5c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
