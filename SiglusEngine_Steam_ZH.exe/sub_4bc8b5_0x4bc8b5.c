// 函数: sub_4bc8b5
// 地址: 0x4bc8b5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_2c = 0
int32_t edi
int32_t var_94 = edi
int32_t var_4c = 0
void var_48
void* edi_1 = &var_48
*edi_1 = 0
*(edi_1 + 4) = 0
int32_t result

if (arg3 u<= 0)
label_4bce3e:
    result = 0
else
    int32_t* var_18_1 = arg2
    
    while (true)
        int32_t* edx_1 = *var_18_1
        
        if (edx_1 != 0)
            int32_t eax_3 = *edx_1
            int32_t ecx_1 = eax_3 & 0xfffff
            int32_t esi_1 = ecx_1
            
            if ((eax_3 & 0xfff00000) == 0x60000000)
                ecx_1 = 1
            
            if (ecx_1 == arg5 && (*edx_1 & 0xfff00000) != 0x11000000)
                int32_t var_c_1 = 0
                int32_t var_8_1 = 0
                int32_t var_7c
                int32_t var_58[0x2]
                int32_t* var_40
                int32_t __saved_ebp
                
                if (arg5 u<= 0)
                label_4bca06:
                    int32_t var_8_2 = 0
                    void* const var_a4_6
                    void* const var_a0_5
                    int32_t var_a0_6
                    char const* const var_9c_3
                    int32_t var_9c_4
                    char* var_98_10
                    int32_t var_70[0x3]
                    int32_t var_64[0x3]
                    int32_t var_3c[0x3]
                    
                    if (arg5 u> 0)
                        while (true)
                            int32_t eax_15 = *(arg1 + 0x4c)
                            int32_t var_20_1 = eax_15
                            
                            if (eax_15 u< *(arg1 + 0x224))
                                int32_t* var_14_2 = *(arg1 + 0x230) + (eax_15 << 2)
                                
                                while (true)
                                    int32_t* esi_4 = *var_14_2
                                    int32_t* var_10_2 = esi_4
                                    
                                    if (esi_4 != 0)
                                        int32_t* ecx_11 = *var_18_1
                                        
                                        if (ecx_11 != 0 && *esi_4 != 0)
                                            int32_t edx_2 = *ecx_11
                                            int32_t eax_17 = edx_2 & 0xfffff
                                            int32_t var_24_1 = ecx_11[1]
                                            
                                            if (edx_2 == 0x72d00003)
                                                var_24_1 = 6
                                            
                                            int32_t var_c_2 = eax_17
                                            
                                            if (eax_17 u< var_24_1)
                                                int32_t var_1c_2 = esi_4[1]
                                                
                                                while (true)
                                                    int32_t var_28_1 = 0
                                                    
                                                    if (var_1c_2 u> 0)
                                                        int32_t edx_4 =
                                                            *(ecx_11[2] + (var_c_2 << 2))
                                                        int32_t* eax_20 = esi_4[2]
                                                        
                                                        while (true)
                                                            int32_t edi_6 = *eax_20
                                                            
                                                            if (edi_6 != edx_4)
                                                                esi_4 = var_10_2
                                                                
                                                                if (*(*(*(arg1 + 0x14) + (edi_6 << 2))
                                                                        + 0x38) != edx_4)
                                                                    int32_t esi_7 = esi_4[1]
                                                                    var_28_1 += 1
                                                                    eax_20 = &eax_20[1]
                                                                    var_1c_2 = esi_7
                                                                    esi_4 = var_10_2
                                                                    
                                                                    if (var_28_1 u>= esi_7)
                                                                        goto label_4bcac6
                                                                    
                                                                    continue
                                                            
                                                            var_98_10 = "unable to match texm "
                                                            "because computed texcoord is used in 
                                                                shader"
                                                            var_9c_4 = 0x11ac
                                                            var_a0_5 = esi_4[0xf]
                                                            break
                                                        
                                                        break
                                                    
                                                label_4bcac6:
                                                    var_c_2 += 1
                                                    
                                                    if (var_c_2 u>= var_24_1)
                                                        goto label_4bcad1
                                                
                                                goto label_4bce6e
                                            
                                        label_4bcad1:
                                            eax_15 = var_20_1
                                    
                                    var_14_2 = &var_14_2[1]
                                    eax_15 += 1
                                    var_20_1 = eax_15
                                    
                                    if (eax_15 u>= *(arg1 + 0x224))
                                        break
                            
                            if (var_8_2 u>= 1)
                                int32_t eax_22 = (&var_40)[var_8_2]
                                
                                if (eax_22 u<= var_7c || var_3c[var_8_2] != eax_22 + 1)
                                    uint32_t var_98_11 = zx.d((*(arg1 + 0xc8)).b)
                                    var_9c_3 = "unable to match texm* because source inputs are not "
                                    "in appropriate texture coordinates. See ps_1_% assembly "
                                    "reference for more information"
                                    var_a0_6 = 0x11ad
                                    var_a4_6 = nullptr
                                    goto label_4bced7
                            
                            int32_t ecx_13 = *(arg1 + 0x14)
                            int32_t eax_25 = *(var_58[var_8_2] + 8)
                            
                            if (*(*(ecx_13 + (*(eax_25 + (var_70[var_8_2] << 2)) << 2)) + 0x3c)
                                    != 0)
                                var_98_10 = "cannot match to texm* because texm* cannot have source "
                                "modifiers on input texcoord"
                                var_9c_4 = 0x11ae
                            else
                                int32_t eax_28 =
                                    *(*(ecx_13 + (*(eax_25 + (var_64[var_8_2] << 2)) << 2)) + 0x3c)
                                
                                if (eax_28 == 0 || eax_28 == 0x60000)
                                    void* eax_29 = sub_49ec23(0x74)
                                    int32_t* ecx_15
                                    
                                    if (eax_29 == 0)
                                        ecx_15 = nullptr
                                    else
                                        ecx_15 = sub_49e789(eax_29)
                                    
                                    (&var_4c)[var_8_2] = ecx_15
                                    
                                    if (ecx_15 == 0)
                                        result = 0x8007000e
                                        goto label_4bce40
                                    
                                    int32_t var_a4_4
                                    int32_t var_a0_4
                                    int32_t var_9c_1
                                    int32_t eax_38
                                    
                                    if (var_8_2 != arg5 - 1)
                                        int32_t var_98_4 = 0
                                        int32_t eax_39
                                        eax_39.b = arg5 != 3
                                        var_9c_1 = 0
                                        var_a0_4 = 6
                                        eax_38 = ((eax_39 - 1) & 0x200000) + 0x72200003
                                    label_4bcbf3:
                                        var_a4_4 = eax_38
                                    label_4bcbf9:
                                        result = sub_49ec6e(ecx_15, var_a4_4, var_a0_4, var_9c_1, 0)
                                        
                                        if (result s< 0)
                                            goto label_4bce40
                                        
                                        var_8_2 += 1
                                        
                                        if (var_8_2 u>= arg5)
                                            goto label_4bcc15
                                        
                                        continue
                                    
                                    int32_t eax_34 = **var_18_1
                                    
                                    if (eax_34 == 0x72d00003)
                                        if (arg5 != 3)
                                            result = 1
                                            goto label_4bce40
                                        
                                        int32_t var_98_1 = 0
                                        var_9c_1 = 4
                                        var_a0_4 = 9
                                        var_a4_4 = 0x72a00003
                                        goto label_4bcbf9
                                    
                                    if (eax_34 == 0x72c00003)
                                        if (arg5 != 3)
                                            result = 1
                                            goto label_4bce40
                                        
                                        int32_t var_98_2 = 0
                                        var_9c_1 = 4
                                        var_a0_4 = 6
                                        var_a4_4 = 0x72900003
                                        goto label_4bcbf9
                                    
                                    int32_t var_98_3 = 0
                                    var_9c_1 = 4
                                    var_a0_4 = 6
                                    
                                    if (arg5 == 1)
                                        var_a4_4 = 0x72b00003
                                        goto label_4bcbf9
                                    
                                    int32_t eax_35
                                    eax_35.b = arg5 != 3
                                    eax_38 = ((eax_35 - 1) & 0x200000) + 0x72300003
                                    goto label_4bcbf3
                                else
                                    var_98_10 = "cannot match to texm* because texm* can only have "
                                    "bx2 modifier on input texload"
                                    var_9c_4 = 0x11af
                            
                            var_a0_5 = nullptr
                            break
                        
                        goto label_4bce6e
                    
                label_4bcc15:
                    int32_t var_8_3 = 0
                    
                    if (arg5 u> 0)
                        do
                            int32_t var_14_3 = 0
                            void* ecx_16 = var_58[var_8_3]
                            void* edi_7 = (&var_4c)[var_8_3]
                            int32_t var_88[0x3]
                            void* ecx_17 = var_88[var_8_3]
                            int32_t* i = 0xc
                            int32_t var_24_2 = var_64[var_8_3] << 2
                            int32_t var_20_2 = var_70[var_8_3] << 2
                            
                            do
                                *(i + *(edi_7 + 8) - 0xc) = *(var_20_2 + *(ecx_16 + 8))
                                *(i + *(edi_7 + 8)) = *(var_24_2 + *(ecx_16 + 8))
                                int32_t ecx_22 = *(arg1 + 0x14)
                                int32_t eax_54 = *(edi_7 + 8)
                                int32_t* edx_13 = *(ecx_22 + (*(eax_54 + i - 0xc) << 2))
                                void* eax_56 = *(ecx_22 + (*(i + eax_54) << 2))
                                int32_t var_98_5 = ecx_22
                                int32_t var_9c_2 = ecx_22
                                var_9c_2.q = fconvert.d(float.t(0))
                                int32_t eax_57 = sub_49f544(arg1, *(arg1 + 0x80), 0, 0, var_9c_2)
                                int32_t* ecx_25 = *(*(arg1 + 0x14) + (eax_57 << 2))
                                *(i + *(edi_7 + 8)) = eax_57
                                sub_49f070(edx_13, 
                                    *(*(arg1 + 0x14) + (*(i + *(ecx_17 + 8) - 0xc) << 2)))
                                int32_t eax_62 = *(eax_56 + 0x3c)
                                int32_t* eax_63 = var_40
                                sub_49f070(ecx_25, 
                                    *(*(arg1 + 0x14)
                                        + (*(eax_63[2] + ((*eax_63 & 0xfffff) << 2)) << 2)))
                                ecx_25[4] = var_14_3
                                ecx_25[0xf] = eax_62
                                int32_t* eax_68 = *var_18_1
                                
                                if (*eax_68 == 0x72d00003 && var_8_3 == arg5 - 1)
                                    *(i + *(edi_7 + 8) + 0xc) = *(i + eax_68[2] + 0xc)
                                
                                var_14_3 += 1
                                var_20_2 += 4
                                var_24_2 += 4
                                i = &i[1]
                            while (i u< 0x18)
                            
                            var_8_3 += 1
                        while (var_8_3 u< arg5)
                    
                    void var_50
                    void* ecx_38 = *(&var_50 + (arg5 << 2))
                    
                    for (int32_t* i_1 = nullptr; i_1 u< 0x10; i_1 = &i_1[1])
                        *(i_1 + *(ecx_38 + 0x10)) = *(i_1 + *(*var_18_1 + 0x10))
                    
                    int32_t eax_73 = 0
                    
                    if (arg5 u> 0)
                        while (*(arg4 + (var_3c[eax_73] << 2)) == 0)
                            eax_73 += 1
                            
                            if (eax_73 u>= arg5)
                                goto label_4bcd9d
                        
                        result = 0x80004005
                        break
                    
                label_4bcd9d:
                    void* eax_77 = *(*(arg1 + 0x14) + (**(*var_18_1 + 8) << 2))
                    void* esi_14 = *(*(arg1 + 0x10) + (*(eax_77 + 4) << 2))
                    int16_t ecx_42 = (*(esi_14 + 4)).w
                    
                    if (ecx_42.b s>= 0)
                        var_98_10 = "internal error: unexpected argument type"
                        var_9c_4 = 0x12cc
                        var_a0_5 = nullptr
                    label_4bce6e:
                        sub_4a4100(arg1, var_a0_5, var_9c_4, var_98_10)
                        result = 0x80004005
                        break
                    
                    int32_t ecx_43 = (&var_40)[arg5]
                    
                    if ((ecx_42 & 0x840) == 0)
                        *(eax_77 + 0xc) = ecx_43
                    else if (ecx_43 != *(eax_77 + 0xc))
                        int32_t var_98_8 = (&var_40)[arg5]
                        
                        if ((*(esi_14 + 5) & 8) == 0)
                            var_9c_3 =
                                "cannot bind sampler to sampler array, sampler must be bound to %i"
                        else
                            var_9c_3 = "cannot bind sampler to user specified stage, sampler must be bound to %i"
                        
                        var_a0_6 = 0x11a3
                        var_a4_6 = *(arg2[var_2c] + 0x3c)
                    label_4bced7:
                        sub_4a4100(arg1, var_a4_6, var_a0_6, var_9c_3)
                        result = 0x80004005
                        break
                        break
                    
                    int32_t var_8_4 = 0
                    
                    if (arg5 u> 0)
                        do
                            void* eax_81 = (&__saved_ebp)[var_8_4 - 0x12]
                            *(arg4 + (var_3c[var_8_4] << 2)) = eax_81
                            result = sub_49f431(arg1, eax_81)
                            
                            if (result s< 0)
                                goto label_4bce40
                            
                            *var_18_1 = 0
                            (&__saved_ebp)[var_8_4 - 0x12] = nullptr
                            var_8_4 += 1
                        while (var_8_4 u< arg5)
                else
                    int32_t var_10_1 = edx_1[2] + (esi_1 << 2)
                    
                    do
                        int32_t* eax_9 =
                            sub_4bc188(arg1, *(arg1 + 0x22c), *(arg1 + 0x220), var_10_1, 1, 0)
                        int32_t* var_14_1 = eax_9
                        var_58[var_8_1] = eax_9
                        
                        if (eax_9 == 0 || *eax_9 != 0x50000003)
                            var_c_1 = 1
                        else
                            sub_4bc280(arg1, *(arg1 + 0x22c), *(arg1 + 0x220), var_14_1, 
                                &(&__saved_ebp)[var_8_1 - 0xe], &(&__saved_ebp)[var_8_1 - 0x1b], 
                                &(&__saved_ebp)[var_8_1 - 0x21], 0, 0)
                            sub_4bc280(arg1, arg4, 4, var_14_1, &(&__saved_ebp)[var_8_1 - 0x1e], 
                                &(&__saved_ebp)[var_8_1 - 0x18], &var_40, 1, 0)
                            
                            if ((&__saved_ebp)[var_8_1 - 0x21] == 0
                                    || (&__saved_ebp)[var_8_1 - 0x1e] != var_7c || var_40 == 0)
                                var_c_1 = 1
                        
                        var_8_1 += 1
                        var_10_1 += 4
                    while (var_8_1 u< arg5)
                    
                    if (var_c_1 == 0)
                        goto label_4bca06
        
        var_2c += 1
        var_18_1 = &var_18_1[1]
        
        if (var_2c u>= arg3)
            goto label_4bce3e

label_4bce40:

for (int32_t i_2 = 0; i_2 u< 3; i_2 += 1)
    void* ecx_49 = (&var_4c)[i_2]
    
    if (ecx_49 != 0)
        sub_46cb59(ecx_49, 1)

return result
