// 函数: sub_543160
// 地址: 0x543160
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

SendMessageA(GetDlgItem(data_20c152c, 0x4f6a), 0xf1, 0, 0)
SendMessageA(GetDlgItem(data_20c152c, 0x4f6b), 0xf1, 0, 0)
int32_t nIDDlgItem

if (data_20c1534 == 0)
    sub_543040(0xff)
    int32_t var_c_1 = 0
    int32_t var_10_1 = 1
    int32_t var_14_1 = 0xf1
    nIDDlgItem = 0x4f6b
else
    sub_543040(0xff - data_20c1530)
    int32_t var_c = 0
    int32_t var_10 = 1
    int32_t var_14 = 0xf1
    nIDDlgItem = 0x4f6a

SendMessageA(GetDlgItem(data_20c152c, nIDDlgItem), 0xf1, 1, 0)
return SendMessageA(GetDlgItem(data_20c152c, 0x4fae), 0x405, 1, data_20c1530)
