// 函数: sub_5c7d00
// 地址: 0x5c7d00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg2 == 0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0x80004003

*arg2 = 0

if (*(arg1 + 0x8c) == 0)
    int32_t var_74 = 0
    HGDIOBJ h = GetStockObject(DEFAULT_GUI_FONT)
    
    if (h == 0)
        h = GetStockObject(SYSTEM_FONT)
        
        if (h == 0)
        label_5c7e00:
            enum WIN32_ERROR result = sub_5c4a80()
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return result
    
    int32_t pv
    GetObjectW(h, 0x5c, &pv)
    int32_t pv_1 = pv
    struct FONTDESC fontDesc
    void var_48
    fontDesc.lpstrName = &var_48
    int16_t var_54
    fontDesc.sWeight = var_54
    char var_4d
    fontDesc.sCharset = zx.w(var_4d)
    char var_50
    fontDesc.fItalic = zx.d(var_50)
    char var_4f
    fontDesc.fUnderline = zx.d(var_4f)
    fontDesc.cbSizeofstruct = 0x20
    char var_4e
    fontDesc.fStrikethrough = zx.d(var_4e)
    
    if (pv_1 s< 0)
        pv_1 = neg.d(pv_1)
    
    HWND hWnd_1 = *(arg1 - 0x48)
    HWND hWnd
    HDC hDC
    int32_t var_6c_1
    
    if (hWnd_1 == 0)
        HDC hdc_1 = GetDC(GetDesktopWindow())
        
        if (hdc_1 == 0)
            goto label_5c7e00
        
        hDC = hdc_1
        var_6c_1 = GetDeviceCaps(hdc_1, 0x5a)
        hWnd = GetDesktopWindow()
    else
        HDC hdc = GetDC(hWnd_1)
        
        if (hdc == 0)
            goto label_5c7e00
        
        hDC = hdc
        var_6c_1 = GetDeviceCaps(hdc, 0x5a)
        hWnd = *(arg1 - 0x48)
    
    ReleaseDC(hWnd, hDC)
    fontDesc.cySize..__offset(0x4).d = 0
    fontDesc.cySize..d = divs.dp.d(sx.q(pv_1 * 0xafc80), var_6c_1)
    OleCreateFontIndirect(&fontDesc, &data_af2318, arg1 + 0x8c)
    sub_5cbbd0(&var_74)

*arg2 = *(arg1 + 0x8c)
int32_t* ecx_6 = *(arg1 + 0x8c)

if (ecx_6 != 0)
    (*(*ecx_6 + 4))(ecx_6)

sub_745f2b(eax_1 ^ &__saved_ebp)
return 0
