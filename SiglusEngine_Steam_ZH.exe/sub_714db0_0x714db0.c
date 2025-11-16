// 函数: sub_714db0
// 地址: 0x714db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1c36
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3e0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg3
int32_t var_8_1 = 0
int32_t var_3c8 = 0
void* var_3e4 = nullptr
*(result + 0x14) = 0xf
*(result + 0x10) = 0
void* const var_3e8 = &data_b0018c
char* result_1 = result
*result = 0
sub_541eb0(arg3, var_3e8, var_3e4)
int32_t var_8_2 = 0
int32_t var_3c8_1 = 1

if (arg4 != 0 && arg4 == 1)
    void* var_60
    sub_541920(&var_60, &data_b0018c)
    int32_t var_8_3 = arg4
    char var_48
    sub_541920(&var_48, &data_b0018c)
    var_8_3.b = 2
    char var_30
    char* eax_3 = sub_541920(&var_30, &data_b0018c)
    var_8_3.b = 3
    char var_3f8
    int32_t var_78
    
    switch (arg2)
        case 0
            sub_6bd970(&data_b0018c)
            sub_6bd970("\t$(Out.color0) = float4(0.0f, 0.0f, 0.0f, 1.0f);\n")
            sub_6bd970("\t$(Out.color0) = float4(1.0f, 1.0f, 1.0f, 1.0f);\n")
            sub_6bd970(&data_b0018c)
        case 1
            void var_318
            int32_t* eax_5 = sub_715ae0(
                sub_6bd970("\tfloat4 dif_tex = $(meshSampler)($(In.tex0).xy);\n"), 0x14, &var_318, 
                1, 1)
            var_8_3.b = 4
            void var_108
            int32_t* eax_6 = sub_70ce80(eax_5.b, "\tdif_tex.rgb *= ", &var_108, eax_5)
            var_8_3.b = 5
            var_8_3.b = 6
            sub_6b3810(&var_60, 
                sub_6bdb10(eax_6.b, eax_6, &var_78, ".rgb;\n\t$(Out.color0).rgb = dif_tex.rgb;\n"), 
                nullptr, 0xffffffff)
            sub_53f510(&var_78)
            sub_53f510(&var_108)
            var_8_3.b = 3
            sub_53f510(&var_318)
            sub_6bd970("
                \t$(Out.color0) = ($(In.color0)+$(In.tex7)) * $(meshSampler)($(In.tex0).xy);\n")
            sub_6bd970("\t$(Out.color0).a = 1.0f;\n")
        case 2
            void var_168
            int32_t* eax_9 = sub_715ae0(
                sub_6bd970("\tfloat4 dif_tex = $(meshSampler)($(In.tex0).xy);\n"), 0x14, &var_168, 
                2, 1)
            var_8_3.b = 7
            void var_288
            int32_t* eax_10 = sub_70ce80(eax_9.b, "\tdecale.rgb *= ", &var_288, eax_9)
            var_8_3.b = 8
            var_8_3.b = 9
            void var_138
            sub_6b3810(&var_60, 
                sub_6bdb10(eax_10.b, eax_10, &var_138, 
                    ".rgb;\n\t$(Out.color0).rgb = decale.rgb;\n"), 
                nullptr, 0xffffffff)
            sub_53f510(&var_138)
            sub_53f510(&var_288)
            var_8_3.b = 3
            void var_90
            char* eax_13 = sub_715ae0(sub_53f510(&var_168), 0x13, &var_90, 2, 1)
            var_8_3.b = 0xa
            void var_228
            char* eax_14 = sub_715ae0(eax_13, 0x14, &var_228, 2, 1)
            var_3f8.d = 2
            var_8_3.b = 0xb
            void var_2e8
            char* eax_15 = sub_715ae0(eax_14, 0x12, &var_2e8, var_3f8, 1)
            var_8_3.b = 0xc
            void var_1f8
            char* eax_16 = sub_70ce80(eax_15.b, "\t$(Out.color0) = (", &var_1f8, eax_15)
            var_8_3.b = 0xd
            void var_348
            char* eax_17 = sub_6bdb10(eax_16.b, eax_16, &var_348, " + ")
            var_8_3.b = 0xe
            void var_1c8
            char* eax_18 = sub_70ce20(eax_17, eax_17, &var_1c8, eax_14)
            var_8_3.b = 0xf
            void var_2b8
            char* eax_19 =
                sub_6bdb10(eax_18.b, eax_18, &var_2b8, ") * $(meshSampler)($(In.tex0).xy) + ")
            var_8_3.b = 0x10
            void var_198
            char* eax_20 = sub_70ce20(eax_19, eax_19, &var_198, eax_13)
            var_8_3.b = 0x11
            var_8_3.b = 0x12
            void var_378
            sub_6b3810(&var_48, sub_6bdb10(eax_20.b, eax_20, &var_378, ";\n"), nullptr, 0xffffffff)
            sub_53f510(&var_378)
            sub_53f510(&var_198)
            sub_53f510(&var_2b8)
            sub_53f510(&var_1c8)
            sub_53f510(&var_348)
            sub_53f510(&var_1f8)
            sub_53f510(&var_2e8)
            sub_53f510(&var_228)
            var_8_3.b = 3
            sub_53f510(&var_90)
            sub_6bd970("\t$(Out.color0).a = 1.0f;\n")
        case 3
            void var_150
            char* eax_22 = sub_715ae0(eax_3, 0x15, &var_150, 3, 1)
            var_8_3.b = 0x13
            void var_120
            char* eax_23 = sub_715ae0(eax_22, 0x16, &var_120, 3, 1)
            var_8_3.b = 0x14
            void var_f0
            char* eax_24 = sub_70ce80(eax_23.b, 
                "\tfloat3 L = -g_LightWorldDir;\n\tfloat3 N = normalize(", &var_f0, eax_23)
            var_8_3.b = 0x15
            void var_c0
            char* eax_25 = sub_6bdb10(eax_24.b, eax_24, &var_c0, 
                ".xyz);\n\tfloat3 H = normalize(L + normalize(")
            var_8_3.b = 0x16
            void var_a8
            char* eax_26 = sub_70ce20(eax_25, eax_25, &var_a8, eax_22)
            var_8_3.b = 0x17
            var_8_3.b = 0x18
            void var_3a8
            sub_6b3810(result, 
                sub_6bdb10(eax_26.b, eax_26, &var_3a8, 
                    ".xyz));\n\tfloat4 specular = pow(max(0,dot(N, H)), g_MaterialSpecularPower);\n"), 
                nullptr, 0xffffffff)
            sub_53f510(&var_3a8)
            sub_53f510(&var_a8)
            sub_53f510(&var_c0)
            sub_53f510(&var_f0)
            sub_53f510(&var_120)
            var_8_3.b = 3
            void var_1e0
            int32_t* eax_29 = sub_715ae0(sub_53f510(&var_150), 0x14, &var_1e0, 3, 1)
            var_8_3.b = 0x19
            void var_1b0
            int32_t* eax_30 = sub_70ce80(eax_29.b, "\tdecale.rgb *= ", &var_1b0, eax_29)
            var_8_3.b = 0x1a
            var_8_3.b = 0x1b
            void var_180
            sub_6b3810(&var_60, 
                sub_6bdb10(eax_30.b, eax_30, &var_180, 
                    ".rgb;\n\t$(Out.color0).rgb = decale.rgb;\n"), 
                nullptr, 0xffffffff)
            sub_53f510(&var_180)
            sub_53f510(&var_1b0)
            var_8_3.b = 3
            void var_300
            char* eax_33 = sub_715ae0(sub_53f510(&var_1e0), 0x12, &var_300, 3, 1)
            var_8_3.b = 0x1c
            void var_2d0
            char* eax_34 = sub_715ae0(eax_33, 0x14, &var_2d0, 3, 1)
            var_8_3.b = 0x1d
            void var_2a0
            char* eax_35 = sub_70ce80(eax_34.b, "\tdecale.rgb *= ", &var_2a0, eax_34)
            var_8_3.b = 0x1e
            void var_270
            char* eax_36 = sub_6bdb10(eax_35.b, eax_35, &var_270, ".rgb + ")
            var_8_3.b = 0x1f
            void var_240
            char* eax_37 = sub_70ce20(eax_36, eax_36, &var_240, eax_33)
            var_8_3.b = 0x20
            var_8_3.b = 0x21
            void var_210
            sub_6b3810(&var_48, 
                sub_6bdb10(eax_37.b, eax_37, &var_210, 
                    ".rgb;\n\t$(Out.color0).rgb = decale.rgb + specular.rgb;\n"), 
                nullptr, 0xffffffff)
            sub_53f510(&var_210)
            sub_53f510(&var_240)
            sub_53f510(&var_270)
            sub_53f510(&var_2a0)
            sub_53f510(&var_2d0)
            var_8_3.b = 3
            sub_53f510(&var_300)
            sub_6bd970("\t$(Out.color0).a = 1.0f;\n")
        case 4
            sub_6bd970(&data_b0018c)
            void var_390
            char* eax_40 = sub_715ae0(
                sub_6bd970("\t\tfloat p = g_LightAmbient * g_MaterialAmbient;\n\tp = p * 0.5f + 0.5f;\n"
            "p = p * p;\n\t$(Out.color0) = p * $(meshSampler)($(In.tex0).xy);\n"), 
                0x16, &var_390, 4, 1)
            var_8_3.b = 0x22
            void var_360
            char* eax_41 = sub_70ce80(eax_40.b, 
                "\tfloat p = g_LightAmbient * g_MaterialAmbient + g_LightDiffuse * g_MaterialDiffuse * "
            "max(0, dot(normalize(", 
                &var_360, eax_40)
            var_8_3.b = 0x23
            var_8_3.b = 0x24
            void var_330
            sub_6b3810(&var_48, 
                sub_6bdb10(eax_41.b, eax_41, &var_330, 
                    ".xyz), -g_LightWorldDir.xyz));\n\tp = p * 0.5f + 0.5f;\n\tp = p * p;\n\t$(Out.color0) = "
            "p * $(meshSampler)($(In.tex0).xy);\n"), 
                nullptr, 0xffffffff)
            sub_53f510(&var_330)
            sub_53f510(&var_360)
            var_8_3.b = 3
            sub_53f510(&var_390)
            sub_6bd970("\t$(Out.color0).a = 1.0f;\n")
        case 5
            void var_d8
            char* eax_43 = sub_715ae0(eax_3, 0x16, &var_d8, 5, 1)
            var_8_3.b = 0x25
            void var_258
            char* eax_44 = sub_70ce80(eax_43.b, 
                "\tfloat4 L = -g_LightWorldDir;\n\tfloat3 N = normalize(", &var_258, eax_43)
            var_8_3.b = 0x26
            var_8_3.b = 0x27
            void var_3c0
            sub_6b3810(result, 
                sub_6bdb10(eax_44.b, eax_44, &var_3c0, 
                    ");\n\tfloat3 Lbrightness = max(0, dot(N, L));\n\tfloat toon = 0.0001f + ( Lbrightness.x "
            "+ Lbrightness.y + Lbrightness.z ) * 0.333f;\n"), 
                nullptr, 0xffffffff)
            sub_53f510(&var_3c0)
            sub_53f510(&var_258)
            var_8_3.b = 3
            sub_53f510(&var_d8)
            sub_6bd970("\ttoon *= 0.75f;\n")
            sub_6bd970(&data_b0018c)
            sub_6bd970("\tfloat2 ToonTexCoord = float2(toon, 0.5f);\n\tfloat4 Temp = "
            "$(meshSampler)($(In.tex0).xy);\n\tfloat4 TexColorAdjToonSDW = "
            "$(toonSampler)(ToonTexCoord.xy);\n\tTemp *= TexColorAdjToonSDW;\n\t$(Out.color0) = "
            "Temp;\n\t\t$(Out.color0).a = 1.0f;\n")
    
    char* var_3c4_1 = &var_3f8
    void* var_3fc_2 = 0xffffffff
    int32_t var_400_1 = 0
    int32_t var_3e4_48 = 0xf
    int32_t var_3e8_17 = 0
    void** var_404_1 = &var_48
    var_3f8 = 0
    sub_541b40(&var_3f8, var_404_1, var_400_1, var_3fc_2)
    var_8_3.b = 0x28
    int32_t var_3fc_3 = 0xf
    int32_t var_400_2 = 0
    char var_410 = 0
    var_8_3.b = 3
    var_8_3.b = 0x29
    sub_6b3810(result, 
        sub_71c9c0(sub_541b40(&var_410, &var_60, 0, 0xffffffff), arg2, &var_78, 1, var_410), 
        nullptr, 0xffffffff)
    var_8_3.b = 3
    int32_t var_64
    
    if (var_64 u>= 0x10)
        j__free(var_78)
    
    sub_6b3810(result, &var_30, nullptr, 0xffffffff)
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
        j__free(var_60)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
