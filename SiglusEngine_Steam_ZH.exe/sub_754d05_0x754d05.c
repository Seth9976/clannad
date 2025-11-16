// 函数: sub_754d05
// 地址: 0x754d05
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ebx = &__getptd()[0x27]
int32_t var_14
_memset(&var_14, 0, 0xc)
__getptd()[0xee] = &var_14
uint32_t Locale
uint32_t Locale_1

if (arg1 != 0)
    *ebx = arg1
    *(ebx + 4) = arg1 + 0x80
    
    if (arg1 != 0xffffff80 && *(arg1 + 0x80) != 0)
        sub_7544b1(&data_aaf800, 0x16, ebx + 4)
    
    var_14 = 0
    int16_t* eax_7 = *ebx
    
    if (eax_7 == 0 || *eax_7 == 0)
        int16_t* eax_11 = *(ebx + 4)
        
        if (eax_11 == 0 || *eax_11 == 0)
            var_14 = 0x104
            goto label_754e1e
        
        sub_75478f(&var_14)
    else
        int16_t* eax_8 = *(ebx + 4)
        
        if (eax_8 == 0 || *eax_8 == 0)
            sub_75484c(&var_14)
        else
            sub_7547cf(&var_14)
        
        if (var_14 != 0)
            goto label_754e3e
        
        if (sub_7544b1(&data_aaed58, 0x40, ebx) != 0)
            int16_t* eax_10 = *(ebx + 4)
            
            if (eax_10 == 0 || *eax_10 == 0)
                sub_75484c(&var_14)
            else
                sub_7547cf(&var_14)
else
    var_14 |= 0x104
label_754e1e:
    uint32_t Locale_2 = GetUserDefaultLCID()
    Locale = Locale_2
    Locale_1 = Locale_2

int32_t result

if (var_14 == 0)
    result = 0
else
label_754e3e:
    int32_t esi_1 = neg.d(arg1)
    int32_t eax_13 = sub_754bee(sbb.d(esi_1, esi_1, arg1 != 0) & (arg1 + 0x100), &var_14)
    
    if (eax_13 == 0 || eax_13 == 0xfde8 || eax_13 == 0xfde9)
        result = 0
    else if (IsValidCodePage(zx.d(eax_13.w)) == 0)
        result = 0
    else if (IsValidLocale(Locale, LCID_INSTALLED) == 0)
        result = 0
    else
        if (arg2 != 0)
            *arg2 = eax_13
        
        sub_755128(Locale, ebx + 0x250, 0x55)
        
        if (arg3 == 0)
            result = 1
        else
            sub_755128(Locale, &arg3[0x90], 0x55)
            
            if (GetLocaleInfoW(Locale, 0x1001, arg3, 0x40) == 0)
                result = 0
            else if (GetLocaleInfoW(Locale_1, 0x1002, &arg3[0x40], 0x40) == 0)
                result = 0
            else
                __itow_s(eax_13, &arg3[0x80], 0x10, 0xa)
                result = 1

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
