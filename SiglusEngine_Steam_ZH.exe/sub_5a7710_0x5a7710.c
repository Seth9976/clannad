// 函数: sub_5a7710
// 地址: 0x5a7710
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = GetSystemMetrics(SM_CXVSCROLL)
int32_t eax_1 = GetSystemMetrics(SM_CYHSCROLL)
uint128_t xmm1 = arg2
int32_t ecx = _mm_bsrli_si128(xmm1, 8)
int32_t edx = _mm_bsrli_si128(xmm1, 0xc)
HWND hWnd_3 = *(arg1 + 0x64)
int64_t var_1c = xmm1.q

if (hWnd_3 != 0)
    int32_t Y = var_1c:4.d
    int32_t X = var_1c.d
    SetWindowPos(hWnd_3, nullptr, X, Y, ecx - eax - X, edx - eax_1 - Y, 0x14)
    edx = arg2:0xc.d
    ecx = arg2:8.d
    xmm1 = arg2

HWND hWnd = *(arg1 + 0x64)

if (hWnd != 0)
    InvalidateRect(hWnd, nullptr, 0)
    edx = arg2:0xc.d
    ecx = arg2:8.d
    xmm1 = arg2

int32_t X_2 = ecx - eax
int96_t var_1c_1 = xmm1.12

if (*(arg1 + 0x164) != 0)
    int32_t Y_1 = var_1c_1:4.d
    SetWindowPos(*(arg1 + 0x164), nullptr, X_2, Y_1, var_1c_1:8.d - X_2, edx - eax_1 - Y_1, 0x14)
    edx = arg2:0xc.d
    ecx = arg2:8.d
    xmm1 = arg2

HWND hWnd_1 = *(arg1 + 0x164)

if (hWnd_1 != 0)
    InvalidateRect(hWnd_1, nullptr, 0)
    edx = arg2:0xc.d
    ecx = arg2:8.d
    xmm1 = arg2

int32_t Y_2 = edx - eax_1
HWND hWnd_4 = *(arg1 + 0x1f4)

if (hWnd_4 != 0)
    int32_t X_1 = xmm1.d
    SetWindowPos(hWnd_4, nullptr, X_1, Y_2, ecx - eax - X_1, xmm1:0xc.d - Y_2, 0x14)

BOOL hWnd_2 = *(arg1 + 0x1f4)

if (hWnd_2 == 0)
    return hWnd_2

return InvalidateRect(hWnd_2, nullptr, 0)
