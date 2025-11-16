// 函数: sub_54e9f0
// 地址: 0x54e9f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

LPARAM eax_1 = data_1c054f4

if (eax_1 != 0)
    return SetForegroundWindow(eax_1)

int32_t result = DialogBoxParamA(data_134cebc, 0x130, data_7027bc, sub_54e930, eax_1)
data_1c054f4 = 0
return result
