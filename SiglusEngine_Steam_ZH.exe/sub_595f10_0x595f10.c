// 函数: sub_595f10
// 地址: 0x595f10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 + 0x8f8)
int32_t hWnd

if (ecx s>= 0)
    int32_t eax
    int32_t edx_3
    edx_3:eax = muls.dp.d(0x66666667, *(arg1 + 0x8e4) - *(arg1 + 0x8e0))
    int32_t edx_4 = edx_3 s>> 3
    
    if (ecx s< (edx_4 u>> 0x1f) + edx_4 && *(*(arg1 + 0x8e0) + ecx * 0x14 + 0xc) s> 0)
        void* ebx_1 = arg1 + 0x3ec
        WPARAM eax_3 = sub_6c4b40(ebx_1)
        int32_t ecx_5 = *(*(arg1 + 0x8e0) + *(arg1 + 0x8f8) * 0x14 + 0xc)
        WPARAM wParam = eax_3 + 1
        
        if (wParam s< ecx_5)
            ebx_1 = arg1 + 0x3ec
            
            while (*(*(*(arg1 + 0x8e0) + *(arg1 + 0x8f8) * 0x14) + wParam) != 0)
                wParam += 1
                
                if (wParam s>= ecx_5)
                    goto label_595fae
            
            goto label_595fe4
        
    label_595fae:
        wParam = 0
        
        if (eax_3 s> 0)
            while (*(*(*(arg1 + 0x8e0) + *(arg1 + 0x8f8) * 0x14) + wParam) != 0)
                wParam += 1
                
                if (wParam s>= eax_3)
                    int32_t eax_8
                    eax_8.b = 1
                    return eax_8
            
        label_595fe4:
            HWND hWnd_1 = *(ebx_1 + 4)
            int32_t var_30_1 = 2
            int32_t var_34_1 = 2
            int32_t lParam = 8
            
            if (hWnd_1 != 0)
                SendMessageW(hWnd_1, 0x102b, wParam, &lParam)
            
            HWND hWnd_2 = *(ebx_1 + 4)
            int32_t var_30_2 = 1
            int32_t var_34_2 = 1
            lParam = 8
            
            if (hWnd_2 != 0)
                SendMessageW(hWnd_2, 0x102b, wParam, &lParam)
            
            hWnd = *(ebx_1 + 4)
            
            if (hWnd != 0)
                SendMessageW(hWnd, 0x1013, wParam, 1)

hWnd.b = 1
return hWnd
