// 函数: sub_4e74e0
// 地址: 0x4e74e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_414
char* eax_1 = __security_cookie ^ &var_414
char* var_c = eax_1
int32_t esi = data_1af173c

if (esi s< 8)
    char text[0x404]
    
    if (arg1 u> 0x81)
        eax_1 = sub_4cfd70(&text, 0x61e700)
    else
        int32_t edx
        int32_t var_41c_1 = edx
        int32_t var_420_1 = (&data_611da8)[arg1]
        eax_1 = sub_4c84d0(&text, "%s[%$d] ")
    
    if (data_702fc0 != 0)
        sub_55ef70(&text, data_72d6ac, data_719b6c, &data_61b950, &text)
        sub_55f1e0(&text, data_72d6ac, data_719b6c, &data_61b950, &text)
        sub_55f390(&text, data_72d6ac, data_719b6c, &data_61b950, &text)
        eax_1 = sub_4a1e40(3)
        esi = data_1af173c
    
    if (esi s< 4)
        HWND hWnd_1 = data_1c054ec
        
        if (hWnd_1 != 0)
            ShowWindow(hWnd_1, SW_HIDE)
            InvalidateRect(data_1c054ec, nullptr, 1)
        
        data_1af4e70 = 1
        int32_t i
        
        do
            i = ShowCursor(1)
        while (i s<= 0)
        data_1af17a0 = 1
        HWND hWnd = data_7027bc
        data_1af17cc = 1
        MessageBoxA(hWnd, &text, 0x61b914, MB_OK)
        int32_t eax_5 = data_7037a0
        data_1af17cc = 0
        data_1af17a0 = 0
        data_1af4e70 = eax_5
        
        if (eax_5 != 0)
            int32_t i_1
            
            do
                i_1 = ShowCursor(1)
            while (i_1 s<= 0)
        else
            int32_t i_2
            
            do
                i_2 = ShowCursor(0)
            while (i_2 s>= 0)
        
        HWND hWnd_2 = data_1c054ec
        
        if (hWnd_2 != 0)
            ShowWindow(hWnd_2, SW_SHOW)
            hWnd_2 = InvalidateRect(data_1c054ec, nullptr, 1)
        
        data_1af173c += 1
        sub_5f02dd(var_c ^ &var_414)
        return hWnd_2

data_1af173c = esi + 1
sub_5f02dd(var_c ^ &var_414)
return eax_1
