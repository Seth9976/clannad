// 函数: sub_5534e0
// 地址: 0x5534e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4_3 = ebp
__chkstk(0x1030)
void var_8
int32_t eax_1 = __security_cookie ^ &var_8
data_13191b4 = 0
RECT rect
GetWindowRect(data_20c2b5c, &rect)
int32_t left = rect.left
int32_t top = rect.top
data_13191c0 = rect.right - left
data_13191b8 = left
data_13191bc = top
data_13191c4 = rect.bottom - top
HWND hWnd = GetDlgItem(data_20c2b5c, 0x4f32)
data_13191c8 = SendMessageA(hWnd, 0x18e, 0, 0)
LRESULT eax_7 = SendMessageA(hWnd, 0x188, 0, 0)
HWND hDlg = data_20c2b5c
data_13191cc = eax_7
HWND hWnd_1 = GetDlgItem(hDlg, 0x4f33)
data_13191d0 = SendMessageA(hWnd_1, 0x18e, 0, 0)
LRESULT eax_9 = SendMessageA(hWnd_1, 0x188, 0, 0)
HWND hDlg_1 = data_20c2b5c
data_13191d4 = eax_9
data_13191d8 = SendMessageA(GetDlgItem(hDlg_1, 0x4f34), 0x1027, 0, 0)
WPARAM eax_12 = sub_4c1810(hDlg_1, 0x4f34)
int32_t edx = data_20c2cac
data_13191dc = eax_12
int32_t eax_14 = data_63ecb0 << 2
sub_4d1c30(eax_14, edx, &data_704898, eax_14)
int32_t eax_16 = data_63ecb4 << 2
sub_4d1c30(eax_16, data_20c2cb4, &data_7067d8, eax_16)
int32_t eax_18 = data_63ecb8 << 2
sub_4d1c30(eax_18, data_20c2cbc, &data_708718, eax_18)
int32_t eax_20 = data_63ecbc << 2
sub_4d1c30(eax_20, data_20c2cc4, &data_70a658, eax_20)
int32_t eax_22 = data_63ecc0 << 2
sub_4d1c30(eax_22, data_20c2ccc, &data_70c598, eax_22)
int32_t eax_24 = data_63ecc4 << 2
sub_4d1c30(eax_24, data_20c2cd4, &data_70e4d8, eax_24)
int32_t eax_26 = data_63ecc8 << 2
sub_4d1c30(eax_26, data_20c2cdc, &data_13262d0, eax_26)
int32_t eax_28 = data_63ed14 << 2
sub_4d1c30(eax_28, data_20c2cfc, &data_1328210, eax_28)
int32_t eax_29 = data_63eccc

if (eax_29 s> 0)
    int32_t eax_30 = eax_29 << 2
    sub_4d1c30(eax_30, data_20c2ce4, data_702fe0, eax_30)

int32_t eax_31 = data_63ecd0

if (eax_31 s> 0)
    int32_t eax_32 = eax_31 << 2
    sub_4d1c30(eax_32, data_20c2cec, data_702fd4, eax_32)

int32_t eax_33 = data_63ecd4

if (eax_33 s> 0)
    int32_t eax_34 = eax_33 << 2
    sub_4d1c30(eax_34, data_20c2cf4, data_702fc8, eax_34)

int32_t i = 0
int32_t i_14 = 0
int32_t* i_16
void* j_10

