// 函数: sub_5441b0
// 地址: 0x5441b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_7c
int32_t eax_1 = __security_cookie ^ &var_7c
RECT rect_2
GetWindowRect(data_20c1680, &rect_2)
int32_t nWidth = rect_2.right - rect_2.left + 1
int32_t eax_6 = rect_2.bottom - rect_2.top + 1
RECT rect_1
GetWindowRect(GetDlgItem(data_20c1680, 0x4f4f), &rect_1)
int32_t left = rect_1.left
int32_t nWidth_1 = rect_1.right - left + 1
int32_t top = rect_1.top
POINT point
point.y = top
int32_t nHeight = rect_1.bottom - top + 1
point.x = left
ScreenToClient(data_20c1680, &point)
RECT rect
GetWindowRect(GetDlgItem(data_20c1680, 0x4ffa), &rect)
int32_t esi_1 = rect_1.top - rect.top
GetWindowRect(GetDlgItem(data_20c1680, *((data_20c168c << 2) + &data_61218c)), &rect)
POINT point_2
point_2.x = rect.left
point_2.y = rect.top
ScreenToClient(data_20c1680, &point_2)
int32_t eax_17 = point.y - point_2.y - esi_1
GetWindowRect(GetDlgItem(data_20c1680, 0x5019), &rect)
int32_t left_1 = rect.left
int32_t nWidth_2 = rect.right - left_1 + 1
int32_t top_1 = rect.top
POINT point_1
point_1.y = top_1
point_1.x = left_1
int32_t nHeight_1 = rect.bottom - top_1 + 1
ScreenToClient(data_20c1680, &point_1)
MoveWindow(GetDlgItem(data_20c1680, 0x4f4f), point.x, point.y - eax_17, nWidth_1, nHeight, 1)
MoveWindow(GetDlgItem(data_20c1680, 0x5019), point_1.x, point_1.y - eax_17, nWidth_2, nHeight_1, 1)
MoveWindow(data_20c1680, 0, 0, nWidth, eax_6 - eax_17, 1)
SetWindowTextA(data_20c1680, data_20c1684)
int32_t i = 0
int32_t* ebx_2 = data_20c1688
int32_t* var_70_1 = data_20c1690
int16_t* var_74_1 = data_20c1698
int16_t* var_78_1 = data_20c169c

do
    if (i s>= data_20c168c)
        ShowWindow(GetDlgItem(data_20c1680, *((i << 2) + &data_612190)), SW_HIDE)
        ShowWindow(GetDlgItem(data_20c1680, *((i << 2) + &data_612150)), SW_HIDE)
        ShowWindow(GetDlgItem(data_20c1680, *((i << 2) + &data_612110)), SW_HIDE)
    else
        PSTR lpString_1 = *ebx_2
        PSTR lpString
        
        lpString = lpString_1 == 0 ? &data_6138e3 : lpString_1
        
        SetDlgItemTextA(data_20c1680, *((i << 2) + &data_612190), lpString)
        SetDlgItemInt(data_20c1680, *((i << 2) + &data_612150), *var_70_1, 1)
        SendMessageA(GetDlgItem(data_20c1680, *((i << 2) + &data_612110)), 0x465, 0, 
            zx.d(*var_74_1) << 0x10 | zx.d(*var_78_1))
    
    var_70_1 = &var_70_1[1]
    i += 1
    var_74_1 = &var_74_1[2]
    ebx_2 = &ebx_2[1]
    var_78_1 = &var_78_1[2]
while (i s< 0x10)

HWND result = SetFocus(GetDlgItem(data_20c1680, 0x4f4f))
HWND hWnd = data_20c1680

if (hWnd != 0)
    UpdateWindow(hWnd)
    RECT rect_3
    GetWindowRect(hWnd, &rect_3)
    int32_t cx = rect_3.right - rect_3.left
    int32_t cy = rect_3.bottom - rect_3.top
    int32_t eax_40 = GetSystemMetrics(SM_CXSCREEN)
    int32_t esi_3 = eax_40 - cx
    int32_t X
    
    if (eax_40 - cx s< 0)
        X = neg.d(neg.d(esi_3) s>> 1)
    else
        X = esi_3 s>> 1
    
    int32_t eax_41 = GetSystemMetrics(SM_CYSCREEN)
    int32_t eax_42 = eax_41 - cy
    int32_t Y
    
    if (eax_41 - cy s< 0)
        Y = neg.d(neg.d(eax_42) s>> 1)
    else
        Y = eax_42 s>> 1
    
    result = SetWindowPos(hWnd, 0xfffffffe, X, Y, cx, cy, SWP_SHOWWINDOW)

sub_5f02dd(eax_1 ^ &var_7c)
return result
