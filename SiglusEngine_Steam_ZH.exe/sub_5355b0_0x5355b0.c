// 函数: sub_5355b0
// 地址: 0x5355b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_2c
LRESULT result = __security_cookie ^ &var_2c
LRESULT result_1 = result

if (*(arg1 + 0x410) s> 0)
    HWND hWnd = *(arg1 + 0xb0)
    RECT var_28
    __builtin_memset(&var_28, 0, 0x10)
    GetClientRect(hWnd, &var_28)
    var_28.left = 0x1c
    var_28.bottom = *(arg1 + 0x410)
    int32_t edi_3 = (var_28.bottom - var_28.top - 1) s/ 0x1b
    var_28.top = 3
    var_28.right = 0
    int32_t var_18_1 = edi_3 + 1
    HWND hWnd_1 = *(arg1 + 0x144)
    
    if (hWnd_1 != 0)
        SendMessageW(hWnd_1, 0xe9, 1, &var_28)
    
    HWND hWnd_2 = *(arg1 + 0x144)
    int32_t ebx
    ebx.b = edi_3 s< *(arg1 + 0x410)
    
    if (hWnd_2 != 0)
        int32_t eax_4
        eax_4.b = (GetWindowLongW(hWnd_2, 0xfffffff0) & 0x10000000) s> 0
        
        if (eax_4.b != ebx.b)
            enum SHOW_WINDOW_CMD nCmdShow = SW_HIDE
            
            if (ebx.b != 0)
                nCmdShow = SW_SHOW
            
            ShowWindow(*(arg1 + 0x144), nCmdShow)
    
    result = sub_5353d0(arg1)

sub_745f2b(result_1 ^ &var_2c)
return result
