// 函数: sub_70df50
// 地址: 0x70df50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void** ecx = arg1 + 4
int32_t var_40c = 0

if (ecx[5] u>= 0x10)
    ecx = *ecx

void** var_414 = ecx
char var_408
sub_7112b0(&var_408, 
    "float4 %s(float4 org) {\n\tfloat4 color = org;\n\tcolor = lerp(color, g_C1, g_C1.w);\n\tcolor += "
"g_C2;\n\tcolor.a = org.a;\n\treturn color;\n}\n\n")
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
void* ecx_1

if (var_408 != 0)
    char* ecx_2 = &var_408
    char i
    
    do
        i = *ecx_2
        ecx_2 = &ecx_2[1]
    while (i != 0)
    void var_407
    ecx_1 = ecx_2 - &var_407
else
    ecx_1 = nullptr

sub_541eb0(arg2, &var_408, ecx_1)
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg2
