// 函数: sub_549b40
// 地址: 0x549b40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_460
int32_t eax_1 = __security_cookie ^ &var_460
bool cond:0 = data_12dc5f4 != 0
data_20c200c = 0xffffffff

if (cond:0)
    if (data_20c2008 != 0)
        BOOL bEnable = sub_495490(data_12dc5f0)
        
        if (bEnable == 0)
            EnableWindow(GetDlgItem(data_20c17c4, 0x4f68), bEnable)
    
    data_20c2010 = 1
else
    RECT rect_2
    GetWindowRect(GetDlgItem(data_20c17c4, 0x4f68), &rect_2)
    RECT rect_1
    GetWindowRect(GetDlgItem(data_20c17c4, 0x4f1b), &rect_1)
    int32_t top = rect_2.top
    int32_t nHeight = rect_1.bottom - top
    int32_t nWidth = rect_1.right - rect_1.left
    POINT point
    point.x = rect_2.left
    point.y = top
    ScreenToClient(data_20c17c4, &point)
    ShowWindow(GetDlgItem(data_20c17c4, 0x4f68), SW_HIDE)
    MoveWindow(GetDlgItem(data_20c17c4, 0x4f1b), point.x, point.y, nWidth, nHeight, 0)
    data_20c2010 = 0

if (data_12dc4c4 == 0 || data_12ff38c == 0)
    ShowWindow(GetDlgItem(data_20c17c4, 0x5032), SW_HIDE)

CreateStatusWindowA(0x54020103, &data_6138e3, data_20c17c4, 0xc350)
int32_t eax_13 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(SendMessageA(GetDlgItem(data_20c17c4, 0xc350), 0x401, 0x100, &data_6138e3), 
            0x4f68, data_20c17c4, 0x20c2028, 1, 3), 
        0x4f1b, data_20c17c4, 0x20c2060, 1, 2), 
    0x4f4f, data_20c17c4, 0x20c2098, 1, 0)
sub_4c0df0(
    sub_4c0df0(sub_4c0df0(eax_13, 0x4e54, data_20c17c4, 0x20c20d0, 1, 0), 0x4ef5, data_20c17c4, 
        0x20c2108, 1, 1), 
    0x5032, data_20c17c4, 0x20c2140, 1, 1)
RECT rect
GetWindowRect(data_20c17c4, &rect)
int32_t cx = data_12dc5e4
int32_t cy_1 = rect.bottom - rect.top + 1

if (cx s< rect.right - rect.left + 1)
    cx = rect.right - rect.left + 1

int32_t cy = data_12dc5e8
data_12dc5e4 = cx

if (cy s< cy_1)
    cy = cy_1

HWND hWnd = data_20c17c4
data_12dc5e8 = cy
SetWindowPos(hWnd, 0xfffffffe, 0, 0, cx, cy, 0x86)
GetWindowRect(data_20c17c4, &data_20c2018)
void* lpString
void string

if (data_20c2008 != 0)
    void* var_46c_8 = &data_12ffd8c
    sub_4c84d0(&string, " %s")
    SetWindowTextA(data_20c17c4, &string)
    lpString = &data_12ffe8c
else
    void* var_46c_6 = &data_12ffb8c
    sub_4c84d0(&string, " %s")
    SetWindowTextA(data_20c17c4, &string)
    lpString = &data_12ffc8c

SetDlgItemTextA(data_20c17c4, 0x4f4f, lpString)
int32_t ecx_10 = EnableWindow(GetDlgItem(data_20c17c4, 0x4f4f), 0)

if (data_1313ca8 == 0)
    int32_t var_46c_10 = ecx_10
    sub_4d5720(data_20c17c4)
