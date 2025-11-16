// 函数: sub_718be0
// 地址: 0x718be0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d2ad6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_57c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg1
char* result_1 = result
int32_t var_560 = 0
int32_t var_8_1 = 1
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
sub_541eb0(arg1, &data_b0018c, nullptr)
int32_t var_560_1 = 1
int32_t var_360 = 0xf
int32_t var_364 = 0
char var_374 = 0
sub_541eb0(&var_374, "g_DLightAmbient[i] * g_MaterialAmbient", 0x26)
var_8_1.b = 2
int32_t var_528 = 0xf
int32_t var_52c = 0
char var_53c = 0
sub_541eb0(&var_53c, "g_DLightDiffuse[i] * g_MaterialDiffuse", 0x26)
var_8_1.b = 3
int32_t var_4f8 = 0xf
int32_t var_4fc = 0
char var_50c = 0
sub_541eb0(&var_50c, "max(0, dot(N, L.xyz))", 0x15)
var_8_1.b = 4
int32_t var_d8 = 0xf
int32_t var_dc = 0
char var_ec = 0
sub_541eb0(&var_ec, 
    "g_DLightSpecular[i] * g_MaterialSpecular * pow(max(0,dot(N, H)), g_MaterialSpecularPower)", 
    0x59)
var_8_1.b = 5
int32_t var_a8 = 0xf
int32_t var_ac = 0
char var_bc = 0
sub_541eb0(&var_bc, "g_PLightAmbient[i] * g_MaterialAmbient", 0x26)
var_8_1.b = 6
int32_t var_78 = 0xf
int32_t var_7c = 0
char var_8c = 0
sub_541eb0(&var_8c, "g_PLightDiffuse[i] * g_MaterialDiffuse", 0x26)
var_8_1.b = 7
char var_44
void arg_4
int32_t* eax_4 = sub_6fdbd0(&arg_4, "max(0, dot(", &var_44, &arg_4)
var_8_1.b = 8
char var_2c
char* eax_5 = sub_6bdb10(eax_4.b, eax_4, &var_2c, ".xyz, L.xyz)) * Attenuation")
var_8_1.b = 9
int32_t var_60 = 0xf
int32_t var_64 = 0
char var_74 = 0
sub_541b40(&var_74, eax_5, 0, 0xffffffff)
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
var_8_1.b = 0xc
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_541eb0(&var_5c, 
    "g_PLightSpecular[i] * g_MaterialSpecular * pow(max(0,dot(N, H)), g_MaterialSpecularPower) * "
"Attenuation", 
    0x67)
var_8_1.b = 0xd
int32_t var_90 = 0xf
int32_t var_94 = 0
char var_a4 = 0
sub_541eb0(&var_a4, "g_SLightAmbient[i] * g_MaterialAmbient", 0x26)
var_8_1.b = 0xe
int32_t var_c0 = 0xf
int32_t var_c4 = 0
char var_d4 = 0
sub_541eb0(&var_d4, "g_SLightDiffuse[i] * g_MaterialDiffuse", 0x26)
var_8_1.b = 0xf
int32_t* eax_7 = sub_6fdbd0(&arg_4, "max(0, dot(", &var_2c, &arg_4)
var_8_1.b = 0x10
char* eax_8 = sub_6bdb10(eax_7.b, eax_7, &var_44, ".xyz, L.xyz)) * Attenuation")
var_8_1.b = 0x11
int32_t var_108 = 0xf
int32_t var_10c = 0
char var_11c = 0
sub_541b40(&var_11c, eax_8, 0, 0xffffffff)

