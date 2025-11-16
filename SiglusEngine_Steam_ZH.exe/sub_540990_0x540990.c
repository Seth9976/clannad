// 函数: sub_540990
// 地址: 0x540990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* esi = data_bac4a0
int32_t* eax_3 = *(data_bac4a4 + 0xc)
int32_t edx = eax_3[3]
int32_t eax_4 = *eax_3
int32_t ecx = *(eax_4 + (edx << 3))
int32_t ebx = *(eax_4 + (edx << 3) + 4)
int32_t var_30 = *(esi + 8)
int32_t eax_6 = *(esi + 0xc)
int32_t var_40 = ebx
int32_t var_2c = eax_6
int32_t var_38
sub_616db0(eax_6, &var_30, &var_38, 1)
RECT rect
rect.right = var_38
int32_t var_34
rect.bottom = var_34
rect.left = 0
rect.top = 0
BOOL bMenu
bMenu.b = *esi != 0
AdjustWindowRect(&rect, 0x12ce0000, bMenu)
char* esi_1 = data_bac4a0
int32_t eax_10 = rect.bottom - rect.top
var_30 = *(esi_1 + 8)
int32_t eax_12 = *(esi_1 + 0xc)
int32_t var_2c_1 = eax_12
void var_48
int32_t* eax_13 = sub_616db0(eax_12, &var_30, &var_48, 1)
int32_t var_2c_2 = eax_13[1]

if (*eax_13 s> ecx || eax_10 s> ebx)
    ebx.b = 0
else
    ebx.b = 1

HWND hWnd = *(arg1 + 0x2f0)

if (hWnd != 0)
    BOOL eax_15
    eax_15.b = IsWindowEnabled(hWnd) != 0
    
    if (eax_15.b != ebx.b)
        EnableWindow(*(arg1 + 0x2f0), zx.d(ebx.b))
    
    esi_1 = data_bac4a0

var_30 = *(esi_1 + 8)
int32_t eax_18 = *(esi_1 + 0xc)
int32_t var_2c_3 = eax_18
sub_616db0(eax_18, &var_30, &var_38, 2)
RECT rect_1
rect_1.right = var_38
rect_1.bottom = eax_10
rect_1.left = 0
rect_1.top = 0
BOOL bMenu_1
bMenu_1.b = *esi_1 != 0
AdjustWindowRect(&rect_1, 0x12ce0000, bMenu_1)
char* esi_2 = data_bac4a0
int32_t ebx_2 = rect_1.bottom - rect_1.top
var_30 = *(esi_2 + 8)
int32_t eax_22 = *(esi_2 + 0xc)
int32_t var_2c_4 = eax_22
int32_t* eax_23 = sub_616db0(eax_22, &var_30, &var_48, 2)
int32_t var_2c_5 = eax_23[1]

if (*eax_23 s> ecx || ebx_2 s> var_40)
    ebx_2.b = 0
else
    ebx_2.b = 1

HWND hWnd_1 = *(arg1 + 0x380)

if (hWnd_1 != 0)
    BOOL eax_25
    eax_25.b = IsWindowEnabled(hWnd_1) != 0
    
    if (eax_25.b != ebx_2.b)
        EnableWindow(*(arg1 + 0x380), zx.d(ebx_2.b))
    
    esi_2 = data_bac4a0

var_30 = *(esi_2 + 8)
int32_t eax_28 = *(esi_2 + 0xc)
int32_t var_2c_6 = eax_28
sub_616db0(eax_28, &var_30, &var_38, 3)
rect.right = var_38
rect.bottom = eax_10
rect.left = 0
rect.top = 0
BOOL bMenu_2
bMenu_2.b = *esi_2 != 0
AdjustWindowRect(&rect, 0x12ce0000, bMenu_2)
char* esi_3 = data_bac4a0
int32_t ebx_4 = rect.bottom - rect.top
var_30 = *(esi_3 + 8)
int32_t eax_32 = *(esi_3 + 0xc)
int32_t var_2c_7 = eax_32
int32_t* eax_33 = sub_616db0(eax_32, &var_30, &var_48, 3)
int32_t var_2c_8 = eax_33[1]

if (*eax_33 s> ecx || ebx_4 s> var_40)
    ebx_4.b = 0
else
    ebx_4.b = 1

HWND hWnd_2 = *(arg1 + 0x410)

if (hWnd_2 != 0)
    BOOL eax_35
    eax_35.b = IsWindowEnabled(hWnd_2) != 0
    
    if (eax_35.b != ebx_4.b)
        EnableWindow(*(arg1 + 0x410), zx.d(ebx_4.b))
    
    esi_3 = data_bac4a0

var_30 = *(esi_3 + 8)
int32_t eax_38 = *(esi_3 + 0xc)
int32_t var_2c_9 = eax_38
sub_616db0(eax_38, &var_30, &var_38, 4)
rect_1.right = var_38
rect_1.bottom = eax_10
rect_1.left = 0
rect_1.top = 0
BOOL bMenu_3
bMenu_3.b = *esi_3 != 0
AdjustWindowRect(&rect_1, 0x12ce0000, bMenu_3)
void* ecx_11 = data_bac4a0
int32_t esi_5 = rect_1.bottom - rect_1.top
var_30 = *(ecx_11 + 8)
int32_t eax_42 = *(ecx_11 + 0xc)
int32_t var_2c_10 = eax_42
int32_t* eax_43 = sub_616db0(eax_42, &var_30, &var_48, 4)
int32_t var_2c_11 = eax_43[1]

if (*eax_43 s> ecx || esi_5 s> var_40)
    ebx_4.b = 0
else
    ebx_4.b = 1

BOOL hWnd_3 = *(arg1 + 0x4a0)

if (hWnd_3 != 0)
    hWnd_3.b = IsWindowEnabled(hWnd_3) != 0
    
    if (hWnd_3.b != ebx_4.b)
        hWnd_3 = EnableWindow(*(arg1 + 0x4a0), zx.d(ebx_4.b))

sub_745f2b(eax_1 ^ &__saved_ebp)
return hWnd_3
