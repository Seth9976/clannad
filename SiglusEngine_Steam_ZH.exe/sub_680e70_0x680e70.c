// 函数: sub_680e70
// 地址: 0x680e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HGDIOBJ ho = arg1[1]

if (ho != 0)
    DeleteObject(ho)
    arg1[1] = 0

BOOL hIcon = *arg1

if (hIcon != 0)
    hIcon = DestroyIcon(hIcon)
    *arg1 = 0

return hIcon
