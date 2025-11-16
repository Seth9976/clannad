// 函数: sub_46148a
// 地址: 0x46148a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg2
int32_t edi
int32_t var_10 = edi
char* eax = sub_482583(esi)
char* eax_1 = *esi
int32_t* esi_1 = esi[3]

if (eax == 0)
    return 0x88760385

int32_t eax_2 = *(arg1 + 0x40)

if (eax_2 == 0)
    if (esi_1 != 0)
        int32_t var_14_12 = 0x34
        sub_460651(arg1)
        int32_t eax_10 = sub_46054f(eax)
        
        if (eax_10 == 0)
            sub_460fd3(arg1, eax)
        else
            int32_t var_14_14 = eax_10
            sub_460651(arg1)
        
        sub_460fd3(arg1, eax_1)
        int32_t i = 0
        
        if (*esi_1 u> 0)
            do
                int32_t var_14_17 = 0xe
                sub_460651(arg1)
                int32_t* eax_12 = *(esi_1[3] + (i << 2))
                int32_t ecx_16 = *eax_12
                
                if (ecx_16 == 0)
                    char* eax_13 = eax_12[1]
                    
                    if (eax_13 == 0)
                        return 0x88760385
                    
                    sub_460fd3(arg1, eax_13)
                else
                    sub_460fb5(arg1, ecx_16)
                
                int32_t var_14_20 = 0xf
                sub_460651(arg1)
                i += 1
            while (i u< *esi_1)
    else
        int32_t eax_8 = sub_46054f(eax)
        
        if (eax_8 == 0)
            sub_460fd3(arg1, eax)
        else
            int32_t var_14_8 = eax_8
            sub_460651(arg1)
        
        sub_460fd3(arg1, eax_1)
    
    int32_t var_14_11 = 0x14
    sub_460651(arg1)
else if (eax_2 == 1)
    sub_460f5b(arg1, *(arg1 + 0x58))
    
    if (esi_1 != 0)
        char* var_14_4 = eax_1
        char* var_18_2 = eax
        sub_4605e0(arg1, "array %s %s")
        int32_t i_1 = 0
        
        if (*esi_1 u> 0)
            do
                sub_460594(arg1, U"[")
                int32_t* eax_6 = *(esi_1[3] + (i_1 << 2))
                int32_t ecx_4 = *eax_6
                
                if (ecx_4 == 0)
                    char* eax_7 = eax_6[1]
                    
                    if (eax_7 == 0)
                        return 0x88760385
                    
                    sub_460594(arg1, eax_7)
                else
                    int32_t var_14_5 = ecx_4
                    sub_4605e0(arg1, "%d")
                
                sub_460594(arg1, U"][")
                i_1 += 1
            while (i_1 u< *esi_1)
    else if (eax_1 == esi_1)
        sub_460594(arg1, eax)
    else
        char* var_14_2 = eax_1
        char* var_18_1 = eax
        sub_4605e0(arg1, "%s %s")
    
    sub_460594(arg1, &(*U")(;:")[2])

return 0
