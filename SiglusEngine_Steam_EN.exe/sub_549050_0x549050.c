// 函数: sub_549050
// 地址: 0x549050
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

SendMessageA(GetDlgItem(data_20c17c4, 0x4f4f), 0xf4, 0, 1)
SendMessageA(GetDlgItem(data_20c17c4, 0x4e54), 0xf4, 0, 1)
LRESULT result = SendMessageA(GetDlgItem(data_20c17c4, 0x4f68), 0xf4, 0, 1)

if (arg1 == 0)
    return SendMessageA(GetDlgItem(data_20c17c4, 0x4f4f), 0xf4, 1, 1)

if (arg1 == 1)
    return SendMessageA(GetDlgItem(data_20c17c4, 0x4e54), 0xf4, 1, 1)

if (arg1 != 5)
    return result

return SendMessageA(GetDlgItem(data_20c17c4, 0x4f68), 0xf4, 1, 1)
