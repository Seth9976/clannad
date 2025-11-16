// 函数: sub_460594
// 地址: 0x460594
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax = arg2
char i

do
    i = *eax
    eax = &eax[1]
while (i != 0)
sub_481f40(arg1 + 0x30, arg2, eax - &eax[1], &arg2)
return arg2
