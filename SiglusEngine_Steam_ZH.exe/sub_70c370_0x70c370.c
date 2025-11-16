// 函数: sub_70c370
// 地址: 0x70c370
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9d09a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_esi
int32_t var_6c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34
char* eax_6 = sub_7144b0(arg4, arg2, &var_34, arg3, arg4.b)
int32_t var_c_1 = 0
char* eax_7 = sub_70ce80(eax_6.b, 
    "\tPS_OUTPUT Out = (PS_OUTPUT)0;\n\t$(Out.color0) =  $(In.color0) * $(meshSampler)($(In.tex0).xy);\n", 
    &var_64, eax_6)
var_c_1.b = 1
var_c_1.b = 2
char var_4c
int32_t* result = sub_6b3810(arg1, 
    sub_6bdb10(eax_7.b, eax_7, &var_4c, 
        "\t$(Out.color0) =  VertexColor($(Out.color0), $(In.color1));\n\t$(Out.color0) =  MRBDColor($(Out."
"color0));\n\t$(Out.color0) =  RGBColor($(Out.color0));\n\treturn Out;\n"), 
    nullptr, 0xffffffff)
int32_t var_38

if (var_38 u>= 0x10)
    result = j__free(var_4c.d)

int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c = 0
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
sub_745f2b(eax_2 ^ &var_64)
return result
