// 函数: sub_469f60
// 地址: 0x469f60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return 

int32_t eax = arg2 + (arg3 << 1)

if (*(eax * 0x650 + &data_72d6bc) != 1)
    return 

int32_t ebx_1 = *(eax * 0x7a0 + 0x98bf08)

if (ebx_1 == 0xffffffff)
    return 

sub_4629e0(eax * 0x7a0 + &data_98bf04, 3, eax * 0x650 + &data_72d8f8, 0)
*(eax * 0x650 + 0x72d8d4) = 0
*(eax * 0x650 + 0x72d8d8) = 0
*(eax * 0x650 + 0x72d8dc) = 0xff
*(eax * 0x650 + 0x72d8e0) = 0
*(eax * 0x650 + 0x72d93c) = arg4
*(eax * 0x650 + 0x72d940) = arg5
sub_428c70(ebx_1, *(eax * 0x650 + 0x72d734), eax * 0x650 + &data_72d8f8, eax * 0x650 + &data_72d7fc)
