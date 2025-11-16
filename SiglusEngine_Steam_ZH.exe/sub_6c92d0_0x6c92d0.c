// 函数: sub_6c92d0
// 地址: 0x6c92d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* esi = data_bac440
int32_t* result

if (esi[2] == 0)
label_6c9325:
    HGDIOBJ h = esi[2]
    
    if (h != 0)
        SelectObject(*esi, h)
        esi[2] = 0
    
    HGDIOBJ ho = esi[1]
    
    if (ho != 0)
        DeleteObject(ho)
        esi[1] = 0
    
    HDC hdc_1 = *esi
    
    if (hdc_1 != 0)
        DeleteDC(hdc_1)
        *esi = 0
    
    var_60
    _memset(&var_60, 0, 0x58)
    LOGFONTW lplf
    lplf.lfCharSet = arg2.b
    lplf.lfHeight = neg.d(arg3)
    void* eax_7
    
    if (*(arg1 + 0x14) u< 8)
        eax_7 = arg1
    else
        eax_7 = *arg1
    
    var_48
    _wcscpy_s(&var_48, 0x20, eax_7)
    *esi = CreateCompatibleDC(nullptr)
    HFONT h_1 = CreateFontIndirectW(&lplf)
    HDC hdc = *esi
    esi[1] = h_1
    result = SelectObject(hdc, h_1)
    esi[2] = result
    esi[3] = arg3
    
    if (&esi[5] != arg1)
        result = sub_52e3c0(&esi[5], arg1, 0, 0xffffffff)
else
    void* eax_2 = &esi[5]
    int32_t ecx_1 = *(eax_2 + 0x10)
    
    if (esi[0xa] u>= 8)
        eax_2 = *eax_2
    
    int32_t var_74_1 = ecx_1
    
    if (sub_536340(arg1, ecx_1, *(arg1 + 0x10), eax_2) != 0)
        goto label_6c9325
    
    result = arg2
    
    if (result != esi[4] || arg3 != esi[3])
        goto label_6c9325

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
