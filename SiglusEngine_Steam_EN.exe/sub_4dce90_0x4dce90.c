// 函数: sub_4dce90
// 地址: 0x4dce90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HDC hDC = GetDC(*(arg1 - 0x24))

if (hDC == 0)
    return 0x80004005

int32_t* edx = *(arg1 + 0x48)

if (edx != 0)
    (*(*edx + 0xc))(edx, 1, 0xffffffff, 0, 0, 0, hDC, arg1 + 0x8c, arg1 + 0x8c, 0, 0)

ReleaseDC(*(arg1 - 0x24), hDC)
return 0
