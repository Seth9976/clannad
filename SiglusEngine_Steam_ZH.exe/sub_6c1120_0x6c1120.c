// 函数: sub_6c1120
// 地址: 0x6c1120
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

BOOL hWnd = *(arg1 + 4)

if (hWnd == 0)
    return hWnd

return SetWindowPos(hWnd, nullptr, arg2, arg3, 0, 0, 0x15)