if (var_30_1 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_2 = 0xf
int32_t var_34_1 = 0
var_44 = 0
var_8_1.b = 0x14

if (var_18_1 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_2 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_f0 = 0xf
int32_t var_f4 = 0
char var_104 = 0
var_8_1.b = 0x15
int32_t var_554
int32_t* eax_10 = sub_715ae0(
    sub_541eb0(&var_104, 
        "g_SLightSpecular[i] * g_MaterialSpecular * pow(max(0,dot(N, H)), g_MaterialSpecularPower) * "
"Attenuation", 
        0x67), 
    7, &var_554, 6, 0)
var_8_1.b = 0x16
char var_4dc
char* eax_11 = sub_715ae0(eax_10, 6, &var_4dc, 6, 0)
var_8_1.b = 0x17
char var_4ac
char* eax_12 = sub_7171a0(&var_4ac, 1)
var_8_1.b = 0x18
char var_47c
char* eax_13 = sub_7171a0(&var_47c, 1)
var_8_1.b = 0x19
char var_44c
char* eax_14 = sub_7171a0(&var_44c, 1)
var_8_1.b = 0x1a
char var_41c
char* eax_15 = sub_7171a0(&var_41c, 1)
var_8_1.b = 0x1b
char var_3ec
char* eax_16 = sub_70ce80(eax_15.b, 
    "\t$(Out.color0) = float4(0,0,0,1);\n\tfloat4 AddDiffuse = float4(0,0,0,0);\n\tfloat4 AddSpecular = "
"float4(0,0,0,0);\n\tfloat3 E = normalize(g_CameraWorldPos - ", 
    &var_3ec, eax_15)
var_8_1.b = 0x1c
char var_3bc
char* eax_17 = sub_6bdb10(eax_16.b, eax_16, &var_3bc, ".xyz);\n\tfloat3 N = ")
var_8_1.b = 0x1d
char var_38c
char* eax_18 = sub_6fdcc0(eax_17, eax_17, &var_38c, &arg_4)
var_8_1.b = 0x1e
char var_35c
char* eax_19 = sub_6bdb10(eax_18.b, eax_18, &var_35c, 
    ";\n\tfor(int i = 0; i < g_DLightNum; i++) {\n\t\tfloat4 L = -g_DLightWorldDir[i];\n\tfloat3 H = "
"normalize(L+E);\n\t\tAddDiffuse += ")
var_8_1.b = 0x1f
char var_32c
char* eax_20 = sub_6fdcc0(eax_19, eax_19, &var_32c, &var_374)
var_8_1.b = 0x20
char var_2fc
char* eax_21 = sub_6bdb10(eax_20.b, eax_20, &var_2fc, " + ")
var_8_1.b = 0x21
char var_2cc
char* eax_22 = sub_6fdcc0(eax_21, eax_21, &var_2cc, &var_53c)
var_8_1.b = 0x22
char var_29c
char* eax_23 = sub_6bdb10(eax_22.b, eax_22, &var_29c, " * ")
var_8_1.b = 0x23
char var_26c
char* eax_24 = sub_6fdcc0(eax_23, eax_23, &var_26c, &var_50c)
var_8_1.b = 0x24
char var_23c
char* eax_25 = sub_6bdb10(eax_24.b, eax_24, &var_23c, ";\n\t\tAddSpecular += ")
var_8_1.b = 0x25
char var_20c
char* eax_26 = sub_6fdcc0(eax_25, eax_25, &var_20c, &var_ec)
var_8_1.b = 0x26
char var_1dc
char* eax_27 = sub_6bdb10(eax_26.b, eax_26, &var_1dc, 
    ";\n\t}\n\tfor(int i = 0; i < g_PLightNum; i++) {\n\t\tfloat Attenuation = 0.0f;\n\t\tfloat3 "
"LightDir = ")
var_8_1.b = 0x27
char var_1ac
char* eax_28 = sub_70ce20(eax_27, eax_27, &var_1ac, eax_14)
var_8_1.b = 0x28
char var_17c
char* eax_29 = sub_6bdb10(eax_28.b, eax_28, &var_17c, 
    " - g_PLightWorldPos[i];\n\t\tfloat Dist = length(LightDir.xyz);\n\t\tfloat4 L = float4(0,0,0,1);\n"
"\tfloat Brightness = 0.0f;\n\tfloat3 H = float3(0,1,0);\n\t\tif(Dist < "
"g_PLightAttenuationsRange[i].w) {\n\t\t\tAttenuation = 1 / (g_PLightAttenuationsRange[i].x + "
"g_PLightAttenuationsRange[i].y * Dist + g_PLightAttenuatio")
var_8_1.b = 0x29
char var_4c4
char* eax_30 = sub_6fdcc0(eax_29, eax_29, &var_4c4, &var_bc)
var_8_1.b = 0x2a
char var_164
char* eax_31 = sub_6bdb10(eax_30.b, eax_30, &var_164, " + ")
var_8_1.b = 0x2b
char var_14c
char* eax_32 = sub_6fdcc0(eax_31, eax_31, &var_14c, &var_8c)
var_8_1.b = 0x2c
char var_344
char* eax_33 = sub_6bdb10(eax_32.b, eax_32, &var_344, " * ")
var_8_1.b = 0x2d
char var_434
char* eax_34 = sub_6fdcc0(eax_33, eax_33, &var_434, &var_74)
var_8_1.b = 0x2e
char var_314
char* eax_35 = sub_6bdb10(eax_34.b, eax_34, &var_314, ";\n\t\tAddSpecular += ")
var_8_1.b = 0x2f
char var_4f4
char* eax_36 = sub_6fdcc0(eax_35, eax_35, &var_4f4, &var_5c)
var_8_1.b = 0x30
char var_2e4
char* eax_37 = sub_6bdb10(eax_36.b, eax_36, &var_2e4, 
    ";\n\t}\n\tfor(int i = 0; i < g_SLightNum; i++) {\n\t\tfloat3 SLightDir = g_SLightWorldPos[i] - ")
var_8_1.b = 0x31
char var_134
char* eax_38 = sub_70ce20(eax_37, eax_37, &var_134, eax_13)
var_8_1.b = 0x32
char var_404
char* eax_39 = sub_6bdb10(eax_38.b, eax_38, &var_404, 
    ";\n\t\tfloat Rho = dot(normalize(SLightDir.xyz), normalize(-g_SLightWorldDir[i].xyz));\n\t\tfloat "
"CosTheta = (g_SLightThetaPhiFalloff[i].x);\n\t\tfloat CosPhi = (g_SLightThetaPhiFalloff[i].y);\n\t"
"float SpotPower = 0.0f;\n\t\tif(Rho > CosTheta) {\n\t\t\tSpotPower = 1.0f;\n\t\t}\n\t\telse if(Rho "
"<= CosPhi) {\n\t\t}\n\t\telse {\n\t\t\tSpotPower = pow( (Rho - CosPhi) / (CosTheta - CosPh")
var_8_1.b = 0x33
char var_2b4
char* eax_40 = sub_70ce20(eax_39, eax_39, &var_2b4, eax_12)
var_8_1.b = 0x34
char var_494
char* eax_41 = sub_6bdb10(eax_40.b, eax_40, &var_494, 
    " - g_SLightWorldPos[i];\n\t\tfloat Dist = length(LightDir.xyz);\n\t\tfloat4 L = float4(0,0,0,1);\n"
"\tfloat Brightness = 0.0f;\n\tfloat3 H = float3(0,1,0);\n\t\tif(Dist < g_SLightAtt")
var_8_1.b = 0x35
char var_284
char* eax_42 = sub_6fdcc0(eax_41, eax_41, &var_284, &var_a4)
var_8_1.b = 0x36
char var_3d4
int32_t* eax_43 = sub_6bdb10(eax_42.b, eax_42, &var_3d4, " + ")
var_8_1.b = 0x37
char var_254
int32_t* eax_44 = sub_6fdcc0(eax_43, eax_43, &var_254, &var_d4)
var_8_1.b = 0x38
char var_524
int32_t* eax_45 = sub_6bdb10(eax_44.b, eax_44, &var_524, " * ")
var_8_1.b = 0x39
char var_224
int32_t* eax_46 = sub_6fdcc0(eax_45, eax_45, &var_224, &var_11c)
var_8_1.b = 0x3a
char var_3a4
int32_t* eax_47 = sub_6bdb10(eax_46.b, eax_46, &var_3a4, " * SpotPower;\n\t\tAddSpecular += ")
var_8_1.b = 0x3b
char var_1f4
int32_t* eax_48 = sub_6fdcc0(eax_47, eax_47, &var_1f4, &var_104)
var_8_1.b = 0x3c
char var_464
void* eax_49 = sub_6bdb10(eax_48.b, eax_48, &var_464, " * SpotPower;\n\t}\n\t")
var_8_1.b = 0x3d
char var_1c4
char* eax_50 = sub_70ce20(eax_49, eax_49, &var_1c4, eax_11)
var_8_1.b = 0x3e
char var_194
char* eax_51 = sub_6bdb10(eax_50.b, eax_50, &var_194, 
    " = g_GlobalAmbient * g_MaterialAmbient + g_MaterialEmissive + AddDiffuse;\n\t")
var_8_1.b = 0x3f
int32_t* eax_52 = sub_70ce20(eax_51, eax_51, &var_2c, eax_10)
var_8_1.b = 0x40
var_8_1.b = 0x41
sub_6b3810(result, sub_6bdb10(eax_52.b, eax_52, &var_44, " = AddSpecular;\n"), nullptr, 0xffffffff)

if (var_30_2 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_3 = 0xf
int32_t var_34_2 = 0
var_44 = 0

if (var_18_2 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_3 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
int32_t var_180

if (var_180 u>= 0x10)
    j__free(var_194.d)

int32_t var_180_1 = 0xf
int32_t var_184 = 0
var_194 = 0
int32_t var_1b0

if (var_1b0 u>= 0x10)
    j__free(var_1c4.d)

int32_t var_1b0_1 = 0xf
int32_t var_1b4 = 0
var_1c4 = 0
int32_t var_450

if (var_450 u>= 0x10)
    j__free(var_464.d)

int32_t var_450_1 = 0xf
int32_t var_454 = 0
var_464 = 0
int32_t var_1e0

if (var_1e0 u>= 0x10)
    j__free(var_1f4.d)

int32_t var_1e0_1 = 0xf
int32_t var_1e4 = 0
var_1f4 = 0
int32_t var_390

if (var_390 u>= 0x10)
    j__free(var_3a4.d)

int32_t var_390_1 = 0xf
int32_t var_394 = 0
var_3a4 = 0
int32_t var_210

if (var_210 u>= 0x10)
    j__free(var_224.d)

int32_t var_210_1 = 0xf
int32_t var_214 = 0
var_224 = 0
int32_t var_510

if (var_510 u>= 0x10)
    j__free(var_524.d)

int32_t var_510_1 = 0xf
int32_t var_514 = 0
var_524 = 0
int32_t var_240

if (var_240 u>= 0x10)
    j__free(var_254.d)

int32_t var_240_1 = 0xf
int32_t var_244 = 0
var_254 = 0
int32_t var_3c0

if (var_3c0 u>= 0x10)
    j__free(var_3d4.d)

int32_t var_3c0_1 = 0xf
int32_t var_3c4 = 0
var_3d4 = 0
int32_t var_270

if (var_270 u>= 0x10)
    j__free(var_284.d)

int32_t var_270_1 = 0xf
int32_t var_274 = 0
var_284 = 0
int32_t var_480

if (var_480 u>= 0x10)
    j__free(var_494.d)

int32_t var_480_1 = 0xf
int32_t var_484 = 0
var_494 = 0
int32_t var_2a0

if (var_2a0 u>= 0x10)
    j__free(var_2b4.d)

int32_t var_2a0_1 = 0xf
int32_t var_2a4 = 0
var_2b4 = 0
int32_t var_3f0

if (var_3f0 u>= 0x10)
    j__free(var_404.d)

int32_t var_3f0_1 = 0xf
int32_t var_3f4 = 0
var_404 = 0
int32_t var_120

if (var_120 u>= 0x10)
    j__free(var_134.d)

int32_t var_120_1 = 0xf
int32_t var_124 = 0
var_134 = 0
int32_t var_2d0

if (var_2d0 u>= 0x10)
    j__free(var_2e4.d)

int32_t var_2d0_1 = 0xf
int32_t var_2d4 = 0
var_2e4 = 0
int32_t var_4e0

if (var_4e0 u>= 0x10)
    j__free(var_4f4.d)

int32_t var_4e0_1 = 0xf
int32_t var_4e4 = 0
var_4f4 = 0
int32_t var_300

if (var_300 u>= 0x10)
    j__free(var_314.d)

int32_t var_300_1 = 0xf
int32_t var_304 = 0
var_314 = 0
int32_t var_420

if (var_420 u>= 0x10)
    j__free(var_434.d)

int32_t var_420_1 = 0xf
int32_t var_424 = 0
var_434 = 0
int32_t var_330

if (var_330 u>= 0x10)
    j__free(var_344.d)

int32_t var_330_1 = 0xf
int32_t var_334 = 0
var_344 = 0
int32_t var_138

if (var_138 u>= 0x10)
    j__free(var_14c.d)

int32_t var_138_1 = 0xf
int32_t var_13c = 0
var_14c = 0
int32_t var_150

if (var_150 u>= 0x10)
    j__free(var_164.d)

int32_t var_150_1 = 0xf
int32_t var_154 = 0
var_164 = 0
int32_t var_4b0

if (var_4b0 u>= 0x10)
    j__free(var_4c4.d)

int32_t var_4b0_1 = 0xf
int32_t var_4b4 = 0
var_4c4 = 0
int32_t var_168

if (var_168 u>= 0x10)
    j__free(var_17c.d)

int32_t var_168_1 = 0xf
int32_t var_16c = 0
var_17c = 0
int32_t var_198

if (var_198 u>= 0x10)
    j__free(var_1ac.d)

int32_t var_198_1 = 0xf
int32_t var_19c = 0
var_1ac = 0
int32_t var_1c8

if (var_1c8 u>= 0x10)
    j__free(var_1dc.d)

int32_t var_1c8_1 = 0xf
int32_t var_1cc = 0
var_1dc = 0
int32_t var_1f8

if (var_1f8 u>= 0x10)
    j__free(var_20c.d)

int32_t var_1f8_1 = 0xf
int32_t var_1fc = 0
var_20c = 0
int32_t var_228

if (var_228 u>= 0x10)
    j__free(var_23c.d)

int32_t var_228_1 = 0xf
int32_t var_22c = 0
var_23c = 0
int32_t var_258

if (var_258 u>= 0x10)
    j__free(var_26c.d)

int32_t var_258_1 = 0xf
int32_t var_25c = 0
var_26c = 0
int32_t var_288

if (var_288 u>= 0x10)
    j__free(var_29c.d)

int32_t var_288_1 = 0xf
int32_t var_28c = 0
var_29c = 0
int32_t var_2b8

if (var_2b8 u>= 0x10)
    j__free(var_2cc.d)

int32_t var_2b8_1 = 0xf
int32_t var_2bc = 0
var_2cc = 0
int32_t var_2e8

if (var_2e8 u>= 0x10)
    j__free(var_2fc.d)

int32_t var_2e8_1 = 0xf
int32_t var_2ec = 0
var_2fc = 0
int32_t var_318

if (var_318 u>= 0x10)
    j__free(var_32c.d)

int32_t var_318_1 = 0xf
int32_t var_31c = 0
var_32c = 0
int32_t var_348

if (var_348 u>= 0x10)
    j__free(var_35c.d)

int32_t var_348_1 = 0xf
int32_t var_34c = 0
var_35c = 0
int32_t var_378

if (var_378 u>= 0x10)
    j__free(var_38c.d)

int32_t var_378_1 = 0xf
int32_t var_37c = 0
var_38c = 0
int32_t var_3a8

if (var_3a8 u>= 0x10)
    j__free(var_3bc.d)

int32_t var_3a8_1 = 0xf
int32_t var_3ac = 0
var_3bc = 0
int32_t var_3d8

if (var_3d8 u>= 0x10)
    j__free(var_3ec.d)

int32_t var_3d8_1 = 0xf
int32_t var_3dc = 0
var_3ec = 0
int32_t var_408

if (var_408 u>= 0x10)
    j__free(var_41c.d)

int32_t var_408_1 = 0xf
int32_t var_40c = 0
var_41c = 0
int32_t var_438

if (var_438 u>= 0x10)
    j__free(var_44c.d)

int32_t var_438_1 = 0xf
int32_t var_43c = 0
var_44c = 0
int32_t var_468

if (var_468 u>= 0x10)
    j__free(var_47c.d)

int32_t var_468_1 = 0xf
int32_t var_46c = 0
var_47c = 0
int32_t var_498

if (var_498 u>= 0x10)
    j__free(var_4ac.d)

int32_t var_498_1 = 0xf
int32_t var_49c = 0
var_4ac = 0
int32_t var_4c8

if (var_4c8 u>= 0x10)
    j__free(var_4dc.d)

int32_t var_4c8_1 = 0xf
int32_t var_4cc = 0
var_4dc = 0
int32_t var_540

if (var_540 u>= 0x10)
    j__free(var_554)

if (var_f0 u>= 0x10)
    j__free(var_104.d)

int32_t var_f0_1 = 0xf
int32_t var_f4_1 = 0
var_104 = 0

if (var_108 u>= 0x10)
    j__free(var_11c.d)

int32_t var_108_1 = 0xf
int32_t var_10c_1 = 0
var_11c = 0

if (var_c0 u>= 0x10)
    j__free(var_d4.d)

int32_t var_c0_1 = 0xf
int32_t var_c4_1 = 0
var_d4 = 0

if (var_90 u>= 0x10)
    j__free(var_a4.d)

int32_t var_90_1 = 0xf
int32_t var_94_1 = 0
var_a4 = 0

if (var_48 u>= 0x10)
    j__free(var_5c.d)

int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0

if (var_60 u>= 0x10)
    j__free(var_74.d)

int32_t var_60_1 = 0xf
int32_t var_64_1 = 0
var_74 = 0

if (var_78 u>= 0x10)
    j__free(var_8c.d)

int32_t var_78_1 = 0xf
int32_t var_7c_1 = 0
var_8c = 0

if (var_a8 u>= 0x10)
    j__free(var_bc.d)

int32_t var_a8_1 = 0xf
int32_t var_ac_1 = 0
var_bc = 0

if (var_d8 u>= 0x10)
    j__free(var_ec.d)

int32_t var_d8_1 = 0xf
char var_555 = 0
int32_t var_dc_1 = 0
std::char_traits<char>::assign(&var_ec, &var_555)
sub_53f510(&var_50c)
sub_53f510(&var_53c)
sub_53f510(&var_374)
sub_53f510(&arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
