// 函数: sub_436e40
// 地址: 0x436e40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg4

if (eax s> 0xb)
    *arg4 = 0xb
else if (eax s< 0)
    *arg4 = 0

int32_t ecx = arg3 * 9
*((ecx << 2) + &data_12b926c) = *arg4
*((ecx << 2) + &data_12b9270) = arg4[1]
*((ecx << 2) + &data_12b9274) = arg4[2]
*((ecx << 2) + &data_12b9278) = arg4[3]

if (arg2 == 5)
    *((ecx << 2) + &data_12b927c) = arg4[4]
    *((ecx << 2) + &data_12b9268) = 1
    return 0

if (arg2 == 6)
    *((ecx << 2) + &data_12b927c) = arg4[4]
    *((ecx << 2) + &data_12b9280) = arg4[5]
    *((ecx << 2) + &data_12b9268) = 1
    return 0

if (arg2 == 7)
    *((ecx << 2) + &data_12b927c) = arg4[4]
    *((ecx << 2) + &data_12b9280) = arg4[5]
    *((ecx << 2) + &data_12b9284) = arg4[6]
    *((ecx << 2) + &data_12b9268) = 1
    return 0

if (arg2 == 8)
    *((ecx << 2) + &data_12b927c) = arg4[4]
    *((ecx << 2) + &data_12b9280) = arg4[5]
    *((ecx << 2) + &data_12b9284) = arg4[6]
    *((ecx << 2) + &data_12b9288) = arg4[7]

*((ecx << 2) + &data_12b9268) = 1
return 0
