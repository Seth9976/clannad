// 函数: sub_70bb60
// 地址: 0x70bb60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9d095c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_274
int32_t eax_2 = __security_cookie ^ &var_274
int32_t __saved_edi
int32_t var_284 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char const* const var_288 =
    "\t$(Out.tex0).xy  = $(In.uv);\n\t$(Out.color1)  = $(In.color);\n\treturn Out;\n\n"
void var_2a0
int32_t var_34
char* eax_7 = sub_714370(sub_7171a0(&var_2a0, 3), arg2, &var_34, arg3, arg4, var_2a0)
int32_t var_c_1 = 0
char var_64
char* eax_8 = sub_7171a0(&var_64, 3)
var_c_1.b = 1
char var_94
char* eax_9 = sub_7171a0(&var_94, 3)
var_c_1.b = 2
char var_c4
char* eax_10 = sub_7171a0(&var_c4, 1)
var_c_1.b = 3
char var_f4
char* eax_11 = sub_7171a0(&var_f4, 3)
var_c_1.b = 4
char var_124
char* eax_12 = sub_7171a0(&var_124, 1)
var_c_1.b = 5
char var_154
char* eax_13 = sub_7171a0(&var_154, 3)
var_c_1.b = 6
char var_184
char* eax_14 = sub_7171a0(&var_184, 1)
var_c_1.b = 7
char var_1b4
char* eax_15 = sub_70ce80(eax_14.b, "\tVS_OUTPUT Out = (VS_OUTPUT)0;\n\tfloat3 ", &var_1b4, eax_14)
var_c_1.b = 8
char var_1e4
char* eax_16 = sub_6bdb10(eax_15.b, eax_15, &var_1e4, " = 0.0f;\n\tfloat3 ")
var_c_1.b = 9
char var_214
char* eax_17 = sub_70ce20(eax_16, eax_16, &var_214, eax_13)
var_c_1.b = 0xa
char var_244
char* eax_18 = sub_6bdb10(eax_17.b, eax_17, &var_244, 
    " = 0.0f;\n\tfloat LastWeight = 0.0f;\n\tint NumBones = $(CurNumBones);\n\tint4 IndexVector = ($(In."
"blendIndices));\n\tfloat BlendWeightsArray[4]")
var_c_1.b = 0xb
char var_13c
char* eax_19 = sub_70ce20(eax_18, eax_18, &var_13c, eax_12)
var_c_1.b = 0xc
char var_7c
char* eax_20 =
    sub_6bdb10(eax_19.b, eax_19, &var_7c, " = mul(float4($(In.pos).xyz, 1.0f), Comb);\n\t")
var_c_1.b = 0xd
char var_25c
char* eax_21 = sub_70ce20(eax_20, eax_20, &var_25c, eax_11)
var_c_1.b = 0xe
char var_dc
char* eax_22 = sub_6bdb10(eax_21.b, eax_21, &var_dc, 
    ".xyz = mul($(In.normal).xyz, (float3x3)Comb);\n\t$(Out.pos) = mul(float4(")
var_c_1.b = 0xf
char var_19c
char* eax_23 = sub_70ce20(eax_22, eax_22, &var_19c, eax_10)
var_c_1.b = 0x10
char var_4c
char* eax_24 = sub_6bdb10(eax_23.b, eax_23, &var_4c, 
    ".xyz, 1.0f), mView);\n\t$(Out.pos) = mul($(Out.pos), mProj);\n\t")
var_c_1.b = 0x11
char var_1cc
char* eax_25 = sub_70ce20(eax_24, eax_24, &var_1cc, eax_9)
var_c_1.b = 0x12
char var_10c
char* eax_26 = sub_6bdb10(eax_25.b, eax_25, &var_10c, ".xyz = normalize(")
var_c_1.b = 0x13
char var_1fc
char* eax_27 = sub_70ce20(eax_26, eax_26, &var_1fc, eax_8)
var_c_1.b = 0x14
char var_ac
char* eax_28 = sub_6bdb10(eax_27.b, eax_27, &var_ac, ".xyz);\n\t$(Out.color0) = $(In.color);\n")
var_c_1.b = 0x15
char var_22c
char* eax_29 = sub_70ce20(eax_28, eax_28, &var_22c, eax_7)
var_c_1.b = 0x16
var_c_1.b = 0x17
char var_16c
int32_t* result =
    sub_6b3810(arg1, sub_6bdb10(eax_29.b, eax_29, &var_16c, var_288), nullptr, 0xffffffff)
