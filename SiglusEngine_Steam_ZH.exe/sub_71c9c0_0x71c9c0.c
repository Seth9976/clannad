// 函数: sub_71c9c0
// 地址: 0x71c9c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d3184
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_120 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg3
char* result_1 = result
int32_t var_10c = 0
int32_t var_8_1 = 2
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
int32_t* eax_3 = sub_541eb0(arg3, &data_b0018c, nullptr)
int32_t var_10c_1 = 1
char arg_8
void* arg_20

if (arg4 != 0 && arg4 == 1)
    int32_t var_108
    char* eax_4 = sub_715ae0(eax_3, arg4 + 0x19, &var_108, arg2, arg4)
    var_8_1.b = 3
    char var_d8
    char* eax_5 = sub_715ae0(eax_4, 0x19, &var_d8, arg2, 1)
    var_8_1.b = 4
    char var_f0
    char* eax_6 = sub_70ce80(eax_5.b, "\tfloat4 TexMapUV = $(In.tex0);\n\tfloat4 ShadowMapUV = ", 
        &var_f0, eax_5)
    var_8_1.b = 5
    char var_c0
    char* eax_7 = sub_6bdb10(eax_6.b, eax_6, &var_c0, ";\n\tfloat4 Depth = ")
    var_8_1.b = 6
    char var_90
    char* eax_8 = sub_70ce20(eax_7, eax_7, &var_90, eax_4)
    var_8_1.b = 7
    char var_48
    char* eax_9 = sub_6bdb10(eax_8.b, eax_8, &var_48, 
        ";\n\tfloat  shadow = $(shadowSampler)(ShadowMapUV).x;\n\tfloat4 decale = "
    "$(meshSampler)(TexMapUV.xy);\n\tif(shadow * Depth.w < Depth.z - g_DBSBias) {\n\t")
    var_8_1.b = 8
    char var_30
    char* eax_10 = sub_6fdcc0(eax_9, eax_9, &var_30, &arg_8)
    var_8_1.b = 9
    char var_a8
    char* eax_11 = sub_6bdb10(eax_10.b, eax_10, &var_a8, "\t}\n\telse {\n\t")
    var_8_1.b = 0xa
    char var_78
    char* eax_12 = sub_6fdcc0(eax_11, eax_11, &var_78, &arg_20)
    var_8_1.b = 0xb
    var_8_1.b = 0xc
    char var_60
    sub_6b3810(result, sub_6bdb10(eax_12.b, eax_12, &var_60, "\t}\n"), nullptr, 0xffffffff)
    int32_t var_4c
    
    if (var_4c u>= 0x10)
        j__free(var_60.d)
    
    int32_t var_4c_1 = 0xf
    int32_t var_50_1 = 0
    var_60 = 0
    int32_t var_64
    
    if (var_64 u>= 0x10)
        j__free(var_78.d)
    
    int32_t var_64_1 = 0xf
    int32_t var_68_1 = 0
    var_78 = 0
    int32_t var_94
    
    if (var_94 u>= 0x10)
        j__free(var_a8.d)
    
    int32_t var_94_1 = 0xf
    int32_t var_98_1 = 0
    var_a8 = 0
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    int32_t var_34
    
    if (var_34 u>= 0x10)
        j__free(var_48.d)
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_7c
    
    if (var_7c u>= 0x10)
        j__free(var_90.d)
    
    int32_t var_7c_1 = 0xf
    int32_t var_80_1 = 0
    var_90 = 0
    int32_t var_ac
    
    if (var_ac u>= 0x10)
        j__free(var_c0.d)
    
    int32_t var_ac_1 = 0xf
    int32_t var_b0_1 = 0
    var_c0 = 0
    int32_t var_dc
    
    if (var_dc u>= 0x10)
        j__free(var_f0.d)
    
    int32_t var_dc_1 = 0xf
    int32_t var_e0_1 = 0
    var_f0 = 0
    int32_t var_c4
    
    if (var_c4 u>= 0x10)
        j__free(var_d8.d)
    
    int32_t var_c4_1 = 0xf
    int32_t var_c8_1 = 0
    var_d8 = 0
    int32_t var_f4
    
    if (var_f4 u>= 0x10)
        j__free(var_108)

if (arg5 u>= 0x10)
    j__free(arg_8.d)

arg5 = 0xf
int32_t arg_18 = 0
arg_8 = 0

if (arg6 u>= 0x10)
    j__free(arg_20)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
