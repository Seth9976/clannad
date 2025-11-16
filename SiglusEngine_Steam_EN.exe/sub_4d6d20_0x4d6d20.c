// 函数: sub_4d6d20
// 地址: 0x4d6d20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HGLOBAL hMem = *arg1

if (hMem != 0)
    GlobalUnlock(hMem)
    hMem = GlobalFree(*arg1)
    *arg1 = 0
    *arg2 = 0

return hMem
