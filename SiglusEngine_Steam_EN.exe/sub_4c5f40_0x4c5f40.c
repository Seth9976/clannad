// 函数: sub_4c5f40
// 地址: 0x4c5f40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* cHeight_1
void* cHeight

if (arg7 == 0)
    cHeight = arg2
    cHeight_1 = arg2
else
    cHeight = arg2 - 2
    
    if (cHeight u< 8)
        cHeight = 8
    
    cHeight_1 = cHeight
    
    if (arg5 == 1)
        cHeight = (cHeight << 1) + 0xffffffff
        cHeight_1 = cHeight
    else if (arg5 == 2)
        cHeight <<= 2
        cHeight_1 = cHeight
        
        if (arg6 != 0)
            cHeight -= 3
            cHeight_1 = cHeight

int32_t var_50 = 0
int32_t esi = sub_4c5cf0(arg3, cHeight)
int32_t var_80
int32_t var_7c
HFONT var_48
HFONT h

if (esi != 0xffffffff)
    int32_t eax_14 = esi * 0xf
    h = *((eax_14 << 2) + &data_20ae9bc)
    var_48 = *((eax_14 << 2) + &data_20ae9c0)
else
    HDC hDC = GetDC(data_7027bc)
    int32_t var_74_2 = data_1af44c4
    int32_t eax_5 = sub_4c5c10(hDC, arg3, hDC)
    ReleaseDC(data_7027bc, hDC)
    
    if (eax_5 == 0 || eax_5 == 0xffffffff)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 1
    
    HDC hDC_1 = GetDC(data_7027bc)
    int32_t var_74_5 = data_1af44c4
    uint32_t eax_8 = sub_4c5c80(hDC_1, arg3, hDC_1)
    ReleaseDC(data_7027bc, hDC_1)
    var_7c = 0
    var_80 = 0
    HFONT h_2 = CreateFontA(cHeight, 0, 0, 0, 0x190, 0, 0, 0, zx.d(eax_8.b), 0, 0, 0, 0, arg3)
    var_48 = nullptr
    
    if (eax_8 != 0x80)
        int32_t eax_10
        
        if (data_641ade == 0)
            HWND hWnd = data_7027bc
            data_641ade = 1
            HDC hDC_2 = GetDC(hWnd)
            int32_t var_74_8 = 0x63
            eax_10 = sub_4c5c10(hDC_2, "MigMix 1M", hDC_2)
            ReleaseDC(data_7027bc, hDC_2)
            cHeight = cHeight_1
        
        if (data_641ade == 0 && eax_10 == 1)
            data_641add = 1
        label_4c60e4:
            var_7c = 0
            var_80 = 0
            var_48 = CreateFontA(cHeight, 0, 0, 0, 0x190, 0, 0, 0, 0x80, 0, 0, 0, 0, "MigMix 1M")
        else if (data_641add != 0)
            goto label_4c60e4
    
    h = h_2
    var_50 = 1

HDC eax_16 = GetDC(data_7027bc)
HGDIOBJ eax_17

if (data_702770 != 0)
    eax_17 = SelectObject(eax_16, h)
else
    data_702770 = 1
    eax_17 = SelectObject(eax_16, h)
    data_208c72c = eax_17

if (var_50 != 0)
    HFONT var_74_12 = var_48
    HFONT h_1 = h
    esi = sub_4c5e00(eax_17, cHeight, arg3, var_80, var_7c)

data_702774 = var_48
data_20a1b9c = esi
data_1333e4c = h
TEXTMETRICA lptm
GetTextMetricsA(eax_16, &lptm)
data_1c041f4 = lptm.tmDescent
data_1c04200 = arg2
data_13740ac = arg4
data_1c041fc = arg5
data_1c041f8 = arg6
sub_4cfd70(0x1c041d4, arg3)
ReleaseDC(data_7027bc, eax_16)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
