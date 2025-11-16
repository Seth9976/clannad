// 函数: sub_450a9f
// 地址: 0x450a9f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
void* esi_1 = *(arg2 + 4)
int32_t eax_1 = *(arg2 + 8) << 0x1e
int32_t edi
int32_t var_1c = edi
int32_t eax_2 = eax_1 s>> 0x1f
bool cond:0 = *esi_1 != 0
void* edi_1 = arg1
void* var_10 = edi_1
uint32_t result
int32_t* esp_1

if (cond:0)
    int32_t var_28_2 = 0x64
    result = sub_450f28(edi_1, (divs.dp.d(sx.q(arg2 - *(edi_1 + 0x2c)), 0x64)).w, 0, -1)
    esp_1 = &var_1c
else
    void* eax_5 = *(*(*(edi_1 + 0xb0) + (*(esi_1 + 0x1c) << 2)) + 0x40)
    
    if (eax_2 == 0)
        int32_t eax_11
        
        if (eax_5 != 0)
            eax_11 = *(*(eax_5 + 8) + (**(esi_1 + 8) << 2))
        else
            eax_11 = **(esi_1 + 8)
        
        result = (*(**(edi_1 + 8) + 0x1ac))(*(edi_1 + 8), *(*(edi_1 + 0x18) + eax_11 * 0x18 + 4))
        esp_1 = &var_1c
    else
        int32_t eax_7
        
        if (eax_5 != 0)
            eax_7 = *(*(eax_5 + 8) + (**(esi_1 + 8) << 2))
        else
            eax_7 = **(esi_1 + 8)
        
        result = (*(**(edi_1 + 8) + 0x170))(*(edi_1 + 8), *(*(edi_1 + 0x18) + eax_7 * 0x18 + 4))
        esp_1 = &var_1c
    
    if (result s>= 0)
        void* esi_2 = esi_1 + 0x64
        bool cond:2_1 = (*(arg2 + 8) & 4) == 0
        void* var_c = esi_2
        
        if (not(cond:2_1))
            int32_t var_24_2 = 0x64
            sub_44b7f5(edi_1, zx.d((divs.dp.d(sx.q(arg2 - *(edi_1 + 0x2c)), 0x64)).w), 1)
            esp_1 = &var_1c
            
            if ((*(arg2 + 8) & 0x10) != 0)
                int16_t edx_4 = *(arg2 + 0x50)
                
                if (edx_4 u> 0)
                    result.w = *(arg2 + 0x4c)
                    
                    if (result.w == *(arg2 + 0x4e))
                        int32_t ecx_11 = **(edi_1 + 8)
                        uint32_t var_20_3 = zx.d(edx_4)
                        int32_t var_24_4 = *(arg2 + 0x40) + *arg2
                        int32_t var_28_1 = 0
                        int32_t var_2c = *(edi_1 + 8)
                        esp_1 = &var_2c
                        
                        if (eax_2 == 0)
                            (*(ecx_11 + 0x1b4))()
                        else
                            (*(ecx_11 + 0x178))()
                
                edx_4 = *(arg2 + 0x56)
                
                if (edx_4 u> 0)
                    result.w = *(arg2 + 0x52)
                    
                    if (result.w == *(arg2 + 0x54))
                        int32_t eax_22 = *(arg2 + 0x44) + *arg2
                        int32_t ecx_13 = **(edi_1 + 8)
                        *(esp_1 - 4) = zx.d(edx_4)
                        *(esp_1 - 8) = eax_22
                        *(esp_1 - 0xc) = 0
                        *(esp_1 - 0x10) = *(edi_1 + 8)
                        esp_1 -= 0x10
                        
                        if (eax_2 == 0)
                            (*(ecx_13 + 0x1bc))()
                        else
                            (*(ecx_13 + 0x180))()
                
                edx_4 = *(arg2 + 0x5c)
                
                if (edx_4 u> 0)
                    result.w = *(arg2 + 0x58)
                    
                    if (result.w == *(arg2 + 0x5a))
                        int32_t eax_24 = *(arg2 + 0x48) + *arg2
                        int32_t ecx_15 = **(edi_1 + 8)
                        *(esp_1 - 4) = zx.d(edx_4)
                        *(esp_1 - 8) = eax_24
                        *(esp_1 - 0xc) = 0
                        *(esp_1 - 0x10) = *(edi_1 + 8)
                        esp_1 -= 0x10
                        
                        if (eax_2 == 0)
                            (*(ecx_15 + 0x1c4))()
                        else
                            (*(ecx_15 + 0x188))()
            
            esi_2 += 0x64
            var_c = esi_2
        
        int32_t edx_10 = zx.d(*(arg2 + 0x4e)) * 0x64 + *(arg2 + 4)
        int32_t var_8_1 = edx_10
        
        if (esi_2 u>= edx_10)
        label_450ce7:
            result.w = *(arg2 + 0x4e)
            
            if (result.w != *(arg2 + 0x36))
                int32_t eax_34 = zx.d(*(arg2 + 0x54)) * 0x64 + *(arg2 + 4)
                int32_t var_8_2 = eax_34
                
                if (esi_2 u>= eax_34)
                label_450d87:
                    int32_t eax_47 = zx.d(*(arg2 + 0x5a)) * 0x64 + *(arg2 + 4)
                    int32_t var_8_3 = eax_47
                    
                    if (esi_2 u>= eax_47)
                    label_450e0b:
                        int32_t eax_60 = zx.d(*(arg2 + 0x60)) * 0x64 + *(arg2 + 4)
                        
                        if (esi_2 u>= eax_60)
                            result = 0
                        else
                            *(esp_1 - 4) = eax_60
                            *(esp_1 - 8) = esi_2
                            *(esp_1 - 0xc) = arg2
                            result = sub_450962(edi_1)
                    else
                        do
                            if (*esi_2 != 0)
                                *esi_2 = *(esi_2 + 4)
                                *(esp_1 - 4) = *(*(*(edi_1 + 0xb0) + (*(esi_2 + 0x1c) << 2)) + 0x4c)
                                *(esp_1 - 8) = &var_10
                                *(esp_1 - 0xc) = *(*(esi_2 + 0x34) + 0x10)
                                uint32_t eax_52 = zx.d(*(esi_2 + 0x56))
                                *(esp_1 - 0x10) = *(esi_2 + 0x3c)
                                *(esp_1 - 0x14) = eax_52
                                *(esp_1 - 0x18) = *(esi_2 + 0x48) + *arg2
                                *(esp_1 - 0x1c) = esi_2 + 8
                                sub_44a7df()
                                eax_47 = var_8_3
                            
                            esi_2 += 0x64
                        while (esi_2 u< eax_47)
                        
                        int32_t eax_57 = *(arg2 + 0x48) + *arg2
                        int32_t ecx_34 = **(edi_1 + 8)
                        *(esp_1 - 4) = zx.d(*(arg2 + 0x5c))
                        *(esp_1 - 8) = eax_57
                        *(esp_1 - 0xc) = 0
                        *(esp_1 - 0x10) = *(edi_1 + 8)
                        esp_1 -= 0x10
                        
                        if (eax_2 == 0)
                            result = (*(ecx_34 + 0x1c4))()
                        else
                            result = (*(ecx_34 + 0x188))()
                        
                        if (result s>= 0)
                            goto label_450e0b
                else
                    do
                        if (*esi_2 != 0)
                            *esi_2 = *(esi_2 + 4)
                            *(esp_1 - 4) = *(*(*(edi_1 + 0xb0) + (*(esi_2 + 0x1c) << 2)) + 0x4c)
                            *(esp_1 - 8) = &var_10
                            *(esp_1 - 0xc) = *(*(esi_2 + 0x34) + 0x10)
                            uint32_t eax_39 = zx.d(*(esi_2 + 0x56))
                            *(esp_1 - 0x10) = *(esi_2 + 0x3c)
                            *(esp_1 - 0x14) = eax_39
                            *(esp_1 - 0x18) = *(esi_2 + 0x48) + *arg2
                            *(esp_1 - 0x1c) = esi_2 + 8
                            sub_44a3d9()
                            eax_34 = var_8_2
                        
                        esi_2 += 0x64
                    while (esi_2 u< eax_34)
                    
                    int32_t eax_44 = *(arg2 + 0x44) + *arg2
                    int32_t ecx_30 = **(edi_1 + 8)
                    *(esp_1 - 4) = zx.d(*(arg2 + 0x56))
                    *(esp_1 - 8) = eax_44
                    *(esp_1 - 0xc) = 0
                    *(esp_1 - 0x10) = *(edi_1 + 8)
                    esp_1 -= 0x10
                    
                    if (eax_2 == 0)
                        result = (*(ecx_30 + 0x1bc))()
                    else
                        result = (*(ecx_30 + 0x180))()
                    
                    if (result s>= 0)
                        goto label_450d87
            else
                result = 0
        else
            do
                if (*esi_2 != 0)
                    *esi_2 = *(esi_2 + 4)
                    int32_t eax_27 = *(esi_2 + 0x48) + *arg2
                    
                    if ((*(esi_2 + 0x30) & 0x10) == 0)
                        *(esp_1 - 4) = *(*(*(edi_1 + 0xb0) + (*(esi_2 + 0x1c) << 2)) + 0x4c)
                        *(esp_1 - 8) = &var_c
                        *(esp_1 - 0xc) = *(*(esi_2 + 0x34) + 0x10)
                        uint32_t ecx_23 = zx.d(*(esi_2 + 0x56))
                        *(esp_1 - 0x10) = *(esi_2 + 0x3c)
                        *(esp_1 - 0x14) = ecx_23
                        *(esp_1 - 0x18) = eax_27
                        *(esp_1 - 0x1c) = esi_2 + 8
                        sub_44a01e()
                        edx_10 = var_8_1
                    else
                        int32_t ecx_16 = *(esi_2 + 0x60)
                        int32_t esi_4
                        int32_t edi_3
                        edi_3, esi_4 = __builtin_memcpy(eax_27, *(esi_2 + 0x5c), ecx_16 u>> 2 << 2)
                        __builtin_memcpy(edi_3, esi_4, ecx_16 & 3)
                        edi_1 = var_10
                        esi_2 = var_c
                
                esi_2 += 0x64
                var_c = esi_2
            while (esi_2 u< edx_10)
            
            int32_t eax_31 = *(arg2 + 0x40) + *arg2
            int32_t ecx_26 = **(edi_1 + 8)
            *(esp_1 - 4) = zx.d(*(arg2 + 0x50))
            *(esp_1 - 8) = eax_31
            *(esp_1 - 0xc) = 0
            *(esp_1 - 0x10) = *(edi_1 + 8)
            esp_1 -= 0x10
            
            if (eax_2 == 0)
                result = (*(ecx_26 + 0x1b4))()
            else
                result = (*(ecx_26 + 0x178))()
            
            if (result s>= 0)
                goto label_450ce7

*esp_1
esp_1[1]
esp_1[2]
return result
