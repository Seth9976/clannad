// 函数: sub_4c16d0
// 地址: 0x4c16d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hDlg = data_1c054ec
LRESULT wParam = arg1
int32_t edi = 1
HWND hWnd = GetDlgItem(hDlg, 0x4ef0)

if (wParam == 0xffffffff)
    LRESULT result = sub_4c1520(hDlg, 0x4ef0)
    wParam = result
    
    if (wParam == 0xffffffff)
        return result
    
    edi = 0

int32_t eax_1 = SendMessageA(hWnd, 0x102c, wParam, 1) & 0xfffffffe

if (edi != 0)
    eax_1 |= 1

int32_t var_3c_1 = eax_1
int32_t lParam = 8
LRESULT wParam_1 = wParam
int32_t var_38_1 = 1
return SendMessageA(hWnd, 0x102b, wParam, &lParam)
