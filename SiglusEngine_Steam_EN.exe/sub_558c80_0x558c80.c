// 函数: sub_558c80
// 地址: 0x558c80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = data_1c054ec

if (hWnd != 0)
    ShowWindow(hWnd, SW_HIDE)
    InvalidateRect(data_1c054ec, nullptr, 1)

data_1af4e70 = 1
int32_t i

do
    i = ShowCursor(1)
while (i s<= 0)
int32_t eax = data_1313318
int32_t edx = 0
int32_t edi = data_1313314
int32_t esi = 0xffffffff
data_1af17a0 = 1
void* i_1 = 1
data_1af17cc = 1
data_20c3880 = edi
data_20c3884 = eax
data_20c36d0 = 0
data_20c36d4 = 0
data_20c36d8 = 0

do
    int32_t eax_2
    
    if (i_1 u> 0x270f)
        eax_2 = 0xffffffff
    else
        uint32_t eax_1 = zx.d(*(i_1 + 0x1af19e0))
        
        if (eax_1 u> 3)
            eax_2 = 0
        else
            switch (eax_1)
                case 0
                    if (data_108fab0 == 0)
                        eax_2 = 0
                    else if (data_1b8be88 != 0)
                        int32_t eax_3 = data_1b8be84
                        
                        if (*(eax_3 + (i_1 << 3)) == 0 || *(eax_3 + (i_1 << 3) + 4) == 0)
                            eax_2 = 0
                        else
                            eax_2 = 2
                    else
                        eax_2 = 0
                case 1, 2
                    eax_2 = 1
                case 3
                    eax_2 = 3
    
    if (eax_2 - 1 u<= 2)
        if (edi == i_1)
            esi = edx
        
        edx += 1
    
    i_1 += 1
while (i_1 s< 0x2710)

data_20c36d8 = edx

if (edx s<= 0)
    return 0

int32_t eax_5 = edx << 2
sub_4d6960(eax_5, &data_20c36d4, &data_20c36d0, eax_5, "SEEN_STATUS")
void** edx_1 = data_20c36d4

for (void* i_2 = 1; i_2 s< 0x2710; i_2 += 1)
    int32_t eax_7
    
    if (i_2 u> 0x270f)
        eax_7 = 0xffffffff
    else
        uint32_t eax_6 = zx.d(*(i_2 + 0x1af19e0))
        
        if (eax_6 u> 3)
            eax_7 = 0
        else
            switch (eax_6)
                case 0
                    if (data_108fab0 == 0)
                        eax_7 = 0
                    else if (data_1b8be88 != 0)
                        int32_t eax_8 = data_1b8be84
                        
                        if (*(eax_8 + (i_2 << 3)) == 0 || *(eax_8 + (i_2 << 3) + 4) == 0)
                            eax_7 = 0
                        else
                            eax_7 = 2
                    else
                        eax_7 = 0
                case 1, 2
                    eax_7 = 1
                case 3
                    eax_7 = 3
    
    if (eax_7 - 1 u<= 2)
        *edx_1 = i_2
        edx_1 = &edx_1[1]

if (esi != 0xffffffff)
    data_20c3880 = esi
else
    data_20c3880 = 0
    data_20c3884 = esi

DialogBoxParamA(data_134cebc, 0x12f, data_7027bc, sub_558920, 0)
HGLOBAL hMem = data_20c36d0

if (hMem != 0)
    int32_t esi_1 = data_1af413c
    
    if (esi_1 == 0)
        goto label_558eb2
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_20c36d0 == 0)
        goto label_558ed3
    
    if (sub_4d6b80(&data_20c36d0) != 0)
        hMem = data_20c36d0
    label_558eb2:
        
        if (hMem == 0)
            goto label_558ed3
        
        GlobalUnlock(hMem)
        GlobalFree(data_20c36d0)
        data_20c36d0 = 0
    label_558ed3:
        data_20c36d4 = 0
        
        if (esi_1 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_20c36d4 = hMem

int32_t result = data_20c387c

if (result != 1)
    return result

data_1313314 = data_20c3880
data_1313318 = data_20c3884
return result
