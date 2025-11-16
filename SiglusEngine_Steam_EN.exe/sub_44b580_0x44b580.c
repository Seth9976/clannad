// 函数: sub_44b580
// 地址: 0x44b580
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HKEY var_8 = arg1
bool cond:0 = data_108f338 == 0x3e7
data_1af4148 = 1
bool cond:1_1

if (not(cond:0) && data_12ff384 != 2 && data_1c051d4 != 1)
    int32_t eax_1 = data_1332b60
    
    if (eax_1 != 0x280)
        if (eax_1 != 0x320)
            goto label_44b5db
        
        cond:1_1 = data_1332b64 == 0x258
    else
        cond:1_1 = data_1332b64 == 0x1e0

if (cond:0 || data_12ff384 == 2 || data_1c051d4 == 1 || not(cond:1_1))
label_44b5db:
    
    if (data_1332d90 != 0 && data_1332b88 != 0
            && RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_8) == NO_ERROR)
        RegCloseKey(var_8)
        int32_t eax_3 = data_1af40f4
        
        if (data_1333e00 != eax_3)
            sub_4d6d50(eax_3, "FullScreenWidth", &data_1332b88, eax_3)
            data_1333e00 = data_1af40f4
        
        int32_t eax_5 = data_1af40f0
        
        if (data_1333e04 != eax_5)
            sub_4d6d50(eax_5, "FullScreenHeight", &data_1332b88, eax_5)
            data_1333e04 = data_1af40f0

sub_49d030()
data_1af4254 = 1
sub_452d90(1)
HWND hWnd = data_1c054ec

if (hWnd != 0)
    SendMessageA(hWnd, 0x10, 0, 0)

sub_55a460()
sub_55eec0()
int32_t* ecx = data_1af4134

if (ecx != 0)
    int32_t* edx_1 = data_1af412c
    
    if (edx_1 != 0 && *ecx != 0 && *edx_1 != 0)
        sub_4d6c40(ecx, edx_1)

sub_4d6c40(&data_1be46e4, &data_1be46dc)
sub_44b410()
sub_4d6c40(&data_1af4138, &data_1af4134)
sub_4d6c40(&data_1af4130, &data_1af412c)
sub_41c100()
void* i = &data_1bfffd0
int32_t ebx = 0

do
    if (ebx u<= 0x1f && *i != 0)
        sub_4d6c40(i, i + 4)
        *i = 0
        *(i + 4) = 0
        *(i + 8) = 0
    
    i += 0x210
    ebx += 1
while (i s< 0x1c01cb0)

int32_t* ecx_2 = data_1af4124

if (ecx_2 != 0)
    int32_t* edx_3 = data_1af411c
    
    if (edx_3 != 0 && *ecx_2 != 0 && *edx_3 != 0)
        sub_4d6c40(ecx_2, edx_3)

int32_t* ecx_3 = data_1af4114

if (ecx_3 != 0)
    int32_t* edx_4 = data_1af410c
    
    if (edx_4 != 0 && *ecx_3 != 0 && *edx_4 != 0)
        sub_4d6c40(ecx_3, edx_4)

int32_t* ecx_4 = data_1af4104

if (ecx_4 != 0)
    int32_t* edx_5 = data_1af40fc
    
    if (edx_5 != 0 && *ecx_4 != 0 && *edx_5 != 0)
        sub_4d6c40(ecx_4, edx_5)

sub_433f10()

