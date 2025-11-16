// 函数: sub_54e830
// 地址: 0x54e830
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
LRESULT result

for (int32_t i = 0; i s< 0x24; i += 4)
    WPARAM wParam
    
    if (*(i + &data_13184d8) == 0)
        wParam = 0
    else
        wParam = 1
    
    result = SendDlgItemMessageA(data_1c054f4, *(i + &data_612410), 0xf1, wParam, 0)

BOOL bEnable
bEnable.b = data_13184f8 == 0

for (int32_t i_1 = 0; i_1 s< 9; i_1 += 1)
    if (i_1 != 8)
        result = EnableWindow(GetDlgItem(data_1c054f4, *((i_1 << 2) + &data_612410)), bEnable)

HWND hWnd = data_1c054f4

if (hWnd != 0)
    UpdateWindow(hWnd)
    RECT rect
    GetWindowRect(hWnd, &rect)
    int32_t cx = rect.right - rect.left
    int32_t cy = rect.bottom - rect.top
    int32_t eax_5 = GetSystemMetrics(SM_CXSCREEN)
    int32_t esi_1 = eax_5 - cx
    int32_t X
    
    if (eax_5 - cx s< 0)
        X = neg.d(neg.d(esi_1) s>> 1)
    else
        X = esi_1 s>> 1
    
    int32_t eax_6 = GetSystemMetrics(SM_CYSCREEN)
    int32_t eax_7 = eax_6 - cy
    int32_t Y
    
    if (eax_6 - cy s< 0)
        Y = neg.d(neg.d(eax_7) s>> 1)
    else
        Y = eax_7 s>> 1
    
    result = SetWindowPos(hWnd, 0xfffffffe, X, Y, cx, cy, SWP_SHOWWINDOW)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
