// 函数: sub_4c1660
// 地址: 0x4c1660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
HWND hDlg = data_20c2e68
int32_t result = 0
LRESULT eax_1 = SendMessageA(GetDlgItem(hDlg, 0x4f32), 0x1004, 0, 0)
WPARAM wParam = 0

if (eax_1 s> 0)
    do
        if (SendMessageA(GetDlgItem(hDlg, 0x4f32), 0x102c, wParam, 2) != 0)
            result += 1
        
        wParam += 1
    while (wParam s< eax_1)

return result
