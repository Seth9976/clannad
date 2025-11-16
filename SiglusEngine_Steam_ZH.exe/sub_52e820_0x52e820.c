// 函数: sub_52e820
// 地址: 0x52e820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0

if (*arg2 == 0)
    sub_52e720(arg1, arg2, nullptr)
    return arg1

int16_t* ecx_1 = arg2
int16_t i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
sub_52e720(arg1, arg2, (ecx_1 - &ecx_1[1]) s>> 1)
return arg1
