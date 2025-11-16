// 函数: sub_547000
// 地址: 0x547000
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

SendMessageA(GetDlgItem(data_20c175c, 0x4f6e), 0xf1, 0, 0)
SendMessageA(GetDlgItem(data_20c175c, 0x4f73), 0xf1, 0, 0)
int32_t nIDDlgItem

if (data_20c1760 == 0)
    nIDDlgItem = 0x4f73
else
    nIDDlgItem = 0x4f6e

LRESULT result = SendMessageA(GetDlgItem(data_20c175c, nIDDlgItem), 0xf1, 1, 0)

if (data_20c1768 == 0)
    return result

return SetDlgItemTextA(data_20c175c, 0x4e54, 0x61fcac)
