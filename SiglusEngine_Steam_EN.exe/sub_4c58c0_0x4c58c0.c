// 函数: sub_4c58c0
// 地址: 0x4c58c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_702770 == 1)
    HDC eax_1 = GetDC(data_7027bc)
    SelectObject(eax_1, data_208c72c)
    HWND hWnd = data_7027bc
    data_702770 = 0
    ReleaseDC(hWnd, eax_1)

sub_4d6c40(&data_208c848, &data_20a1b54)
sub_4d6c40(&data_208c84c, &data_20a1b58)
sub_4d6c40(&data_20a1b50, &data_20a1b5c)
sub_4c5860()
sub_4d6c40(&data_20a1b94, &data_20a1b98)
void* i = &data_20ae9c0
data_20a1b60 = 0
data_641ade = 0
data_641add = 0
data_702774 = 0

do
    HGDIOBJ ho = *(i - 4)
    
    if (ho != 0)
        DeleteObject(ho)
    
    HGDIOBJ ho_1 = *i
    
    if (ho_1 != 0)
        DeleteObject(ho_1)
    
    *(i - 4) = 0
    *i = 0
    *(i + 4) = 0
    *(i + 8) = 0
    *(i - 0x24) = 0
    i += 0x3c
while (i s< 0x20af140)

BOOL result = sub_4d4070(&data_20af110)
data_20ae984 = 0xffff2bcf
data_20af110 = zx.o(0)
return result
