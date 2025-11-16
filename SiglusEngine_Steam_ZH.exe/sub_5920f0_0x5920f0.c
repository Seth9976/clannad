// 函数: sub_5920f0
// 地址: 0x5920f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* eax_2 = *(arg1 + 0x7cc) * 0x334 + 0x14c + arg1
HWND hWnd = *(eax_2 + 4)

if (hWnd != 0 && (GetWindowLongW(hWnd, 0xfffffff0) & 0x10000000) s> 0)
    ShowWindow(*(eax_2 + 4), SW_HIDE)

*(arg1 + 0x7cc) = arg2
void* edi_1 = arg1 + arg2 * 0x334
int32_t hWnd_1 = *(edi_1 + 0x150)

if (hWnd_1 != 0)
    hWnd_1 = GetWindowLongW(hWnd_1, 0xfffffff0)
    
    if ((hWnd_1 & 0x10000000) s<= 0)
        return ShowWindow(*(edi_1 + 0x150), SW_SHOW)

return hWnd_1
