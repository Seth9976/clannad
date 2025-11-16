// 函数: sub_71c5f0
// 地址: 0x71c5f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d30ba
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_158 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_2 = arg3
int32_t* result_1 = result_2
int32_t var_8_1 = 0
int32_t var_144 = 0
*(result_2 + 0x14) = 0xf
*(result_2 + 0x10) = 0
char* result_3 = result_2
*result_2 = 0
int32_t* eax_3 = sub_541eb0(arg3, &data_b0018c, nullptr)
int32_t var_8_2 = 0
int32_t var_144_1 = 1
int32_t* result

if (arg4 == 0 || arg4 != 1)
    result = result_2
else
    int32_t var_138
    char* eax_4 = sub_715ae0(eax_3, arg4 + 0xd, &var_138, arg2, arg4)
    int32_t var_8_3 = arg4
    char var_120
    char* eax_5 = sub_7171a0(&var_120, arg4)
    var_8_3.b = 2
    char var_108
    char* eax_6 = sub_715ae0(eax_5, arg4 + 0xc, &var_108, arg2, arg4)
    var_8_3.b = 3
    char var_d8
    char* eax_7 = sub_7171a0(&var_d8, 1)
    var_8_3.b = 4
    char var_a8
    char* eax_8 = sub_70ce80(eax_7.b, "\tfloat4 ShadowMapUV = float4(", &var_a8, eax_7)
    var_8_3.b = 5
    char var_78
    char* eax_9 = sub_6bdb10(eax_8.b, eax_8, &var_78, 
        ", 1.0f);\n\tShadowMapUV = mul(ShadowMapUV, mLightVP);\n\tShadowMapUV = mul(ShadowMapUV, "
    "mScaleBias);\n\t")
    var_8_3.b = 6
    char var_60
    char* eax_10 = sub_70ce20(eax_9, eax_9, &var_60, eax_6)
    var_8_3.b = 7
    char var_48
    char* eax_11 =
        sub_6bdb10(eax_10.b, eax_10, &var_48, " = ShadowMapUV;\n\tfloat4 Depth = float4(")
    var_8_3.b = 8
    char var_30
    char* eax_12 = sub_70ce20(eax_11, eax_11, &var_30, eax_5)
    var_8_3.b = 9
    char var_c0
    char* eax_13 = sub_6bdb10(eax_12.b, eax_12, &var_c0, ", 1.0f);\n\t")
    var_8_3.b = 0xa
    char var_f0
    char* eax_14 = sub_70ce20(eax_13, eax_13, &var_f0, eax_4)
    var_8_3.b = 0xb
    var_8_3.b = 0xc
    char var_90
    sub_6b3810(result_1, sub_6bdb10(eax_14.b, eax_14, &var_90, " = mul(Depth, mLightVP);\n"), 
        nullptr, 0xffffffff)
    int32_t var_7c
    
    if (var_7c u>= 0x10)
        j__free(var_90.d)
    
    int32_t var_7c_1 = 0xf
    int32_t var_80_1 = 0
    var_90 = 0
    int32_t var_dc
    
    if (var_dc u>= 0x10)
        j__free(var_f0.d)
    
    int32_t var_dc_1 = 0xf
    int32_t var_e0_1 = 0
    var_f0 = 0
    int32_t var_ac
    
    if (var_ac u>= 0x10)
        j__free(var_c0.d)
    
    int32_t var_ac_1 = 0xf
    int32_t var_b0_1 = 0
    var_c0 = 0
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
    int32_t var_c4
    
    if (var_c4 u>= 0x10)
        j__free(var_d8.d)
    
    int32_t var_c4_1 = 0xf
    int32_t var_c8_1 = 0
    var_d8 = 0
    int32_t var_f4
    
    if (var_f4 u>= 0x10)
        j__free(var_108.d)
    
    int32_t var_f4_1 = 0xf
    int32_t var_f8_1 = 0
    var_108 = 0
    int32_t var_10c
    
    if (var_10c u>= 0x10)
        j__free(var_120.d)
    
    int32_t var_10c_1 = 0xf
    int32_t var_110_1 = 0
    var_120 = 0
    int32_t var_124
    
    if (var_124 u>= 0x10)
        j__free(var_138)
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