if (data_63ece0 s> 0)
    int32_t* i_26 = data_20c2d04 + 4
    i_16 = i_26
    
    do
        char* edi_1 = *i_26
        
        if (i s>= 0 && i s< data_63ece0)
            sub_4d6c40((i << 2) + &data_1390760, (i << 2) + &data_1353040)
            
            if (edi_1 == 0 || *edi_1 == 0)
                i = i_14
                i_26 = i_16
            else
                uint32_t eax_37 = sub_4cfc80(edi_1)
                sub_4d6960(eax_37, (i << 2) + &data_1353040, (i << 2) + &data_1390760, eax_37, 
                    "AVG_M")
                sub_4d1c30((i << 2) + &data_1353040, edi_1, *((i << 2) + &data_1353040), eax_37)
                
                if (data_702fc0 == 0)
                    i = i_14
                    i_26 = i_16
                else
                    void* j_5 = data_63ece0
                    j_10 = j_5
                    
                    if (j_5 s<= 0)
                        i = i_14
                        i_26 = i_16
                    else
                        int32_t esi_3 = 0
                        int32_t edi_2 = 0
                        void* j
                        
                        do
                            if (*(edi_2 + &data_1390760) == 0)
                                esi_3 += 1
                            else
                                esi_3 += sub_4cfc80(*(edi_2 + &data_1353040))
                                j_5 = j_10
                            
                            edi_2 += 4
                            j = j_5
                            j_5 -= 1
                            j_10 = j_5
                        while (j != 1)
                        
                        if (esi_3 s< 0x2710)
                            i = i_14
                            i_26 = i_16
                        else
                            int32_t edi_3 = data_1af173c
                            
                            if (edi_3 s< 8)
                                int32_t var_14_12 = 0x2710
                                char text_1[0x400]
                                sub_4c84d0(&text_1, 0x61b9e4)
                                
                                if (edi_3 s< 4)
                                    MessageBoxA(data_7027bc, &text_1, 0x61ba34, MB_OK)
                                
                                int32_t var_14_13 = 0x2710
                                sub_4c84d0(&data_7027c0, &data_61bad4)
                                int32_t var_14_14 = esi_3
                                sub_4c84d0(&text_1, &data_61bb04)
                                
                                if (data_702fc0 != 0)
                                    sub_55ef70(&text_1, data_72d6ac, data_719b6c, &data_7027c0, 
                                        &text_1)
                                    sub_55f1e0(&text_1, data_72d6ac, data_719b6c, &data_7027c0, 
                                        &text_1)
                                    sub_55f390(&text_1, data_72d6ac, data_719b6c, &data_7027c0, 
                                        &text_1)
                                    sub_4a1e40(3)
                            
                        label_5539f3:
                            i = i_14
                            i_26 = i_16
                            data_1af173c += 1
        else if (data_702fc0 != 0)
            int32_t edi_4 = data_1af173c
            
            if (edi_4 s< 8)
                int32_t i_12 = i
                char text_2[0x400]
                sub_4c84d0(&text_2, "M[%$d] ")
                
                if (edi_4 s< 4)
                    MessageBoxA(data_7027bc, &text_2, 0x61b914, MB_OK)
                
                if (data_702fc0 != 0)
                    sub_55ef70(&text_2, data_72d6ac, data_719b6c, &data_61b950, &text_2)
                    sub_55f1e0(&text_2, data_72d6ac, data_719b6c, &data_61b950, &text_2)
                    sub_55f390(&text_2, data_72d6ac, data_719b6c, &data_61b950, &text_2)
                    sub_4a1e40(3)
                
                goto label_5539f3
            
            data_1af173c += 1
        
        i += 1
        i_26 = &i_26[2]
        i_16 = i_26
        i_14 = i
    while (i s< data_63ece0)

int32_t* i_1 = nullptr
i_16 = nullptr

