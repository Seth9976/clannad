// 函数: sub_5b9b70
// 地址: 0x5b9b70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

BOOL ho = arg2
void* edx = arg1
void* var_c = edx

if (ho s< arg3)
    int32_t ecx = ho * 0x150
    int32_t i_1 = arg3 - ho
    int32_t var_10_1 = ecx
    int32_t i
    
    do
        void* esi_2 = *(edx + 0xa4) + ecx
        HWND hWnd = *(esi_2 + 0xc0)
        
        if (hWnd != 0 && (GetWindowLongW(hWnd, 0xfffffff0) & 0x10000000) s> 0)
            ShowWindow(*(esi_2 + 0xc0), SW_HIDE)
        
        HWND hWnd_1 = *(esi_2 + 0xc0)
        
        if (hWnd_1 != 0)
            DestroyWindow(hWnd_1)
        
        ho = *(esi_2 + 0xb8)
        
        if (ho != 0)
            ho = DeleteObject(ho)
            *(esi_2 + 0xb8) = 0
        
        edx = var_c
        ecx = var_10_1 + 0x150
        *(esi_2 + 0x14c) = 0
        *(esi_2 + 0xa0) = 0
        var_10_1 = ecx
        *(esi_2 + 0xa4) = zx.o(0)
        i = i_1
        i_1 -= 1
    while (i != 1)

return ho
