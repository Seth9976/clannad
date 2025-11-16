// 函数: sub_542be0
// 地址: 0x542be0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

SendMessageA(GetDlgItem(data_20c0554, 0x4f6a), 0xf1, 0, 0)
SendMessageA(GetDlgItem(data_20c0554, 0x4f6b), 0xf1, 0, 0)
int32_t nIDDlgItem

if (data_20c0558 == 0)
    nIDDlgItem = 0x4f6b
else
    nIDDlgItem = 0x4f6a

SendMessageA(GetDlgItem(data_20c0554, nIDDlgItem), 0xf1, 1, 0)
SendMessageA(GetDlgItem(data_20c0554, 0x4fae), 0x405, 1, data_20c1520)
SendMessageA(GetDlgItem(data_20c0554, 0x4faf), 0x405, 1, data_20c1524)
WPARAM __saved_edi

if (data_20c1528 == 0)
    __saved_edi = 0
else
    __saved_edi = 1

return SendDlgItemMessageA(data_20c0554, 0x4f2b, 0xf1, __saved_edi, 0)
