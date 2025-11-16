// 函数: sub_546540
// 地址: 0x546540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WPARAM wParam

if (data_1b8be8f == 0)
    wParam = 1
else
    wParam = 0

int32_t var_4 = SendDlgItemMessageA(data_20c1740, 0x4ef4, 0xf1, wParam, 0)
sub_4d5720(data_20c1740)
SetFocus(GetDlgItem(data_20c1740, 0x4f4f))
return SendMessageA(GetDlgItem(data_20c1740, 0x4f4f), 0xf4, 1, 1)