int32_t var_158

if (var_158 u>= 0x10)
    result = j__free(var_16c.d)

int32_t var_158_1 = 0xf
int32_t var_15c = 0
var_16c = 0
int32_t var_218

if (var_218 u>= 0x10)
    result = j__free(var_22c.d)

int32_t var_218_1 = 0xf
int32_t var_21c = 0
var_22c = 0
int32_t var_98

if (var_98 u>= 0x10)
    result = j__free(var_ac.d)

int32_t var_98_1 = 0xf
int32_t var_9c = 0
var_ac = 0
int32_t var_1e8

if (var_1e8 u>= 0x10)
    result = j__free(var_1fc.d)

int32_t var_1e8_1 = 0xf
int32_t var_1ec = 0
var_1fc = 0
int32_t var_f8

if (var_f8 u>= 0x10)
    result = j__free(var_10c.d)

int32_t var_f8_1 = 0xf
int32_t var_fc = 0
var_10c = 0
int32_t var_1b8

if (var_1b8 u>= 0x10)
    result = j__free(var_1cc.d)

int32_t var_1b8_1 = 0xf
int32_t var_1bc = 0
var_1cc = 0
int32_t var_38

if (var_38 u>= 0x10)
    result = j__free(var_4c.d)

int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c = 0
int32_t var_188

if (var_188 u>= 0x10)
    result = j__free(var_19c.d)

int32_t var_188_1 = 0xf
int32_t var_18c = 0
var_19c = 0
int32_t var_c8

if (var_c8 u>= 0x10)
    result = j__free(var_dc.d)

int32_t var_c8_1 = 0xf
int32_t var_cc = 0
var_dc = 0
int32_t var_248

if (var_248 u>= 0x10)
    result = j__free(var_25c.d)

int32_t var_248_1 = 0xf
int32_t var_24c = 0
var_25c = 0
int32_t var_68

if (var_68 u>= 0x10)
    result = j__free(var_7c.d)

int32_t var_68_1 = 0xf
int32_t var_6c = 0
var_7c = 0
int32_t var_128

if (var_128 u>= 0x10)
    result = j__free(var_13c.d)

int32_t var_128_1 = 0xf
int32_t var_12c = 0
var_13c = 0
int32_t var_230

if (var_230 u>= 0x10)
    result = j__free(var_244.d)

int32_t var_230_1 = 0xf
int32_t var_234 = 0
var_244 = 0
int32_t var_200

if (var_200 u>= 0x10)
    result = j__free(var_214.d)

int32_t var_200_1 = 0xf
int32_t var_204 = 0
var_214 = 0
int32_t var_1d0

if (var_1d0 u>= 0x10)
    result = j__free(var_1e4.d)

int32_t var_1d0_1 = 0xf
int32_t var_1d4 = 0
var_1e4 = 0
int32_t var_1a0

if (var_1a0 u>= 0x10)
    result = j__free(var_1b4.d)

int32_t var_1a0_1 = 0xf
int32_t var_1a4 = 0
var_1b4 = 0
int32_t var_170

if (var_170 u>= 0x10)
    result = j__free(var_184.d)

int32_t var_170_1 = 0xf
int32_t var_174 = 0
var_184 = 0
int32_t var_140

if (var_140 u>= 0x10)
    result = j__free(var_154.d)

int32_t var_140_1 = 0xf
int32_t var_144 = 0
var_154 = 0
int32_t var_110

if (var_110 u>= 0x10)
    result = j__free(var_124.d)

int32_t var_110_1 = 0xf
int32_t var_114 = 0
var_124 = 0
int32_t var_e0

if (var_e0 u>= 0x10)
    result = j__free(var_f4.d)

int32_t var_e0_1 = 0xf
int32_t var_e4 = 0
var_f4 = 0
int32_t var_b0

if (var_b0 u>= 0x10)
    result = j__free(var_c4.d)

int32_t var_b0_1 = 0xf
int32_t var_b4 = 0
var_c4 = 0
int32_t var_80

if (var_80 u>= 0x10)
    result = j__free(var_94.d)

int32_t var_80_1 = 0xf
int32_t var_84 = 0
var_94 = 0
int32_t var_50

if (var_50 u>= 0x10)
    result = j__free(var_64.d)

int32_t var_50_1 = 0xf
int32_t var_54 = 0
var_64 = 0
int32_t var_20

if (var_20 u>= 0x10)
    result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_274)
return result
