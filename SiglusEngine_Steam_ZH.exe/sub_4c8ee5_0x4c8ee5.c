// 函数: sub_4c8ee5
// 地址: 0x4c8ee5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_48 = 0
int32_t* edx = *(arg1 + 0x100)
int32_t edi
int32_t var_280 = edi
int32_t var_44 = 1
int32_t var_40 = 2
int32_t var_3c = 3

if ((*edx & 0xfffff) != 1)
    return 1

if ((*(*(*(arg1 + 0x10) + (*(*(*(arg1 + 0x14) + (*edx[4] << 2)) + 4) << 2)) + 4) & 0x20) == 0)
    int32_t eax_8 = *edx
    int32_t var_18_2 = eax_8 & 0xfffff
    
    if (var_18_2 u<= 1 && (eax_8 & 0xfff00000) == 0x10500000)
        int32_t var_28_1 = 0
        
        while (true)
            int32_t var_20_1 = 0
            
            while (true)
                int32_t var_1d8[0x27]
                __builtin_memset(&var_1d8, 0xffffffff, 0xa0)
                int32_t ebx_2 = 0
                void var_278
                __builtin_memset(&var_278, 0xffffffff, 0xa0)
                int32_t var_14 = 0
                int32_t var_c_1 = 0
                int32_t var_88[0x10]
                
                for (int32_t i = 0; i u< 1; )
                    int32_t i_5
                    
                    if (var_20_1 == 0)
                        i_5 = i
                    else
                        i_5 = 1 - i
                    
                    int32_t esi_2 = edx[2]
                    int32_t ecx = *((i_5 << 2) + &data_acc424)
                    int32_t* edx_1 = esi_2 + (ebx_2 << 2)
                    
                    if (ecx u>= 0x10)
                        int32_t j = 0
                        int32_t __saved_ebp
                        void* ecx_8 = &(&__saved_ebp)[(ecx - 0x10) * 4 - 0x75]
                        
                        do
                            int32_t edx_2 = (&var_48)[j]
                            
                            if (edx_2 u>= var_18_2)
                                *ecx_8 = 0xffffffff
                            else
                                *ecx_8 = *(esi_2 + ((edx_2 + ebx_2) << 2))
                            
                            j += 1
                            ecx_8 += 4
                        while (j u< 4)
                    else
                        int32_t eax_12 = *(*(*(arg1 + 0x14) + (*edx_1 << 2)) + 0x48)
                        void var_98
                        int32_t eax_13
                        int32_t ecx_1
                        int32_t* edi_4
                        
                        if (eax_12 != 0xffffffff)
                            ecx_1 = ecx << 5
                            edi_4 = *(*(arg1 + 0x18) + (eax_12 << 2))
                            eax_13 = sub_4c721b(arg1, edi_4, edx_1, var_18_2, &var_48, &var_98, 
                                *(ecx_1 + 0xacc430), 0)
                        
                        if (eax_12 == 0xffffffff || eax_13 != 0)
                            var_c_1 = 1
                            break
                        
                        var_c_1 = sub_4c73cc(arg1, edi_4, ecx_1 + 0xacc418, &var_88, &var_14, 
                            &var_278, &var_98, 1, eax_13)
                    
                    if (var_c_1 == 1)
                        break
                    
                    i += 1
                    ebx_2 += var_18_2
                
                int32_t ecx_9
                ecx_9.b = var_20_1 != 0
                
                if (*((ecx_9 << 2) + &data_acc424) u>= 0x10)
                    int32_t var_8_1 = 0
                    
                    if (var_14 u> 0)
                        do
                            int32_t edi_5 = 0
                            
                            if (var_18_2 u> 0)
                                void* edx_4 = var_88[var_8_1]
                                int32_t ebx_3 = *(edx_4 + 0xc)
                                
                                do
                                    int32_t var_1c_1 = 0
                                    
                                    if (ebx_3 u> 0)
                                        int32_t* ecx_10 = *(edx_4 + 0x10)
                                        
                                        while (*(edx[2] + (edi_5 << 2)) != *ecx_10)
                                            var_1c_1 += 1
                                            ecx_10 = &ecx_10[1]
                                            
                                            if (var_1c_1 u>= ebx_3)
                                                goto label_4c90e0
                                        
                                        var_c_1 = 1
                                        break
                                    
                                label_4c90e0:
                                    edi_5 += 1
                                while (edi_5 u< var_18_2)
                            
                            var_8_1 += 1
                        while (var_8_1 u< var_14)
                
                int32_t var_138
                
                if (var_c_1 != 0)
                label_4c9259:
                    var_20_1 += 1
                    
                    if (var_20_1 u< 1)
                        continue
                    else
                        if (var_c_1 == 0)
                            goto label_4c9281
                        
                        var_28_1 += 1
                        
                        if (var_28_1 u< 1)
                            break
                else
                    if (var_28_1 == 0)
                        int32_t eax_21 = 0
                        int32_t var_1c_2 = 0
                        
                        if (var_14 u> 0)
                            do
                                int32_t eax_23 = *(var_88[eax_21] + 0xc)
                                int32_t var_8_2 = 0
                                
                                if (eax_23 u> 0)
                                    do
                                        int32_t i_6 = *(arg1 + 0xc)
                                        
                                        if (i_6 u> 0)
                                            int32_t* ecx_12 = *(arg1 + 0x18)
                                            int32_t* var_30_1 = ecx_12
                                            int32_t i_4 = i_6
                                            int32_t i_1
                                            
                                            do
                                                int32_t* ecx_13 = *ecx_12
                                                
                                                if (ecx_13 != 0 && *ecx_13 != 0)
                                                    int32_t j_5 = ecx_13[1]
                                                    int32_t var_2c_1 = 0
                                                    
                                                    if (j_5 u> 0)
                                                        int32_t esi_5 = *(*(var_88[var_1c_2] + 0x10)
                                                            + (var_8_2 << 2))
                                                        int32_t* edx_6 = ecx_13[2]
                                                        int32_t j_3 = j_5
                                                        int32_t j_1
                                                        
                                                        do
                                                            int32_t edi_6 = *edx_6
                                                            
                                                            if (edi_6 == esi_5 || *(
                                                                    *(*(arg1 + 0x14) + (edi_6 << 2)) + 0x38)
                                                                    == esi_5)
                                                                var_2c_1 = 1
                                                            
                                                            edx_6 = &edx_6[1]
                                                            j_1 = j_3
                                                            j_3 -= 1
                                                        while (j_1 != 1)
                                                    
                                                    int32_t eax_27
                                                    
                                                    eax_27 = ecx_13 != edx ? var_2c_1 : 0
                                                    
                                                    if (eax_27 != 0)
                                                        int32_t edx_7 = 0
                                                        
                                                        do
                                                            if (ecx_13 == var_88[edx_7])
                                                                eax_27 = 0
                                                            
                                                            edx_7 += 1
                                                        while (edx_7 u< var_14)
                                                        
                                                        if (eax_27 != 0)
                                                            var_c_1 = 1
                                                
                                                ecx_12 = &var_30_1[1]
                                                i_1 = i_4
                                                i_4 -= 1
                                                var_30_1 = ecx_12
                                            while (i_1 != 1)
                                        
                                        var_8_2 += 1
                                    while (var_8_2 u< eax_23)
                                
                                eax_21 = var_1c_2 + 1
                                var_1c_2 = eax_21
                            while (eax_21 u< var_14)
                        
                        for (int32_t i_2 = 0; i_2 u< 0x28; i_2 += 1)
                            int32_t eax_31 = var_1d8[i_2]
                            
                            if (eax_31 != 0xffffffff)
                                int32_t edi_8 = 0
                                
                                if (var_14 u> 0)
                                    do
                                        void* ecx_17 = var_88[edi_8]
                                        int32_t j_4 = *(ecx_17 + 0xc)
                                        
                                        if (j_4 u> 0)
                                            int32_t* ecx_18 = *(ecx_17 + 0x10)
                                            int32_t j_2
                                            
                                            do
                                                int32_t esi_6 = *ecx_18
                                                
                                                if (eax_31 == esi_6 ||
                                                        *(*(*(arg1 + 0x14) + (eax_31 << 2)) + 0x38)
                                                        == esi_6)
                                                    var_c_1 = 1
                                                
                                                ecx_18 = &ecx_18[1]
                                                j_2 = j_4
                                                j_4 -= 1
                                            while (j_2 != 1)
                                        
                                        edi_8 += 1
                                    while (edi_8 u< var_14)
                        
                        if (var_c_1 == 0)
                            goto label_4c9281
                        
                        goto label_4c9259
                    
                label_4c9281:
                    var_88[var_14] = edx
                    
                    for (int32_t i_3 = 0; i_3 u< 0xa0; i_3 += 4)
                        int32_t ecx_20 = *(&var_1d8 + i_3)
                        
                        if (ecx_20 != 0xffffffff)
                            *(&var_138 + i_3) = ecx_20
                        else
                            ecx_20 = *(&var_278 + i_3)
                            
                            if (ecx_20 != 0xffffffff)
                                *(&var_138 + i_3) = ecx_20
                    
                    var_c_1 = 0
                
                if (var_c_1 != 0)
                    return var_c_1
                
                void* eax_33 = sub_49ec23(0x74)
                int32_t* ebx_7
                
                if (eax_33 == 0)
                    ebx_7 = nullptr
                else
                    ebx_7 = sub_49e789(eax_33)
                
                if (ebx_7 == 0)
                    return 0x8007000e
                
                int32_t esi_7 = sub_49ec6e(ebx_7, 0x70d00001, 2, 1, 0)
                int32_t* ecx_23 = ebx_7
                
                if (esi_7 s>= 0)
                    esi_7 = sub_49e7bf(ecx_23, *(arg1 + 0x100))
                    
                    if (esi_7 s>= 0)
                        void* eax_38 = *(arg1 + 0x100)
                        int32_t ecx_25 = *(eax_38 + 0xc) << 2
                        int32_t esi_9
                        int32_t edi_10
                        edi_10, esi_9 =
                            __builtin_memcpy(ebx_7[4], *(eax_38 + 0x10), ecx_25 u>> 2 << 2)
                        __builtin_memcpy(edi_10, esi_9, ecx_25 & 3)
                        int32_t var_128
                        *ebx_7[2] = var_128
                        *(ebx_7[2] + 4) = var_138
                        esi_7 = sub_49eecd(*(arg1 + 0x100), ebx_7)
                    
                    ecx_23 = ebx_7
                
                sub_46cb59(ecx_23, 1)
                return esi_7

return 1
