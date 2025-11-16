// 函数: sub_6c3c70
// 地址: 0x6c3c70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg2 = 0
arg2[1] = 0
arg2[2] = 0
arg2[3] = 0
GetWindowRect(*(arg1 + 4), arg2)
HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    SendMessageW(hWnd, 0x1328, 0, arg2)

return arg2
