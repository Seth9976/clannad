// 函数: sub_549110
// 地址: 0x549110
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if ((GetWindowLongA(GetDlgItem(data_20c17c4, 0x4f4f), 0xfffffff0) & 0x8000000) != 0)
    return 0

SetFocus(GetDlgItem(data_20c17c4, 0x4f4f))
sub_549050(0)
WPARAM eax_3 = sub_4c1520(data_20c17c4, 0x4f1b)

if (eax_3 != 0xffffffff)
    sub_4c11f0(eax_3, data_20c17c4, eax_3, 0x4f1b, 1)

return 1
