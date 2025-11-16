// 函数: sub_445d20
// 地址: 0x445d20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_13740b0 == 0)
    return 

arg1 = data_13740f0

if (arg1 s>= 0x10)
    return 

int32_t ecx = arg1 * 5
*((ecx << 2) + &data_13740fc) = arg4
*((ecx << 2) + &data_1374100) = arg5
arg1.b = arg6
*((ecx << 2) + &data_13740f4) = arg3
*((ecx << 2) + &data_13740f8) = arg2
*((ecx << 2) + &data_1374104) = arg1.b
data_13740f0 += 1
