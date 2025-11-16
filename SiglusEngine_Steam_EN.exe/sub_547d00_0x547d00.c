// 函数: sub_547d00
// 地址: 0x547d00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_5
int32_t eax_1 = __security_cookie ^ &i_5
RECT rect_5
GetWindowRect(data_20c17b8, &rect_5)
int32_t ebx_2 = rect_5.right - rect_5.left + 1
int32_t edi_2 = rect_5.bottom - rect_5.top + 1
RECT rect_8
GetClientRect(data_20c17b8, &rect_8)
int32_t right = rect_8.right
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(edi_2 - rect_8.bottom - GetSystemMetrics(SM_CYCAPTION))
int32_t eax_6
int32_t ecx_3
eax_6, ecx_3 = GetSystemMetrics(SM_CYCAPTION)
int32_t eax_9
int32_t edx_1
edx_1:eax_9 = sx.q(ebx_2 - right)
int32_t edx_3 = rect_5.top + ((eax_4 - edx) s>> 1) + eax_6
int32_t eax_12 = ((eax_9 - edx_1) s>> 1) + rect_5.left
int32_t i = 0
int32_t eax_13 = 0
i_5 = 0
int32_t var_808 = 0
int32_t var_710[0xc]
int32_t var_6d0
int32_t var_5d0[0x10]
void var_590
int32_t var_550
void var_54c
int32_t var_548
int32_t var_450
void var_44c
int32_t var_448
int32_t var_350
void var_34c
int32_t var_348
void var_250
void var_210
void var_1d0
void var_190
void var_150

do
    void* lpRect = &var_6d0 + eax_13
    GetWindowRect(GetDlgItem(data_20c17b8, *(i + &data_612300)), lpRect)
    int32_t edi_3 = *(lpRect + 8)
    int32_t edx_4 = *lpRect
    int32_t ecx_5 = *(lpRect + 4)
    *(&var_590 + i) = edi_3 - edx_4 + 1
    int32_t esi_4 = *(lpRect + 0xc)
    *(&var_210 + i_5) = esi_4 - ecx_5 + 1
    *(lpRect + 0xc) = esi_4 - edx_3
    int32_t i_13 = i_5
    *lpRect = edx_4 - eax_12
    *(lpRect + 8) = edi_3 - eax_12
    *(lpRect + 4) = ecx_5 - edx_3
    void* lpRect_1 = &var_450 + var_808
    GetWindowRect(GetDlgItem(data_20c17b8, *(i_13 + &data_6122c0)), lpRect_1)
    int32_t edx_6 = *lpRect_1
    int32_t i_10 = i_5
    int32_t edi_5 = *(&var_448 + var_808)
    *(&var_710 + i_13) = edi_5 - edx_6 + 1
    void var_444
    int32_t esi_6 = *(&var_444 + var_808)
    int32_t ecx_8 = *(&var_44c + var_808)
    *(&var_190 + i_10) = esi_6 - ecx_8 + 1
    *(&var_444 + var_808) = esi_6 - edx_3
    int32_t i_14 = i_5
    *lpRect_1 = edx_6 - eax_12
    void* lpRect_2 = &var_550 + var_808
    *(&var_448 + var_808) = edi_5 - eax_12
    int32_t nIDDlgItem = *(i_14 + &data_612280)
    *(&var_44c + var_808) = ecx_8 - edx_3
    GetWindowRect(GetDlgItem(data_20c17b8, nIDDlgItem), lpRect_2)
    int32_t edx_8 = *lpRect_2
    int32_t edi_7 = *(&var_548 + var_808)
    int32_t i_11 = i_5
    *(&var_5d0 + i_14) = edi_7 - edx_8 + 1
    void var_544
    int32_t esi_8 = *(&var_544 + var_808)
    int32_t ecx_11 = *(&var_54c + var_808)
    *(&var_150 + i_11) = esi_8 - ecx_11 + 1
    *(&var_544 + var_808) = esi_8 - edx_3
    int32_t i_15 = i_5
    *lpRect_2 = edx_8 - eax_12
    void* lpRect_3 = &var_350 + var_808
    *(&var_548 + var_808) = edi_7 - eax_12
    int32_t nIDDlgItem_1 = *(i_15 + &data_612240)
    *(&var_54c + var_808) = ecx_11 - edx_3
    GetWindowRect(GetDlgItem(data_20c17b8, nIDDlgItem_1), lpRect_3)
    int32_t edx_10 = *lpRect_3
    int32_t i_12 = i_5
    int32_t edi_9 = *(&var_348 + var_808)
    *(&var_250 + i_15) = edi_9 - edx_10 + 1
    void var_344
    int32_t esi_10 = *(&var_344 + var_808)
    int32_t ecx_14 = *(&var_34c + var_808)
    *(&var_1d0 + i_12) = esi_10 - ecx_14 + 1
    *(&var_348 + var_808) = edi_9 - eax_12
    *(&var_34c + var_808) = ecx_14 - edx_3
    *(&var_344 + var_808) = esi_10 - edx_3
    eax_13 = var_808 + 0x10
    i = i_5 + 4
    *lpRect_3 = edx_10 - eax_12
    i_5 = i
    var_808 = eax_13
