// 函数: sub_476e40
// 地址: 0x476e40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg5

if (eax == 0)
    eax = 1

if (*arg2 s< 0 || arg2[2] != 0xffffffff)
    return 0

arg4[0x64] = eax
int32_t eax_1 = *arg2
*arg4 = eax_1
sub_4cfdf0(eax_1, arg3 + 0x10, &arg4[0x65], 0x24)
arg4[0x80] = *(arg3 + 0x7c)
int32_t eax_3 = *arg4

if (eax_3 u<= 0x1ff)
    *(eax_3 * 0x74 + &data_13747ac) += 1

int32_t eax_6 = arg2[1]

if (eax_6 s>= 0)
    arg4[1] = eax_6
    sub_4cfdf0(eax_6, arg3 + 0x34, &arg4[0x6e], 0x24)
    int32_t eax_7 = arg4[1]
    
    if (eax_7 u<= 0x1ff)
        *(eax_7 * 0x6c + &data_1382f88) += 1

arg4[0x38] = arg4[0x5b] + 1
return 1
