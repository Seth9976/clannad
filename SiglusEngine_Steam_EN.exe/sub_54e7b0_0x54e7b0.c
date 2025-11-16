// 函数: sub_54e7b0
// 地址: 0x54e7b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

LPARAM eax_2 = data_1c054f8

if (eax_2 != 0)
    SetForegroundWindow(eax_2)
    return 0

DialogBoxParamA(data_134cebc, 0x132, data_7027bc, sub_54e670, eax_2)
data_1c054f8 = 0
return 1