while (i s< 0x40)

RECT rect
GetWindowRect(GetDlgItem(data_20c17b8, 0x4e3b), &rect)
int32_t bottom = rect.bottom
int32_t top = rect.top
rect.left -= eax_12
rect.right -= eax_12
rect.top = top - edx_3
rect.bottom = bottom - edx_3
RECT rect_1
GetWindowRect(GetDlgItem(data_20c17b8, 0x4e20), &rect_1)
int32_t bottom_1 = rect_1.bottom
int32_t top_1 = rect_1.top
rect_1.left -= eax_12
rect_1.right -= eax_12
rect_1.top = top_1 - edx_3
rect_1.bottom = bottom_1 - edx_3
RECT rect_2
GetWindowRect(GetDlgItem(data_20c17b8, 0x4f28), &rect_2)
int32_t right_1 = rect_2.right
int32_t left = rect_2.left
int32_t top_5 = rect_2.top
int32_t bottom_2 = rect_2.bottom
rect_2.left = left - eax_12
int32_t eax_52 = top_5 - edx_3
int32_t nHeight = bottom_2 - top_5 + 1
rect_2.top = eax_52
rect_2.right = right_1 - eax_12
rect_2.bottom = bottom_2 - edx_3
RECT rect_3
GetWindowRect(GetDlgItem(data_20c17b8, 0x5019), &rect_3)
int32_t right_2 = rect_3.right
int32_t left_1 = rect_3.left
int32_t top_2 = rect_3.top
rect_3.left = left_1 - eax_12
int32_t eax_57 = top_2 - edx_3
int32_t bottom_3 = rect_3.bottom
rect_3.top = eax_57
int32_t nHeight_1 = bottom_3 - top_2 + 1
rect_3.right = right_2 - eax_12
rect_3.bottom = bottom_3 - edx_3
RECT rect_6
GetWindowRect(GetDlgItem(data_20c17b8, 0x4f4f), &rect_6)
int32_t right_3 = rect_6.right
int32_t left_2 = rect_6.left
int32_t top_3 = rect_6.top
int32_t edx_20 = right_3 - eax_12
rect_6.left = left_2 - eax_12
int32_t eax_62 = top_3 - edx_3
int32_t bottom_4 = rect_6.bottom
rect_6.top = eax_62
int32_t eax_66 = edx_20 - rect_2.left + 1
rect_6.right = edx_20
int32_t edx_22 = edx_20 - rect_3.left + 1
int32_t nHeight_3 = bottom_4 - top_3 + 1
rect_6.bottom = bottom_4 - edx_3
RECT rect_4
GetWindowRect(GetDlgItem(data_20c17b8, 0x4f3a), &rect_4)
int32_t right_4 = rect_4.right
int32_t left_3 = rect_4.left
int32_t top_4 = rect_4.top
int32_t bottom_5 = rect_4.bottom
int32_t nHeight_2 = bottom_5 - top_4 + 1
rect_4.left = left_3 - eax_12
int32_t eax_70 = top_4 - edx_3
rect_4.right = right_4 - eax_12
rect_4.top = eax_70
int32_t esi_14 = 0
rect_4.bottom = bottom_5 - edx_3
int32_t i_1 = 0
i_5 = 0
void string
int32_t i_8

do
    SetDlgItemTextA(data_20c17b8, *((esi_14 << 2) + &data_612300), i_1 + &data_20c17c8)
    int32_t var_81c_13 = i_1 + 0x20c19d8
    sub_4c84d0(&string, " %s")
    SetDlgItemTextA(data_20c17b8, *((esi_14 << 2) + &data_6122c0), &string)
    SetDlgItemTextA(data_20c17b8, *((esi_14 << 2) + &data_612280), i_1 + &data_20c1be8)
    
    if (esi_14 s>= data_20c17bc)
        ShowWindow(GetDlgItem(data_20c17b8, *((esi_14 << 2) + &data_612300)), SW_HIDE)
        ShowWindow(GetDlgItem(data_20c17b8, *((esi_14 << 2) + &data_6122c0)), SW_HIDE)
        ShowWindow(GetDlgItem(data_20c17b8, *((esi_14 << 2) + &data_612280)), SW_HIDE)
        ShowWindow(GetDlgItem(data_20c17b8, *((esi_14 << 2) + &data_612240)), SW_HIDE)
        i_8 = i_5
    else
        i_8 = i_5 + 1
        i_5 = i_8
    
    i_1 += 0x21
    esi_14 += 1
