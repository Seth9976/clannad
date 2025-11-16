// 函数: sub_54ea80
// 地址: 0x54ea80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

for (int32_t i = 0; i s< 0x140; i += 0x40)
    for (int32_t j = 0; j s< 0x40; j += 1)
        if (*((j << 2) + &data_63f940) != 0)
            int32_t edx_1 = i + j
            *((edx_1 << 2) + &data_20c25a0) = *((edx_1 << 2) + &data_1318524)

SendMessageA(GetDlgItem(data_1c054f0, *((data_20c259c << 2) + &data_612218)), 0xf1, 1, 0)
BOOL result = sub_54ea30()
HWND hWnd = data_1c054f0

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
