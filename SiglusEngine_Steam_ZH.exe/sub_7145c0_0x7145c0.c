// 函数: sub_7145c0
// 地址: 0x7145c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1a30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_490 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg3
char* result_1 = result
int32_t var_47c = 0
int32_t var_8_1 = 1
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
int32_t* eax_3 = sub_541eb0(arg3, &data_b0018c, nullptr)
int32_t var_47c_1 = 1
void* arg_8

if (arg4 != 0 && arg4 == 1)
    int32_t var_30
    
    switch (arg2)
        case 0
            eax_3 = sub_6bd970(&data_b0018c)
        case 1
            void var_390
            char* eax_4 = sub_715ae0(eax_3, 8, &var_390, 1, 1)
            var_8_1.b = 2
            void var_f0
            int32_t* eax_6 = sub_6fdbd0(&arg_8, 
                "\tfloat4 L = -g_LightWorldDir;\n\tfloat4 diffuse = g_LightDiffuse * g_MaterialDiffuse * "
            "max(0, dot(", 
                &var_f0, &arg_8)
            var_8_1.b = 3
            void var_2a0
            char* eax_7 = sub_6bdb10(eax_6.b, eax_6, &var_2a0, 
                ", L));\n\tfloat4 ambient = g_LightAmbient * g_MaterialAmbient;\n\t$(Out.color0) = "
            "diffuse;\n\t")
            var_8_1.b = 4
            void var_c0
            char* eax_8 = sub_70ce20(eax_7, eax_7, &var_c0, eax_4)
            var_8_1.b = 5
            var_8_1.b = 6
            sub_6b3810(result, sub_6bdb10(eax_8.b, eax_8, &var_30, " = ambient;\n"), nullptr, 
                0xffffffff)
            sub_53f510(&var_30)
            sub_53f510(&var_c0)
            sub_53f510(&var_2a0)
            sub_53f510(&var_f0)
            var_8_1.b = 1
            eax_3 = sub_53f510(&var_390)
        case 2
            void var_360
            int32_t* eax_10 = sub_715ae0(eax_3, 8, &var_360, 2, 1)
            var_8_1.b = 7
            void var_240
            char* eax_11 = sub_715ae0(eax_10, 7, &var_240, 2, 1)
            var_8_1.b = 8
            void var_420
            char* eax_12 = sub_715ae0(eax_11, 6, &var_420, 2, 1)
            var_8_1.b = 9
            void var_210
            char* eax_13 = sub_7171a0(&var_210, 1)
            var_8_1.b = 0xa
            void var_330
            int32_t* eax_15 = sub_6fdbd0(&arg_8, "\tfloat3 N = ", &var_330, &arg_8)
            var_8_1.b = 0xb
            void var_1e0
            char* eax_16 = sub_6bdb10(eax_15.b, eax_15, &var_1e0, 
                ";\n\tfloat3 L = -g_LightWorldDir;\n\tfloat3 E = normalize(g_CameraLocalPos - ")
            var_8_1.b = 0xc
            void var_3c0
            char* eax_17 = sub_70ce20(eax_16, eax_16, &var_3c0, eax_13)
            var_8_1.b = 0xd
            void var_1b0
            char* eax_18 = sub_6bdb10(eax_17.b, eax_17, &var_1b0, 
                ".xyz);\n\tfloat3 H = normalize(L+E);\n\tfloat4 diffuse = g_LightDiffuse * "
            "g_MaterialDiffuse * max(0, dot(N, L));\n\tfloat4 specular = pow(max(")
            var_8_1.b = 0xe
            void var_300
            char* eax_19 = sub_70ce20(eax_18, eax_18, &var_300, eax_12)
            var_8_1.b = 0xf
            void var_180
            char* eax_20 = sub_6bdb10(eax_19.b, eax_19, &var_180, " = diffuse;\n\t")
            var_8_1.b = 0x10
            void var_450
            char* eax_21 = sub_70ce20(eax_20, eax_20, &var_450, eax_11)
            var_8_1.b = 0x11
            void var_150
            char* eax_22 = sub_6bdb10(eax_21.b, eax_21, &var_150, " = specular;\n\t")
            var_8_1.b = 0x12
            void var_2d0
            char* eax_23 = sub_70ce20(eax_22, eax_22, &var_2d0, eax_10)
            var_8_1.b = 0x13
            var_8_1.b = 0x14
            void var_120
            sub_6b3810(result, sub_6bdb10(eax_23.b, eax_23, &var_120, " = ambient;\n"), nullptr, 
                0xffffffff)
            sub_53f510(&var_120)
            sub_53f510(&var_2d0)
            sub_53f510(&var_150)
            sub_53f510(&var_450)
            sub_53f510(&var_180)
            sub_53f510(&var_300)
            sub_53f510(&var_1b0)
            sub_53f510(&var_3c0)
            sub_53f510(&var_1e0)
            sub_53f510(&var_330)
            sub_53f510(&var_210)
            sub_53f510(&var_420)
            sub_53f510(&var_240)
            var_8_1.b = 1
            eax_3 = sub_53f510(&var_360)
        case 3
            void var_2b8
            int32_t* eax_25 = sub_715ae0(eax_3, 8, &var_2b8, 3, 1)
            var_8_1.b = 0x15
            void var_288
            char* eax_26 = sub_715ae0(eax_25, 6, &var_288, 3, 1)
            var_8_1.b = 0x16
            void var_258
            char* eax_27 = sub_715ae0(eax_26, 9, &var_258, 3, 1)
            var_8_1.b = 0x17
            void var_228
            char* eax_28 = sub_715ae0(eax_27, 0xa, &var_228, 3, 1)
            var_8_1.b = 0x18
            void var_1f8
            int32_t* eax_29 = sub_7171a0(&var_1f8, 1)
            var_8_1.b = 0x19
            void var_1c8
            int32_t* eax_31 = sub_6fdbd0(&arg_8, "\tfloat3 N = ", &var_1c8, &arg_8)
            var_8_1.b = 0x1a
            void var_198
            char* eax_32 = sub_6bdb10(eax_31.b, eax_31, &var_198, 
                ";\n\tfloat3 L = -g_LightWorldDir;\n\tfloat3 E = g_CameraWorldPos - ")
            var_8_1.b = 0x1b
            void var_168
            char* eax_33 = sub_70ce20(eax_32, eax_32, &var_168, eax_29)
            var_8_1.b = 0x1c
            void var_138
            char* eax_34 = sub_6bdb10(eax_33.b, eax_33, &var_138, 
                ".xyz;\n\tfloat4 diffuse = g_LightDiffuse * g_MaterialDiffuse * max(0, dot(normalize(N), "
            "normalize(L)));\n\tfloat4 ambient = g_LightAmbient * g_MaterialAmbient;\n\t")
            var_8_1.b = 0x1d
            void var_108
            char* eax_35 = sub_70ce20(eax_34, eax_34, &var_108, eax_28)
            var_8_1.b = 0x1e
            void var_d8
            char* eax_36 = sub_6bdb10(eax_35.b, eax_35, &var_d8, ".xyz = N;\n\t")
            var_8_1.b = 0x1f
            void var_a8
            char* eax_37 = sub_70ce20(eax_36, eax_36, &var_a8, eax_27)
            var_8_1.b = 0x20
            void var_90
            char* eax_38 = sub_6bdb10(eax_37.b, eax_37, &var_90, ".xyz = E;\n\t")
            var_8_1.b = 0x21
            void var_270
            char* eax_39 = sub_70ce20(eax_38, eax_38, &var_270, eax_26)
            var_8_1.b = 0x22
            void var_78
            char* eax_40 = sub_6bdb10(eax_39.b, eax_39, &var_78, " = diffuse;\n\t")
            var_8_1.b = 0x23
            void var_60
            char* eax_41 = sub_70ce20(eax_40, eax_40, &var_60, eax_25)
            var_8_1.b = 0x24
            var_8_1.b = 0x25
            void var_48
            sub_6b3810(result, 
                sub_6bdb10(eax_41.b, eax_41, &var_48, " = ambient;\n\t$(Out.color0) = diffuse;\n"), 
                nullptr, 0xffffffff)
            sub_53f510(&var_48)
            sub_53f510(&var_60)
            sub_53f510(&var_78)
            sub_53f510(&var_270)
            sub_53f510(&var_90)
            sub_53f510(&var_a8)
            sub_53f510(&var_d8)
            sub_53f510(&var_108)
            sub_53f510(&var_138)
            sub_53f510(&var_168)
            sub_53f510(&var_198)
            sub_53f510(&var_1c8)
            sub_53f510(&var_1f8)
            sub_53f510(&var_228)
            sub_53f510(&var_258)
            sub_53f510(&var_288)
            var_8_1.b = 1
            eax_3 = sub_53f510(&var_2b8)
        case 4
            void var_3a8
            int32_t* eax_43 = sub_715ae0(eax_3, 0xa, &var_3a8, 4, 1)
            var_8_1.b = 0x26
            void var_378
            int32_t* eax_44 = sub_70ce80(eax_43.b, 0xb09a70, &var_378, eax_43)
            var_8_1.b = 0x27
            void var_348
            int32_t* eax_45 = sub_6bdb10(eax_44.b, eax_44, &var_348, ".xyz = ")
            var_8_1.b = 0x28
            void var_318
            char* eax_46 = sub_6fdcc0(eax_45, eax_45, &var_318, &arg_8)
            var_8_1.b = 0x29
            var_8_1.b = 0x2a
            void var_2e8
            sub_6b3810(result, sub_6bdb10(eax_46.b, eax_46, &var_2e8, ";\n"), nullptr, 0xffffffff)
            sub_53f510(&var_2e8)
            sub_53f510(&var_318)
            sub_53f510(&var_348)
            sub_53f510(&var_378)
            var_8_1.b = 1
            eax_3 = sub_53f510(&var_3a8)
        case 5
            void var_3f0
            char* eax_48 = sub_715ae0(eax_3, 0xa, &var_3f0, 5, 1)
            var_8_1.b = 0x2b
            void var_468
            char* eax_49 = sub_70ce80(eax_48.b, 0xb09a70, &var_468, eax_48)
            var_8_1.b = 0x2c
            void var_438
            char* eax_50 = sub_6bdb10(eax_49.b, eax_49, &var_438, ".xyz = ")
            var_8_1.b = 0x2d
            void var_408
            char* eax_51 = sub_6fdcc0(eax_50, eax_50, &var_408, &arg_8)
            var_8_1.b = 0x2e
            var_8_1.b = 0x2f
            void var_3d8
            sub_6b3810(result, sub_6bdb10(eax_51.b, eax_51, &var_3d8, ";\n"), nullptr, 0xffffffff)
            sub_53f510(&var_3d8)
            sub_53f510(&var_408)
            sub_53f510(&var_438)
            sub_53f510(&var_468)
            var_8_1.b = 1
            eax_3 = sub_53f510(&var_3f0)
    
    var_8_1.b = 0x30
    sub_6b3810(result, sub_71c5f0(eax_3, arg2, &var_30, 1), nullptr, 0xffffffff)
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        j__free(var_30)

if (arg5 u>= 0x10)
    j__free(arg_8)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
