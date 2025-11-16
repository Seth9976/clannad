// 函数: sub_540440
// 地址: 0x540440
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* esi = arg1
int32_t eax
eax.b = *data_bac4e4 == 0

if (*(esi + 0x1974) != eax.b)
    *(esi + 0x1974) = eax.b

arg1.b = *(data_bac4a0 + 0x68)
var_8:3.b = arg1.b

if (*(esi + 0x1975) != arg1.b)
    *(esi + 0x1975) = arg1.b
    HWND hWnd = *(esi + 0x650)
    
    if (hWnd != 0)
        char ecx = var_8:3.b
        BOOL eax_2
        eax_2.b = IsWindowEnabled(hWnd) != 0
        
        if (eax_2.b != ecx)
            EnableWindow(*(esi + 0x650), zx.d(ecx))
    
    HWND hWnd_1 = *(esi + 0x770)
    
    if (hWnd_1 != 0)
        char ecx_1 = var_8:3.b
        BOOL eax_4
        eax_4.b = IsWindowEnabled(hWnd_1) != 0
        
        if (eax_4.b != ecx_1)
            EnableWindow(*(esi + 0x770), zx.d(ecx_1))
    
    HWND hWnd_2 = *(esi + 0x800)
    
    if (hWnd_2 != 0)
        char ecx_2 = var_8:3.b
        BOOL eax_6
        eax_6.b = IsWindowEnabled(hWnd_2) != 0
        
        if (eax_6.b != ecx_2)
            EnableWindow(*(esi + 0x800), zx.d(ecx_2))
    
    HWND hWnd_3 = *(esi + 0x890)
    
    if (hWnd_3 != 0)
        char ecx_3 = var_8:3.b
        BOOL eax_8
        eax_8.b = IsWindowEnabled(hWnd_3) != 0
        
        if (eax_8.b != ecx_3)
            EnableWindow(*(esi + 0x890), zx.d(ecx_3))
    
    HWND hWnd_4 = *(esi + 0x924)
    
    if (hWnd_4 != 0)
        char ecx_4 = var_8:3.b
        BOOL eax_10
        eax_10.b = IsWindowEnabled(hWnd_4) != 0
        
        if (eax_10.b != ecx_4)
            EnableWindow(*(esi + 0x924), zx.d(ecx_4))

char ebx = *data_bac4e4 == 1

if (*(esi + 0x1976) != ebx)
    *(esi + 0x1976) = ebx
    HWND hWnd_5 = *(esi + 0x9b8)
    
    if (hWnd_5 != 0)
        BOOL eax_13
        eax_13.b = IsWindowEnabled(hWnd_5) != 0
        
        if (eax_13.b != ebx)
            EnableWindow(*(esi + 0x9b8), zx.d(ebx))
    
    HWND hWnd_6 = *(esi + 0xa48)
    
    if (hWnd_6 != 0)
        BOOL eax_15
        eax_15.b = IsWindowEnabled(hWnd_6) != 0
        
        if (eax_15.b != ebx)
            EnableWindow(*(esi + 0xa48), zx.d(ebx))
    
    HWND hWnd_7 = *(esi + 0xad8)
    
    if (hWnd_7 != 0)
        BOOL eax_17
        eax_17.b = IsWindowEnabled(hWnd_7) != 0
        
        if (eax_17.b != ebx)
            EnableWindow(*(esi + 0xad8), zx.d(ebx))
    
    HWND hWnd_8 = *(esi + 0xb68)
    
    if (hWnd_8 != 0)
        BOOL eax_19
        eax_19.b = IsWindowEnabled(hWnd_8) != 0
        
        if (eax_19.b != ebx)
            EnableWindow(*(esi + 0xb68), zx.d(ebx))
    
    HWND hWnd_9 = *(esi + 0xbf8)
    
    if (hWnd_9 != 0)
        BOOL eax_21
        eax_21.b = IsWindowEnabled(hWnd_9) != 0
        
        if (eax_21.b != ebx)
            EnableWindow(*(esi + 0xbf8), zx.d(ebx))
    
    HWND hWnd_10 = *(esi + 0xc88)
    
    if (hWnd_10 != 0)
        BOOL eax_23
        eax_23.b = IsWindowEnabled(hWnd_10) != 0
        
        if (eax_23.b != ebx)
            EnableWindow(*(esi + 0xc88), zx.d(ebx))
    
    HWND hWnd_11 = *(esi + 0xd18)
    
    if (hWnd_11 != 0)
        BOOL eax_25
        eax_25.b = IsWindowEnabled(hWnd_11) != 0
        
        if (eax_25.b != ebx)
            EnableWindow(*(esi + 0xd18), zx.d(ebx))
    
    HWND hWnd_12 = *(esi + 0xda8)
    
    if (hWnd_12 != 0)
        BOOL eax_27
        eax_27.b = IsWindowEnabled(hWnd_12) != 0
        
        if (eax_27.b != ebx)
            EnableWindow(*(esi + 0xda8), zx.d(ebx))

