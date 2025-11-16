// 函数: sub_4c11f0
// 地址: 0x4c11f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

LRESULT wParam_1
int32_t eax_1 = __security_cookie ^ &wParam_1

if (arg3 s< 0)
    LRESULT eax_3 = sub_4c1160(arg4, arg2, arg3)
    sub_5f02dd(eax_1 ^ &wParam_1)
    return eax_3

HWND hWnd = GetDlgItem(arg2, arg4)
LRESULT wParam = SendMessageA(hWnd, 0x1027, 0, 0)
wParam_1 = wParam
RECT var_1c
var_1c.left = 2
SendMessageA(hWnd, 0x100e, wParam, &var_1c)
int32_t top = var_1c.top
GetWindowRect(hWnd, &var_1c)
int32_t eax_6 = var_1c.bottom - var_1c.top - top
var_1c.left = 2
LRESULT eax_7 = SendMessageA(hWnd, 0x100e, 0, &var_1c)
int32_t bottom = var_1c.bottom
int32_t esi = bottom - var_1c.top

if (bottom != var_1c.top)
    LRESULT wParam_2 = wParam_1
    wParam_1 = divs.dp.d(sx.q(eax_6), esi) - 1 + wParam_2
    
    if (arg3 s>= wParam_2 + arg5)
        LRESULT wParam_3 = wParam_1
        eax_7 = wParam_3 - arg5
        
        if (arg3 s> eax_7)
            eax_7 = SendMessageA(hWnd, 0x1014, 0, (arg3 - wParam_3 + arg5) * esi)
    else
        eax_7 = SendMessageA(hWnd, 0x1014, 0, (arg3 - wParam_2 - arg5) * esi)

sub_5f02dd(eax_1 ^ &wParam_1)
return eax_7
