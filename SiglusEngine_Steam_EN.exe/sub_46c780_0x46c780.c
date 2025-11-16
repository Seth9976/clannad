// 函数: sub_46c780
// 地址: 0x46c780
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return 

int32_t esi_1 = arg4

if (esi_1 s< 0 || esi_1 s> 3)
    esi_1 = 0

int32_t eax = arg2 + (arg3 << 1)
*(eax * 0x650 + 0x72d798) = arg5
*(eax * 0x7a0 + 0x98c1f8) += 1
*(eax * 0x650 + 0x72d79c) = arg6
*(eax * 0x650 + 0x72d794) = esi_1
*(eax * 0x650 + 0x72d7a0) = arg7
