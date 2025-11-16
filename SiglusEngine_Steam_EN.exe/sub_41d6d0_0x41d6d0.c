// 函数: sub_41d6d0
// 地址: 0x41d6d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

switch (arg4)
    case 0, 1, 2, 3, 4
        *arg2 = 0
        int32_t eax_1 = *(arg3 + 0x74)
        *(arg3 + 0x20) = eax_1
        return eax_1
    case 5
        *arg2 = 0
        int32_t eax_2 = sub_481a60(*(arg3 + 0x28))
        *(arg3 + 0x20) = eax_2
        *(arg3 + 0x28) = eax_2
        *(arg3 + 0x2c) = 0
        return eax_2
    case 6
        *arg2 = 0
        *(arg3 + 0x20) = 0x50
        *(arg3 + 0x30) = 0xffffffff
        return arg4