if (data_63ecf8 s> 0)
    char** eax_47 = data_20c2d0c + 4
    char** var_4 = eax_47
    
    do
        char* edi_5 = *eax_47
        char* var_28_1
        char* var_24_3
        char (* eax_54)[0x400]
        
        if (i_1 s>= 0 && i_1 s< data_63ecf8)
            sub_4d6c40((i_1 << 2) + &data_187a5d0, (i_1 << 2) + &data_1354f80)
            
            if (edi_5 == 0 || *edi_5 == 0)
                i_1 = i_16
                eax_47 = var_4
            else
                uint32_t eax_49 = sub_4cfc80(edi_5)
                sub_4d6960(eax_49, (i_1 << 2) + &data_1354f80, (i_1 << 2) + &data_187a5d0, eax_49, 
                    "AVG_S")
                sub_4d1c30((i_1 << 2) + &data_1354f80, edi_5, *((i_1 << 2) + &data_1354f80), eax_49)
                
                if (data_702fc0 == 0)
                    i_1 = i_16
                    eax_47 = var_4
                else
                    void* j_6 = data_63ecf8
                    j_10 = j_6
                    
                    if (j_6 s<= 0)
                        i_1 = i_16
                        eax_47 = var_4
                    else
                        int32_t esi_5 = 0
                        int32_t edi_6 = 0
                        void* j_1
                        
                        do
                            if (*(edi_6 + &data_187a5d0) == 0)
                                esi_5 += 1
                            else
                                esi_5 += sub_4cfc80(*(edi_6 + &data_1354f80))
                                j_6 = j_10
                            
                            edi_6 += 4
                            j_1 = j_6
                            j_6 -= 1
                            j_10 = j_6
                        while (j_1 != 1)
                        
                        if (esi_5 s>= 0x2710)
                            int32_t edi_7 = data_1af173c
                            
                            if (edi_7 s>= 8)
                                goto label_553c9e
                            
                            int32_t var_14_17 = 0x2710
                            char text[0x400]
                            sub_4c84d0(&text, 0x61ba0c)
                            
                            if (edi_7 s< 4)
                                MessageBoxA(data_7027bc, &text, 0x61ba34, MB_OK)
                            
                            int32_t var_14_18 = 0x2710
                            sub_4c84d0(&data_7027c0, &data_61bb38)
                            int32_t var_14_19 = esi_5
                            sub_4c84d0(&text, &data_61bb04)
                            
                            if (data_702fc0 == 0)
                                goto label_553c9e
                            
                            sub_55ef70(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                            sub_55f1e0(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                            eax_54 = &text
                            var_24_3 = &text
                            var_28_1 = &data_7027c0
                            goto label_553c8c
                        
                        i_1 = i_16
                        eax_47 = var_4
        else if (data_702fc0 != 0)
            int32_t edi_8 = data_1af173c
            
            if (edi_8 s>= 8)
                data_1af173c += 1
            else
                int32_t* i_13 = i_1
                char text_3[0x404]
                sub_4c84d0(&text_3, "S[%$d] ")
                
                if (edi_8 s< 4)
                    MessageBoxA(data_7027bc, &text_3, 0x61b914, MB_OK)
                
                if (data_702fc0 == 0)
                    goto label_553c9e
                
                sub_55ef70(&text_3, data_72d6ac, data_719b6c, &data_61b950, &text_3)
                sub_55f1e0(&text_3, data_72d6ac, data_719b6c, &data_61b950, &text_3)
                eax_54 = &text_3
                var_24_3 = &text_3
                var_28_1 = &data_61b950
            label_553c8c:
                sub_55f390(eax_54, data_72d6ac, data_719b6c, var_28_1, var_24_3)
                sub_4a1e40(3)
            label_553c9e:
                i_1 = i_16
                eax_47 = var_4
                data_1af173c += 1
        i_1 += 1
        eax_47 = &eax_47[2]
        i_16 = i_1
        var_4 = eax_47
    while (i_1 s< data_63ecf8)

int32_t edi_9 = 0
char** eax_58 = data_20c2d14 + 4
void* i_2 = &data_132a150
char** var_4_1 = eax_58

do
    char* edx_28 = *eax_58
    
    if (edi_9 s< 0x2be)
        if (edx_28 != 0)
            sub_4cfdf0(eax_58, edx_28, i_2, data_108f650)
        else
            sub_4d1ba0(eax_58, 0x21, i_2, edx_28.b)
        
        eax_58 = var_4_1
    
    eax_58 = &eax_58[2]
    i_2 += 0x21
    edi_9 += 1
    var_4_1 = eax_58
while (i_2 s< 0x132fbce)

int32_t edi_10 = 0
char** eax_60 = data_20c2d1c + 4
void* i_3 = &data_710418
char** var_4_2 = eax_60

do
    char* edx_29 = *eax_60
    
    if (edi_10 s< 0x2be)
        if (edx_29 != 0)
            sub_4cfdf0(eax_60, edx_29, i_3, data_108f650)
        else
            sub_4d1ba0(eax_60, 0x21, i_3, edx_29.b)
        
        eax_60 = var_4_2
    
    eax_60 = &eax_60[2]
    i_3 += 0x21
    edi_10 += 1
    var_4_2 = eax_60
while (i_3 s< 0x715e96)

HGLOBAL hMem_19 = data_20c2ca8

if (hMem_19 != 0)
    void* eax_61 = data_1af413c
    
    if (eax_61 == 0)
        goto label_553dd0
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2ca8 == 0)
        goto label_553df2
    
    if (sub_4d6b80(&data_20c2ca8) != 0)
        hMem_19 = data_20c2ca8
    label_553dd0:
        
        if (hMem_19 == 0)
            goto label_553df2
        
        GlobalUnlock(hMem_19)
        GlobalFree(data_20c2ca8)
        data_20c2ca8 = 0
    label_553df2:
        data_20c2cac = 0
        
        if (eax_61 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_20c2cac = 0

HGLOBAL hMem = data_20c2cb0

if (hMem != 0)
    void* ecx_28 = data_1af413c
    
    if (ecx_28 == 0)
        goto label_553e5a
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2cb0 == 0)
        goto label_553e7c
    
    if (sub_4d6b80(&data_20c2cb0) != 0)
        hMem = data_20c2cb0
    label_553e5a:
        
        if (hMem == 0)
            goto label_553e7c
        
        GlobalUnlock(hMem)
        GlobalFree(data_20c2cb0)
        data_20c2cb0 = 0
    label_553e7c:
        data_20c2cb4 = 0
        
        if (ecx_28 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_20c2cb4 = hMem

HGLOBAL hMem_1 = data_20c2cb8

if (hMem_1 != 0)
    void* ecx_29 = data_1af413c
    
    if (ecx_29 == 0)
        goto label_553ee4
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2cb8 == 0)
        goto label_553f06
    
    if (sub_4d6b80(&data_20c2cb8) != 0)
        hMem_1 = data_20c2cb8
    label_553ee4:
        
        if (hMem_1 == 0)
            goto label_553f06
        
        GlobalUnlock(hMem_1)
        GlobalFree(data_20c2cb8)
        data_20c2cb8 = 0
    label_553f06:
        data_20c2cbc = 0
        
        if (ecx_29 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_20c2cbc = hMem_1

HGLOBAL hMem_2 = data_20c2cc0

if (hMem_2 != 0)
    void* ecx_30 = data_1af413c
    
    if (ecx_30 == 0)
        goto label_553f6e
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2cc0 == 0)
        goto label_553f90
    
    if (sub_4d6b80(&data_20c2cc0) != 0)
        hMem_2 = data_20c2cc0
    label_553f6e:
        
        if (hMem_2 == 0)
            goto label_553f90
        
        GlobalUnlock(hMem_2)
        GlobalFree(data_20c2cc0)
        data_20c2cc0 = 0
    label_553f90:
        data_20c2cc4 = 0
        
        if (ecx_30 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_20c2cc4 = hMem_2

HGLOBAL hMem_3 = data_20c2cc8

if (hMem_3 != 0)
    void* ecx_31 = data_1af413c
    
    if (ecx_31 == 0)
        goto label_553ff8
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2cc8 == 0)
        goto label_55401a
    
    if (sub_4d6b80(&data_20c2cc8) != 0)
        hMem_3 = data_20c2cc8
    label_553ff8:
        
        if (hMem_3 == 0)
            goto label_55401a
        
        GlobalUnlock(hMem_3)
        GlobalFree(data_20c2cc8)
        data_20c2cc8 = 0
    label_55401a:
        data_20c2ccc = 0
        
        if (ecx_31 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_20c2ccc = hMem_3

HGLOBAL hMem_4 = data_20c2cd0

if (hMem_4 != 0)
    void* ecx_32 = data_1af413c
    
    if (ecx_32 == 0)
        goto label_554082
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2cd0 == 0)
        goto label_5540a4
    
    if (sub_4d6b80(&data_20c2cd0) != 0)
        hMem_4 = data_20c2cd0
    label_554082:
        
        if (hMem_4 == 0)
            goto label_5540a4
        
        GlobalUnlock(hMem_4)
        GlobalFree(data_20c2cd0)
        data_20c2cd0 = 0
    label_5540a4:
        data_20c2cd4 = 0
        
        if (ecx_32 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_20c2cd4 = hMem_4

HGLOBAL hMem_5 = data_20c2cd8

if (hMem_5 != 0)
    void* ecx_33 = data_1af413c
    
    if (ecx_33 == 0)
        goto label_55410c
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2cd8 == 0)
        goto label_55412e
    
    if (sub_4d6b80(&data_20c2cd8) != 0)
        hMem_5 = data_20c2cd8
    label_55410c:
        
        if (hMem_5 == 0)
            goto label_55412e
        
        GlobalUnlock(hMem_5)
        GlobalFree(data_20c2cd8)
        data_20c2cd8 = 0
    label_55412e:
        data_20c2cdc = 0
        
        if (ecx_33 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_20c2cdc = hMem_5

HGLOBAL hMem_6 = data_20c2ce0

if (hMem_6 != 0)
    void* ecx_34 = data_1af413c
    
    if (ecx_34 == 0)
        goto label_554196
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2ce0 == 0)
        goto label_5541b8
    
    if (sub_4d6b80(&data_20c2ce0) != 0)
        hMem_6 = data_20c2ce0
    label_554196:
        
        if (hMem_6 == 0)
            goto label_5541b8
        
        GlobalUnlock(hMem_6)
        GlobalFree(data_20c2ce0)
        data_20c2ce0 = 0
    label_5541b8:
        data_20c2ce4 = 0
        
        if (ecx_34 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_20c2ce4 = hMem_6

HGLOBAL hMem_7 = data_20c2ce8

if (hMem_7 != 0)
    void* ecx_35 = data_1af413c
    
    if (ecx_35 == 0)
        goto label_554220
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2ce8 == 0)
        goto label_554242
    
    if (sub_4d6b80(&data_20c2ce8) != 0)
        hMem_7 = data_20c2ce8
    label_554220:
        
        if (hMem_7 == 0)
            goto label_554242
        
        GlobalUnlock(hMem_7)
        GlobalFree(data_20c2ce8)
        data_20c2ce8 = 0
    label_554242:
        data_20c2cec = 0
        
        if (ecx_35 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_20c2cec = hMem_7

HGLOBAL hMem_8 = data_20c2cf0

if (hMem_8 != 0)
    void* ecx_36 = data_1af413c
    
    if (ecx_36 == 0)
        goto label_5542aa
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2cf0 == 0)
        goto label_5542cc
    
    if (sub_4d6b80(&data_20c2cf0) != 0)
        hMem_8 = data_20c2cf0
    label_5542aa:
        
        if (hMem_8 == 0)
            goto label_5542cc
        
        GlobalUnlock(hMem_8)
        GlobalFree(data_20c2cf0)
        data_20c2cf0 = 0
    label_5542cc:
        data_20c2cf4 = 0
        
        if (ecx_36 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_20c2cf4 = hMem_8

HGLOBAL hMem_9 = data_20c2cf8

if (hMem_9 != 0)
    void* ecx_37 = data_1af413c
    
    if (ecx_37 == 0)
        goto label_554334
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2cf8 == 0)
        goto label_554356
    
    if (sub_4d6b80(&data_20c2cf8) != 0)
        hMem_9 = data_20c2cf8
    label_554334:
        
        if (hMem_9 == 0)
            goto label_554356
        
        GlobalUnlock(hMem_9)
        GlobalFree(data_20c2cf8)
        data_20c2cf8 = 0
    label_554356:
        data_20c2cfc = 0
        
        if (ecx_37 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_20c2cfc = hMem_9

HGLOBAL hMem_10 = data_20c2ca0

if (hMem_10 != 0)
    void* ecx_38 = data_1af413c
    
    if (ecx_38 == 0)
        goto label_5543be
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2ca0 == 0)
        goto label_5543e0
    
    if (sub_4d6b80(&data_20c2ca0) != 0)
        hMem_10 = data_20c2ca0
    label_5543be:
        
        if (hMem_10 == 0)
            goto label_5543e0
        
        GlobalUnlock(hMem_10)
        GlobalFree(data_20c2ca0)
        data_20c2ca0 = 0
    label_5543e0:
        data_20c2ca4 = 0
        
        if (ecx_38 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_20c2ca4 = hMem_10

int32_t* esi_6 = data_20c2d04
int32_t i_4 = 0
data_20c2c9c = 0
int32_t i_15 = 0

if (data_63ece0 s> 0)
    do
        if (*esi_6 != 0)
            void* eax_74 = data_1af413c
            
            if (eax_74 == 0)
            label_55445f:
                HGLOBAL hMem_11 = *esi_6
                
                if (hMem_11 != 0)
                    GlobalUnlock(hMem_11)
                    GlobalFree(*esi_6)
                    *esi_6 = 0
                
                goto label_55447f
            
            WaitForSingleObject(data_7027a8, 0xffffffff)
            
            if (*esi_6 == 0)
            label_55447f:
                esi_6[1] = 0
                
                if (eax_74 != 0)
                    int32_t j_7 = data_20c0500
                    int32_t ecx_40 = 0
                    int32_t* eax_76 = data_20c04fc
                    int32_t edx_30 = 0xc00000
                    data_1c04c58 = 0
                    data_1c04c60 = 0xc00000
                    
                    if (j_7 s> 0)
                        int32_t j_2
                        
                        do
                            if (*eax_76 != 0)
                                ecx_40 += 1
                                edx_30 += eax_76[1]
                            
                            eax_76 = &eax_76[5]
                            j_2 = j_7
                            j_7 -= 1
                        while (j_2 != 1)
                        int32_t eax_77 = data_1c04c54
                        data_1c04c58 = ecx_40
                        
                        if (eax_77 u< ecx_40)
                            eax_77 = ecx_40
                        
                        data_1c04c60 = edx_30
                        data_1c04c54 = eax_77
                    
                    int32_t eax_78 = data_1c04c5c
                    HANDLE hSemaphore = data_7027a8
                    
                    if (eax_78 u< edx_30)
                        eax_78 = edx_30
                    
                    data_1c04c5c = eax_78
                    ReleaseSemaphore(hSemaphore, 1, nullptr)
            else if (sub_4d6b80(esi_6) != 0)
                goto label_55445f
            
            i_4 = i_15
        else
            esi_6[1] = 0
        
        i_4 += 1
        esi_6 = &esi_6[2]
        i_15 = i_4
    while (i_4 s< data_63ece0)

HGLOBAL hMem_12 = data_20c2d00

if (hMem_12 != 0)
    int32_t esi_7 = data_1af413c
    
    if (esi_7 == 0)
        goto label_55455e
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2d00 == 0)
        goto label_55457f
    
    if (sub_4d6b80(&data_20c2d00) != 0)
        hMem_12 = data_20c2d00
    label_55455e:
        
        if (hMem_12 == 0)
            goto label_55457f
        
        GlobalUnlock(hMem_12)
        GlobalFree(data_20c2d00)
        data_20c2d00 = 0
    label_55457f:
        data_20c2d04 = 0
        
        if (esi_7 != 0)
            int32_t i_19 = data_20c0500
            int32_t ecx_41 = 0
            int32_t* eax_80 = data_20c04fc
            int32_t edx_31 = 0xc00000
            data_1c04c58 = 0
            data_1c04c60 = 0xc00000
            
            if (i_19 s> 0)
                int32_t i_5
                
                do
                    if (*eax_80 != 0)
                        ecx_41 += 1
                        edx_31 += eax_80[1]
                    
                    eax_80 = &eax_80[5]
                    i_5 = i_19
                    i_19 -= 1
                while (i_5 != 1)
                int32_t eax_81 = data_1c04c54
                data_1c04c58 = ecx_41
                
                if (eax_81 u< ecx_41)
                    eax_81 = ecx_41
                
                data_1c04c60 = edx_31
                data_1c04c54 = eax_81
            
            int32_t eax_82 = data_1c04c5c
            HANDLE hSemaphore_1 = data_7027a8
            
            if (eax_82 u< edx_31)
                eax_82 = edx_31
            
            data_1c04c5c = eax_82
            ReleaseSemaphore(hSemaphore_1, 1, nullptr)
else
    data_20c2d04 = hMem_12

int32_t* esi_8 = data_20c2d0c
j_10 = nullptr

if (data_63ecf8 s> 0)
    bool cond:17_1
    
    do
        if (*esi_8 != 0)
            void* eax_83 = data_1af413c
            
            if (eax_83 == 0)
            label_554650:
                HGLOBAL hMem_13 = *esi_8
                
                if (hMem_13 != 0)
                    GlobalUnlock(hMem_13)
                    GlobalFree(*esi_8)
                    *esi_8 = 0
                
                goto label_554670
            
            WaitForSingleObject(data_7027a8, 0xffffffff)
            
            if (*esi_8 == 0)
            label_554670:
                esi_8[1] = 0
                
                if (eax_83 != 0)
                    int32_t i_23 = data_20c0500
                    int32_t ecx_43 = 0
                    int32_t* eax_85 = data_20c04fc
                    int32_t edx_32 = 0xc00000
                    data_1c04c58 = 0
                    data_1c04c60 = 0xc00000
                    
                    if (i_23 s> 0)
                        int32_t i_6
                        
                        do
                            if (*eax_85 != 0)
                                ecx_43 += 1
                                edx_32 += eax_85[1]
                            
                            eax_85 = &eax_85[5]
                            i_6 = i_23
                            i_23 -= 1
                        while (i_6 != 1)
                        int32_t eax_86 = data_1c04c54
                        data_1c04c58 = ecx_43
                        
                        if (eax_86 u< ecx_43)
                            eax_86 = ecx_43
                        
                        data_1c04c60 = edx_32
                        data_1c04c54 = eax_86
                    
                    int32_t eax_87 = data_1c04c5c
                    HANDLE hSemaphore_2 = data_7027a8
                    
                    if (eax_87 u< edx_32)
                        eax_87 = edx_32
                    
                    data_1c04c5c = eax_87
                    ReleaseSemaphore(hSemaphore_2, 1, nullptr)
            else if (sub_4d6b80(esi_8) != 0)
                goto label_554650
        else
            esi_8[1] = 0
        
        esi_8 = &esi_8[2]
        cond:17_1 = j_10 + 1 s< data_63ecf8
        j_10 += 1
    while (cond:17_1)

HGLOBAL hMem_14 = data_20c2d08

if (hMem_14 != 0)
    int32_t esi_10 = data_1af413c
    
    if (esi_10 == 0)
        goto label_554779
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2d08 == 0)
        goto label_55479a
    
    if (sub_4d6b80(&data_20c2d08) != 0)
        hMem_14 = data_20c2d08
    label_554779:
        
        if (hMem_14 == 0)
            goto label_55479a
        
        GlobalUnlock(hMem_14)
        GlobalFree(data_20c2d08)
        data_20c2d08 = 0
    label_55479a:
        data_20c2d0c = 0
        
        if (esi_10 != 0)
            int32_t i_20 = data_20c0500
            int32_t ecx_44 = 0
            int32_t* eax_89 = data_20c04fc
            int32_t edx_33 = 0xc00000
            data_1c04c58 = 0
            data_1c04c60 = 0xc00000
            
            if (i_20 s> 0)
                int32_t i_7
                
                do
                    if (*eax_89 != 0)
                        ecx_44 += 1
                        edx_33 += eax_89[1]
                    
                    eax_89 = &eax_89[5]
                    i_7 = i_20
                    i_20 -= 1
                while (i_7 != 1)
                int32_t eax_90 = data_1c04c54
                data_1c04c58 = ecx_44
                
                if (eax_90 u< ecx_44)
                    eax_90 = ecx_44
                
                data_1c04c60 = edx_33
                data_1c04c54 = eax_90
            
            int32_t eax_91 = data_1c04c5c
            HANDLE hSemaphore_3 = data_7027a8
            
            if (eax_91 u< edx_33)
                eax_91 = edx_33
            
            data_1c04c5c = eax_91
            ReleaseSemaphore(hSemaphore_3, 1, nullptr)
