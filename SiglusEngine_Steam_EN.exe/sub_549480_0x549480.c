// 函数: sub_549480
// 地址: 0x549480
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if ((GetWindowLongA(GetDlgItem(data_20c17c4, 0x4ef5), 0xfffffff0) & 0x8000000) != 0)
    return 0

SetFocus(GetDlgItem(data_20c17c4, 0x4ef5))
SendMessageA(GetDlgItem(data_20c17c4, 0x4f4f), 0xf4, 0, 1)
SendMessageA(GetDlgItem(data_20c17c4, 0x4e54), 0xf4, 0, 1)
SendMessageA(GetDlgItem(data_20c17c4, 0x4f68), 0xf4, 0, 1)
return 1
