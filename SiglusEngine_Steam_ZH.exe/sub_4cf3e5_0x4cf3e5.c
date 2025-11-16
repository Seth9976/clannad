// 函数: sub_4cf3e5
// 地址: 0x4cf3e5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_124 = edi
int32_t var_10 = 0
int32_t var_38 = 0
int32_t* edi_1 = arg1
int32_t* eax = edi_1[0x40]
int32_t esi_1 = *eax & 0xfffff
int32_t* var_24 = edi_1
int32_t var_34 = 1
int32_t var_30 = 2
int32_t var_2c = 3
int32_t var_28 = esi_1
void var_118
int32_t var_78[0x10]

if (sub_4c73cc(edi_1, eax, 0xacb558, &var_78, &var_10, &var_118, &var_38, esi_1, arg2) != 0 &&
        sub_4c73cc(edi_1, edi_1[0x40], 0xacb5b8, &var_78, &var_10, &var_118, &var_38, esi_1, arg2) != 0)
    return 1

int32_t var_14_1 = 0
void* var_18_1 = &var_118
void var_108
void* var_20_1 = &var_108
int32_t* ebx_5

while (true)
    int32_t var_c_1 = 0
    int32_t var_e8[0x1c]
    int32_t var_1c
    
    if (esi_1 u> 0)
        var_1c = edi_1[0x1b] << 6 s>> 0x1f
        void* var_8_1 = var_18_1
        
        do
            int32_t edx_1 = *var_8_1
            int32_t eax_9 = edi_1[5]
            void* ecx_2 = *(eax_9 + (edx_1 << 2))
            void* eax_10 = *(eax_9 + (var_e8[var_c_1] << 2))
            bool cond:1_1
            
            if (var_1c == 0)
                if (*(ecx_2 + 4) != *(eax_10 + 4))
                    break
                
                if (*(ecx_2 + 8) != *(eax_10 + 8))
                    break
                
                if (*(ecx_2 + 0xc) != *(eax_10 + 0xc))
                    break
                
                if (*(ecx_2 + 0x10) != *(eax_10 + 0x10))
                    break
                
                cond:1_1 = (*(eax_10 + 0x3c) ^ *(ecx_2 + 0x3c)) != 0x80000
            else
                if ((*(eax_10 + 0x3c) ^ *(ecx_2 + 0x3c)) != 0x80000)
                    break
                
                cond:1_1 = *(eax_10 + 0x38) != edx_1
            
            if (cond:1_1)
                break
            
            var_c_1 += 1
            var_8_1 += 4
        while (var_c_1 u< esi_1)
    
    if (var_c_1 != esi_1)
        goto label_4cf686
    
    void* eax_13 = sub_49ec23(0x74)
    
    if (eax_13 == 0)
        ebx_5 = nullptr
    else
        ebx_5 = sub_49e789(eax_13)
    
    if (ebx_5 == 0)
        return 0x8007000e
    
    int32_t eax_19 = sub_49ec6e(ebx_5, (esi_1 & 0xfffff) | 0x70100000, esi_1 * 3, esi_1, 0)
    
    if (eax_19 s< 0)
        sub_46cb59(ebx_5, 1)
        return eax_19
    
    int32_t eax_20 = sub_49e7bf(ebx_5, edi_1[0x40])
    
    if (eax_20 s< 0)
        sub_46cb59(ebx_5, 1)
        return eax_20
    
    int32_t eax_22 = esi_1 << 2
    int32_t esi_3
    int32_t edi_3
    edi_3, esi_3 = __builtin_memcpy(ebx_5[4], *(edi_1[0x40] + 0x10), eax_22 u>> 2 << 2)
    __builtin_memcpy(edi_3, esi_3, eax_22 & 3)
    void var_f8
    int32_t esi_4
    int32_t edi_5
    edi_5, esi_4 = __builtin_memcpy(ebx_5[2], &var_f8, eax_22 u>> 2 << 2)
    __builtin_memcpy(edi_5, esi_4, eax_22 & 3)
    int32_t esi_6
    int32_t edi_8
    edi_8, esi_6 = __builtin_memcpy(ebx_5[2] + eax_22, var_20_1, eax_22 u>> 2 << 2)
    __builtin_memcpy(edi_8, esi_6, eax_22 & 3)
    int32_t var_c_2 = 0
    int32_t esi_7
    int32_t edi_11
    edi_11, esi_7 = __builtin_memcpy(ebx_5[2] + (var_28 << 3), &var_e8, eax_22 u>> 2 << 2)
    __builtin_memcpy(edi_11, esi_7, eax_22 & 3)
    int32_t eax_23 = var_24[5]
    void* ecx_24 = *(eax_23 + (*ebx_5[4] << 2))
    int32_t* ecx_25 = ebx_5[2]
    int32_t* edi_13 = *(eax_23 + (*ecx_25 << 2))
    void* edx_10 = ecx_24
    void* eax_24 = *(eax_23 + (ecx_25[var_28 * 2] << 2))
    int32_t ecx_27 = *(edx_10 + 4)
    
    if (ecx_27 != edi_13[1])
        goto label_4cf628
    
    if (*(edx_10 + 0xc) == edi_13[3])
    label_4cf63d:
        
        if ((*(var_24 + 0x6f) & 2) == 0)
            var_c_2 = 1
    else
        edx_10 = ecx_24
    label_4cf628:
        
        if (ecx_27 != *(eax_24 + 4))
            if (ecx_27 != var_24[0x22])
                goto label_4cf63d
        else if (*(edx_10 + 0xc) == *(eax_24 + 0xc) || ecx_27 != var_24[0x22])
            goto label_4cf63d
    
    if ((*(*var_24 + 0x20))(ebx_5, 0) != 0 || ((
            (*(*(var_24[4] + (*(ecx_24 + 4) << 2)) + 4) & 0x20) != 0 || var_c_2 != 0)
            && (*(var_24 + 0x6f) & 2) == 0))
        sub_46cb59(ebx_5, 1)
        esi_1 = var_28
        edi_1 = var_24
    label_4cf686:
        var_14_1 += 1
        var_18_1 += 0x10
        var_20_1 -= 0x10
        
        if (var_14_1 u< 2)
            continue
    else
        if (arg2 == 0)
            int32_t* eax_30 = var_78[0]
            var_1c = *eax_30
            *eax_30 = 0
        
        if ((*(var_24 + 0x6f) & 2) == 0)
            break
        
        if ((*(edi_13 + 0x3d) & 2) != 0)
            break
        
        char eax_31 = (*edi_13).b
        
        if ((eax_31 & 4) != 0 && (eax_31 & 0x10) != 0)
            break
        
        sub_46cb59(ebx_5, 1)
        sub_4a4195(var_24, *(var_24[0x40] + 0x3c), 0x125f, 
            "cannot match lerp because lerp factor is not _sat'd")
        *var_78[0] = var_1c
    
    return 1

if (arg2 != 0)
    int32_t eax_37 = sub_49eecd(var_24[0x40], ebx_5)
    sub_46cb59(ebx_5, 1)
    
    if (eax_37 s< 0)
        return eax_37
    
    void* esi_9 = var_24[0x40]
    int32_t eax_3 = sub_49e7bf(esi_9, esi_9)
    
    if (eax_3 s< 0)
        return eax_3
else
    int32_t eax_34 = 0
    
    if (var_10 u> 0)
        bool cond:4_1
        
        do
            int32_t* ecx_34 = var_78[eax_34]
            eax_34 += 1
            cond:4_1 = eax_34 u< var_10
            *ecx_34 = 0
        while (cond:4_1)
    
    void* ecx_36 = *(var_24[6] + (var_24[0x3f] << 2))
    
    if (ecx_36 != 0)
        sub_46cb59(ecx_36, 1)
    
    *(var_24[6] + (var_24[0x3f] << 2)) = ebx_5

return 0