else
    data_20c2d0c = hMem_14

int32_t* esi_9 = data_20c2d14
int32_t i_17 = 0x2be
int32_t i_24 = 0x2be
int32_t i_8

do
    if (*esi_9 != 0)
        void* eax_92 = data_1af413c
        
        if (eax_92 == 0)
        label_55484f:
            HGLOBAL hMem_15 = *esi_9
            
            if (hMem_15 != 0)
                GlobalUnlock(hMem_15)
                GlobalFree(*esi_9)
                *esi_9 = 0
            
            goto label_55486f
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (*esi_9 == 0)
        label_55486f:
            esi_9[1] = 0
            
            if (eax_92 != 0)
                int32_t j_8 = data_20c0500
                int32_t ecx_46 = 0
                int32_t* eax_94 = data_20c04fc
                int32_t edx_34 = 0xc00000
                data_1c04c58 = 0
                data_1c04c60 = 0xc00000
                
                if (j_8 s> 0)
                    int32_t j_3
                    
                    do
                        if (*eax_94 != 0)
                            ecx_46 += 1
                            edx_34 += eax_94[1]
                        
                        eax_94 = &eax_94[5]
                        j_3 = j_8
                        j_8 -= 1
                    while (j_3 != 1)
                    int32_t eax_95 = data_1c04c54
                    data_1c04c58 = ecx_46
                    
                    if (eax_95 u< ecx_46)
                        eax_95 = ecx_46
                    
                    data_1c04c60 = edx_34
                    data_1c04c54 = eax_95
                
                int32_t eax_96 = data_1c04c5c
                HANDLE hSemaphore_4 = data_7027a8
                
                if (eax_96 u< edx_34)
                    eax_96 = edx_34
                
                data_1c04c5c = eax_96
                ReleaseSemaphore(hSemaphore_4, 1, nullptr)
        else if (sub_4d6b80(esi_9) != 0)
            goto label_55484f
        
        i_17 = i_24
    else
        esi_9[1] = 0
    
    esi_9 = &esi_9[2]
    i_8 = i_17
    i_17 -= 1
    i_24 = i_17
