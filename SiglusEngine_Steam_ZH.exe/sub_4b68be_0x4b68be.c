// 函数: sub_4b68be
// 地址: 0x4b68be
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_12c = edi

if (zx.d((*(arg1 + 0xc8)).w) u>= 0x104)
    return 1

int32_t* eax_3 = *(arg1 + 0x100)
int32_t i = 0
int32_t var_1c = 0
int32_t var_48 = 0
int32_t var_44_1 = 1
int32_t var_40_1 = 2
int32_t var_3c_1 = 3

if ((*eax_3 & 0xfffff) == 3)
    int32_t var_128[0x10]
    void var_e8
    int32_t eax_6
    
    do
        eax_6 = sub_4c73cc(arg1, *(arg1 + 0x100), (&data_b59668)[i], &var_128, &var_1c, &var_e8, 
            &var_48, 3, 0)
        
        if (eax_6 == 0)
            break
        
        i += 1
    while (i u< 9)
    
    int32_t var_14_1 = 0
    int32_t var_18_1 = 0
    
    if (i u> 4)
        var_18_1 = 1
    
    int32_t eax_7
    
    if (eax_6 != 0)
        int32_t i_1
        
        for (i_1 = 0; i_1 u< 3; i_1 += 1)
            eax_7 = sub_4c73cc(arg1, *(arg1 + 0x100), (&data_b5968c)[i_1], &var_128, &var_1c, 
                &var_e8, &var_48, 3, 0)
            
            if (eax_7 == 0)
                break
        
        var_18_1 = 0
        
        if (i_1 u> 1)
            var_18_1 = 1
        
        var_14_1 = 1
    
    if (eax_6 == 0 || eax_7 == 0)
        int32_t i_2 = 0
        int32_t ebx_1 = *(arg1 + 0x14)
        int32_t var_38[0x3]
        void* var_20_1 = 0xc - &var_38
        int32_t var_2c[0x3]
        
        do
            int32_t var_d8[0xc]
            int32_t esi_1 = var_d8[i_2]
            void* eax_8 = *(ebx_1 + (esi_1 << 2))
            
            if (*(eax_8 + 0x10) != i_2)
                return 1
            
            int32_t eax_10
            void* edx_4
            int32_t esi_2
            int32_t var_a8[0x18]
            int32_t __saved_ebp
            void* ebx_3
            int32_t edi_4
            bool cond:6_1
            
            if (arg2 == 0)
                void* edx_7
                
                if (var_18_1 == 0)
                    int32_t eax_14 = *(eax_8 + 0x48)
                    
                    if (eax_14 == 0xffffffff)
                        return 1
                    
                    int32_t* eax_15 = *(*(arg1 + 0x18) + (eax_14 << 2))
                    
                    if (*eax_15 != 0x20500003)
                        return 1
                    
                    int32_t eax_16 = eax_15[2]
                    int32_t edx_9 = *((i_2 << 2) + eax_16)
                    int32_t esi_4 = *(arg1 + 0x10)
                    void* edx_10 = *(ebx_1 + (edx_9 << 2))
                    
                    if ((*(*(esi_4 + (*(edx_10 + 4) << 2)) + 5) & 2) == 0
                            || *(edx_10 + 0x10) != i_2)
                        return 1
                    
                    edx_7 = &(&__saved_ebp)[i_2 - 0xd]
                    void* ebx_4 = *(ebx_1 + (*(var_20_1 + eax_16 + edx_7) << 2))
                    
                    if ((*(*(esi_4 + (*(ebx_4 + 4) << 2)) + 5) & 1) == 0)
                        return 1
                    
                    long double x87_r7_1 = fconvert.t(-1.0)
                    long double x87_r6_1 = fconvert.t(*(ebx_4 + 0x20))
                    x87_r6_1 - x87_r7_1
                    void* eax_19
                    eax_19.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    if (p_1)
                        return 1
                    
                    *edx_7 = edx_9
                else
                    if ((*(*(*(arg1 + 0x10) + (*(eax_8 + 4) << 2)) + 5) & 2) == 0)
                        return 1
                    
                    edx_7 = &(&__saved_ebp)[i_2 - 0xd]
                    *edx_7 = esi_1
                
                edi_4 = *edx_7
                ebx_3 = &(&__saved_ebp)[i_2 - 0x2d]
                int32_t var_c_3 = edi_4
                
                if (*ebx_3 != edi_4)
                label_4b6bbe:
                    cond:6_1 = var_a8[i_2] != edi_4
                label_4b6bc5:
                    
                    if (cond:6_1)
                        return 1
                    
                    int32_t edi_11 = *ebx_3
                    esi_2 = *(ebx_3 - 0x10)
                    
                    if (edi_11 != esi_2)
                        return 1
                    
                    edx_4 = &(&__saved_ebp)[i_2 - 0x25]
                    eax_10 = *edx_4
                    
                    if (eax_10 != *(ebx_3 + 0x30) || edi_11 != eax_10)
                        return 1
                else
                    esi_2 = *(ebx_3 - 0x10)
                    
                    if (var_a8[i_2] != esi_2)
                        goto label_4b6bbe
                    
                    edx_4 = &(&__saved_ebp)[i_2 - 0x25]
                    eax_10 = *edx_4
                    
                    if (eax_10 != *(ebx_3 + 0x30) || var_a8[i_2] != eax_10)
                        goto label_4b6bbe
            else
                if (*(eax_8 + 0x48) != 0xffffffff || *(eax_8 + 4) != *(arg1 + 0x80)
                        || zx.d(*(eax_8 + 0x6d)) != i_2 + 1 || *(eax_8 + 0x6c) != 5)
                    return 1
                
                var_38[i_2] = esi_1
                
                if (var_18_1 != 0)
                    if (*(eax_8 + 0x3c) != 0)
                        return 1
                    
                    ebx_3 = &(&__saved_ebp)[i_2 - 0x2d]
                    
                    if (*ebx_3 != esi_1)
                    label_4b6ace:
                        cond:6_1 = var_a8[i_2] != var_d8[i_2]
                        goto label_4b6bc5
                    
                    int32_t edi_5 = var_a8[i_2]
                    esi_2 = *(ebx_3 - 0x10)
                    
                    if (edi_5 != esi_2)
                        goto label_4b6ace
                    
                    edx_4 = &(&__saved_ebp)[i_2 - 0x25]
                    eax_10 = *edx_4
                    
                    if (eax_10 != *(ebx_3 + 0x30) || edi_5 != eax_10)
                        goto label_4b6ace
                else
                    if (*(eax_8 + 0x3c) != 0x80000)
                        return 1
                    
                    edi_4 = *(eax_8 + 0x38)
                    ebx_3 = &(&__saved_ebp)[i_2 - 0x2d]
                    int32_t var_c_1 = edi_4
                    
                    if (*ebx_3 != edi_4)
                        goto label_4b6bbe
                    
                    esi_2 = *(ebx_3 - 0x10)
                    
                    if (var_a8[i_2] != esi_2)
                        goto label_4b6bbe
                    
                    edx_4 = &(&__saved_ebp)[i_2 - 0x25]
                    eax_10 = *edx_4
                    
                    if (eax_10 != *(ebx_3 + 0x30) || var_a8[i_2] != eax_10)
                        goto label_4b6bbe
            var_2c[i_2] = esi_2
            
            if (var_14_1 != 0 && eax_10 != *(edx_4 + 0x20))
                return 1
            
            ebx_1 = *(arg1 + 0x14)
            
            if (*(*(ebx_1 + (esi_2 << 2)) + 0x10) != i_2)
                return 1
            
            i_2 += 1
        while (i_2 u< 3)
        
        int32_t eax_26 = 0
        
        if (var_1c u> 0)
            do
                int32_t* ecx_4 = var_128[eax_26]
                eax_26 += 1
                *ecx_4 = 0
            while (eax_26 u< var_1c)
        
        void* eax_27 = sub_49ec23(0x74)
        int32_t* ebx_5
        
        if (eax_27 == 0)
            ebx_5 = nullptr
        else
            ebx_5 = sub_49e789(eax_27)
        
        if (ebx_5 == 0)
            return 0x8007000e
        
        int32_t var_144_3
        int32_t var_140_3
        
        if (arg2 == 0)
            var_140_3 = 9
            var_144_3 = 0x72d00003
        else
            var_140_3 = 6
            var_144_3 = 0x72c00003
        
        int32_t eax_30 = sub_49ec6e(ebx_5, var_144_3, var_140_3, *(*(arg1 + 0x100) + 0xc), 0)
        
        if (eax_30 s< 0)
            sub_46cb59(ebx_5, 1)
            return eax_30
        
        int32_t eax_31 = sub_49e7bf(ebx_5, *(arg1 + 0x100))
        
        if (eax_31 s>= 0)
            void* edx_11 = arg1
            void* eax_32 = *(edx_11 + 0x100)
            int32_t ecx_10 = *(eax_32 + 0xc) << 2
            int32_t esi_7
            int32_t edi_14
            edi_14, esi_7 = __builtin_memcpy(ebx_5[4], *(eax_32 + 0x10), ecx_10 u>> 2 << 2)
            __builtin_memcpy(edi_14, esi_7, ecx_10 & 3)
            
            for (int32_t* i_3 = 0xc; i_3 u< 0x18; i_3 = &i_3[1])
                *(i_3 + ebx_5[2] - 0xc) = **(*(edx_11 + 0x100) + 8)
                *(i_3 + ebx_5[2]) = *(&var_2c - 0xc + i_3)
                
                if (arg2 == 0)
                    *(i_3 + ebx_5[2] + 0xc) = *(&var_38 - 0xc + i_3)
            
            void* esi_14 = edx_11 + 0xfc
            void* ecx_16 = *(*(edx_11 + 0x18) + (*esi_14 << 2))
            
            if (ecx_16 != 0)
                sub_46cb59(ecx_16, 1)
                edx_11 = arg1
            
            *(*(edx_11 + 0x18) + (*esi_14 << 2)) = ebx_5
        else
            sub_46cb59(ebx_5, 1)
        
        return eax_31

return 1
