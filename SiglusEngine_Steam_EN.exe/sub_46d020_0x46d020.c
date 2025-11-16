// 函数: sub_46d020
// 地址: 0x46d020
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return 

int32_t eax = arg2 + (arg3 << 1)

if (*(eax * 0x650 + 0x72d770) == arg4 && *(eax * 0x650 + 0x72d774) == arg5
        && *(eax * 0x650 + 0x72d778) == arg6 && *(eax * 0x650 + 0x72d77c) == arg7
        && *(eax * 0x650 + 0x72d780) == arg8)
    return 

*(eax * 0x7a0 + 0x98c1f8) += 1
*(eax * 0x650 + 0x72d770) = arg4
*(eax * 0x650 + 0x72d774) = arg5
*(eax * 0x650 + 0x72d778) = arg6
*(eax * 0x650 + 0x72d77c) = arg7
*(eax * 0x650 + 0x72d780) = arg8