while (i_1 s< 0x210)

int32_t var_81c_16 = data_20c17c0
i_5 = i_8 - 1
sub_4c84d0(&string, 0x6200b0)
SetDlgItemTextA(data_20c17b8, 0x4f3a, &string)
int32_t esi_15 = 0
int32_t eax_82 = var_548 - var_6d0
int32_t i_6 = data_20c17bc
int32_t var_6c8
int32_t eax_84 = var_450 - var_6c8
int32_t eax_86 = var_350 - var_448
int32_t eax_88 = var_550 - var_348
int32_t i_7 = i_6
int32_t eax_93

if (i_6 s<= 0)
    eax_93 = 0xa
else
    void* edi_13 = &data_20c17c8
    int32_t i_2
    
    do
        void* edx_24 = nullptr
        void* eax_89 = edi_13
        
        if (edi_13 != 0)
            if (*edi_13 != 0)
                do
                    i_6.b = *eax_89
                    
                    if (i_6.b u< 0x80)
                        edx_24 += 1
                        eax_89 += 1
                    else if (i_6.b u< 0xa0)
                        if (i_6.b u>= 0xfe)
                            edx_24 += 1
                            eax_89 += 1
                        else
                            edx_24 += 2
                            eax_89 += 2
                    else if (i_6.b u<= 0xdf || i_6.b u>= 0xfe)
                        edx_24 += 1
                        eax_89 += 1
                    else
                        edx_24 += 2
                        eax_89 += 2
                while (*eax_89 != 0)
                
                i_6 = i_7
            
            eax_89 = edx_24 + 1
        
        int32_t eax_90
        int32_t edx_25
        edx_25:eax_90 = sx.q(eax_89)
        int32_t eax_92 = (eax_90 - edx_25) s>> 1
        
        if (esi_15 s< eax_92)
            esi_15 = eax_92
        
        edi_13 += 0x21
        i_2 = i_6
        i_6 -= 1
        i_7 = i_6
    while (i_2 != 1)
    
    if (esi_15 s> 0xb)
        eax_93 = 0
    else if (esi_15 s<= 0)
        eax_93 = 0xa
    else
        eax_93 = 0xb - esi_15

int32_t ecx_34 = data_20c17c0
int32_t edx_26

if (ecx_34 s> 0xb)
    edx_26 = 0
else if (ecx_34 s> 0)
    edx_26 = 0xb - ecx_34
else
    edx_26 = 0xa

void* eax_94 = &var_590 + (eax_93 << 2)
int32_t i_3 = 0
void* var_7d0 = eax_94
int32_t edi_14 = var_710[edx_26]
int32_t edx_27 = 0

do
    int32_t ecx_36 = *eax_94
    edx_27 += 0x10
    *(&var_590 + i_3) = ecx_36
    *(&var_710 + i_3) = edi_14
    edi_14 = var_710[edx_26]
    void var_6e0
    int32_t eax_97 = *(&var_6e0 + edx_27) + ecx_36 - 1
    *(&var_5d0 + i_3) = edi_14
    int32_t ecx_39 = eax_84 + eax_97
    void var_6d8
    *(&var_6d8 + edx_27) = eax_97
    int32_t eax_98 = *(&var_710 + i_3)
    void var_460
    *(&var_460 + edx_27) = ecx_39
    int32_t eax_99 = eax_98 + ecx_39 - 1
    int32_t ecx_42 = eax_86 + eax_99
    void var_458
    *(&var_458 + edx_27) = eax_99
    int32_t eax_100 = *(&var_250 + i_3)
    i_3 += 4
    void var_360
    *(&var_360 + edx_27) = ecx_42
    int32_t eax_102 = eax_100 - 1 + ecx_42
    void var_358
    *(&var_358 + edx_27) = eax_102
    int32_t eax_103 = eax_102 + eax_88
    void var_560
    *(&var_560 + edx_27) = eax_103
    void var_558
    *(&var_558 + edx_27) = eax_103 - 1 + edi_14
    eax_94 = var_7d0
while (i_3 s< 0x40)

