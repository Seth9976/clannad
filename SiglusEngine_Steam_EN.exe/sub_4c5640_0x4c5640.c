// 函数: sub_4c5640
// 地址: 0x4c5640
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL eax

if (data_20ae984 != arg2)
    eax = sub_4d4070(&data_20af110)
    data_20ae984 = 0xffff2bcf
    data_20af110 = zx.o(0)
    sub_4d4390(eax, &data_20af110, arg1, arg2)
    data_20ae984 = arg2
else if (data_20af110.d == 0)
    sub_4d4390(eax, &data_20af110, arg1, arg2)
    data_20ae984 = arg2
