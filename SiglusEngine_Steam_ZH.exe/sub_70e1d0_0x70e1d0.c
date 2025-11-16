// 函数: sub_70e1d0
// 地址: 0x70e1d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_414 = 0
int32_t* eax_2

if (arg1[5] u< 0x10)
    eax_2 = arg1
else
    eax_2 = *arg1

int64_t var_420 = _mm_cvtps_pd(arg1[9])
int64_t var_428 = _mm_cvtps_pd(arg1[8])
int64_t var_430 = _mm_cvtps_pd(arg1[7])
int64_t var_438 = _mm_cvtps_pd(arg1[6])
int32_t* var_43c = eax_2
char var_410
sub_7112b0(&var_410, "float4 %s( float2 uv ) {\n\treturn float4(%f, %f, %f, %f);\n}\n\n")
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
int32_t ecx

if (var_410 != 0)
    char* ecx_1 = &var_410
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    void var_40f
    ecx = ecx_1 - &var_40f
else
    ecx = 0

var_420:4.d = ecx
var_420.d = &var_410
sub_541eb0(arg2, var_420)
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg2
