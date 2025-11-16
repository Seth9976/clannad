// 函数: sub_539e60
// 地址: 0x539e60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1

if (*(arg1 + 8) == 0)
    return 

int32_t hWnd = *(arg1 + 0x6e0)

if (hWnd == *(arg1 + 0x6e4))
    return 

int32_t hWnd_1 = hWnd
WPARAM wParam = 0

if ((*(arg1 + 0x6e4) - hWnd_1) s/ 0x11c s<= 0)
    return 

int16_t* esi_3 = hWnd_1 + 0x1c
void* edx_5 = data_bac4e4 + 0x11c
void* var_8_1 = edx_5

while (true)
    int32_t eax_3
    
    if (*esi_3 != 0)
        int16_t* eax_4 = esi_3
        
        do
            hWnd_1.w = *eax_4
            eax_4 = &eax_4[1]
        while (hWnd_1.w != 0)
        
        edx_5 = var_8_1
        eax_3 = (eax_4 - &eax_4[1]) s>> 1
    else
        eax_3 = 0
    
    int32_t var_18_1 = eax_3
    
    if (sub_536340(edx_5, hWnd_1, *(edx_5 + 0x10), esi_3) == 0)
        break
    
    hWnd_1 = *(arg1 + 0x6e4) - *(arg1 + 0x6e0)
    wParam += 1
    esi_3 = &esi_3[0x8e]
    edx_5 = var_8_1
    
    if (wParam s>= hWnd_1 s/ 0x11c)
        return 

hWnd = *(arg1 + 0xb0)

if (hWnd != 0)
    SendMessageW(hWnd, 0x186, wParam, 0)
