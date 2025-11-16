// 函数: sub_6c3940
// 地址: 0x6c3940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    SendMessageW(hWnd, 0x406, 1, zx.d(arg3) << 0x10 | zx.d(arg2))
