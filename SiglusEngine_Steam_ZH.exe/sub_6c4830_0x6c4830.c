// 函数: sub_6c4830
// 地址: 0x6c4830
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
LRESULT hWnd = *(arg1 + 4)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x101f, 0, 0)

LRESULT eax
int32_t ecx
eax, ecx = SendMessageW(hWnd, 0x1200, 0, 0)
int32_t var_10 = ecx
return sub_6c4880(arg1, eax, arg2, arg3, arg4)
