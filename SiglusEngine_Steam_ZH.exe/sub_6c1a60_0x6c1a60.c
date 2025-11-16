// 函数: sub_6c1a60
// 地址: 0x6c1a60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t hWnd = *(arg1 + 4)

if (hWnd != 0)
    hWnd.b = (GetWindowLongW(hWnd, 0xfffffff0) & 0x10000000) s> 0
    
    if (hWnd.b != arg2)
        enum SHOW_WINDOW_CMD nCmdShow = SW_HIDE
        
        if (arg2 != 0)
            nCmdShow = SW_SHOW
        
        return ShowWindow(*(arg1 + 4), nCmdShow)

return hWnd