BOOL hWnd_13 = *(esi + 0xda8)
var_8:3.b = *data_bac4e4 == 1
char ebx_1

if (hWnd_13 != 0)
    hWnd_13 = SendMessageW(hWnd_13, 0xf0, 0, 0)
    ebx_1 = hWnd_13.b
else
    ebx_1 = 0

ebx_1 &= 1
char temp0 = ebx_1
ebx_1 = neg.b(ebx_1)
ebx_1 = sbb.b(ebx_1, ebx_1, temp0 != 0) & var_8:3.b

if (*(esi + 0x1977) != ebx_1)
    *(esi + 0x1977) = ebx_1
    HWND hWnd_14 = *(esi + 0xe38)
    
    if (hWnd_14 != 0)
        BOOL eax_30
        eax_30.b = IsWindowEnabled(hWnd_14) != 0
        
        if (eax_30.b != ebx_1)
            EnableWindow(*(esi + 0xe38), zx.d(ebx_1))
    
    HWND hWnd_15 = *(esi + 0xec8)
    
    if (hWnd_15 != 0)
        BOOL eax_32
        eax_32.b = IsWindowEnabled(hWnd_15) != 0
        
        if (eax_32.b != ebx_1)
            EnableWindow(*(esi + 0xec8), zx.d(ebx_1))
    
    HWND hWnd_16 = *(esi + 0xf58)
    
    if (hWnd_16 != 0)
        BOOL eax_34
        eax_34.b = IsWindowEnabled(hWnd_16) != 0
        
        if (eax_34.b != ebx_1)
            EnableWindow(*(esi + 0xf58), zx.d(ebx_1))
    
    HWND hWnd_17 = *(esi + 0xfe8)
    
    if (hWnd_17 != 0)
        BOOL eax_36
        eax_36.b = IsWindowEnabled(hWnd_17) != 0
        
        if (eax_36.b != ebx_1)
            EnableWindow(*(esi + 0xfe8), zx.d(ebx_1))
    
    HWND hWnd_18 = *(esi + 0x1078)
    
    if (hWnd_18 != 0)
        BOOL eax_38
        eax_38.b = IsWindowEnabled(hWnd_18) != 0
        
        if (eax_38.b != ebx_1)
            EnableWindow(*(esi + 0x1078), zx.d(ebx_1))
    
    HWND hWnd_19 = *(esi + 0x1108)
    
    if (hWnd_19 != 0)
        BOOL eax_40
        eax_40.b = IsWindowEnabled(hWnd_19) != 0
        
        if (eax_40.b != ebx_1)
            EnableWindow(*(esi + 0x1108), zx.d(ebx_1))
    
    HWND hWnd_20 = *(esi + 0x1198)
    
    if (hWnd_20 != 0)
        BOOL eax_42
        eax_42.b = IsWindowEnabled(hWnd_20) != 0
        
        if (eax_42.b != ebx_1)
            EnableWindow(*(esi + 0x1198), zx.d(ebx_1))
    
    HWND hWnd_21 = *(esi + 0x1228)
    
    if (hWnd_21 != 0)
        BOOL eax_44
        eax_44.b = IsWindowEnabled(hWnd_21) != 0
        
        if (eax_44.b != ebx_1)
            EnableWindow(*(esi + 0x1228), zx.d(ebx_1))
    
    HWND hWnd_22 = *(esi + 0x12b8)
    
    if (hWnd_22 != 0)
        BOOL eax_46
        eax_46.b = IsWindowEnabled(hWnd_22) != 0
        
        if (eax_46.b != ebx_1)
            EnableWindow(*(esi + 0x12b8), zx.d(ebx_1))
    
    HWND hWnd_23 = *(esi + 0x1348)
    
    if (hWnd_23 != 0)
        BOOL eax_48
        eax_48.b = IsWindowEnabled(hWnd_23) != 0
        
        if (eax_48.b != ebx_1)
            EnableWindow(*(esi + 0x1348), zx.d(ebx_1))
    
    HWND hWnd_24 = *(esi + 0x13d8)
    
    if (hWnd_24 != 0)
        BOOL eax_50
        eax_50.b = IsWindowEnabled(hWnd_24) != 0
        
        if (eax_50.b != ebx_1)
            EnableWindow(*(esi + 0x13d8), zx.d(ebx_1))
    
    HWND hWnd_25 = *(esi + 0x1468)
    
    if (hWnd_25 != 0)
        BOOL eax_52
        eax_52.b = IsWindowEnabled(hWnd_25) != 0
        
        if (eax_52.b != ebx_1)
            EnableWindow(*(esi + 0x1468), zx.d(ebx_1))
    
    HWND hWnd_26 = *(esi + 0x14f8)
    
    if (hWnd_26 != 0)
        BOOL eax_54
        eax_54.b = IsWindowEnabled(hWnd_26) != 0
        
        if (eax_54.b != ebx_1)
            EnableWindow(*(esi + 0x14f8), zx.d(ebx_1))
    
    HWND hWnd_27 = *(esi + 0x1588)
    
    if (hWnd_27 != 0)
        BOOL eax_56
        eax_56.b = IsWindowEnabled(hWnd_27) != 0
        
        if (eax_56.b != ebx_1)
            EnableWindow(*(esi + 0x1588), zx.d(ebx_1))
    
    HWND hWnd_28 = *(esi + 0x1618)
    
    if (hWnd_28 != 0)
        BOOL eax_58
        eax_58.b = IsWindowEnabled(hWnd_28) != 0
        
        if (eax_58.b != ebx_1)
            EnableWindow(*(esi + 0x1618), zx.d(ebx_1))
    
    HWND hWnd_29 = *(esi + 0x16a8)
    
    if (hWnd_29 != 0)
        BOOL eax_60
        eax_60.b = IsWindowEnabled(hWnd_29) != 0
        
        if (eax_60.b != ebx_1)
            EnableWindow(*(esi + 0x16a8), zx.d(ebx_1))
    
    HWND hWnd_30 = *(esi + 0x1738)
    
    if (hWnd_30 != 0)
        BOOL eax_62
        eax_62.b = IsWindowEnabled(hWnd_30) != 0
        
        if (eax_62.b != ebx_1)
            EnableWindow(*(esi + 0x1738), zx.d(ebx_1))
    
    hWnd_13 = *(esi + 0x17c8)
    
    if (hWnd_13 != 0)
        hWnd_13.b = IsWindowEnabled(hWnd_13) != 0
        
        if (hWnd_13.b != ebx_1)
            return EnableWindow(*(esi + 0x17c8), zx.d(ebx_1))

return hWnd_13
