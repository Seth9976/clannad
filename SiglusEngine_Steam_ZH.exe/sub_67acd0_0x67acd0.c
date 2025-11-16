// 函数: sub_67acd0
// 地址: 0x67acd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1
WPARAM eax = sub_6c4be0(arg1 + 0xb8)
int32_t ebx
ebx.b = 0

if (eax != 0xffffffff)
    if (*(arg1 + 0xc) != 0x3e8)
        ebx.b = sub_650ff0(*(arg1 + 0x6e4) + eax) != 0
    else
        void* eax_1 = data_bac498
        void* ecx_1
        
        if (*(eax_1 + 0x11) != 0 && *(eax_1 + 0x10) != 0)
            ecx_1 = data_bac504
        
        if (*(eax_1 + 0x11) == 0 || *(eax_1 + 0x10) == 0 || *(ecx_1 + 0x98) == *(ecx_1 + 0x9c))
            ebx.b = 0
        else
            ebx.b = 1

BOOL hWnd = *(arg1 + 0x5b0)

if (hWnd != 0)
    hWnd.b = IsWindowEnabled(hWnd) != 0
else
    hWnd.b = 0

if (hWnd.b != ebx.b)
    hWnd = *(arg1 + 0x5b0)
    
    if (hWnd != 0)
        hWnd.b = IsWindowEnabled(hWnd) != 0
        
        if (hWnd.b != ebx.b)
            return EnableWindow(*(arg1 + 0x5b0), zx.d(ebx.b))

return hWnd
