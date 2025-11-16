// 函数: sub_70e2a0
// 地址: 0x70e2a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void** eax_2 = &arg1[0xa]
int32_t var_40c = 0
char const* const var_41c

if (arg1[0x10].b != 0)
    if (eax_2[5] u>= 0x10)
        eax_2 = *eax_2
    
    if (arg1[5] u>= 0x10)
        arg1 = *arg1
    
    void** var_414_1 = eax_2
    void** var_418_1 = arg1
    var_41c = "float4 %s( float4 uv ) {\n\treturn tex2Dproj(%s, uv);\n}\n\n"
else
    if (eax_2[5] u>= 0x10)
        eax_2 = *eax_2
    
    if (arg1[5] u>= 0x10)
        arg1 = *arg1
    
    void** var_414 = eax_2
    void** var_418 = arg1
    var_41c = "float4 %s( float2 uv ) {\n\treturn tex2D(%s, uv);\n}\n\n"

char var_408
sub_7112b0(&var_408, var_41c)
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
void* ecx

if (var_408 != 0)
    char* ecx_1 = &var_408
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    void var_407
    ecx = ecx_1 - &var_407
else
    ecx = nullptr

sub_541eb0(arg2, &var_408, ecx)
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg2
