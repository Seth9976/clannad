// 函数: sub_4ada86
// 地址: 0x4ada86
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_4c = edi
void* esi = arg1
void* var_30 = esi
int32_t var_3c = 0
sub_4a3f75(arg1)
int32_t i = 0

if (*(esi + 0xc) u> 0)
    do
        int32_t* ebx_1 = *(*(esi + 0x18) + (i << 2))
        int32_t eax_2 = *ebx_1
        int32_t ecx_2 = eax_2 & 0xf0000000
        int32_t* var_2c_1 = ebx_1
        
        if (ecx_2 u>= 0x10000000 && ecx_2 u<= 0x40000000)
            int32_t k_3
            k_3:2.w = eax_2:2.w & 0xf
            uint32_t j_4 = divu.dp.d(0:(ebx_1[1]), k_3)
            int32_t eax_5 = sub_49e878(ebx_1)
            int32_t k_2 = k_3
            int32_t var_c_1 = 1
            
            if (k_3 u> 1)
                int32_t eax_7 = k_3 << 2
                int32_t* var_10_1 = 4
                int32_t var_24_1 = eax_7 + 4
                
                do
                    int32_t edx_3 = *(ebx_1[4] + var_10_1)
                    int32_t ecx_5 = *(esi + 0x14)
                    
                    if ((*(*(*(esi + 0x10) + (*(*(ecx_5 + (edx_3 << 2)) + 4) << 2)) + 4) & 0x1020)
                            == 0)
                        int32_t var_8_1 = 0
                        
                        if (var_10_1 u> 0)
                            int32_t var_20_1 = eax_7
                            
                            do
                                int32_t eax_14 = *(ebx_1[4] + (var_8_1 << 2))
                                
                                if (eax_14 != 0xffffffff && (*(
                                        *(*(esi + 0x10) + (*(*(ecx_5 + (eax_14 << 2)) + 4) << 2))
                                        + 4) & 0x1020) == 0)
                                    int32_t eax_21
                                    int32_t edx_11
                                    
                                    if (j_4 == 1)
                                        int32_t* eax_18 = ebx_1[2]
                                        int32_t edx_9 = *(eax_18 + var_10_1)
                                        
                                        if (edx_9 == 0xffffffff)
                                            edx_11 = 0xffffffff
                                        else
                                            edx_11 = *(*(ecx_5 + (edx_9 << 2)) + 0x30)
                                        
                                        int32_t eax_19 = eax_18[var_8_1]
                                        
                                        if (eax_19 == 0xffffffff)
                                            eax_21 = 0xffffffff
                                        else
                                            eax_21 = *(*(ecx_5 + (eax_19 << 2)) + 0x30)
                                    
                                    if (j_4 == 1 && edx_11 == eax_21)
                                    label_4ade3e:
                                        esi = var_30
                                        sub_4a699a(esi, *(ebx_1[4] + (var_8_1 << 2)), edx_3)
                                        k_2 -= 1
                                        *(var_10_1 + ebx_1[4]) = 0xffffffff
                                        break
                                    
                                    if (j_4 != 2)
                                    label_4adc91:
                                        
                                        if (j_4 != 3)
                                        label_4add3c:
                                            
                                            if (j_4 == 4)
                                                int32_t* eax_32 = ebx_1[2]
                                                int32_t edx_56 = *(eax_32 + var_10_1)
                                                int32_t esi_10
                                                
                                                if (edx_56 == 0xffffffff)
                                                    esi_10 = 0xffffffff
                                                else
                                                    esi_10 = *(*(ecx_5 + (edx_56 << 2)) + 0x30)
                                                
                                                int32_t edx_59 = eax_32[var_8_1]
                                                int32_t edx_61
                                                
                                                if (edx_59 == 0xffffffff)
                                                    edx_61 = 0xffffffff
                                                else
                                                    edx_61 = *(*(ecx_5 + (edx_59 << 2)) + 0x30)
                                                
                                                if (esi_10 == edx_61)
                                                    int32_t edx_63 = *(eax_32 + var_24_1)
                                                    int32_t esi_11
                                                    
                                                    if (edx_63 == 0xffffffff)
                                                        esi_11 = 0xffffffff
                                                    else
                                                        esi_11 = *(*(ecx_5 + (edx_63 << 2)) + 0x30)
                                                    
                                                    int32_t edx_66 = *(eax_32 + var_20_1)
                                                    int32_t edx_68
                                                    
                                                    if (edx_66 == 0xffffffff)
                                                        edx_68 = 0xffffffff
                                                    else
                                                        edx_68 = *(*(ecx_5 + (edx_66 << 2)) + 0x30)
                                                    
                                                    if (esi_11 == edx_68)
                                                        int32_t esi_13 = k_3 * 2
                                                        int32_t edx_71 = eax_32[var_c_1 + esi_13]
                                                        int32_t var_38_3
                                                        
                                                        if (edx_71 == 0xffffffff)
                                                            var_38_3 = 0xffffffff
                                                        else
                                                            var_38_3 =
                                                                *(*(ecx_5 + (edx_71 << 2)) + 0x30)
                                                        
                                                        int32_t edx_75 = eax_32[esi_13 + var_8_1]
                                                        int32_t edx_77
                                                        
                                                        if (edx_75 == 0xffffffff)
                                                            edx_77 = 0xffffffff
                                                        else
                                                            edx_77 =
                                                                *(*(ecx_5 + (edx_75 << 2)) + 0x30)
                                                        
                                                        if (var_38_3 == edx_77)
                                                            int32_t edx_79 = k_3 * 3
                                                            int32_t esi_17 =
                                                                eax_32[var_c_1 + edx_79]
                                                            int32_t var_38_4
                                                            
                                                            if (esi_17 == 0xffffffff)
                                                                var_38_4 = 0xffffffff
                                                            else
                                                                var_38_4 =
                                                                    *(*(ecx_5 + (esi_17 << 2)) + 0x30)
                                                            
                                                            int32_t eax_33 =
                                                                eax_32[edx_79 + var_8_1]
                                                            int32_t eax_35
                                                            
                                                            if (eax_33 == 0xffffffff)
                                                                eax_35 = 0xffffffff
                                                            else
                                                                eax_35 =
                                                                    *(*(ecx_5 + (eax_33 << 2)) + 0x30)
                                                            
                                                            if (var_38_4 == eax_35)
                                                                goto label_4ade3e
                                        else
                                            int32_t* eax_28 = ebx_1[2]
                                            int32_t edx_36 = *(eax_28 + var_10_1)
                                            int32_t esi_5
                                            
                                            if (edx_36 == 0xffffffff)
                                                esi_5 = 0xffffffff
                                            else
                                                esi_5 = *(*(ecx_5 + (edx_36 << 2)) + 0x30)
                                            
                                            int32_t edx_39 = eax_28[var_8_1]
                                            int32_t edx_41
                                            
                                            if (edx_39 == 0xffffffff)
                                                edx_41 = 0xffffffff
                                            else
                                                edx_41 = *(*(ecx_5 + (edx_39 << 2)) + 0x30)
                                            
                                            if (esi_5 == edx_41)
                                                int32_t edx_43 = *(eax_28 + var_24_1)
                                                int32_t esi_6
                                                
                                                if (edx_43 == 0xffffffff)
                                                    esi_6 = 0xffffffff
                                                else
                                                    esi_6 = *(*(ecx_5 + (edx_43 << 2)) + 0x30)
                                                
                                                int32_t edx_46 = *(eax_28 + var_20_1)
                                                int32_t edx_48
                                                
                                                if (edx_46 == 0xffffffff)
                                                    edx_48 = 0xffffffff
                                                else
                                                    edx_48 = *(*(ecx_5 + (edx_46 << 2)) + 0x30)
                                                
                                                if (esi_6 == edx_48)
                                                    int32_t esi_8 = k_3 * 2
                                                    int32_t edx_51 = eax_28[var_c_1 + esi_8]
                                                    int32_t var_38_2
                                                    
                                                    if (edx_51 == 0xffffffff)
                                                        var_38_2 = 0xffffffff
                                                    else
                                                        var_38_2 =
                                                            *(*(ecx_5 + (edx_51 << 2)) + 0x30)
                                                    
                                                    int32_t eax_29 = eax_28[esi_8 + var_8_1]
                                                    int32_t eax_31
                                                    
                                                    if (eax_29 == 0xffffffff)
                                                        eax_31 = 0xffffffff
                                                    else
                                                        eax_31 = *(*(ecx_5 + (eax_29 << 2)) + 0x30)
                                                    
                                                    if (var_38_2 == eax_31)
                                                        goto label_4ade3e
                                                    
                                                    goto label_4add3c
                                    else
                                        int32_t* eax_22 = ebx_1[2]
                                        int32_t edx_13 = *(eax_22 + var_10_1)
                                        int32_t esi_2
                                        
                                        if (edx_13 == 0xffffffff)
                                            esi_2 = 0xffffffff
                                        else
                                            esi_2 = *(*(ecx_5 + (edx_13 << 2)) + 0x30)
                                        
                                        int32_t edx_16 = eax_22[var_8_1]
                                        int32_t edx_18
                                        
                                        if (edx_16 == 0xffffffff)
                                            edx_18 = 0xffffffff
                                        else
                                            edx_18 = *(*(ecx_5 + (edx_16 << 2)) + 0x30)
                                        
                                        int32_t edx_25
                                        int32_t esi_3
                                        
                                        if (esi_2 == edx_18)
                                            int32_t edx_20 = *(eax_22 + var_24_1)
                                            
                                            if (edx_20 == 0xffffffff)
                                                esi_3 = 0xffffffff
                                            else
                                                esi_3 = *(*(ecx_5 + (edx_20 << 2)) + 0x30)
                                            
                                            int32_t edx_23 = *(eax_22 + var_20_1)
                                            
                                            if (edx_23 == 0xffffffff)
                                                edx_25 = 0xffffffff
                                            else
                                                edx_25 = *(*(ecx_5 + (edx_23 << 2)) + 0x30)
                                        
                                        if (esi_2 == edx_18 && esi_3 == edx_25)
                                            goto label_4ade3e
                                        
                                        if (eax_5 != 0)
                                            int32_t edx_27 = *(eax_22 + var_10_1)
                                            int32_t esi_4
                                            
                                            if (edx_27 == 0xffffffff)
                                                esi_4 = 0xffffffff
                                            else
                                                esi_4 = *(*(ecx_5 + (edx_27 << 2)) + 0x30)
                                            
                                            int32_t edx_30 = *(eax_22 + var_20_1)
                                            int32_t edx_32
                                            
                                            if (edx_30 == 0xffffffff)
                                                edx_32 = 0xffffffff
                                            else
                                                edx_32 = *(*(ecx_5 + (edx_30 << 2)) + 0x30)
                                            
                                            if (esi_4 == edx_32)
                                                int32_t eax_23 = *(eax_22 + var_24_1)
                                                int32_t edx_34
                                                
                                                if (eax_23 == 0xffffffff)
                                                    edx_34 = 0xffffffff
                                                else
                                                    edx_34 = *(*(ecx_5 + (eax_23 << 2)) + 0x30)
                                                
                                                int32_t eax_27
                                                
                                                if (edx_16 == 0xffffffff)
                                                    eax_27 = 0xffffffff
                                                else
                                                    eax_27 = *(*(ecx_5 + (edx_16 << 2)) + 0x30)
                                                
                                                if (edx_34 == eax_27)
                                                    goto label_4ade3e
                                                
                                                goto label_4adc91
                                
                                var_8_1 += 1
                                var_20_1 += 4
                                esi = var_30
                            while (var_8_1 u< var_c_1)
                    
                    var_c_1 += 1
                    var_24_1 += 4
                    var_10_1 = &var_10_1[1]
                while (var_c_1 u< k_3)
                
                if (k_2 u< k_3)
                    int32_t var_c_2 = 0
                    
                    if (k_3 u> 0)
                        int32_t edi_1 = 0
                        
                        do
                            int32_t* eax_40 = ebx_1[4]
                            int32_t edx_82 = var_c_2 << 2
                            int32_t ecx_9 = *(eax_40 + edx_82)
                            
                            if (ecx_9 != 0xffffffff)
                                *(eax_40 + edi_1) = ecx_9
                                
                                if (j_4 u> 0)
                                    uint32_t j_2 = j_4
                                    int32_t ecx_10 = edi_1
                                    uint32_t j
                                    
                                    do
                                        int32_t* eax_41 = ebx_1[2]
                                        int32_t ebx_2 = *(eax_41 + edx_82)
                                        edx_82 += eax_7
                                        *(eax_41 + ecx_10) = ebx_2
                                        ecx_10 += eax_7
                                        j = j_2
                                        j_2 -= 1
                                        ebx_1 = var_2c_1
                                    while (j != 1)
                                
                                edi_1 += 4
                            
                            var_c_2 += 1
                        while (var_c_2 u< k_3)
                    
                    if (j_4 u> 1)
                        int32_t ecx_11 = eax_7
                        int32_t esi_22 = k_2 << 2
                        int32_t var_20_2 = ecx_11
                        int32_t var_24_2 = esi_22
                        int32_t j_3 = j_4 - 1
                        int32_t j_1
                        
                        do
                            if (k_2 u> 0)
                                int32_t edx_83 = var_24_2
                                int32_t k_1 = k_2
                                int32_t k
                                
                                do
                                    int32_t* eax_44 = ebx_1[2]
                                    *(eax_44 + edx_83) = *(eax_44 + ecx_11)
                                    ebx_1 = var_2c_1
                                    ecx_11 += 4
                                    edx_83 += 4
                                    k = k_1
                                    k_1 -= 1
                                while (k != 1)
                            
                            ecx_11 = var_20_2 + eax_7
                            var_24_2 += esi_22
                            j_1 = j_3
                            j_3 -= 1
                            var_20_2 = ecx_11
                        while (j_1 != 1)
                    
                    *ebx_1 ^= (*ebx_1 ^ k_2) & 0xfffff
                    ebx_1[1] = k_2 * j_4
                    ebx_1[3] = k_2
                    var_3c = 1
        
        i += 1
        esi = var_30
    while (i u< *(esi + 0xc))
    
    if (var_3c != 0)
        sub_4a3f8e(esi)
        return 0

return 1
