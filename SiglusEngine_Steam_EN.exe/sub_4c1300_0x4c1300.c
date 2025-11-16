// 函数: sub_4c1300
// 地址: 0x4c1300
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd_1
int32_t eax_1 = __security_cookie ^ &hWnd_1
hWnd_1 = GetDlgItem(arg2, arg4)
WPARAM eax_3 = sub_4c1810(arg2, arg4)
HWND hWnd = hWnd_1
int32_t lParam

if (eax_3 == arg3)
    lParam = 8
    WPARAM var_54_1 = arg3
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 3
    SendMessageA(hWnd, 0x102b, arg3, &lParam)

LRESULT wParam = SendMessageA(hWnd, 0x1027, 0, 0)
LRESULT result
RECT var_1c

if (arg5 != 0xffffffff)
label_4c13fc:
    lParam = 8
    WPARAM var_54_2 = arg3
    int32_t var_4c_2 = 3
    int32_t var_48_2 = 3
    result = SendMessageA(hWnd, 0x102b, arg3, &lParam)
    
    if (arg5 != 0xfffffffe)
        var_1c.left = 2
        SendMessageA(hWnd, 0x100e, 0, &var_1c)
        result =
            SendMessageA(hWnd, 0x1014, 0, (arg3 - wParam - arg5) * (var_1c.bottom - var_1c.top))
else
    var_1c.left = 2
    SendMessageA(hWnd, 0x100e, wParam, &var_1c)
    int32_t top = var_1c.top
    GetWindowRect(hWnd, &var_1c)
    var_1c.left = 2
    hWnd_1 = var_1c.bottom - var_1c.top - top
    SendMessageA(hWnd, 0x100e, 0, &var_1c)
    int32_t bottom = var_1c.bottom
    result = bottom - var_1c.top
    
    if (bottom != var_1c.top)
        int32_t eax_10 = divs.dp.d(sx.q(hWnd_1 - result * 3), result)
        
        if (eax_10 s< 0)
            eax_10 = 0
        
        arg5 = eax_10
        goto label_4c13fc
sub_5f02dd(eax_1 ^ &hWnd_1)
return result
