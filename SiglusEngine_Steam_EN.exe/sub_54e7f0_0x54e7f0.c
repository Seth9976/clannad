// 函数: sub_54e7f0
// 地址: 0x54e7f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL bEnable
bEnable.b = data_13184f8 == 0

for (int32_t i = 0; i s< 9; i += 1)
    if (i != 8)
        EnableWindow(GetDlgItem(data_1c054f4, *((i << 2) + &data_612410)), bEnable)