int32_t esi_16 = 0
int32_t edx_29 = edx_26 * 2
int32_t nWidth = var_710[edx_26]
rect.left = (&var_450)[edx_29 * 2]
rect.right = (&var_448)[edx_29 * 2]
int32_t nWidth_1 = var_5d0[edx_26]
rect_1.left = (&var_550)[edx_29 * 2]
rect_1.right = (&var_548)[edx_29 * 2]
int32_t var_804_2 = eax_82 - (var_548 + var_6d0)
void var_6cc

for (int32_t i_4 = 0; i_4 s< 0x100; )
    MoveWindow(GetDlgItem(data_20c17b8, *(esi_16 + &data_612300)), *(&var_6d0 + i_4), 
        *(&var_6cc + i_4), *(&var_590 + esi_16), *(&var_210 + esi_16), 1)
    MoveWindow(GetDlgItem(data_20c17b8, *(esi_16 + &data_6122c0)), *(&var_450 + i_4), 
        *(&var_44c + i_4), *(&var_710 + esi_16), *(&var_190 + esi_16), 1)
    MoveWindow(GetDlgItem(data_20c17b8, *(esi_16 + &data_612280)), *(&var_550 + i_4), 
        *(&var_54c + i_4), *(&var_5d0 + esi_16), *(&var_150 + esi_16), 1)
    MoveWindow(GetDlgItem(data_20c17b8, *(esi_16 + &data_612240)), *(&var_350 + i_4), 
        *(&var_34c + i_4), *(&var_250 + esi_16), *(&var_1d0 + esi_16), 1)
    i_4 += 0x10
    esi_16 += 4

MoveWindow(GetDlgItem(data_20c17b8, 0x4e3b), rect.left, rect.top, nWidth, bottom - top + 1, 1)
MoveWindow(GetDlgItem(data_20c17b8, 0x4e20), rect_1.left, rect_1.top, nWidth_1, 
    bottom_1 - top_1 + 1, 1)
int32_t i_9 = i_5 << 4
i_5 = i_9
int32_t eax_122
int32_t edx_30
edx_30:eax_122 = sx.q(right - var_804_2 - eax_66)
int32_t X = (eax_122 - edx_30) s>> 1
int32_t var_5dc
MoveWindow(GetDlgItem(data_20c17b8, 0x4f28), X, *(&var_6cc + i_9) + eax_52 - var_5dc, 
    right_1 - left + 1, nHeight, 1)
MoveWindow(GetDlgItem(data_20c17b8, 0x5019), X - edx_22 + eax_66, 
    *(&var_6cc + i_5) + eax_57 - var_5dc, right_2 - left_1 + 1, nHeight_1, 1)
MoveWindow(GetDlgItem(data_20c17b8, 0x4f4f), X - (right_3 - left_2 + 1) + eax_66, 
    *(&var_6cc + i_5) + eax_62 - var_5dc, right_3 - left_2 + 1, nHeight_3, 1)
int32_t i_16 = i_5
MoveWindow(GetDlgItem(data_20c17b8, 0x4f3a), rect_4.left, *(&var_6cc + i_16) + eax_70 - var_5dc, 
    right_4 - left_3 + 1 - var_804_2, nHeight_2, 1)
void var_6c4
int32_t var_5d4
SetWindowPos(data_20c17b8, nullptr, rect_5.left, rect_5.top, ebx_2 - var_804_2, 
    *(&var_6c4 + i_16) - var_5d4 + edi_2, 0)
HWND result = SetFocus(GetDlgItem(data_20c17b8, 0x4f4f))
HWND hWnd = data_20c17b8

if (hWnd != 0)
    UpdateWindow(hWnd)
    RECT rect_7
    GetWindowRect(hWnd, &rect_7)
    int32_t cx = rect_7.right - rect_7.left
    int32_t cy = rect_7.bottom - rect_7.top
    int32_t eax_145 = GetSystemMetrics(SM_CXSCREEN)
    int32_t esi_21 = eax_145 - cx
    int32_t X_1
    
    if (eax_145 - cx s< 0)
        X_1 = neg.d(neg.d(esi_21) s>> 1)
    else
        X_1 = esi_21 s>> 1
    
    int32_t eax_146 = GetSystemMetrics(SM_CYSCREEN)
    int32_t eax_147 = eax_146 - cy
    int32_t Y
    
    if (eax_146 - cy s< 0)
        Y = neg.d(neg.d(eax_147) s>> 1)
    else
        Y = eax_147 s>> 1
    
    result = SetWindowPos(hWnd, 0xfffffffe, X_1, Y, cx, cy, SWP_SHOWWINDOW)

sub_5f02dd(eax_1 ^ &i_5)
return result
