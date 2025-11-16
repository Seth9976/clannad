// 函数: sub_688ac0
// 地址: 0x688ac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HICON hIcon = *arg1

if (hIcon != 0)
    DestroyIcon(hIcon)
    *arg1 = 0

BOOL hIcon_1 = arg1[1]

if (hIcon_1 != 0)
    hIcon_1 = DestroyIcon(hIcon_1)
    arg1[1] = 0

return hIcon_1
