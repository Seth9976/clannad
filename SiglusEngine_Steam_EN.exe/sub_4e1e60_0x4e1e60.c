// 函数: sub_4e1e60
// 地址: 0x4e1e60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t* var_c = ebx
sub_4e1e10(arg1)
char* lpsz_3 = *ebx
char eax = *lpsz_3

if (eax == 0)
    return 0x80020009

char* esi = arg2
char* var_8 = esi

if (eax != 0x27)
    while (true)
        char* lpsz_4 = *ebx
        
        switch (sx.d(*lpsz_4) - 9)
            case 0, 1, 4, 0x17
                nop
            default
                PSTR eax_12 = CharNextA(lpsz_4)
                *ebx = eax_12
                void* i_3 = eax_12 - lpsz_4
                
                if (&esi[1] + i_3 u>= &var_8[0x1000])
                    break
                
                if (i_3 s> 0)
                    char* ebx_4 = lpsz_4 - esi
                    void* i
                    
                    do
                        eax_12.b = *(ebx_4 + esi)
                        *esi = eax_12.b
                        esi = &esi[1]
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                    ebx = var_c
                
                if (**ebx != 0)
                    continue
        
        *esi = 0
        return 0
else
    PSTR eax_2 = CharNextA(lpsz_3)
    *ebx = eax_2
    
    while (true)
        if (*eax_2 != 0)
            char* lpsz = *ebx
            PSTR eax_3
            
            if (*lpsz == 0x27)
                eax_3 = CharNextA(lpsz)
            
            if (*lpsz != 0x27 || *eax_3 == 0x27)
                char* lpsz_1 = *ebx
                
                if (*lpsz_1 == 0x27)
                    *ebx = CharNextA(lpsz_1)
                
                char* lpsz_2 = *ebx
                PSTR eax_5 = CharNextA(lpsz_2)
                *ebx = eax_5
                void* i_4 = eax_5 - lpsz_2
                
                if (&esi[1] + i_4 u>= &var_8[0x1000])
                    break
                
                if (i_4 s> 0)
                    void* ebx_2 = lpsz_2 - esi
                    void* i_2 = i_4
                    void* i_1
                    
                    do
                        eax_5.b = *(ebx_2 + esi)
                        *esi = eax_5.b
                        esi = &esi[1]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    ebx = var_c
                
                eax_2 = *ebx
                continue
        
        if (**ebx == 0)
            break
        
        *esi = 0
        *ebx = CharNextA(*ebx)
        return 0

return 0x80020009
