// 函数: sub_57fa10
// 地址: 0x57fa10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 0

if (arg2 == 0)
    int32_t eax_6
    eax_6.b = *(arg1 * 0x2d0 + 0x8fcb0c) + (*(arg1 * 0x3920 + 0xf8d2ec) << 1)
        s<= *(arg1 * 0x3920 + 0xf89b0c)
    return eax_6

if (arg2 == 1)
    int32_t eax_4
    eax_4.b =
        *(arg1 * 0x3920 + 0xf8d2ec) + *(arg1 * 0x2d0 + 0x8fcb0c) s<= *(arg1 * 0x3920 + 0xf89b0c)
    return eax_4

if (arg2 != 2)
    return 1

int32_t eax_3
eax_3.b =
    (*(arg1 * 0x3920 + 0xf8d2ec) s>> 1) + *(arg1 * 0x2d0 + 0x8fcb0c) s<= *(arg1 * 0x3920 + 0xf89b0c)
return eax_3
