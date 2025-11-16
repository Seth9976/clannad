// 函数: sub_7548cf
// 地址: 0x7548cf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ebx = &__getptd()[0x27]
int32_t* edi = __getptd()[0xee]
uint32_t Locale = sub_754b9f(arg1)
int32_t ecx = *(ebx + 0x14)
int32_t ecx_1 = neg.d(ecx)
void lCData
int32_t result

if (GetLocaleInfoW(Locale, (sbb.d(ecx_1, ecx_1, ecx != 0) & 0xfffff005) + 0x1002, &lCData, 0xf0)
        != 0)
    if (sub_75d36c(*(ebx + 4), &lCData) != 0)
    label_7549fc:
        
        if ((*edi & 0x300) == 0x300)
            result = not.d(*edi u>> 2) & 1
        else
            int32_t ecx_9 = *(ebx + 0x10)
            int32_t ecx_10 = neg.d(ecx_9)
            
            if (GetLocaleInfoW(Locale, (sbb.d(ecx_10, ecx_10, ecx_9 != 0) & 0xfffff002) + 0x1001, 
                    &lCData, 0xf0) == 0)
                *edi = 0
                result = 1
            else
                uint32_t eax_19
                int32_t edx_3
                eax_19, edx_3 = sub_75d36c(*ebx, &lCData)
                uint32_t var_10c_7
                uint32_t eax_20
                int16_t* ecx_15
                
                if (eax_19 == 0)
                    *edi |= 0x200
                    
                    if (*(ebx + 0x10) == eax_19 && *(ebx + 0xc) != eax_19)
                        int16_t* var_108_7 = *ebx
                        eax_20 = _wcslen(var_108_7)
                        ecx_15 = var_108_7
                        
                        if (eax_20 != *(ebx + 0xc))
                            goto label_754a98
                        
                        int32_t* var_108_8 = edi
                        var_10c_7 = 1
                        goto label_754a8c
                    
                label_754a98:
                    *edi |= 0x100
                    
                    if (edi[1] == 0)
                        edi[1] = Locale
                else if (*(ebx + 0x10) == 0 && *(ebx + 0xc) != 0)
                    int16_t* var_108_9 = &lCData
                    eax_20, edx_3 = sub_75d36c(*ebx, var_108_9)
                    ecx_15 = var_108_9
                    
                    if (eax_20 == 0)
                        int32_t* var_108_10 = edi
                        var_10c_7 = eax_20
                    label_754a8c:
                        
                        if (sub_754c9b(eax_20, edx_3, ecx_15, Locale, var_10c_7) != 0)
                            goto label_754a98
                result = not.d(*edi u>> 2) & 1
    else
        int32_t eax_6 = *(ebx + 0x10)
        int32_t eax_7 = neg.d(eax_6)
        
        if (GetLocaleInfoW(Locale, (sbb.d(eax_7, eax_7, eax_6 != 0) & 0xfffff002) + 0x1001, 
                &lCData, 0xf0) != 0)
            if (sub_75d36c(*ebx, &lCData) == 0)
                *edi |= 0x304
                edi[1] = Locale
                edi[2] = Locale
            else if ((*edi & 2) == 0)
                uint32_t eax_13
                
                if (*(ebx + 0xc) != 0)
                    eax_13 = __wcsnicmp(*ebx, &lCData, *(ebx + 0xc))
                
                if (*(ebx + 0xc) == 0 || eax_13 != 0)
                    int32_t edx_1 = *edi
                    
                    if ((edx_1.b & 1) == 0 && sub_754c79(Locale.w) != 0)
                        *edi = edx_1 | 1
                        edi[2] = Locale
                else
                    *edi |= 2
                    edi[2] = Locale
                    
                    if (_wcslen(*ebx) == *(ebx + 0xc))
                        edi[1] = Locale
            
            goto label_7549fc
        
        *edi = 0
        result = 1
else
    *edi = 0
    result = 1

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
