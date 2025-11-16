// 函数: sub_543e30
// 地址: 0x543e30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

PSTR lpString_2 = data_20c1658
PSTR lpString

lpString = lpString_2 == 0 ? 0x61fcb8 : lpString_2

SetDlgItemTextA(data_20c1654, 0x4fea, lpString)
PSTR lpString_1 = data_20c165c

if (lpString_1 != 0)
    SetDlgItemTextA(data_20c1654, 0x4ef6, lpString_1)

int32_t var_8_2 = SetFocus(GetDlgItem(data_20c1654, 0x4f4f))
return sub_4d5720(data_20c1654)
