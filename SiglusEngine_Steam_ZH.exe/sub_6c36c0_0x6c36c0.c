// 函数: sub_6c36c0
// 地址: 0x6c36c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t lParam
_memset(&lParam, 0, 0x40)
lParam = arg2
void** eax_1 = arg3
int32_t var_44 = 0xffff0002
int32_t var_40 = 1

if (eax_1[5] u>= 8)
    eax_1 = *eax_1

void** var_30 = eax_1
HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    return SendMessageW(hWnd, 0x1132, 0, &lParam)

return hWnd
