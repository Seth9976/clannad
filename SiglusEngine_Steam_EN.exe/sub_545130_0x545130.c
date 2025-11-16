// 函数: sub_545130
// 地址: 0x545130
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
WPARAM hWnd = sub_4c1810(data_1c054ec, 0x4ef0)
WPARAM hWnd_2 = hWnd

if (hWnd_2 s>= 0 && hWnd_2 s< data_1c054e8)
    if (data_1b8be8f != 0)
        HWND hWnd_1 = data_1c054ec
        
        if (hWnd_1 != 0)
            ShowWindow(hWnd_1, SW_HIDE)
            InvalidateRect(data_1c054ec, nullptr, 1)
        
        data_1af4e70 = 1
        int32_t i
        
        do
            i = ShowCursor(1)
        while (i s<= 0)
        HWND hWndParent = data_7027bc
        data_1af17a0 = 1
        HINSTANCE hInstance = data_134cebc
        data_1af17cc = 1
        data_20ae983 = 0
        DialogBoxParamA(hInstance, 0x16c, hWndParent, sub_5465b0, 0)
        var_8:3.b = data_20ae983
        int32_t eax_1 = data_7037a0
        data_1af17cc = 0
        data_1af17a0 = 0
        data_1af4e70 = eax_1
        
        if (eax_1 != 0)
            int32_t i_1
            
            do
                i_1 = ShowCursor(1)
            while (i_1 s<= 0)
        else
            int32_t i_2
            
            do
                i_2 = ShowCursor(0)
            while (i_2 s>= 0)
        
        hWnd = data_1c054ec
        
        if (hWnd != 0)
            ShowWindow(hWnd, SW_SHOW)
            hWnd = InvalidateRect(data_1c054ec, nullptr, 1)
    
    if (data_1b8be8f == 0 || var_8:3.b != 0)
        data_187c518 = 0
        data_187c520 = 0
        data_1c0518f = 0
        data_1c0518e = 0
        void* ecx_3 = hWnd_2 * 0x9c + data_1c054e0
        data_1c051d0 = *(ecx_3 + 0x6c)
        hWnd = *(ecx_3 + 0x70)
        data_1c051cc = hWnd

return hWnd
