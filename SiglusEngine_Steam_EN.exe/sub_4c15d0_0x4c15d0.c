// 函数: sub_4c15d0
// 地址: 0x4c15d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hDlg = arg1
HWND hDlg_1 = hDlg
LRESULT result = SendMessageA(GetDlgItem(hDlg, 0x4f32), 0x1004, 0, 0)
WPARAM wParam = 0
LRESULT result_1 = result

if (result s> 0)
    do
        HWND hWnd = GetDlgItem(hDlg, 0x4f32)
        int32_t eax_2 = SendMessageA(hWnd, 0x102c, wParam, 2) & 0xfffffffd
        int32_t lParam = 8
        int32_t var_3c_1 = eax_2
        WPARAM wParam_1 = wParam
        int32_t var_38_1 = 2
        result = SendMessageA(hWnd, 0x102b, wParam, &lParam)
        hDlg = hDlg_1
        wParam += 1
    while (wParam s< result_1)

return result
