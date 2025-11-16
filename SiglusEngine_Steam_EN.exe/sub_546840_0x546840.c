// 函数: sub_546840
// 地址: 0x546840
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WPARAM wParam

if (data_20c174c == 0)
    wParam = 0
else
    wParam = 1

SendDlgItemMessageA(data_20c1748, 0x4eae, 0xf1, wParam, 0)
WPARAM wParam_1

if (data_20c1750 == 0)
    wParam_1 = 0
else
    wParam_1 = 1

SendDlgItemMessageA(data_20c1748, 0x4eb9, 0xf1, wParam_1, 0)
WPARAM wParam_2

if (data_20c1754 == 0)
    wParam_2 = 0
else
    wParam_2 = 1

SendDlgItemMessageA(data_20c1748, 0x4ec4, 0xf1, wParam_2, 0)
SendMessageA(GetDlgItem(data_20c1748, 0x4f6e), 0xf1, 0, 0)
SendMessageA(GetDlgItem(data_20c1748, 0x4f73), 0xf1, 0, 0)
int32_t nIDDlgItem

if (data_20c174c == 0)
    nIDDlgItem = 0x4f73
else
    nIDDlgItem = 0x4f6e

SendMessageA(GetDlgItem(data_20c1748, nIDDlgItem), 0xf1, 1, 0)
SendMessageA(GetDlgItem(data_20c1748, 0x4fad), 0x408, 1, 8)
SendMessageA(GetDlgItem(data_20c1748, 0x4fad), 0x407, 1, 0)
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x51eb851f, data_20c1758 - 0x64)
int32_t edx_1 = edx s>> 3
SendMessageA(GetDlgItem(data_20c1748, 0x4fad), 0x405, 1, 8 - ((edx_1 u>> 0x1f) + edx_1))
return sub_546760() __tailcall