while (i_8 != 1)
HGLOBAL hMem_16 = data_20c2d10

if (hMem_16 != 0)
    int32_t esi_11 = data_1af413c
    
    if (esi_11 == 0)
        goto label_554948
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2d10 == 0)
        goto label_554969
    
    if (sub_4d6b80(&data_20c2d10) != 0)
        hMem_16 = data_20c2d10
    label_554948:
        
        if (hMem_16 == 0)
            goto label_554969
        
        GlobalUnlock(hMem_16)
        GlobalFree(data_20c2d10)
        data_20c2d10 = 0
    label_554969:
        data_20c2d14 = 0
        
        if (esi_11 != 0)
            int32_t i_21 = data_20c0500
            int32_t ecx_47 = 0
            int32_t* eax_98 = data_20c04fc
            int32_t edx_35 = 0xc00000
            data_1c04c58 = 0
            data_1c04c60 = 0xc00000
            
            if (i_21 s> 0)
                int32_t i_9
                
                do
                    if (*eax_98 != 0)
                        ecx_47 += 1
                        edx_35 += eax_98[1]
                    
                    eax_98 = &eax_98[5]
                    i_9 = i_21
                    i_21 -= 1
                while (i_9 != 1)
                int32_t eax_99 = data_1c04c54
                data_1c04c58 = ecx_47
                
                if (eax_99 u< ecx_47)
                    eax_99 = ecx_47
                
                data_1c04c60 = edx_35
                data_1c04c54 = eax_99
            
            int32_t eax_100 = data_1c04c5c
            HANDLE hSemaphore_5 = data_7027a8
            
            if (eax_100 u< edx_35)
                eax_100 = edx_35
            
            data_1c04c5c = eax_100
            ReleaseSemaphore(hSemaphore_5, 1, nullptr)
