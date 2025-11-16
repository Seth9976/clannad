// 函数: sub_5329d0
// 地址: 0x5329d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1

if (*arg2 == 0)
    return sub_532910(arg1, arg2, nullptr)

int16_t* eax_1 = arg2

do
    arg1.w = *eax_1
    eax_1 = &eax_1[1]
while (arg1.w != 0)

return sub_532910(esi, arg2, (eax_1 - &eax_1[1]) s>> 1)
