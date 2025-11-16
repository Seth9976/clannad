// 函数: sub_5b99a0
// 地址: 0x5b99a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = data_bac4a0
int32_t edi = *(ebx + 0x20)
int32_t ecx = *(ebx + 0x24)
int32_t esi = *(ebx + 0xc)
int32_t X = divs.dp.d(sx.q(*(arg1 + 0xa4) * edi), *(ebx + 8)) + *(ebx + 0x10)
int32_t ebx_1 = *(ebx + 0x14)
int32_t Y = divs.dp.d(sx.q(*(arg1 + 0xa8) * ecx), esi) + ebx_1
void* edi_1 = data_bac4a0
HWND hWnd_1 = *(arg1 + 0xc0)

if (hWnd_1 != 0)
    SetWindowPos(hWnd_1, nullptr, X, Y, 
        divs.dp.d(sx.q(*(arg1 + 0xac) * edi), *(edi_1 + 8)) + *(edi_1 + 0x10) - X, 
        divs.dp.d(sx.q(*(arg1 + 0xb0) * ecx), esi) + ebx_1 - Y, 0x14)

HGDIOBJ ho = *(arg1 + 0xb8)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0xb8) = 0

void* ecx_2 = data_bac4a0
*(ecx_2 + 0xc)
HFONT wParam = CreateFontW(divs.dp.d(sx.q(*(ecx_2 + 0x24) * *(arg1 + 0xb4)), *(ecx_2 + 0xc)), 0, 0, 
    0, 0, 0, 0, 0, 1, 2, 0, 0, 0, 0xad7a70)
*(arg1 + 0xb8) = wParam
HWND hWnd = *(arg1 + 0xc0)

if (hWnd == 0)
    return wParam

return SendMessageW(hWnd, 0x30, wParam, 1)