for (void* i_1 = nullptr; i_1 s< 0x80; i_1 += 4)
    if (*(i_1 + 0x1af41d0) != 0)
        int32_t ebx_1 = data_1af413c
        
        if (ebx_1 == 0)
        label_44b7ff:
            HGLOBAL hMem = *(i_1 + 0x1af41d0)
            
            if (hMem != 0)
                GlobalUnlock(hMem)
                GlobalFree(*(i_1 + 0x1af41d0))
                *(i_1 + 0x1af41d0) = 0
            
            *(i_1 + 0x1af4150) = 0
            
            if (ebx_1 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
        else
            WaitForSingleObject(data_7027a8, 0xffffffff)
            
            if (*(i_1 + 0x1af41d0) == 0)
                goto label_44b7ff
            
            if (sub_4d6b80(i_1 + 0x1af41d0) != 0)
                goto label_44b7ff
    else
        *(i_1 + 0x1af4150) = 0

HGLOBAL hMem_1 = data_1af4128

if (hMem_1 != 0)
    int32_t esi = data_1af413c
    
    if (esi == 0)
        goto label_44b89c
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_1af4128 == 0)
        goto label_44b8bd
    
    if (sub_4d6b80(&data_1af4128) != 0)
        hMem_1 = data_1af4128
    label_44b89c:
        
        if (hMem_1 == 0)
            goto label_44b8bd
        
        GlobalUnlock(hMem_1)
        GlobalFree(data_1af4128)
        data_1af4128 = 0
    label_44b8bd:
        data_1af4124 = 0
        
        if (esi != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_1af4124 = hMem_1

HGLOBAL hMem_2 = data_1af4120

if (hMem_2 != 0)
    int32_t esi_1 = data_1af413c
    
    if (esi_1 == 0)
        goto label_44b922
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_1af4120 == 0)
        goto label_44b943
    
    if (sub_4d6b80(&data_1af4120) != 0)
        hMem_2 = data_1af4120
    label_44b922:
        
        if (hMem_2 == 0)
            goto label_44b943
        
        GlobalUnlock(hMem_2)
        GlobalFree(data_1af4120)
        data_1af4120 = 0
    label_44b943:
        data_1af411c = 0
        
        if (esi_1 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_1af411c = hMem_2

HGLOBAL hMem_3 = data_1af4118

if (hMem_3 != 0)
    int32_t esi_2 = data_1af413c
    
    if (esi_2 == 0)
        goto label_44b9a2
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_1af4118 == 0)
        goto label_44b9c3
    
    if (sub_4d6b80(&data_1af4118) != 0)
        hMem_3 = data_1af4118
    label_44b9a2:
        
        if (hMem_3 == 0)
            goto label_44b9c3
        
        GlobalUnlock(hMem_3)
        GlobalFree(data_1af4118)
        data_1af4118 = 0
    label_44b9c3:
        data_1af4114 = 0
        
        if (esi_2 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_1af4114 = hMem_3

HGLOBAL hMem_4 = data_1af4110

if (hMem_4 != 0)
    int32_t esi_3 = data_1af413c
    
    if (esi_3 == 0)
        goto label_44ba22
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_1af4110 == 0)
        goto label_44ba43
    
    if (sub_4d6b80(&data_1af4110) != 0)
        hMem_4 = data_1af4110
    label_44ba22:
        
        if (hMem_4 == 0)
            goto label_44ba43
        
        GlobalUnlock(hMem_4)
        GlobalFree(data_1af4110)
        data_1af4110 = 0
    label_44ba43:
        data_1af410c = 0
        
        if (esi_3 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_1af410c = hMem_4

HGLOBAL hMem_5 = data_1af4108

if (hMem_5 != 0)
    int32_t esi_4 = data_1af413c
    
    if (esi_4 == 0)
        goto label_44baa2
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_1af4108 == 0)
        goto label_44bac3
    
    if (sub_4d6b80(&data_1af4108) != 0)
        hMem_5 = data_1af4108
    label_44baa2:
        
        if (hMem_5 == 0)
            goto label_44bac3
        
        GlobalUnlock(hMem_5)
        GlobalFree(data_1af4108)
        data_1af4108 = 0
    label_44bac3:
        data_1af4104 = 0
        
        if (esi_4 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_1af4104 = hMem_5

HGLOBAL hMem_6 = data_1af4100

if (hMem_6 == 0)
    data_1af40fc = hMem_6
    int32_t eax_13 = data_1af4144
    data_1332b54 = eax_13
    return eax_13

int32_t esi_5 = data_1af413c

if (esi_5 == 0)
    goto label_44bb31

WaitForSingleObject(data_7027a8, 0xffffffff)

if (data_1af4100 == 0)
    goto label_44bb52

if (sub_4d6b80(&data_1af4100) != 0)
    hMem_6 = data_1af4100
label_44bb31:
    
    if (hMem_6 == 0)
        goto label_44bb52
    
    GlobalUnlock(hMem_6)
    GlobalFree(data_1af4100)
    data_1af4100 = 0
label_44bb52:
    data_1af40fc = 0
    
    if (esi_5 != 0)
        sub_4d6500()
        ReleaseSemaphore(data_7027a8, 1, nullptr)

int32_t eax_15 = data_1af4144
data_1332b54 = eax_15
return eax_15
