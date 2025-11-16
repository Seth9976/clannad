// 函数: sub_69a090
// 地址: 0x69a090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t* var_8 = ebx
sub_69a040(arg1)
int16_t* lpsz_3 = *ebx
int16_t eax = *lpsz_3

if (0 == eax)
    return 0x80020009

int16_t* esi = arg2
int16_t* var_c = esi

if (0x27 != eax)
    while (true)
        int16_t* lpsz_4 = *ebx
        
        switch (zx.d(*lpsz_4) - 9)
            case 0, 1, 4, 0x17
                nop
            default
                PWSTR eax_12 = CharNextW(lpsz_4)
                *var_8 = eax_12
                int32_t i_3 = (eax_12 - lpsz_4) s>> 1
                
                if (&esi[i_3 + 1] u>= &var_c[0x1000])
                    break
                
                if (i_3 s> 0)
                    int16_t* ebx_3 = lpsz_4 - esi
                    int32_t i
                    
                    do
                        int32_t* eax_13
                        eax_13.w = *(ebx_3 + esi)
                        *esi = eax_13.w
                        esi = &esi[1]
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                
                ebx = var_8
                
                if (0 != **ebx)
                    continue
        
        *esi = 0
        return 0
else
    PWSTR eax_2 = CharNextW(lpsz_3)
    *ebx = eax_2
    
    while (true)
        if (0 != *eax_2)
            int16_t* lpsz = *ebx
            PWSTR eax_3
            
            if (0x27 == *lpsz)
                eax_3 = CharNextW(lpsz)
            
            if (0x27 != *lpsz || 0x27 == *eax_3)
                int16_t* lpsz_1 = *ebx
                
                if (0x27 == *lpsz_1)
                    *ebx = CharNextW(lpsz_1)
                
                int16_t* lpsz_2 = *ebx
                PWSTR eax_5 = CharNextW(lpsz_2)
                *ebx = eax_5
                int32_t i_2 = (eax_5 - lpsz_2) s>> 1
                
                if (&esi[i_2 + 1] u>= &var_c[0x1000])
                    break
                
                if (i_2 s> 0)
                    void* ebx_2 = lpsz_2 - esi
                    int32_t i_1
                    
                    do
                        eax_5.w = *(ebx_2 + esi)
                        *esi = eax_5.w
                        esi = &esi[1]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    ebx = var_8
                
                eax_2 = *ebx
                continue
        
        if (0 == **ebx)
            break
        
        *esi = 0
        *ebx = CharNextW(*ebx)
        return 0

return 0x80020009
