// 函数: sub_45c070
// 地址: 0x45c070
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = data_1c054ec

if (hWnd != 0)
    ShowWindow(hWnd, SW_HIDE)
    InvalidateRect(data_1c054ec, nullptr, 1)

data_1af4e70 = 1
int32_t i

do
    i = ShowCursor(1)
while (i s<= 0)
int32_t ecx = data_7037a4
data_1af17a0 = 1
data_1af17cc = 1
sub_45ee40(ecx, 1)
__builtin_memset(&data_1cd5340, 0, 0x28)
__builtin_memset(&data_1cd5370, 0, 0x28)
__builtin_memcpy(&data_1cd53a0, 
    "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x"
"01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
    0x28)
__builtin_memset(&data_1cd53d0, 0, 0x80)
HMENU eax
int32_t ecx_1
eax, ecx_1 = CreatePopupMenu()
data_1cd5340 = eax

if (arg1 == 0)
    if (eax != 0)
        sub_45afb0(ecx_1, 1)
else if (eax != 0)
    sub_45ab90(eax, 0, 0, 0)

POINT point
GetCursorPos(&point)
int32_t eax_2 = sub_45bd20(TrackPopupMenu(data_1cd5340, TPM_RIGHTBUTTON | TPM_RETURNCMD, point.x, 
    point.y, 0, data_7027bc, nullptr))

for (int32_t* i_1 = &data_1cd53d0; i_1 s< &data_1cd5450; i_1 = &i_1[1])
    HMENU hMenu_1 = *i_1
    
    if (hMenu_1 != 0)
        DestroyMenu(hMenu_1)

for (int32_t* i_2 = &data_1cd5344; i_2 s< &data_1cd5368; i_2 = &i_2[1])
    HMENU hMenu = *i_2
    
    if (hMenu != 0)
        DestroyMenu(hMenu)

DestroyMenu(data_1cd5340)

if (eax_2 == 0x19 && (0x8000 & GetAsyncKeyState(0xd)) != 0)
    uint32_t eax_4 = timeGetTime()
    
    if ((0x8000 & GetAsyncKeyState(0xd)) != 0)
        int16_t eax_8
        
        do
            if (timeGetTime() - eax_4 u>= 0xbb8)
                break
            
            Sleep(0xa)
            eax_8 = GetAsyncKeyState(0xd)
        while ((0x8000 & eax_8) != 0)

int32_t eax_9 = data_7037a0
data_1af17cc = 0
data_1af17a0 = 0
data_1af4e70 = eax_9

if (eax_9 != 0)
    int32_t i_3
    
    do
        i_3 = ShowCursor(1)
    while (i_3 s<= 0)
else
    int32_t i_4
    
    do
        i_4 = ShowCursor(0)
    while (i_4 s>= 0)

HWND hWnd_1 = data_1c054ec

if (hWnd_1 != 0)
    ShowWindow(hWnd_1, SW_SHOW)
    hWnd_1 = InvalidateRect(data_1c054ec, nullptr, 1)

data_1392cc4 = 0
data_13701e0 = 1
data_1392cc8 = 1
data_f89aec = 0xffffffff
data_f89af0 = 0xffffffff
data_f89af4 = 0xffffffff
data_f89af8 = 0xffffffff
data_1af1788 = 1
data_1af0a08 = 0
return hWnd_1
