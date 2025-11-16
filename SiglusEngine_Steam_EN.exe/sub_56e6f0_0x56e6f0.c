// 函数: sub_56e6f0
// 地址: 0x56e6f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL var_8 = arg1
BOOL bEnable_2 = arg1
int32_t i = 0
BOOL bEnable_1 = bEnable_2

do
    EnableWindow(GetDlgItem(data_1af0a88, *(i + &data_613010)), bEnable_2)
    EnableWindow(GetDlgItem(data_1af0a88, *(i + &data_612fd0)), bEnable_1)
    BOOL bEnable
    
    if (bEnable_1 == 0 || *(i + &data_1319064) == 0)
        bEnable = 0
    else
        bEnable = bEnable_1
    
    EnableWindow(GetDlgItem(data_1af0a88, *(i + &data_612ff0)), bEnable)
    bEnable_2 = bEnable_1
    i += 4
while (i s< 0x14)

return bEnable_2
