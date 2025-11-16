// 函数: sub_486160
// 地址: 0x486160
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_703748 == 0
data_107ee2c = 0xffffffff

if (cond:0 || data_1320e78 != 0)
    return 0

int32_t edx = data_1320e64
*(edx * 0x3920 + 0xf8c768) = data_131d2cc
*(edx * 0x3920 + 0xf8c76c) = data_1320e58
data_107ee2c = edx
sub_4861c0()
return 1
