// 函数: sub_541920
// 地址: 0x541920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0

if (*arg2 == 0)
    sub_541eb0(arg1, arg2, nullptr)
    return arg1

char* edx = arg2
char i

do
    i = *edx
    edx = &edx[1]
while (i != 0)
sub_541eb0(arg1, arg2, edx - &edx[1])
return arg1
