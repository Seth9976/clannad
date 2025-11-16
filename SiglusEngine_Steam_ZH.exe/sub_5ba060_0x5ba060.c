// 函数: sub_5ba060
// 地址: 0x5ba060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_1 = data_bac46c
int32_t hWnd
int32_t edx
edx:hWnd = muls.dp.d(0x30c30c31, *(eax_1 + 0xa8) - *(eax_1 + 0xa4))
int32_t edx_1 = edx s>> 6
int32_t i_1 = (edx_1 u>> 0x1f) + edx_1

if (i_1 s> 0)
    int32_t esi_1 = 0
    int32_t i
    
    do
        int32_t ebx_1 = *(data_bac46c + 0xa4)
        hWnd = *(ebx_1 + esi_1 + 0xc0)
        
        if (hWnd != 0)
            hWnd = GetWindowLongW(hWnd, 0xfffffff0)
            
            if ((hWnd & 0x10000000) s> 0)
                hWnd = ShowWindow(*(ebx_1 + esi_1 + 0xc0), SW_HIDE)
        
        esi_1 += 0x150
        i = i_1
        i_1 -= 1
    while (i != 1)

return hWnd
