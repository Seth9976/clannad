// 函数: sub_546990
// 地址: 0x546990
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_94
int32_t eax_1 = __security_cookie ^ &var_94
RECT rect
GetWindowRect(data_20c1748, &rect)
RECT rect_1
GetClientRect(data_20c1748, &rect_1)
int32_t eax_6
int32_t edx
edx:eax_6 = sx.q(rect_1.left - rect_1.right - rect.left + rect.right)
int32_t eax_8 = GetSystemMetrics(SM_CYCAPTION)
int32_t eax_10
int32_t edx_1
edx_1:eax_10 = sx.q(rect_1.top - rect_1.bottom - rect.top + rect.bottom - eax_8)
int32_t eax_12 = GetSystemMetrics(SM_CYCAPTION)
int32_t esi_2 = ((eax_6 - edx) s>> 1) + rect.left
int32_t ebx_3 = ((eax_10 - edx_1) s>> 1) + eax_12 + rect.top
void var_50
void* lpRect = &var_50

for (void* const i = &data_612230; i s< &data_612240; )
    GetWindowRect(GetDlgItem(data_20c1748, *i), lpRect)
    i += 4
    *lpRect -= esi_2
    *(lpRect + 8) -= esi_2
    *(lpRect + 4) -= ebx_3
    *(lpRect + 0xc) -= ebx_3
    lpRect += 0x10

int32_t var_4c
int32_t var_3c
int32_t ebx_5 = var_3c - var_4c
int32_t var_2c
int32_t var_8c_1 = var_2c - var_3c
int32_t ecx_7 = 1
enum SHOW_WINDOW_CMD nCmdShow = SW_SHOWNORMAL

if (data_7036e0 == 0)
    ecx_7 = 0

if (data_12ff374 == 0)
    nCmdShow = SW_HIDE

if (ecx_7 == 0 && nCmdShow == SW_HIDE)
    ShowWindow(GetDlgItem(data_20c1748, 0x4eae), nCmdShow)
    ShowWindow(GetDlgItem(data_20c1748, 0x4eb9), SW_HIDE)
    ShowWindow(GetDlgItem(data_20c1748, 0x4ec4), SW_HIDE)
    ShowWindow(GetDlgItem(data_20c1748, 0x502a), SW_HIDE)
    void* const i_1 = &data_612238
    int32_t* esi_3 = &var_2c
    
    do
        int32_t edx_2 = *esi_3
        int32_t X = esi_3[-1]
        MoveWindow(GetDlgItem(data_20c1748, *i_1), X, edx_2 - var_8c_1, esi_3[1] - X + 1, 
            esi_3[2] - edx_2 + 1, 1)
        i_1 += 4
        esi_3 = &esi_3[4]
    while (i_1 s< &data_612240)
    
    goto label_546c3e

ShowWindow(GetDlgItem(data_20c1748, 0x4f6e), SW_HIDE)
ShowWindow(GetDlgItem(data_20c1748, 0x4f73), SW_HIDE)

if (ecx_7 == 0)
    var_8c_1 = ebx_5
    ShowWindow(GetDlgItem(data_20c1748, 0x4eb9), SW_HIDE)
    void* const i_2 = &data_612234
    int32_t* esi_4 = &var_3c
    
    do
        int32_t edx_4 = *esi_4
        int32_t X_1 = esi_4[-1]
        MoveWindow(GetDlgItem(data_20c1748, *i_2), X_1, edx_4 - ebx_5, esi_4[1] - X_1 + 1, 
            esi_4[2] - edx_4 + 1, 1)
        i_2 += 4
        esi_4 = &esi_4[4]
    while (i_2 s< &data_612240)
    
label_546c3e:
    
    if (var_8c_1 s> 0)
        int32_t top = rect.top
        int32_t left = rect.left
        SetWindowPos(data_20c1748, nullptr, left, top, rect.right - left + 1, 
            rect.bottom - var_8c_1 - top + 1, 0)
else if (nCmdShow == SW_HIDE)
    var_8c_1 = ebx_5
    ShowWindow(GetDlgItem(data_20c1748, 0x4ec4), SW_HIDE)
    void* const i_3 = &data_612238
    int32_t* esi_5 = &var_2c
    
    do
        int32_t edx_6 = *esi_5
        int32_t X_2 = esi_5[-1]
        MoveWindow(GetDlgItem(data_20c1748, *i_3), X_2, edx_6 - ebx_5, esi_5[1] - X_2 + 1, 
            esi_5[2] - edx_6 + 1, 1)
        i_3 += 4
        esi_5 = &esi_5[4]
    while (i_3 s< &data_612240)
    
    goto label_546c3e

data_20c174c = data_1313304
data_20c1750 = data_1313308
data_20c1754 = data_131330c
data_20c1758 = data_1313310
sub_546840()
SetFocus(GetDlgItem(data_20c1748, 0x4f4f))
BOOL result = SetWindowTextA(data_20c1748, 0x12a5584)
HWND hWnd = data_20c1748

if (hWnd != 0)
    UpdateWindow(hWnd)
    RECT rect_2
    GetWindowRect(hWnd, &rect_2)
    int32_t cx = rect_2.right - rect_2.left
    int32_t cy = rect_2.bottom - rect_2.top
    int32_t eax_58 = GetSystemMetrics(SM_CXSCREEN)
    int32_t esi_7 = eax_58 - cx
    int32_t X_3
    
    if (eax_58 - cx s< 0)
        X_3 = neg.d(neg.d(esi_7) s>> 1)
    else
        X_3 = esi_7 s>> 1
    
    int32_t eax_59 = GetSystemMetrics(SM_CYSCREEN)
    int32_t eax_60 = eax_59 - cy
    int32_t Y
    
    if (eax_59 - cy s< 0)
        Y = neg.d(neg.d(eax_60) s>> 1)
    else
        Y = eax_60 s>> 1
    
    result = SetWindowPos(hWnd, 0xfffffffe, X_3, Y, cx, cy, SWP_SHOWWINDOW)

sub_5f02dd(eax_1 ^ &var_94)
return result
