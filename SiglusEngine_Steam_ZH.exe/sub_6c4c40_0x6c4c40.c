// 函数: sub_6c4c40
// 地址: 0x6c4c40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
HWND hWnd = *(arg1 + 4)

if (hWnd == 0)
    return hWnd

LRESULT edx = SendMessageW(hWnd, 0x1004, 0, 0)
int32_t edi = 0
WPARAM wParam = 0
LRESULT var_8_1 = edx

if (edx s> 0)
    do
        HWND hWnd_1 = *(arg1 + 4)
        char eax_1
        
        if (hWnd_1 != 0)
            eax_1 = SendMessageW(hWnd_1, 0x102c, wParam, 2)
            edx = var_8_1
        else
            eax_1 = 0
        
        if ((eax_1 & 2) != 0)
            edi += 1
        
        wParam += 1
    while (wParam s< edx)

return edi
