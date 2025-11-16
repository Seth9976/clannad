// 函数: sub_549000
// 地址: 0x549000
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1

if (arg1 s>= 0 && arg1 s< data_12dc4d0)
    eax_1 = sub_495490(arg1)

BOOL bEnable

if (arg1 s>= 0 && arg1 s< data_12dc4d0 && (eax_1 != 0 || data_20c2008 == eax_1))
    data_20c200c = arg1
    bEnable = 1
else
    bEnable = 0
    data_20c200c = 0xffffffff

return EnableWindow(GetDlgItem(data_20c17c4, 0x4f4f), bEnable)
