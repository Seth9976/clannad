// 函数: sub_535320
// 地址: 0x535320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1

if (*(arg1 + 8) == 0)
    return 

LRESULT hWnd = *(arg1 + 0x410)

if (hWnd s<= 0)
    return 

int32_t i = 0

if (hWnd s<= 0)
    return 

int32_t esi_1 = 0

do
    int32_t* edx_1 = *(arg1 + 0x420)
    HWND hWnd_1 = *(edx_1 + esi_1 + 8)
    void* ecx_1 = *(data_bac4e4 + 0x160) + (*(edx_1 + esi_1) << 3)
    
    if (hWnd_1 != 0)
        WPARAM wParam
        wParam.b = *ecx_1 != 0
        SendMessageW(hWnd_1, 0xf1, wParam, 0)
    
    hWnd = *(esi_1 + *(arg1 + 0x420) + 0x9c)
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0x405, 1, *(ecx_1 + 4))
    
    i += 1
    esi_1 += 0x12c
while (i s< *(arg1 + 0x410))
