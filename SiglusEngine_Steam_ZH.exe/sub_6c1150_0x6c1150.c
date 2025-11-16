// 函数: sub_6c1150
// 地址: 0x6c1150
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = *(arg1 + 4)

if (hWnd == 0)
    return 

RECT rect
rect.right = arg2
rect.left = 0
rect.top = 0
rect.bottom = arg3
int128_t xmm0
xmm0.d = rect.left
xmm0:4.d = rect.top
xmm0:8.d = rect.right
xmm0:0xc.d = rect.bottom
rect.left = xmm0.d
rect.top = xmm0:4.d
rect.right = xmm0:8.d
rect.bottom = xmm0:0xc.d
int32_t dwExStyle = GetWindowLongW(hWnd, 0xffffffec)
HMENU eax_3 = GetMenu(*(arg1 + 4))
int32_t eax_4 = neg.d(eax_3)
AdjustWindowRectEx(&rect, GetWindowLongW(*(arg1 + 4), 0xfffffff0), 
    neg.d(sbb.d(eax_4, eax_4, eax_3 != 0)), dwExStyle)
SetWindowPos(*(arg1 + 4), nullptr, 0, 0, rect.right - rect.left, rect.bottom - rect.top, 0x16)
