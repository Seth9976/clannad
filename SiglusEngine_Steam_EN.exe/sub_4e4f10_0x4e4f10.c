// 函数: sub_4e4f10
// 地址: 0x4e4f10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd_2 = data_1c054ec

if (data_1c04c50 == 1)
    data_1c04c50 = 2
    
    if (hWnd_2 != 0)
        ShowWindow(hWnd_2, SW_HIDE)
        InvalidateRect(data_1c054ec, nullptr, 1)
    
    data_1af4e70 = 1
    int32_t i
    
    do
        i = ShowCursor(1)
    while (i s<= 0)
    HWND hWnd = data_7027bc
    data_1af17a0 = 1
    data_1af17cc = 1
    MessageBoxA(hWnd, 0x61e504, 0x617078, MB_OK)
    int32_t eax = data_7037a0
    data_1af17cc = 0
    data_1af17a0 = 0
    data_1af4e70 = eax
    int32_t ecx
    
    if (eax != 0)
        int32_t i_1
        
        do
            i_1, ecx = ShowCursor(1)
        while (i_1 s<= 0)
    else
        int32_t i_2
        
        do
            i_2, ecx = ShowCursor(0)
        while (i_2 s>= 0)
    hWnd_2 = data_1c054ec
    
    if (hWnd_2 != 0)
        ShowWindow(hWnd_2, SW_SHOW)
        InvalidateRect(data_1c054ec, nullptr, 1)
        hWnd_2 = data_1c054ec

if (data_1c04c64 == 1)
    data_1c04c64 = 0
    
    if (hWnd_2 != 0)
        ShowWindow(hWnd_2, SW_HIDE)
        InvalidateRect(data_1c054ec, nullptr, 1)
    
    data_1af4e70 = 1
    int32_t i_3
    
    do
        i_3 = ShowCursor(1)
    while (i_3 s<= 0)
    HWND hWnd_1 = data_7027bc
    data_1af17a0 = 1
    data_1af17cc = 1
    MessageBoxA(hWnd_1, 0x1c04d68, &data_1c04c68, MB_OK)
    int32_t eax_1 = data_7037a0
    data_1af17cc = 0
    data_1af17a0 = 0
    data_1af4e70 = eax_1
    
    if (eax_1 != 0)
        int32_t i_4
        
        do
            i_4 = ShowCursor(1)
        while (i_4 s<= 0)
    else
        int32_t i_5
        
        do
            i_5 = ShowCursor(0)
        while (i_5 s>= 0)
    
    hWnd_2 = data_1c054ec
    
    if (hWnd_2 != 0)
        ShowWindow(hWnd_2, SW_SHOW)
        return InvalidateRect(data_1c054ec, nullptr, 1)

return hWnd_2
