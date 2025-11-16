// 函数: sub_46b5c3
// 地址: 0x46b5c3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return arg2

int32_t* eax_1 = &arg1

do
    eax_1 = *eax_1 + 0xc
while (*eax_1 != 0)

*eax_1 = arg2
return arg1
