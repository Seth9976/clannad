// 函数: sub_54ca50
// 地址: 0x54ca50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
RECT rect
GetClientRect(data_20c2220, &rect)
int32_t eax_5
int32_t edx
edx:eax_5 = sx.q(rect.right - rect.left - 0x12e)
RECT rect_2
GetWindowRect(GetDlgItem(data_20c2220, 0x4eee), &rect_2)
POINT point
point.x = rect_2.left
point.y = rect_2.top
ScreenToClient(data_20c2220, &point)
SetWindowPos(GetDlgItem(data_20c2220, 0x4eee), nullptr, (eax_5 - edx) s>> 1, point.y, 0x12e, 0x66, 
    SWP_NOZORDER)
GetWindowRect(GetDlgItem(data_20c2220, 0x4eee), &rect_2)
int32_t eax_14 = rect_2.bottom - rect_2.top - 2
int32_t ecx_2 = rect_2.right - rect_2.left - 2
data_20c2238 = eax_14
data_20c2234 = ecx_2
data_20c2224 = 0
data_20c2228 = 0
int32_t eax_16 = (eax_14 * ecx_2) << 2
sub_4d6960(eax_16, &data_20c2228, &data_20c2224, eax_16, "AVG_WINDOWBACK_STATUS_TMP")
int32_t eax_18 = data_20c2238 * data_20c2234
data_20c222c = 0
data_20c2230 = 0
int32_t eax_19 = eax_18 << 2
int32_t ecx_3 =
    sub_4d6960(eax_19, &data_20c2230, &data_20c222c, eax_19, "AVG_WINDOWBACK_STATUS_TMP")
int32_t cx

if (data_20c2214 == 0)
    int32_t var_40 = 0
    cx = 0
    int32_t* var_50
    void* var_44
    int32_t ecx_7 = sub_48ad10(&var_44, &var_40, &cx, &var_44, &var_50, 0, 0)
    
    if (var_40 == 0)
        int32_t i = 0
        
        if (data_20c2238 s> 0)
            void* ecx_11 = data_20c2234
            
            do
                void* ebx_3 = nullptr
                int32_t esi_2 = 0
                int32_t eax_42 = divs.dp.d(0x10000, ecx_11)
                var_44 = eax_42
                
                if (ecx_11 s> 0)
                    do
                        int32_t var_60_6 = 0
                        int32_t var_64_7 = 0xff
                        int32_t var_68_4 = 0
                        int32_t var_6c_4 = 0
                        int32_t var_90_1 = 0
                        int32_t var_94_1 = 0
                        int32_t var_98_1 = 0
                        int32_t var_9c_1 = 0
                        int32_t ecx_13 = sub_586580(eax_42, ecx_11, data_20c2228, data_20c2238, 
                            esi_2, i, esi_2, i, 0, 0, 0, 0xffffffff, 0xff, 0xffffffff, 0xffffffff, 
                            ecx_11, 0, 0, 0, 0)
                        int32_t eax_44 = ebx_3 s>> 8
                        int32_t var_60_7 = 0
                        int32_t var_64_8 = eax_44
                        int32_t var_68_5 = 0
                        int32_t var_6c_5 = 0
                        int32_t var_90_2 = 0
                        int32_t var_94_2 = 0
                        int32_t var_98_2 = 0
                        int32_t var_9c_2 = 0
                        eax_42 = sub_586580(eax_44, data_20c2234, data_20c2228, data_20c2238, 
                            esi_2, i, esi_2, i, 0xff, 0xff, 0xff, 0xffffffff, 0xff, 0xffffffff, 
                            0xffffffff, ecx_13, 0, 0, 0, 0)
                        ebx_3 += var_44
                        esi_2 += 1
                        ecx_11 = data_20c2234
                    while (esi_2 s< ecx_11)
                
                i += 1
            while (i s< data_20c2238)
    else
        int32_t var_60_5 = 0
        int32_t var_64_6 = 0xff
        int32_t var_68_3 = 0
        int32_t var_6c_3 = 0
        int32_t var_70_3 = 0
        void* ebx_2 = data_20c2238
        int32_t* edi_1 = var_50
        void* ecx_8 = var_44
        int32_t eax_33
        int32_t edx_5
        edx_5:eax_33 = sx.q(ebx_2 - edi_1)
        int32_t eax_38
        int32_t edx_6
        edx_6:eax_38 = sx.q(data_20c2234 - ecx_8)
        int32_t eax_40 = (eax_38 - edx_6) s>> 1
        sub_584980(eax_40, data_20c2234, data_20c2228, ebx_2, var_40, ecx_8, edi_1, 0, 0, 0, 
            eax_40, (eax_33 - edx_5) s>> 1, 0xffffffff, 0xff, 0xffffffff, 0xffffffff, ecx_7, 0, 0, 
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr)
        sub_4d6c40(&cx, &var_40)
