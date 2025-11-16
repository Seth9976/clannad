// 函数: sub_6c4880
// 地址: 0x6c4880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_28 = arg5
int32_t* eax_1 = arg4
int32_t lParam = 7
int32_t var_2c = 0

if (eax_1[5] u>= 8)
    eax_1 = *eax_1

int32_t* var_24 = eax_1
HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    SendMessageW(hWnd, 0x1061, arg2, &lParam)

int32_t var_3c_2 = arg3
return sub_6c6920(arg1 + 0x90, &arg5, *(arg1 + 0x90) + arg2 * 0x18, arg1 + 0x90)
