// 函数: sub_6c4cb0
// 地址: 0x6c4cb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = *(arg1 + 4)
LRESULT esi

if (hWnd != 0)
    esi = SendMessageW(hWnd, 0x102c, arg2, 0xf000)
else
    esi = 0

int32_t lParam
_memset(&lParam, 0, 0x3c)
lParam = 8
int32_t eax_2 = 0x1000
int32_t var_34 = 0xf000

if (arg3 != 0)
    eax_2 = 0x2000

int32_t var_38 = eax_2 | (esi & 0xcfff)
LRESULT hWnd_1 = *(arg1 + 4)

if (hWnd_1 == 0)
    return hWnd_1

return SendMessageW(hWnd_1, 0x102b, arg2, &lParam)
