// 函数: sub_56c1e0
// 地址: 0x56c1e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

LRESULT hDlg_1 = arg3
HWND hDlg = hDlg_1

if (hDlg_1 != 0)
    HWND hWnd = GetDlgItem(hDlg_1, 0x4f32)
    LRESULT i
    
    do
        i = SendMessageA(hWnd, 0x101c, 0, 0)
    while (i != 0)
    
    WPARAM wParam_1 = 0
    WPARAM wParam = 0
    int32_t lParam
    
    if (*arg2 == 0)
        int32_t* ebx_1 = arg4
        
        for (int32_t i_1 = 0; i_1 s< 0x100; )
            if (*(i_1 + &data_20cf620) != 0)
                i = *(i_1 + &data_612e00)
                
                if (*i != 0)
                    int32_t esi_2 = *ebx_1
                    HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
                    LRESULT i_3 = i
                    int32_t var_34_1 = esi_2
                    lParam = 7
                    int32_t var_38_1 = 0
                    i = SendMessageA(hWnd_1, 0x101b, wParam, &lParam)
                    wParam += 1
            
            i_1 += 4
            ebx_1 = &ebx_1[1]
        
        return i
    
    LRESULT* edi_1 = arg4
    
    for (int32_t i_2 = 0; i_2 s< 0x100; )
        hDlg_1 = *(i_2 + &data_612d00)
        *edi_1 = hDlg_1
        LRESULT hDlg_3 = hDlg_1
        
        if (*(i_2 + &data_20cf620) != 0)
            hDlg_1 = *(i_2 + &data_612e00)
            
            if (*hDlg_1 != 0)
                HWND hWnd_2 = GetDlgItem(hDlg, 0x4f32)
                LRESULT hDlg_4 = hDlg_3
                LRESULT hDlg_2 = hDlg_1
                lParam = 7
                int32_t var_38_2 = 0
                hDlg_1 = SendMessageA(hWnd_2, 0x101b, wParam_1, &lParam)
                wParam_1 += 1
        
        i_2 += 4
        edi_1 = &edi_1[1]

return hDlg_1
