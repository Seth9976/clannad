// 函数: sub_6c11e0
// 地址: 0x6c11e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    SetWindowPos(hWnd, nullptr, arg2, arg3, arg4 - arg2, arg5 - arg3, 0x14)