else
    int32_t var_60_4 = 0
    int32_t var_64_5 = 0xff
    int32_t var_68_2 = 0
    int32_t var_6c_2 = 0
    int32_t var_70_1 = 0
    void* ebx_1 = data_20c2238
    void* edi = data_20c221c
    void* ecx_4 = data_20c2218
    int32_t eax_22
    int32_t edx_1
    edx_1:eax_22 = sx.q(ebx_1 - edi)
    int32_t eax_27
    int32_t edx_2
    edx_2:eax_27 = sx.q(data_20c2234 - ecx_4)
    int32_t eax_29 = (eax_27 - edx_2) s>> 1
    sub_584980(eax_29, data_20c2234, data_20c2228, ebx_1, data_20c2214, ecx_4, edi, 0, 0, 0, 
        eax_29, (eax_22 - edx_1) s>> 1, 0xffffffff, 0xff, 0xffffffff, 0xffffffff, ecx_3, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr)

SendMessageA(GetDlgItem(data_20c2220, 0x4fae), 0x408, 1, 0xff)
SendMessageA(GetDlgItem(data_20c2220, 0x4fae), 0x407, 1, 0)
SendMessageA(GetDlgItem(data_20c2220, 0x4fae), 0x414, 0x10, 0)
SendMessageA(GetDlgItem(data_20c2220, 0x4fae), 0x405, 1, data_1313294)
SendMessageA(GetDlgItem(data_20c2220, 0x4faf), 0x408, 1, 0xff)
SendMessageA(GetDlgItem(data_20c2220, 0x4faf), 0x407, 1, 0)
SendMessageA(GetDlgItem(data_20c2220, 0x4faf), 0x414, 0x10, 0)
SendMessageA(GetDlgItem(data_20c2220, 0x4faf), 0x405, 1, data_1313298)
SendMessageA(GetDlgItem(data_20c2220, 0x4fb0), 0x408, 1, 0xff)
SendMessageA(GetDlgItem(data_20c2220, 0x4fb0), 0x407, 1, 0)
SendMessageA(GetDlgItem(data_20c2220, 0x4fb0), 0x414, 0x10, 0)
SendMessageA(GetDlgItem(data_20c2220, 0x4fb0), 0x405, 1, data_131329c)
SendMessageA(GetDlgItem(data_20c2220, 0x4fb1), 0x408, 1, 0xff)
SendMessageA(GetDlgItem(data_20c2220, 0x4fb1), 0x407, 1, 0)
SendMessageA(GetDlgItem(data_20c2220, 0x4fb1), 0x414, 0x10, 0)
SendMessageA(GetDlgItem(data_20c2220, 0x4fb1), 0x405, 1, data_13132a0)
WPARAM wParam

if (data_13132a4 == 0)
    wParam = 0
else
    wParam = 1

SendDlgItemMessageA(data_20c2220, 0x4eae, 0xf1, wParam, 0)
SetFocus(GetDlgItem(data_20c2220, 0x4f4f))
BOOL result = SetWindowTextA(data_20c2220, 0x12a32d4)
HWND hWnd = data_20c2220

if (hWnd != 0)
    UpdateWindow(hWnd)
    RECT rect_1
    GetWindowRect(hWnd, &rect_1)
    int32_t cy = rect_1.bottom - rect_1.top
    cx = rect_1.right - rect_1.left
    int32_t eax_64 = GetSystemMetrics(SM_CXSCREEN)
    int32_t esi_4 = eax_64 - cx
    int32_t X
    
    if (eax_64 - cx s< 0)
        X = neg.d(neg.d(esi_4) s>> 1)
    else
        X = esi_4 s>> 1
    
    int32_t eax_65 = GetSystemMetrics(SM_CYSCREEN)
    int32_t eax_66 = eax_65 - cy
    int32_t Y
    
    if (eax_65 - cy s< 0)
        Y = neg.d(neg.d(eax_66) s>> 1)
    else
        Y = eax_66 s>> 1
    
    result = SetWindowPos(hWnd, 0xfffffffe, X, Y, cx, cy, SWP_SHOWWINDOW)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
