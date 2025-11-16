// 函数: sub_699470
// 地址: 0x699470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HKEY* esi = arg1

if (arg3 == 0)
    return &arg3[0xd]

int16_t* eax_1 = arg3

do
    arg1.w = *eax_1
    eax_1 = &eax_1[1]
while (arg1.w != 0)

return RegSetValueExW(*esi, arg2, 0, REG_SZ, arg3, ((eax_1 - &eax_1[1]) s>> 1 << 1) + 2)
