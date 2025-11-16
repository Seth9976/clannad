// 函数: sub_56ea70
// 地址: 0x56ea70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL bEnable =
    sx.d(SendDlgItemMessageA(data_1af0a88, *((arg1 << 2) + &data_613010), 0xf2, 0, 0)) & 1
int32_t nIDDlgItem = *((arg1 << 2) + &data_612ff0)
(&data_1319064)[arg1] = bEnable
return EnableWindow(GetDlgItem(data_1af0a88, nIDDlgItem), bEnable)
