// 函数: sub_6bde40
// 地址: 0x6bde40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg4
int32_t var_c = 0

do
    arg1.b = *esi
    esi = &esi[1]
while (arg1.b != 0)

char* ecx_1 = arg2

do
    arg1.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (arg1.b != 0)

sub_6bdea0(arg1, arg2, arg3, ecx_1 - &ecx_1[1], arg4, esi - &esi[1])
return arg3
