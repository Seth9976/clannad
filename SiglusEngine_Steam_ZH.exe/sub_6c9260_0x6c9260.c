// 函数: sub_6c9260
// 地址: 0x6c9260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HGDIOBJ h = arg1[2]

if (h != 0)
    SelectObject(*arg1, h)
    arg1[2] = 0

HGDIOBJ ho = arg1[1]

if (ho != 0)
    DeleteObject(ho)
    arg1[1] = 0

HDC hdc = *arg1

if (hdc != 0)
    DeleteDC(hdc)
    *arg1 = 0

if (arg1[0xa] u>= 8)
    j__free(arg1[5])

arg1[0xa] = 7
arg1[9] = 0
arg1[5].w = 0
return 0
