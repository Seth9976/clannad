// 函数: sub_54bab0
// 地址: 0x54bab0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_164
int32_t eax_1 = __security_cookie ^ &var_164
data_20c21c8 = 0xff - data_131326c
data_20c21cc = 0xff - data_1313270
int32_t ecx = 0xff - data_1313278
data_20c21d0 = 0xff - data_1313274
data_20c21ec = data_13132ec
int32_t eax_6
eax_6.b = data_13132c0 != 1
data_20c21d4 = ecx
data_20c21f0 = eax_6
HWND hDlg = data_20c21c4
data_20c21f4 = data_13132f0
data_20c21f8 = data_13132f4
SendMessageA(GetDlgItem(hDlg, 0x4fae), 0x408, 1, 0xff)
SendMessageA(GetDlgItem(data_20c21c4, 0x4fae), 0x407, 1, 0)
SendMessageA(GetDlgItem(data_20c21c4, 0x4fae), 0x414, 0x10, 0)
SendMessageA(GetDlgItem(data_20c21c4, 0x4fae), 0x405, 1, data_20c21c8)
WPARAM wParam

if (data_20c21ec == 0)
    wParam = 0
else
    wParam = 1

SendDlgItemMessageA(data_20c21c4, 0x4eae, 0xf1, wParam, 0)
SendMessageA(GetDlgItem(data_20c21c4, 0x4faf), 0x408, 1, 0xff)
SendMessageA(GetDlgItem(data_20c21c4, 0x4faf), 0x407, 1, 0)
SendMessageA(GetDlgItem(data_20c21c4, 0x4faf), 0x414, 0x10, 0)
SendMessageA(GetDlgItem(data_20c21c4, 0x4faf), 0x405, 1, data_20c21cc)
WPARAM wParam_1

if (data_20c21f0 == 0)
    wParam_1 = 0
else
    wParam_1 = 1

SendDlgItemMessageA(data_20c21c4, 0x4eb9, 0xf1, wParam_1, 0)
SendMessageA(GetDlgItem(data_20c21c4, 0x4fb0), 0x408, 1, 0xff)
SendMessageA(GetDlgItem(data_20c21c4, 0x4fb0), 0x407, 1, 0)
SendMessageA(GetDlgItem(data_20c21c4, 0x4fb0), 0x414, 0x10, 0)
SendMessageA(GetDlgItem(data_20c21c4, 0x4fb0), 0x405, 1, data_20c21d0)
WPARAM wParam_2

if (data_20c21f4 == 0)
    wParam_2 = 0
else
    wParam_2 = 1

SendDlgItemMessageA(data_20c21c4, 0x4ec4, 0xf1, wParam_2, 0)
SendMessageA(GetDlgItem(data_20c21c4, 0x4fb1), 0x408, 1, 0xff)
SendMessageA(GetDlgItem(data_20c21c4, 0x4fb1), 0x407, 1, 0)
SendMessageA(GetDlgItem(data_20c21c4, 0x4fb1), 0x414, 0x10, 0)
SendMessageA(GetDlgItem(data_20c21c4, 0x4fb1), 0x405, 1, data_20c21d4)
WPARAM wParam_3

if (data_20c21f8 == 0)
    wParam_3 = 0
else
    wParam_3 = 1

