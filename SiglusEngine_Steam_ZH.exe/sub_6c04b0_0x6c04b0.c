// 函数: sub_6c04b0
// 地址: 0x6c04b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *(arg1 + 0x5c)

if (esi s<= 0)
    return 

int32_t temp1_1 = mods.dp.d(sx.q(esi - 1), 3)
int128_t xmm0_1 = *(arg1 + 0x48)
int32_t eax_5 = (9 - esi) s/ 3
int32_t X = xmm0_1.d

if (temp1_1 == 2)
    X += arg2

int32_t Y = xmm0_1:4.d

if (eax_5 == 2)
    Y += arg3

int32_t ecx_2

if (temp1_1 == 1 || temp1_1 == 2)
    ecx_2 = xmm0_1:8.d + arg2
else
    ecx_2 = xmm0_1:8.d

int32_t eax_6

if (eax_5 == 1 || eax_5 == 2)
    eax_6 = xmm0_1:0xc.d + arg3
else
    eax_6 = xmm0_1:0xc.d

HWND hWnd_1 = *(arg1 + 4)

if (hWnd_1 != 0)
    SetWindowPos(hWnd_1, nullptr, X, Y, ecx_2 - X, eax_6 - Y, 0x14)

BOOL hWnd = *(arg1 + 4)

if (hWnd != 0)
    InvalidateRect(hWnd, nullptr, 0)
