// 函数: sub_6bfb10
// 地址: 0x6bfb10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HICON hIcon = arg1[0x1c]
*arg1 = &NT3::C_window_base::`vftable'

if (hIcon != 0)
    DestroyIcon(hIcon)
    arg1[0x1c] = 0

HICON hIcon_1 = arg1[0x1d]

if (hIcon_1 != 0)
    DestroyIcon(hIcon_1)
    arg1[0x1d] = 0

sub_6c01f0(arg1)
int32_t eax = arg1[0x19]

if (eax != 0)
    j__free(eax)
    arg1[0x19] = 0
    arg1[0x1a] = 0
    arg1[0x1b] = 0

if (arg1[7] u>= 8)
    j__free(arg1[2])

arg1[7] = 7
arg1[6] = 0
arg1[2].w = 0
return 0
