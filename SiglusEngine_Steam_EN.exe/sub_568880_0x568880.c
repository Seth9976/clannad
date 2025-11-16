// 函数: sub_568880
// 地址: 0x568880
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND var_8 = arg3
HWND hWnd
int32_t ecx
hWnd, ecx = GetDlgItem(arg3, 0x4f32)
WPARAM wParam = 0
HWND hWnd_1 = hWnd

for (void* i = nullptr; i s< 0x70; i += 4)
    int32_t ecx_2 = *(i + 0x612b70)
    
    if (ecx_2 == arg4 || ecx_2 == 0xffffffff)
        LRESULT eax = SendMessageA(hWnd, 0x101d, wParam, 0)
        
        if (eax s< 6)
            eax = 6
        else if (eax s>= 0x640)
            eax = 0x64
        
        *(i + 0x13172f8) = eax
        wParam += 1
        hWnd = hWnd_1

return hWnd
