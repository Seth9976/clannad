// 函数: sub_5b9940
// 地址: 0x5b9940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx

if (*(arg1 + 0xa0) == 0 || *(data_bac4a0 + 0x74) != 0)
    ebx.b = 0
else
    ebx.b = 1

int32_t hWnd = *(arg1 + 0xc0)

if (hWnd != 0)
    hWnd.b = (GetWindowLongW(hWnd, 0xfffffff0) & 0x10000000) s> 0
    
    if (hWnd.b != ebx.b)
        enum SHOW_WINDOW_CMD nCmdShow = SW_HIDE
        
        if (ebx.b != 0)
            nCmdShow = SW_SHOW
        
        return ShowWindow(*(arg1 + 0xc0), nCmdShow)

return hWnd
