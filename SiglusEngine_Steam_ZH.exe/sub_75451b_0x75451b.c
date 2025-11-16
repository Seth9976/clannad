// 函数: sub_75451b
// 地址: 0x75451b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* esi = &__getptd()[0x27]
*(esi + 8) = 0
*(esi + 0x250) = 0
*esi = arg1
*(esi + 4) = arg1 + 0x80

if (*(arg1 + 0x80) != 0)
    sub_7544b1(&data_aaf800, 0x16, esi + 4)

if (**esi == 0)
    sub_753f94(esi)
else
    if (**(esi + 4) == 0)
        sub_754081(esi)
    else
        _GetLocaleNameFromLangCountry(esi)
    
    if (*(esi + 8) == 0 && sub_7544b1(&data_aaed58, 0x40, esi) != 0)
        if (**(esi + 4) == 0)
            sub_754081(esi)
        else
            _GetLocaleNameFromLangCountry(esi)

if (*(esi + 8) != 0)
    int32_t eax_8 = _ProcessCodePage(arg1 + 0x100, esi)
    
    if (eax_8 != 0 && eax_8 != 0xfde8 && eax_8 != 0xfde9 && IsValidCodePage(zx.d(eax_8.w)) != 0)
        if (arg2 != 0)
            *arg2 = eax_8
        
        if (arg3 == 0)
            return 1
        
        arg3[0x90] = 0
        
        if (_wcsncpy_s(&arg3[0x90], 0x55, esi + 0x250, _wcslen(esi + 0x250) + 1) != 0)
            int32_t var_28_2
            __builtin_memset(&var_28_2, 0, 0x14)
            __invoke_watson()
            noreturn
        
        if (sub_75521f(&arg3[0x90], 0x1001, arg3, 0x40) != 0
                && sub_75521f(&arg3[0x90], 0x1002, &arg3[0x40], 0x40) != 0)
            int16_t (* eax_18)[0x8] = sub_749755(&arg3[0x40], 0x5f)
            int16_t (* eax_19)[0x8]
            
            if (eax_18 == 0)
                eax_19 = sub_749755(&arg3[0x40], 0x2e)
            
            int32_t eax_21
            
            if (eax_18 != 0 || eax_19 != 0)
                eax_21 = sub_75521f(&arg3[0x90], 7, &arg3[0x40], 0x40)
            
            if ((eax_18 == 0 && eax_19 == 0) || eax_21 != 0)
                __itow_s(eax_8, &arg3[0x80], 0x10, 0xa)
                return 1

return 0
