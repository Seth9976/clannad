// 函数: sub_4a5e00
// 地址: 0x4a5e00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_21c
int32_t eax_1 = __security_cookie ^ &var_21c
int32_t esi = arg2
var_21c = esi
int32_t eax_2 = sub_4c3da0(eax_1, 0xffffffff, &data_131331c, 0xffffffff)
HWND hWnd
void var_218
char* eax_4

if (eax_2 != 2)
label_4a5e8a:
    HWND hWnd_1 = data_1c054ec
    
    if (hWnd_1 != 0)
        ShowWindow(hWnd_1, SW_HIDE)
        InvalidateRect(data_1c054ec, nullptr, 1)
    
    data_1af4e70 = 1
    int32_t i
    
    do
        i = ShowCursor(1)
    while (i s<= 0)
    LPARAM eax_5 = data_1c054f8
    data_1af17a0 = 1
    data_1af17cc = 1
    int32_t edi_1
    
    if (eax_5 != 0)
        SetForegroundWindow(eax_5)
        edi_1 = 0
    else
        DialogBoxParamA(data_134cebc, 0x132, data_7027bc, sub_54e670, eax_5)
        data_1c054f8 = 0
        edi_1 = 1
    
    int32_t eax_6 = data_7037a0
    data_1af17cc = 0
    data_1af17a0 = 0
    data_1af4e70 = eax_6
    
    if (eax_6 != 0)
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
    
    if (edi_1 != 0)
        int32_t var_22c_4 = arg1
        char* var_230_4 = &data_131331c
        eax_4 = sub_4c84d0(&var_218, "%s\Seen%04d.org")
        esi = var_21c
    label_4a5fa4:
        hWnd = sub_4c3da0(eax_4, 0xffffffff, &data_131331c, 0xffffffff)
        
        if (hWnd == 2)
            hWnd = sub_4c3da0(hWnd, 0xffffffff, &data_1313524, 0xffffffff)
            
            if (hWnd == 1)
                hWnd = sub_4c3da0(hWnd, 0xffffffff, &var_218, 0xffffffff)
                
                if (hWnd == 1)
                    hWnd = sub_4d3b20(hWnd, &var_218, &data_1313524, esi)
else
    hWnd = sub_4c3da0(eax_2, 0xffffffff, &data_1313524, 0xffffffff)
    
    if (hWnd != 1)
        goto label_4a5e8a
    
    if (arg1 s>= 0)
        int32_t var_22c_1 = arg1
        char* var_230_1 = &data_131331c
        eax_4 =
            sub_4c3da0(sub_4c84d0(&var_218, "%s\Seen%04d.org"), 0xffffffff, &var_218, 0xffffffff)
        
        if (eax_4 == 1)
            goto label_4a5fa4
        
        goto label_4a5e8a
sub_5f02dd(eax_1 ^ &var_21c)
return hWnd