else
    data_20c2d14 = hMem_16

int32_t* esi_12 = data_20c2d1c
int32_t i_18 = 0x2be
int32_t i_25 = 0x2be
int32_t i_10

do
    if (*esi_12 != 0)
        void* eax_101 = data_1af413c
        
        if (eax_101 == 0)
        label_554a34:
            HGLOBAL hMem_17 = *esi_12
            
            if (hMem_17 != 0)
                GlobalUnlock(hMem_17)
                GlobalFree(*esi_12)
                *esi_12 = 0
            
            goto label_554a54
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (*esi_12 == 0)
        label_554a54:
            esi_12[1] = 0
            
            if (eax_101 != 0)
                int32_t j_9 = data_20c0500
                int32_t ecx_49 = 0
                int32_t* eax_103 = data_20c04fc
                int32_t edx_36 = 0xc00000
                data_1c04c58 = 0
                data_1c04c60 = 0xc00000
                
                if (j_9 s> 0)
                    int32_t j_4
                    
                    do
                        if (*eax_103 != 0)
                            ecx_49 += 1
                            edx_36 += eax_103[1]
                        
                        eax_103 = &eax_103[5]
                        j_4 = j_9
                        j_9 -= 1
                    while (j_4 != 1)
                    int32_t eax_104 = data_1c04c54
                    data_1c04c58 = ecx_49
                    
                    if (eax_104 u< ecx_49)
                        eax_104 = ecx_49
                    
                    data_1c04c60 = edx_36
                    data_1c04c54 = eax_104
                
                int32_t eax_105 = data_1c04c5c
                HANDLE hSemaphore_6 = data_7027a8
                
                if (eax_105 u< edx_36)
                    eax_105 = edx_36
                
                data_1c04c5c = eax_105
                ReleaseSemaphore(hSemaphore_6, 1, nullptr)
        else if (sub_4d6b80(esi_12) != 0)
            goto label_554a34
        
        i_18 = i_25
    else
        esi_12[1] = 0
    
    esi_12 = &esi_12[2]
    i_10 = i_18
    i_18 -= 1
    i_25 = i_18
