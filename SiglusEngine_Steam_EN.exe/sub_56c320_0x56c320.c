// 函数: sub_56c320
// 地址: 0x56c320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND var_8 = arg1
HWND result = GetDlgItem(arg1, 0x4f32)
HWND hWnd = result
WPARAM wParam = 0
HWND hWnd_1 = hWnd
int32_t i = 0
int32_t* edi_1 = arg2

do
    if (*(i + &data_20cf620) != 0)
        result = *(i + &data_612e00)
        
        if (result->unused.b != 0)
            result = SendMessageA(hWnd, 0x101d, wParam, 0)
            HWND result_1 = result
            
            if (result_1 s>= 6)
                result = 0x64
                
                if (result_1 s< 0x640)
                    result = result_1
                
                *edi_1 = result
            else
                *edi_1 = 6
            
            hWnd = hWnd_1
            wParam += 1
    
    i += 4
    edi_1 = &edi_1[1]
while (i s< 0x100)

return result
