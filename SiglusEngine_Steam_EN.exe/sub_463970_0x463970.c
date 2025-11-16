// 函数: sub_463970
// 地址: 0x463970
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return 

int32_t eax = arg2 + (arg3 << 1)
int32_t eax_1 = *(eax * 0x650 + &data_72d6bc)

if (eax_1 == 5 || eax_1 == 8)
    data_703008 = 1

if (*(arg3 * 0x24 + &data_12b9280) == 0 && arg4 == 0 && *((arg3 << 2) + &data_8c16b0) != 2)
    sub_463940(eax_1, eax * 0x7a0 + &data_98bf04, eax * 0x650 + &data_72d6b0, 0)
    return 

sub_4637f0(eax * 0x650 + &data_72d6b0, eax * 0x7a0 + &data_98bf04)
sub_4633c0(sub_463250(eax * 0x7a0 + 0x98bf24), eax * 0x7a0 + &data_98bf04, 
    eax * 0x650 + &data_72d6b0, 1)
