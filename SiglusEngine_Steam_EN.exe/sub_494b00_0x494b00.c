// 函数: sub_494b00
// 地址: 0x494b00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x270f)
    return 

int32_t eax = arg1 * 9

if (*((eax << 2) + &data_1b8c890) == 0 || arg2 s>= *((eax << 2) + &data_1b8c8a8))
    return 

char* ecx_2 = (arg2 s>> 3) + *((eax << 2) + &data_1b8c894)
int32_t edx = arg2 & 0x80000007

if (edx s< 0)
    edx = ((edx - 1) | 0xfffffff8) + 1

eax.b = *((edx << 2) + &data_611440)
*ecx_2 |= eax.b