SendDlgItemMessageA(data_20c21c4, 0x4ec8, 0xf1, wParam_3, 0)
int32_t eax_25 = data_12a2938
int32_t xmm1_1[0x4] = __paddd_xmmdq_memdq(data_624960, data_624840)
int32_t xmm0_1[0x4] = _mm_add_epi32(data_6249e0, xmm1_1)
RECT rect_1
rect_1.left = eax_25
rect_1.top = data_12a293c
int32_t eax_27 = data_12a2940
int32_t var_100[0x4] = xmm0_1
rect_1.right = eax_27
rect_1.bottom = data_12a2944
int128_t var_e0 = data_6249d0
HWND hWnd = data_20c21c4
int32_t xmm0_4[0x4] = _mm_add_epi32(data_6249f0, xmm1_1)
int32_t var_f0[0x4] = xmm0_4
RECT rect
GetWindowRect(hWnd, &rect)
RECT rect_2
GetClientRect(data_20c21c4, &rect_2)
int32_t nIDDlgItem = _mm_bsrli_si128(xmm0_4, 0xc)
RECT rect_4
GetWindowRect(GetDlgItem(data_20c21c4, nIDDlgItem), &rect_4)
int32_t eax_33 = rect.right - rect_4.right + 1
int32_t eax_38
int32_t edx
edx:eax_38 = sx.q(rect_2.left - rect_2.right - rect.left + rect.right)
int32_t eax_40 = (eax_38 - edx) s>> 1
int32_t eax_41 = GetSystemMetrics(SM_CYCAPTION)
int32_t eax_43
int32_t edx_1
edx_1:eax_43 = sx.q(rect_2.top - rect_2.bottom - rect.top + rect.bottom - eax_41)
int32_t edi_2 = ((eax_43 - edx_1) s>> 1) + GetSystemMetrics(SM_CYCAPTION)
rect.left += eax_40
int32_t i = 0
rect.top += edi_2
int32_t ebx = 0
int32_t i_2 = 0
void var_d0
void var_cc
void var_c8
void var_c4
void var_90
void var_8c
void var_88
void var_84
void var_50

do
    void* lpRect = &var_50 + ebx
    GetWindowRect(GetDlgItem(data_20c21c4, *(&var_100 + i)), lpRect)
    int32_t left = rect.left
    *lpRect -= left
    *(lpRect + 8) -= left
    int32_t top = rect.top
    *(lpRect + 4) -= top
    *(lpRect + 0xc) -= top
    void* lpRect_1 = &var_90 + ebx
    GetWindowRect(GetDlgItem(data_20c21c4, *(&var_e0 + i_2)), lpRect_1)
    int32_t left_1 = rect.left
    *lpRect_1 -= left_1
    *(&var_88 + ebx) -= left_1
    void* lpRect_2 = &var_d0 + ebx
    int32_t top_1 = rect.top
    *(&var_8c + ebx) -= top_1
    *(&var_84 + ebx) -= top_1
    GetWindowRect(GetDlgItem(data_20c21c4, *(&var_f0 + i_2)), lpRect_2)
    int32_t left_2 = rect.left
    *(&var_c8 + ebx) -= left_2
    *lpRect_2 -= left_2
    int32_t top_2 = rect.top
    *(&var_cc + ebx) -= top_2
    *(&var_c4 + ebx) -= top_2
    ebx += 0x10
    i = i_2 + 4
    i_2 = i
while (i s< 0x10)

int32_t i_1 = 0
int32_t var_160 = 0
int32_t ebx_1 = 0
int32_t edx_3

do
    if (*(&rect_1 + i_1) == 0)
        ShowWindow(GetDlgItem(data_20c21c4, *(&var_100 + i_1)), SW_HIDE)
        ShowWindow(GetDlgItem(data_20c21c4, *(&var_e0 + i_1)), SW_HIDE)
        ShowWindow(GetDlgItem(data_20c21c4, *(&var_f0 + i_1)), SW_HIDE)
        edx_3 = var_160
    else
        void var_4c
        int32_t Y_1 = *(&var_4c + ebx_1)
        int32_t X = *(&var_50 + ebx_1)
        void var_48
        void var_44
        MoveWindow(GetDlgItem(data_20c21c4, *(&var_100 + i_1)), X, Y_1, *(&var_48 + ebx_1) - X + 1, 
            *(&var_44 + ebx_1) - Y_1 + 1, 1)
        int32_t Y_2 = *(&var_8c + ebx_1)
        int32_t X_1 = *(&var_90 + ebx_1)
        MoveWindow(GetDlgItem(data_20c21c4, *(&var_e0 + i_1)), X_1, Y_2, 
            *(&var_88 + ebx_1) - X_1 + 1, *(&var_84 + ebx_1) - Y_2 + 1, 1)
        int32_t Y_3 = *(&var_cc + ebx_1)
        int32_t X_2 = *(&var_d0 + ebx_1)
        MoveWindow(GetDlgItem(data_20c21c4, *(&var_f0 + i_1)), X_2, Y_3, 
            *(&var_c8 + ebx_1) - X_2 + 1, *(&var_c4 + ebx_1) - Y_3 + 1, 1)
        edx_3 = var_160 + 1
        ebx_1 += 0x10
        var_160 = edx_3
    
    i_1 += 4
