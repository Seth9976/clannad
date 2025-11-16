// 函数: sub_535710
// 地址: 0x535710
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = 0
int32_t esi = *(arg1 + 0x410)
int32_t* eax

if (esi s> 0)
    eax = *(arg1 + 0x420) + 8
    
    do
        if (arg2 == *eax)
            int32_t* edx_2 = edx * 0x12c + *(arg1 + 0x420)
            char* esi_1 = *(data_bac4e4 + 0x160) + (*edx_2 << 3)
            HWND hWnd = edx_2[2]
            
            if (hWnd != 0)
                *esi_1 = SendMessageW(hWnd, 0xf0, 0, 0) & 1
                return 1
            
            hWnd.b &= 1
            *esi_1 = hWnd.b
            hWnd.b = 1
            return hWnd
        
        edx += 1
        eax = &eax[0x4b]
    while (edx s< esi)

eax.b = 0
return eax
