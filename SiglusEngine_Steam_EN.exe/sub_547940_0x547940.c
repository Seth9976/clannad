// 函数: sub_547940
// 地址: 0x547940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

SendMessageA(GetDlgItem(data_20c17a0, 0x4f6e), 0xf1, 0, 0)
SendMessageA(GetDlgItem(data_20c17a0, 0x4f73), 0xf1, 0, 0)
SendMessageA(GetDlgItem(data_20c17a0, 0x4f78), 0xf1, 0, 0)
int32_t eax_3 = data_20c17a4
int32_t nIDDlgItem

if (eax_3 == 1)
    nIDDlgItem = 0x4f73
else if (eax_3 == 2)
    nIDDlgItem = 0x4f78
else
    nIDDlgItem = 0x4f6e

LRESULT result = SendMessageA(GetDlgItem(data_20c17a0, nIDDlgItem), 0xf1, 1, 0)

if (data_20c17ac == 0)
    return result

return SetDlgItemTextA(data_20c17a0, 0x4e54, 0x6200a0)
