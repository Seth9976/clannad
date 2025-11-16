// 函数: sub_42a820
// 地址: 0x42a820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = arg1
int32_t i_2 = arg1
data_13926ac = 0
data_13926a8 = 0xffffffff

if (i_1 s<= 0)
    return 

int32_t esi_1 = data_91e8fc
int32_t i

do
    if (esi_1 s> 0)
        LRESULT hDlg = data_1af0a48
        WPARAM wParam = esi_1 - 1
        data_91e8fc = wParam
        
        if (hDlg != 0 && wParam u<= 0x7f)
            int32_t edi = 1
            LRESULT eax_1
            
            while (true)
                HWND hWnd = GetDlgItem(hDlg, 0x4f32)
                int32_t lParam = 5
                WPARAM wParam_1 = wParam
                int32_t var_3c_1 = edi
                void* const var_30_1 = &data_6138e3
                WPARAM wParam_2 = wParam
                eax_1 = SendMessageA(hWnd, 0x102e, wParam, &lParam)
                edi += 1
                
                if (edi s>= 8)
                    break
                
                hDlg = data_1af0a48
            
            WPARAM wParam_3 = wParam - 1
            
            if (wParam s<= 0)
                wParam_3 = wParam
            
            hDlg = sub_4c1300(eax_1, data_1af0a48, wParam_3, 0x4f32, 0xffffffff)
            i_1 = i_2
            wParam = data_91e8fc
        
        sub_4d1ba0(sub_4d1ba0(hDlg, 0x24, wParam * 0x2d4 + 0x907f00, 0), 0x24, 
            wParam * 0x2d4 + 0x907f26, 0)
        esi_1 = data_91e8fc
    
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
