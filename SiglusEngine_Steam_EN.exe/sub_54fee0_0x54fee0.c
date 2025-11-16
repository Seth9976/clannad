// 函数: sub_54fee0
// 地址: 0x54fee0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd
int32_t eax_1 = __security_cookie ^ &hWnd
GetWindowRect(data_20c2aa0, &data_20c2aa4)
CreateStatusWindowA(0x54020103, &data_6138e3, data_20c2aa0, 0xc350)
SendMessageA(GetDlgItem(data_20c2aa0, 0xc350), 0x401, 0x100, &data_6138e3)

for (WPARAM wParam = 0; wParam s< 7; wParam += 1)
    int32_t esi_1 = *((wParam << 3) + &data_63fa44)
    int32_t edi_1 = (&data_63fa40)[wParam * 2]
    HWND hWnd_1 = GetDlgItem(data_20c2aa0, 0x4f32)
    int32_t var_3c_1 = edi_1
    int32_t lParam = 7
    int32_t var_44_1 = 0
    int32_t var_40_1 = esi_1
    SendMessageA(hWnd_1, 0x101b, wParam, &lParam)

HWND hWnd_2 = GetDlgItem(data_20c2aa0, 0x4f32)
sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(SendMessageA(hWnd_2, 0x1036, 0, SendMessageA(hWnd_2, 0x1037, 0, 0) | 0x21), 
            0x4e6d, data_20c2aa0, 0x20c2ab4, 1, 0), 
        0x4f15, data_20c2aa0, 0x20c2aec, 1, 0), 
    0x4f32, data_20c2aa0, 0x20c2b24, 1, 2)
LRESULT result = sub_54f710()
HWND hWnd_3 = data_20c2aa0
hWnd = hWnd_3

if (hWnd_3 != 0)
    UpdateWindow(hWnd_3)
    RECT rect
    GetWindowRect(hWnd_3, &rect)
    int32_t cx = rect.right - rect.left
    int32_t cy = rect.bottom - rect.top
    int32_t eax_8 = GetSystemMetrics(SM_CXSCREEN)
    int32_t esi_4 = eax_8 - cx
    int32_t X
    
    if (eax_8 - cx s< 0)
        X = neg.d(neg.d(esi_4) s>> 1)
    else
        X = esi_4 s>> 1
    
    int32_t eax_9 = GetSystemMetrics(SM_CYSCREEN)
    int32_t eax_10 = eax_9 - cy
    int32_t Y
    
    if (eax_9 - cy s< 0)
        Y = neg.d(neg.d(eax_10) s>> 1)
    else
        Y = eax_10 s>> 1
    
    result = SetWindowPos(hWnd, 0xfffffffe, X, Y, cx, cy, SWP_SHOWWINDOW)

sub_5f02dd(eax_1 ^ &hWnd)
return result
