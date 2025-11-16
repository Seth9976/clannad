// 函数: sub_46d240
// 地址: 0x46d240
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s> arg2)
    arg1 = arg3
    arg3 = arg2
    arg2 = arg1

if (arg3 s< 0 || arg2 s>= data_7031bc)
    return 

void* i_1 = arg2 - arg3 + 1
arg1 = arg3 * 0xca0 + &data_72d6b0

if (i_1 s<= 0)
    return 

void* ecx = (arg3 << 2) + &data_8c16b0
void* i

do
    *ecx = arg4
    arg1 += 0xca0
    *(arg1 - 0xca0) = 0
    ecx += 4
    i = i_1
    i_1 -= 1
while (i != 1)
