// 函数: sub_67cce0
// 地址: 0x67cce0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t hSrc
int32_t eax_1 = __security_cookie ^ &hSrc

if (*(arg1 + 0xc4) == 0 || *(arg1 + 0xd8) == 0)
    int32_t ecx_3 = eax_1
    eax_1.b = 1
    sub_745f2b(ecx_3 ^ &hSrc)
    return eax_1

PAINTSTRUCT paint
HDC eax_2 = BeginPaint(*(arg1 + 4), &paint)
SetStretchBltMode(eax_2, HALFTONE)
int32_t wSrc = *(arg1 + 0xe8)
hSrc = *(arg1 + 0xec)
HWND hWnd = *(arg1 + 4)
RECT var_60
__builtin_memset(&var_60, 0, 0x10)
GetClientRect(hWnd, &var_60)
int32_t wDest_1 = var_60.right - var_60.left
HWND hWnd_1 = *(arg1 + 4)
__builtin_memset(&var_60, 0, 0x10)
GetClientRect(hWnd_1, &var_60)
int32_t hDest_1 = var_60.bottom - var_60.top
int32_t eax_5 = wDest_1 * hSrc
int32_t edx_1 = hDest_1 * wSrc
int32_t yDest
int32_t xDest
int32_t hDest
int32_t wDest

if (eax_5 s<= edx_1)
    int32_t hDest_2 = divs.dp.d(sx.q(eax_5), wSrc)
    wDest = wDest_1
    xDest = 0
    hDest = hDest_2
    int32_t eax_18
    int32_t edx_7
    edx_7:eax_18 = sx.q(hDest_1 - hDest_2)
    yDest = (eax_18 - edx_7) s>> 1
else
    hDest = hDest_1
    int32_t wDest_2 = divs.dp.d(sx.q(edx_1), hSrc)
    yDest = 0
    wDest = wDest_2
    int32_t eax_11
    int32_t edx_4
    edx_4:eax_11 = sx.q(wDest_1 - wDest_2)
    xDest = (eax_11 - edx_4) s>> 1

var_60.left = 0
var_60.top = 0
var_60.right = wDest_1
var_60.bottom = hDest_1
FillRect(eax_2, &var_60, GetStockObject(GRAY_BRUSH))
HDC hdc = CreateCompatibleDC(eax_2)
*(arg1 + 0xfc) = hdc
HGDIOBJ h_1

if (*(arg1 + 0xc4) == 0)
    h_1 = nullptr
else
    h_1 = *(arg1 + 0xd8)

HGDIOBJ h = SelectObject(hdc, h_1)
StretchBlt(eax_2, xDest, yDest, wDest, hDest, *(arg1 + 0xfc), 0, 0, wSrc, hSrc, SRCCOPY)
SelectObject(*(arg1 + 0xfc), h)
EndPaint(*(arg1 + 4), &paint)
BOOL eax_22
eax_22.b = 0
sub_745f2b(eax_1 ^ &hSrc)
return eax_22
