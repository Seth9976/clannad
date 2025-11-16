// 函数: sub_542cb0
// 地址: 0x542cb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

SendMessageA(GetDlgItem(data_20c0554, 0x4fae), 0x408, 1, 0x32)
SendMessageA(GetDlgItem(data_20c0554, 0x4fae), 0x407, 1, 0)
SendMessageA(GetDlgItem(data_20c0554, 0x4fae), 0x414, 5, 0)
SendMessageA(GetDlgItem(data_20c0554, 0x4faf), 0x408, 1, 0x64)
SendMessageA(GetDlgItem(data_20c0554, 0x4faf), 0x407, 1, 0)
SendMessageA(GetDlgItem(data_20c0554, 0x4faf), 0x414, 0xa, 0)

if (data_703708 != 0)
    SetDlgItemTextA(data_20c0554, 0x4f2b, 0x12a5584)
else
    ShowWindow(GetDlgItem(data_20c0554, 0x4f2b), SW_HIDE)

data_20c0558 = data_13132f8
int32_t eax_8
int32_t edx
edx:eax_8 = muls.dp.d(0x66666667, data_13132fc)
int32_t edx_1 = edx s>> 2
data_20c1520 = (edx_1 u>> 0x1f) + edx_1
int32_t eax_12
int32_t edx_2
edx_2:eax_12 = muls.dp.d(0x51eb851f, data_1313300)
int32_t edx_3 = edx_2 s>> 5
data_20c1524 = (edx_3 u>> 0x1f) + edx_3
data_20c1528 = data_1313308
sub_542be0()
sub_542ae0()
SetFocus(GetDlgItem(data_20c0554, 0x4f4f))
int32_t var_c_1 = SetWindowTextA(data_20c0554, 0x12a442c)
return sub_4d5720(data_20c0554)
