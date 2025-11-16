// 函数: sub_4d3501
// 地址: 0x4d3501
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg6
int32_t edi
int32_t var_b4 = edi

if (ebx == 0)
    ebx = *(arg1 + 0x100)
    arg6 = ebx

int32_t* edi_1 = *(ebx + 0x10)
int32_t edx = *(arg1 + 0x14)

if (*(arg1 + 0x88) == *(*(edx + (*edi_1 << 2)) + 4))
    int32_t* eax_2 = *(arg1 + 0x100)
    int32_t ecx_1 = *eax_2
    int32_t eax_3 = eax_2[3]
    int32_t var_10_1 = 0
    
    if ((ecx_1 & 0xfffff) == eax_3)
        int32_t var_8_1 = 0
        
        if (eax_3 u> 0)
            void* eax_5 = arg4 - edi_1
            int32_t* var_c_1 = edi_1
            void* var_14_1 = eax_5
            
            while (true)
                void* eax_7 = *(edx + (*(eax_5 + var_c_1) << 2))
                
                if (*(arg1 + 0x6c) << 0xe s>> 0x1f != 0 && (*(eax_7 + 0x3d) & 2) != 0
                        && arg2 == 0x80000)
                    var_10_1 = 1
                
                int32_t eax_8 = *(eax_7 + 0x3c)
                
                if ((0x1f0000 & eax_8) != 0 && (0x1f0000 & not.d(arg3) & eax_8) != 0)
                    if (arg2 != 0x80000)
                        return 1
                    
                    var_10_1 = 1
                
                edx = *(arg1 + 0x14)
                
                if ((*(*(edx + (*var_c_1 << 2)) + 0x3d) & 0xfe) != 0)
                    return 1
                
                if ((*(arg1 + 0x6c) & 0x10) != 0
                        && (*(*(*(arg1 + 0x10) + (*(eax_7 + 4) << 2)) + 5) & 2) != 0)
                    if ((ecx_1 & 0xfff00000) != 0x10100000)
                        return 1
                    
                    var_10_1 = 1
                
                var_8_1 += 1
                var_c_1 = &var_c_1[1]
                
                if (var_8_1 u>= *(*(arg1 + 0x100) + 0xc))
                    break
                
                eax_5 = var_14_1
        
        arg2 = nullptr
        int32_t var_a8[0x4]
        int32_t var_98[0x4]
        int32_t var_88[0x4]
        int32_t var_78[0x4]
        int32_t var_68[0x4]
        int32_t var_58[0x4]
        int32_t var_48[0x4]
        int32_t var_38[0x4]
        
        if (*(ebx + 0xc) u> 0)
            int32_t eax_17 = not.d(arg5)
            
            do
                int32_t edx_3 = *(arg1 + 0x14)
                void* eax_22 = *(edx_3 + (*((arg2 << 2) + *(ebx + 0x10)) << 2))
                int32_t __saved_ebp
                void* edx_4 = *(edx_3 + (*(&(&__saved_ebp)[arg2 - 0xd] + arg4 - &var_38) << 2))
                (&__saved_ebp)[arg2 - 0xd] = *(eax_22 + 8)
                int32_t ebx_4 = *(eax_22 + 0x48)
                var_58[arg2] = *(eax_22 + 0xc)
                var_48[arg2] = *(eax_22 + 0x10)
                var_98[arg2] = *(eax_22 + 0x14)
                var_68[arg2] = *(eax_22 + 0x18)
                int32_t edi_13 = *(eax_22 + 0x3c)
                var_88[arg2] = ebx_4
                int32_t ebx_5 = *(eax_22 + 0x68)
                var_78[arg2] = edi_13
                var_a8[arg2] = ebx_5
                int32_t ecx_19
                
                if (var_10_1 != 0)
                    ecx_19 = (edi_13 ^ arg5) | (eax_17 & edi_13)
                else
                    *(eax_22 + 4) = *(edx_4 + 4)
                    *(eax_22 + 8) = *(edx_4 + 8)
                    *(eax_22 + 0xc) = *(edx_4 + 0xc)
                    *(eax_22 + 0x10) = *(edx_4 + 0x10)
                    *(eax_22 + 0x14) = *(edx_4 + 0x14)
                    *(eax_22 + 0x18) = *(edx_4 + 0x18)
                    *(eax_22 + 0x48) = *(edx_4 + 0x48)
                    *(eax_22 + 0x68) = *(edx_4 + 0x68)
                    int32_t edx_5 = *(edx_4 + 0x3c)
                    ecx_19 = (edx_5 ^ arg5) | (edx_5 & eax_17) | edi_13
                
                arg2 += 1
                ebx = arg6
                *(eax_22 + 0x3c) = ecx_19
            while (arg2 u< *(ebx + 0xc))
        
        int32_t edi_14 = *(ebx + 0xc)
        arg3 = 0
        
        if (edi_14 u<= 0)
        label_4d374d:
            int32_t var_8_2 = 0xffffffff
            arg3 = 0
            arg2 = 0xffffffff
            
            if (edi_14 u> 0)
                int32_t* eax_27 = arg4
                int32_t edx_9 = *(arg1 + 0x14)
                void* ecx_23 = &var_38 - eax_27
                void* ecx_24 = &var_58 - eax_27
                int32_t* ebx_7 = *(ebx + 0x10) - eax_27
                void* ecx_25 = &var_48 - eax_27
                int32_t* var_24_2 = ebx_7
                int32_t var_14_2 = edi_14
                
                while (true)
                    void* edi_15 = *(edx_9 + (*(ebx_7 + eax_27) << 2))
                    void* ecx_29 = *(edx_9 + (*eax_27 << 2))
                    int32_t edi_16 = *(edi_15 + 0x54)
                    
                    if (edi_16 u< var_8_2)
                        var_8_2 = edi_16
                    
                    int32_t edi_18 = *(edi_15 + 0x58)
                    
                    if (edi_18 u> arg3)
                        arg3 = edi_18
                    
                    if (*(arg1 + 0x88) == *(ecx_29 + 4) && *(ecx_23 + eax_27) == *(ecx_29 + 8)
                            && *(ecx_24 + eax_27) == *(ecx_29 + 0xc)
                            && *(ecx_25 + eax_27) == *(ecx_29 + 0x10))
                        ecx_29 = edi_15
                    
                    int32_t* ecx_30 = *(ecx_29 + 0x50)
                    
                    if (ecx_30 u< arg2)
                        arg2 = ecx_30
                    
                    eax_27 = &eax_27[1]
                    int32_t temp1_1 = var_14_2
                    var_14_2 -= 1
                    
                    if (temp1_1 == 1)
                        break
                    
                    ebx_7 = var_24_2
                
                ebx = arg6
            
            if (arg7 != 0 || arg2 u>= arg3 || (*(arg1 + 0x6c) & 0x10000000) != 0)
                if (var_10_1 != 0)
                    int32_t* esi_1 = *(arg1 + 0x100)
                    *esi_1 = (*esi_1 & 0xfffff) | 0x10000000
                    return 0
                
                int32_t var_c_3 = var_8_2
                
                if (var_8_2 u<= arg3)
                    int32_t* var_8_3 = *(arg1 + 0x18) + (var_8_2 << 2)
                    
                    do
                        int32_t* eax_31 = *var_8_3
                        int32_t edi_26 = *eax_31
                        
                        if (edi_26 != 0)
                            int32_t ecx_32 = eax_31[2]
                            int32_t var_14_3 = 0
                            int32_t edx_11 = ecx_32 + (eax_31[1] << 2)
                            int32_t eax_34 = edi_26 & 0xfffff
                            
                            if (ecx_32 u< edx_11)
                                while (true)
                                    arg2 = nullptr
                                    arg6 = nullptr
                                    
                                    if (eax_34 u> 0)
                                        do
                                            arg7 = 0
                                            
                                            if (*(ebx + 0xc) u> 0)
                                                int32_t* edx_12 = *(ebx + 0x10)
                                                
                                                while (true)
                                                    if (*edx_12 == *(ecx_32 + (arg6 << 2)))
                                                        arg2 += 1
                                                        break
                                                    
                                                    arg7 += 1
                                                    
                                                    if (arg7 u>= *(ebx + 0xc))
                                                        break
                                                    
                                                    edx_12 = &edx_12[1]
                                            
                                            arg6 += 1
                                        while (arg6 u< eax_34)
                                        
                                        if (arg2 != 0)
                                            if (arg2 != eax_34)
                                                goto label_4d3958
                                            
                                            int32_t edx_16 = edi_26 & 0xfff00000
                                            
                                            if (edx_16 == 0x70500000)
                                                goto label_4d3958
                                            
                                            if (edx_16 == 0x70600000)
                                                goto label_4d3958
                                            
                                            if (edx_16 == 0x70700000)
                                                goto label_4d3958
                                            
                                            var_14_3 = 1
                                    
                                    ecx_32 += eax_34 << 2
                                    
                                    if (ecx_32 u>= edx_11)
                                        if (var_14_3 == 0)
                                            break
                                        
                                        if ((edi_26 & 0xf0000000) != 0x60000000)
                                            int32_t eax_36 = edi_26 & 0xfff00000
                                            
                                            if (eax_36 != 0x10d00000 && eax_36 != 0x10e00000
                                                    && eax_36 != 0x11000000)
                                                break
                                        
                                        if ((*(arg1 + 0x6e) & 0x80) == 0)
                                            goto label_4d3958
                                        
                                        break
                        
                        var_c_3 += 1
                        var_8_3 = &var_8_3[1]
                    while (var_c_3 u<= arg3)
                
                if (*(arg1 + 0x15c) == 0)
                    arg6 = nullptr
                    
                    if (*(ebx + 0xc) u> 0)
                        do
                            int32_t eax_42 = *(arg1 + 0x14)
                            int32_t* edx_18 = arg6 << 2
                            int32_t edx_19 = *(edx_18 + arg4)
                            int32_t* ecx_40 = *(eax_42 + (*(edx_18 + *(ebx + 0x10)) << 2))
                            int32_t* eax_43 = *(eax_42 + (edx_19 << 2))
                            int32_t edi_39 = eax_43[0xe]
                            
                            if (edi_39 != 0xffffffff)
                                ecx_40[0xe] = edi_39
                            else
                                ecx_40[0xe] = edx_19
                            
                            int32_t edx_20 = *eax_43
                            *ecx_40 = edx_20
                            
                            if (arg5 != 0x80000)
                                goto label_4d3a15
                            
                            if ((edx_20.b & 4) != 0)
                                *ecx_40 = (edx_20 & 0xfffffffb) | 8
                            label_4d3a15:
                                
                                if (arg5 == 0x100000)
                                    *ecx_40 |= 4
                            
                            sub_49f12c(ecx_40, eax_43)
                            arg6 += 1
                        while (arg6 u< *(ebx + 0xc))
                    
                    **(arg1 + 0x100) = 0
                    return 0
                
                *(arg1 + 0x15c) = 2
        else
            arg2 = *(ebx + 0x10)
            
            while (sub_4cf375(arg1, *arg2) != 1)
                arg3 += 1
                arg2 = &arg2[1]
                
                if (arg3 u>= edi_14)
                    goto label_4d374d
        
    label_4d3958:
        int32_t i = 0
        
        if (*(ebx + 0xc) u> 0)
            do
                void* ecx_37 = *(*(arg1 + 0x14) + (*((i << 2) + *(ebx + 0x10)) << 2))
                *(ecx_37 + 4) = *(arg1 + 0x88)
                *(ecx_37 + 8) = var_38[i]
                *(ecx_37 + 0xc) = var_58[i]
                *(ecx_37 + 0x10) = var_48[i]
                *(ecx_37 + 0x14) = var_98[i]
                *(ecx_37 + 0x18) = var_68[i]
                *(ecx_37 + 0x3c) = var_78[i]
                int32_t eax_41 = var_a8[i]
                i += 1
                *(ecx_37 + 0x48) = var_88[i]
                *(ecx_37 + 0x68) = eax_41
            while (i u< *(ebx + 0xc))

return 1
