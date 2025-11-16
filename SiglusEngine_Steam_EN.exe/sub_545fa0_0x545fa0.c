// 函数: sub_545fa0
// 地址: 0x545fa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = data_1c054ec

if (hWnd == 0)
    return hWnd

ShowWindow(hWnd, SW_HIDE)
return InvalidateRect(data_1c054ec, nullptr, 1)
