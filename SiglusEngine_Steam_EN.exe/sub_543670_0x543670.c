// 函数: sub_543670
// 地址: 0x543670
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_684
int32_t eax_1 = __security_cookie ^ &var_684
RECT rect
GetWindowRect(data_20c1538, &rect)
RECT rect_1
GetClientRect(data_20c1538, &rect_1)
RECT rect_6
GetWindowRect(GetDlgItem(data_20c1538, 0x4ec7), &rect_6)
int32_t eax_5 = rect.bottom - rect_6.bottom + 1
int32_t eax_10
int32_t edx
edx:eax_10 = sx.q(rect_1.left - rect_1.right - rect.left + rect.right)
int32_t eax_12 = GetSystemMetrics(SM_CYCAPTION)
int32_t eax_14
int32_t edx_1
edx_1:eax_14 = sx.q(rect_1.top - rect_1.bottom - rect.top + rect.bottom - eax_12)
int32_t eax_17 = GetSystemMetrics(SM_CYCAPTION)
void* const i = &data_612090
rect.left += (eax_10 - edx) s>> 1
int32_t ecx_6 = ((eax_14 - edx_1) s>> 1) + eax_17
rect.top += ecx_6
void var_610
void* lpRect = &var_610

do
    GetWindowRect(GetDlgItem(data_20c1538, *i), lpRect)
    int32_t left = rect.left
    i += 4
    *lpRect -= left
    *(lpRect + 8) -= left
    int32_t top = rect.top
    *(lpRect + 4) -= top
    *(lpRect + 0xc) -= top
    lpRect += 0x10
while (i s< &data_612110)

RECT rect_3
GetWindowRect(GetDlgItem(data_20c1538, 0x4f4f), &rect_3)
int32_t left_1 = rect.left
rect_3.left -= left_1
rect_3.right -= left_1
int32_t top_1 = rect.top
int32_t ecx_8 = rect_3.top - top_1
rect_3.bottom -= top_1
rect_3.top = ecx_8
int32_t ecx_9 = ecx_8 - rect_6.top
RECT rect_4
GetWindowRect(GetDlgItem(data_20c1538, 0x4e32), &rect_4)
int32_t left_2 = rect.left
rect_4.left -= left_2
rect_4.right -= left_2
int32_t top_2 = rect.top
rect_4.top -= top_2
rect_4.bottom -= top_2
RECT rect_5
GetWindowRect(GetDlgItem(data_20c1538, 0x4e31), &rect_5)
int32_t left_3 = rect.left
rect_5.left -= left_3
rect_5.right -= left_3
int32_t top_3 = rect.top
rect_5.top -= top_3
rect_5.bottom -= top_3
int32_t i_1 = 0
int32_t var_680 = 0
int32_t edx_4

do
    if (i_1 s>= data_20c1640)
        ShowWindow(GetDlgItem(data_20c1538, *((i_1 << 2) + &data_612090)), SW_HIDE)
        edx_4 = var_680
    else
        int32_t esi_2 = *((i_1 << 2) + &data_20c1540)
        void string
        sub_5434b0(esi_2 * 0x11 + &data_1301618, &string)
        SetWindowTextA(GetDlgItem(data_20c1538, *((i_1 << 2) + &data_612090)), &string)
        WPARAM wParam
        
        if ((&data_1313b3c)[esi_2] == 0)
            wParam = 0
        else
            wParam = 1
        
        SendDlgItemMessageA(data_20c1538, *((i_1 << 2) + &data_612090), 0xf1, wParam, 0)
        edx_4 = var_680 + 1
        var_680 = edx_4
    
    i_1 += 1
while (i_1 s< 0x20)

int32_t left_4 = rect_3.left
int32_t var_60c[0x7b]
MoveWindow(GetDlgItem(data_20c1538, 0x4f4f), left_4, var_60c[(edx_4 - 1) * 4] + ecx_9, 
    rect_3.right - left_4 + 1, rect_3.bottom - rect_3.top + 1, 1)
int32_t left_5 = rect_4.left
MoveWindow(GetDlgItem(data_20c1538, 0x4e32), left_5, var_60c[(edx_4 - 1) * 4] + ecx_9, 
    rect_4.right - left_5 + 1, rect_4.bottom - rect_4.top + 1, 1)
int32_t left_6 = rect_5.left
MoveWindow(GetDlgItem(data_20c1538, 0x4e31), left_6, var_60c[(edx_4 - 1) * 4] + ecx_9, 
    rect_5.right - left_6 + 1, rect_5.bottom - rect_5.top + 1, 1)
int32_t left_7 = rect.left
var_604
SetWindowPos(data_20c1538, nullptr, left_7, rect.top, rect.right - left_7 + 1, 
    *(&var_604 + ((edx_4 - 1) << 4)) + ecx_6 + eax_5, 0)
SetFocus(GetDlgItem(data_20c1538, 0x4f4f))
BOOL result = SetWindowTextA(data_20c1538, 0x12a47a4)
HWND hWnd = data_20c1538

if (hWnd != 0)
    UpdateWindow(hWnd)
    RECT rect_2
    GetWindowRect(hWnd, &rect_2)
    int32_t cx = rect_2.right - rect_2.left
    int32_t cy = rect_2.bottom - rect_2.top
    int32_t eax_61 = GetSystemMetrics(SM_CXSCREEN)
    int32_t esi_4 = eax_61 - cx
    int32_t X
    
    if (eax_61 - cx s< 0)
        X = neg.d(neg.d(esi_4) s>> 1)
    else
        X = esi_4 s>> 1
    
    int32_t eax_62 = GetSystemMetrics(SM_CYSCREEN)
    int32_t eax_63 = eax_62 - cy
    int32_t Y
    
    if (eax_62 - cy s< 0)
        Y = neg.d(neg.d(eax_63) s>> 1)
    else
        Y = eax_63 s>> 1
    
    result = SetWindowPos(hWnd, 0xfffffffe, X, Y, cx, cy, SWP_SHOWWINDOW)

sub_5f02dd(eax_1 ^ &var_684)
return result
