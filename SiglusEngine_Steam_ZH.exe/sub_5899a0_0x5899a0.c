// 函数: sub_5899a0
// 地址: 0x5899a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 4) == 0)
    return 

int32_t* ecx = data_bac424
int32_t esi_5 = (ecx[1] - *ecx) s/ 0x1c

if (esi_5 != *(arg1 + 0x47c))
    LRESULT hWnd = *(arg1 + 0x3f0)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0xf0, 0, 0)
        ecx = data_bac424
    
    int32_t edx_4 = *(arg1 + 0x47c)
    hWnd.b &= 1
    LRESULT hWnd_1 = hWnd
    
    if (edx_4 s< esi_5)
        int32_t i_1 = esi_5 - edx_4
        int32_t edi_4 = edx_4 * 0x1c
        int32_t i
        
        do
            if (hWnd.b == 0 || *(edi_4 + *ecx) != 5)
                int32_t* ecx_1 = *ecx
                sub_589a80(arg1, *(ecx_1 + edi_4), edi_4 + 4 + ecx_1)
                ecx = data_bac424
            
            hWnd = hWnd_1
            edi_4 += 0x1c
            i = i_1
            i_1 -= 1
        while (i != 1)

*(arg1 + 0x47c) = esi_5
