// 函数: sub_4dbe30
// 地址: 0x4dbe30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004003

int32_t* esi = *(arg1 + 0x34)

if (esi != 0)
    return (*(*esi + 0x20))(esi, arg2 + 4, arg2 + 8)

*(arg2 + 4) = *(arg1 + 0x98)
*(arg2 + 8) = *(arg1 + 0x9c)
return 0