else
    int32_t X_1 = data_1313cac
    int32_t edi_2 = data_1313cb8
    int32_t Y_1 = data_1313cb0
    int32_t eax_20 = data_1313cb4
    int32_t eax_21 = GetSystemMetrics(SM_CXSCREEN)
    int32_t eax_22 = GetSystemMetrics(SM_CYSCREEN)
    int32_t edx = eax_20
    int32_t X
    
    if (edx s< eax_21)
        X = X_1
    else
        int32_t ecx_13 = edx - eax_21 + 1
        edx -= ecx_13
        X = X_1 - ecx_13
    
    int32_t Y = Y_1
    
    if (edi_2 s>= eax_22)
        int32_t eax_25 = edi_2 - eax_22 + 1
        edi_2 -= eax_25
        Y -= eax_25
    
    if (X s< 0)
        int32_t eax_27 = neg.d(X)
        X += eax_27
        edx += eax_27
    
    if (Y s< 0)
        int32_t eax_29 = neg.d(Y)
        Y += eax_29
        edi_2 += eax_29
    
    int32_t eax_31 = edx - X
    int32_t eax_33 = edi_2 - Y
    
    if (eax_31 s> eax_21)
        edx += eax_21 - eax_31
    
    if (eax_33 s> eax_22)
        edi_2 += eax_22 - eax_33
    
    SetWindowPos(data_20c17c4, 0xfffffffe, X, Y, edx - X, edi_2 - Y, SWP_SHOWWINDOW)

HWND hWnd_1 = GetDlgItem(data_20c17c4, 0x4f1b)
SendMessageA(hWnd_1, 0x1036, 0, SendMessageA(hWnd_1, 0x1037, 0, 0) | 0x20)
sub_548ce0()

if (data_20c2010 != 0)
    sub_548f80()

sub_548c60()

if (data_20c2008 != 0)
    void* var_46c_13 = &data_12ffe8c
else
    void* var_46c_12 = &data_12ffc8c

sub_4c84d0(&string, 0x6200f0)
SetDlgItemTextA(data_20c17c4, 0x4ef5, &string)
WPARAM wParam

if (data_1313ccc == 0)
    wParam = 0
else
    wParam = 1

SendDlgItemMessageA(data_20c17c4, 0x4ef5, 0xf1, wParam, 0)
WPARAM wParam_1

if (data_13132cc == 0)
    wParam_1 = 0
else
    wParam_1 = 1

SendDlgItemMessageA(data_20c17c4, 0x5032, 0xf1, wParam_1, 0)
HWND hWnd_2 = GetDlgItem(data_20c17c4, 0x4f4f)
data_20c2178 = GetWindowLongA(hWnd_2, 0xfffffffc)
SetWindowLongA(hWnd_2, 0xfffffffc, sub_5496e0)
HWND hWnd_3 = GetDlgItem(data_20c17c4, 0x4e54)
data_20c217c = GetWindowLongA(hWnd_3, 0xfffffffc)
SetWindowLongA(hWnd_3, 0xfffffffc, sub_5497d0)
HWND hWnd_4 = GetDlgItem(data_20c17c4, 0x4f1b)
data_20c2180 = GetWindowLongA(hWnd_4, 0xfffffffc)
SetWindowLongA(hWnd_4, 0xfffffffc, sub_5498c0)
HWND hWnd_5 = GetDlgItem(data_20c17c4, 0x4ef5)
data_20c2184 = GetWindowLongA(hWnd_5, 0xfffffffc)
SetWindowLongA(hWnd_5, 0xfffffffc, sub_5499b0)
HWND hWnd_6 = GetDlgItem(data_20c17c4, 0x5032)
data_20c2188 = GetWindowLongA(hWnd_6, 0xfffffffc)
SetWindowLongA(hWnd_6, 0xfffffffc, sub_549a30)
HWND hWnd_7 = GetDlgItem(data_20c17c4, 0x4f68)
data_20c218c = GetWindowLongA(hWnd_7, 0xfffffffc)
SetWindowLongA(hWnd_7, 0xfffffffc, sub_549ab0)
int32_t result = sub_549250()
sub_5f02dd(eax_1 ^ &var_460)
return result
