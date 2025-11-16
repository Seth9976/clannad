// 函数: sub_4e5970
// 地址: 0x4e5970
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_c = ecx
sub_4d58b0(ecx.b)
sub_4e4dc0()
sub_4d8a40()

if (data_702fc0 != 0)
    data_20c3980 = 0
    data_20c3988 = 0
    data_20c3984 = 0

sub_4e4f10()
sub_4e50b0()
sub_4e5160()
sub_454290()
sub_4d8de0()
sub_4e55e0()
data_1b8a71c = 0
sub_4e5720()
HWND result = sub_4e57c0()
bool cond:0 = data_1af17ca == 0
data_1370108 = 0
data_1370104 = 0

if (not(cond:0))
    data_1af17ca = 0
    uint32_t eax = timeGetTime()
    HWND hWnd = data_1c054ec
    
    if (hWnd != 0)
        ShowWindow(hWnd, SW_HIDE)
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
    data_20ae982 = 0
    DialogBoxParamA(hInstance, 0x16d, hWndParent, sub_5463e0, 0)
    var_c:3.b = data_20ae982
    int32_t eax_2 = data_7037a0
    data_1af17cc = 0
    data_1af17a0 = 0
    data_1af4e70 = eax_2
    
    if (eax_2 != 0)
        int32_t i_1
        
        do
            i_1 = ShowCursor(1)
        while (i_1 s<= 0)
    else
        int32_t i_2
        
        do
            i_2 = ShowCursor(0)
        while (i_2 s>= 0)
    
    HWND hWnd_1 = data_1c054ec
    
    if (hWnd_1 != 0)
        ShowWindow(hWnd_1, SW_SHOW)
        InvalidateRect(data_1c054ec, nullptr, 1)
    
    if (var_c:3.b != 0)
        data_1af40f4 = data_1c051d0
        data_1af40f0 = data_1c051cc
    else
        uint32_t i_3
        
        do
            i_3 = timeGetTime() - eax
        while (i_3 u< 0x7d0)
        
        char eax_4
        int32_t ecx_2
        eax_4, ecx_2 = sub_4d5520(i_3, data_1bfdd24, 1, data_1b8c880)
        
        if (eax_4 == 0)
            int32_t var_1c_2 = ecx_2
            sub_4d55e0()
        
        sub_4e4d50()
        sub_546020()
    
    result = sub_544e30()
    HWND ecx_3 = data_1c054ec
    
    if (ecx_3 != 0)
        WPARAM eax_7 = sub_4c1810(ecx_3, 0x4ef0)
        BOOL bEnable
        
        if (eax_7 s< 0 || eax_7 s>= data_1c054e8)
            bEnable = 0
        else
            bEnable = 1
        
        result = EnableWindow(GetDlgItem(data_1c054ec, 0x4eef), bEnable)
    
    data_1b8a71c = 1
    data_1321ec8 = 1

return result
