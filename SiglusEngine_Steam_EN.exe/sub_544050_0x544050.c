// 函数: sub_544050
// 地址: 0x544050
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

PSTR lpString_1 = data_20c166c
PSTR lpString

lpString = lpString_1 == 0 ? 0x61fce4 : lpString_1

SetDlgItemTextA(data_20c1668, 0x4fea, lpString)
SetDlgItemInt(data_20c1668, 0x4ef6, data_20c1670, 1)
SendMessageA(GetDlgItem(data_20c1668, 0x4fbc), 0x465, 0, 
    zx.d(data_20c1678.w) << 0x10 | zx.d(data_20c167c.w))
int32_t var_4_2 = SetFocus(GetDlgItem(data_20c1668, 0x4f4f))
return sub_4d5720(data_20c1668)
