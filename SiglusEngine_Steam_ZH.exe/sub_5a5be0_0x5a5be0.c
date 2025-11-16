// 函数: sub_5a5be0
// 地址: 0x5a5be0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
LRESULT hWnd

if (*arg2 == *(arg1 + 0x390) && arg2[2] == 0xfffffdd9)
    hWnd = *(arg1 + 0x390)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0x130b, 0, 0)
    
    void* ecx_1 = *(arg1 + 0x444)
    
    if (ecx_1 != 0)
        sub_5a80b0(ecx_1, hWnd)

hWnd.b = 1
return hWnd
