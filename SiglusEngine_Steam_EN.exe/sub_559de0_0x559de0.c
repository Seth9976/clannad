// 函数: sub_559de0
// 地址: 0x559de0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = GetDlgItem(arg2, arg4)
WPARAM wParam = 0
LRESULT* edi_1 = arg3 + 0x20
LRESULT result

do
    result = SendMessageA(hWnd, 0x101d, wParam, 0)
    LRESULT result_1 = result
    
    if (result_1 s>= 6)
        result = 0x64
        
        if (result_1 s< 0x640)
            result = result_1
        
        *edi_1 = result
    else
        *edi_1 = 6
    
    wParam += 1
    edi_1 = &edi_1[1]
while (wParam s< 0x40)

return result
