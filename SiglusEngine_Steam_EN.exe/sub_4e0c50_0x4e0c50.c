// 函数: sub_4e0c50
// 地址: 0x4e0c50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HKEY* esi = arg1

if (arg3 == 0)
    return &arg3[0xd]

char* eax_1 = arg3

do
    arg1.b = *eax_1
    eax_1 = &eax_1[1]
while (arg1.b != 0)

return RegSetValueExA(*esi, arg2, 0, REG_SZ, arg3, eax_1 - &eax_1[1] + 1)