while (i_1 s< 0x10)

if (edx_3 s< 4)
    int32_t top_3 = rect.top
    SetWindowPos(data_20c21c4, nullptr, rect.left, top_3, 
        *(&var_e0:8 + edx_3 * 0x10) + eax_40 + eax_33, rect.bottom - top_3 + edi_2, 0)

GetWindowRect(data_20c21c4, &rect)
GetClientRect(data_20c21c4, &rect_2)
int32_t eax_87
int32_t edx_5
edx_5:eax_87 = sx.q(rect_2.left - rect_2.right - rect.left + rect.right)
int32_t eax_90 = GetSystemMetrics(SM_CYCAPTION)
int32_t eax_92
int32_t edx_6
edx_6:eax_92 = sx.q(rect_2.top - rect_2.bottom - rect.top + rect.bottom - eax_90)
int32_t ebx_4 = ((eax_92 - edx_6) s>> 1) + GetSystemMetrics(SM_CYCAPTION)
RECT rect_3
GetWindowRect(GetDlgItem(data_20c21c4, 0x4f4f), &rect_3)
int32_t top_4 = rect_3.top
int32_t eax_102
int32_t edx_7
edx_7:eax_102 = sx.q(rect.right - rect.left + 1)
int32_t eax_105
int32_t edx_8
edx_8:eax_105 = sx.q(rect_3.right - rect_3.left + 1)
MoveWindow(GetDlgItem(data_20c21c4, 0x4f4f), 
    ((eax_102 - edx_7) s>> 1) - ((eax_105 - edx_8) s>> 1) - ((eax_87 - edx_5) s>> 1) - 1, 
    top_4 - rect.top - ebx_4, rect_3.right - rect_3.left + 1, rect_3.bottom - top_4 + 1, 1)
SetFocus(GetDlgItem(data_20c21c4, 0x4f4f))
BOOL result = SetWindowTextA(data_20c21c4, 0x12a3490)
HWND hWnd_1 = data_20c21c4

if (hWnd_1 != 0)
    UpdateWindow(hWnd_1)
    GetWindowRect(hWnd_1, &rect_1)
    int32_t cx = rect_1.right - rect_1.left
    int32_t cy = rect_1.bottom - rect_1.top
    int32_t eax_110 = GetSystemMetrics(SM_CXSCREEN)
    int32_t esi_2 = eax_110 - cx
    int32_t X_3
    
    if (eax_110 - cx s< 0)
        X_3 = neg.d(neg.d(esi_2) s>> 1)
    else
        X_3 = esi_2 s>> 1
    
    int32_t eax_111 = GetSystemMetrics(SM_CYSCREEN)
    int32_t eax_112 = eax_111 - cy
    int32_t Y
    
    if (eax_111 - cy s< 0)
        Y = neg.d(neg.d(eax_112) s>> 1)
    else
        Y = eax_112 s>> 1
    
    result = SetWindowPos(hWnd_1, 0xfffffffe, X_3, Y, cx, cy, SWP_SHOWWINDOW)

sub_5f02dd(eax_1 ^ &var_164)
return result