while (i_10 != 1)
HGLOBAL hMem_18 = data_20c2d18

if (hMem_18 != 0)
    int32_t esi_13 = data_1af413c
    
    if (esi_13 == 0)
        goto label_554b28
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c2d18 == 0)
        goto label_554b49
    
    if (sub_4d6b80(&data_20c2d18) != 0)
        hMem_18 = data_20c2d18
    label_554b28:
        
        if (hMem_18 == 0)
            goto label_554b49
        
        GlobalUnlock(hMem_18)
        GlobalFree(data_20c2d18)
        data_20c2d18 = 0
    label_554b49:
        data_20c2d1c = 0
        
        if (esi_13 != 0)
            int32_t i_22 = data_20c0500
            int32_t ecx_50 = 0
            int32_t* eax_107 = data_20c04fc
            int32_t edx_37 = 0xc00000
            data_1c04c58 = 0
            data_1c04c60 = 0xc00000
            
            if (i_22 s> 0)
                int32_t i_11
                
                do
                    if (*eax_107 != 0)
                        ecx_50 += 1
                        edx_37 += eax_107[1]
                    
                    eax_107 = &eax_107[5]
                    i_11 = i_22
                    i_22 -= 1
                while (i_11 != 1)
                int32_t eax_108 = data_1c04c54
                data_1c04c58 = ecx_50
                
                if (eax_108 u< ecx_50)
                    eax_108 = ecx_50
                
                data_1c04c60 = edx_37
                data_1c04c54 = eax_108
            
            int32_t eax_109 = data_1c04c5c
            HANDLE hSemaphore_7 = data_7027a8
            
            if (eax_109 u< edx_37)
                eax_109 = edx_37
            
            data_1c04c5c = eax_109
            ReleaseSemaphore(hSemaphore_7, 1, nullptr)
else
    data_20c2d1c = hMem_18

HGLOBAL eax_110 = GlobalAlloc(GHND, 0x20)
int32_t* eax_111 = GlobalLock(eax_110)
*eax_111 = 4
eax_111[1] = 0
GlobalUnlock(eax_110)
SendIMEMessageExA(GetActiveWindow(), eax_110)
GlobalFree(eax_110)
WINNLSEnableIME(nullptr, 0)
SetWindowLongA(GetDlgItem(data_20c2b5c, 0x4f34), 0xfffffffc, data_20c2d20)
SetWindowLongA(GetDlgItem(data_20c2b5c, 0x4ef6), 0xfffffffc, data_20c2d24)
BOOL result = EndDialog(data_20c2b5c, 0)
sub_5f02dd(eax_1 ^ &var_8)
return result
