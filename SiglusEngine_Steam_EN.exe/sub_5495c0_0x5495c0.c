// 函数: sub_5495c0
// 地址: 0x5495c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_20c2010 != 0
        && (GetWindowLongA(GetDlgItem(data_20c17c4, 0x4f68), 0xfffffff0) & 0x8000000) == 0)
    SetFocus(GetDlgItem(data_20c17c4, 0x4f68))
    SendMessageA(GetDlgItem(data_20c17c4, 0x4f4f), 0xf4, 0, 1)
    SendMessageA(GetDlgItem(data_20c17c4, 0x4e54), 0xf4, 0, 1)
    SendMessageA(GetDlgItem(data_20c17c4, 0x4f68), 0xf4, 0, 1)
    SendMessageA(GetDlgItem(data_20c17c4, 0x4f68), 0xf4, 1, 1)
    return 1

return 0
