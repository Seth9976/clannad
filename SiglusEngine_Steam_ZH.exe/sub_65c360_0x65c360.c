// 函数: sub_65c360
// 地址: 0x65c360
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_4
int32_t edx_3
edx_3:eax_4 = sx.q((arg4 - arg2) s/ 0xe)
int16_t* esi_2 = arg2 + ((eax_4 - edx_3) s>> 1) * 0xe
sub_65ca40(arg4 - 0xe, esi_2, arg2, arg4 - 0xe, arg5)
int16_t* edi_1 = &esi_2[7]
int16_t* var_c = edi_1

if (arg2 u< esi_2)
    int16_t* edx_5 = &esi_2[-5]
    
    do
        int16_t ebx_1 = edx_5[-2]
        int16_t eax_8 = *esi_2
        
        if (ebx_1 u< eax_8)
            break
        
        if (ebx_1 u<= eax_8)
            int16_t ecx_3 = edx_5[-1]
            int16_t edi_2 = edx_5[6]
            
            if (ecx_3 u< edi_2)
                break
            
            if (ecx_3 u<= edi_2)
                int16_t ecx_4 = *edx_5
                int16_t edi_3 = edx_5[7]
                
                if (ecx_4 u< edi_3)
                    break
                
                if (ecx_4 u<= edi_3)
                    int16_t ecx_5 = edx_5[1]
                    int16_t edi_4 = edx_5[8]
                    
                    if (ecx_5 u< edi_4)
                        break
                    
                    if (ecx_5 u<= edi_4)
                        int16_t ecx_6 = edx_5[2]
                        int16_t edi_5 = edx_5[9]
                        
                        if (ecx_6 u< edi_5)
                            break
                        
                        if (ecx_6 u<= edi_5)
                            int16_t ecx_7 = edx_5[3]
                            int16_t edi_6 = edx_5[0xa]
                            
                            if (ecx_7 u< edi_6)
                                break
                            
                            if (ecx_7 u<= edi_6)
                                if (edx_5[4] u< edx_5[0xb])
                                    break
                                
                                eax_8 = *esi_2
        
        if (eax_8 u< ebx_1)
            break
        
        if (eax_8 u<= ebx_1)
            int16_t eax_10 = edx_5[6]
            int16_t ecx_9 = edx_5[-1]
            
            if (eax_10 u< ecx_9)
                break
            
            if (eax_10 u<= ecx_9)
                int16_t eax_11 = edx_5[7]
                int16_t ecx_10 = *edx_5
                
                if (eax_11 u< ecx_10)
                    break
                
                if (eax_11 u<= ecx_10)
                    int16_t eax_12 = edx_5[8]
                    int16_t ecx_11 = edx_5[1]
                    
                    if (eax_12 u< ecx_11)
                        break
                    
                    if (eax_12 u<= ecx_11)
                        int16_t eax_13 = edx_5[9]
                        int16_t ecx_12 = edx_5[2]
                        
                        if (eax_13 u< ecx_12)
                            break
                        
                        if (eax_13 u<= ecx_12)
                            int16_t eax_14 = edx_5[0xa]
                            int16_t ecx_13 = edx_5[3]
                            
                            if (eax_14 u< ecx_13)
                                break
                            
                            if (eax_14 u<= ecx_13 && edx_5[0xb] u< edx_5[4])
                                break
        
        esi_2 -= 0xe
        edx_5 -= 0xe
    while (arg2 u< esi_2)
    
    edi_1 = var_c

uint32_t edx_7 = arg4

if (edi_1 u< edx_7)
    int16_t ebx_2 = *esi_2
    
    while (true)
        int16_t edx_6 = *edi_1
        
        if (edx_6 u>= ebx_2)
            if (edx_6 u> ebx_2)
            label_65c536:
                
                if (ebx_2 u>= edx_6)
                    if (ebx_2 u> edx_6)
                    label_65c595:
                        edx_7 = arg4
                        edi_1 = &edi_1[7]
                        
                        if (edi_1 u>= edx_7)
                            break
                        
                        continue
                    else
                        int16_t eax_22 = esi_2[1]
                        int16_t ecx_21 = edi_1[1]
                        
                        if (eax_22 u>= ecx_21)
                            if (eax_22 u> ecx_21)
                                goto label_65c595
                            
                            int16_t eax_23 = esi_2[2]
                            int16_t ecx_22 = edi_1[2]
                            
                            if (eax_23 u>= ecx_22)
                                if (eax_23 u> ecx_22)
                                    goto label_65c595
                                
                                int16_t eax_24 = esi_2[3]
                                int16_t ecx_23 = edi_1[3]
                                
                                if (eax_24 u>= ecx_23)
                                    if (eax_24 u> ecx_23)
                                        goto label_65c595
                                    
                                    int16_t eax_25 = esi_2[4]
                                    int16_t ecx_24 = edi_1[4]
                                    
                                    if (eax_25 u>= ecx_24)
                                        if (eax_25 u> ecx_24)
                                            goto label_65c595
                                        
                                        int16_t eax_26 = esi_2[5]
                                        int16_t ecx_25 = edi_1[5]
                                        
                                        if (eax_26 u>= ecx_25
                                                && (eax_26 u> ecx_25 || esi_2[6] u>= edi_1[6]))
                                            goto label_65c595
            else
                int16_t eax_16 = edi_1[1]
                int16_t ecx_15 = esi_2[1]
                
                if (eax_16 u>= ecx_15)
                    if (eax_16 u> ecx_15)
                        goto label_65c536
                    
                    int16_t eax_17 = edi_1[2]
                    int16_t ecx_16 = esi_2[2]
                    
                    if (eax_17 u>= ecx_16)
                        if (eax_17 u> ecx_16)
                            goto label_65c536
                        
                        int16_t eax_18 = edi_1[3]
                        int16_t ecx_17 = esi_2[3]
                        
                        if (eax_18 u>= ecx_17)
                            if (eax_18 u> ecx_17)
                                goto label_65c536
                            
                            int16_t eax_19 = edi_1[4]
                            int16_t ecx_18 = esi_2[4]
                            
                            if (eax_19 u>= ecx_18)
                                if (eax_19 u> ecx_18)
                                    goto label_65c536
                                
                                int16_t eax_20 = edi_1[5]
                                int16_t ecx_19 = esi_2[5]
                                
                                if (eax_20 u>= ecx_19
                                        && (eax_20 u> ecx_19 || edi_1[6] u>= esi_2[6]))
                                    goto label_65c536
        
        edx_7 = arg4
        break
    
    var_c = edi_1

int16_t* eax_28 = esi_2
int16_t* ebx_3 = edi_1
int16_t* var_8 = eax_28

while (true)
    int16_t* var_10_1 = ebx_3
    
    while (true)
        if (ebx_3 u< edx_7)
            void* var_10_2 = &edi_1[-7]
            
            do
                edx_7 = zx.d(*esi_2)
                int16_t eax_30 = *ebx_3
                
                if (edx_7.w u>= eax_30)
                    if (edx_7.w u> eax_30)
                        goto label_65c681
                    
                    int16_t edi_7 = ebx_3[1]
                    int16_t ecx_27 = esi_2[1]
                    edi_1 = var_c
                    
                    if (ecx_27 u>= edi_7)
                        if (ecx_27 u> edi_7)
                            goto label_65c681
                        
                        int16_t edi_8 = ebx_3[2]
                        int16_t ecx_28 = esi_2[2]
                        edi_1 = var_c
                        
                        if (ecx_28 u>= edi_8)
                            if (ecx_28 u> edi_8)
                                goto label_65c681
                            
                            int16_t edi_9 = ebx_3[3]
                            int16_t ecx_29 = esi_2[3]
                            edi_1 = var_c
                            
                            if (ecx_29 u>= edi_9)
                                if (ecx_29 u> edi_9)
                                    goto label_65c681
                                
                                int16_t edi_10 = ebx_3[4]
                                int16_t ecx_30 = esi_2[4]
                                edi_1 = var_c
                                
                                if (ecx_30 u>= edi_10)
                                    if (ecx_30 u> edi_10)
                                        goto label_65c681
                                    
                                    int16_t edi_11 = ebx_3[5]
                                    int16_t ecx_31 = esi_2[5]
                                    edi_1 = var_c
                                    
                                    if (ecx_31 u>= edi_11)
                                        if (ecx_31 u> edi_11)
                                            goto label_65c681
                                        
                                        if (esi_2[6] u>= ebx_3[6])
                                            eax_30 = *ebx_3
                                        label_65c681:
                                            
                                            if (eax_30 u< edx_7.w)
                                                break
                                            
                                            if (eax_30 u<= edx_7.w)
                                                int16_t eax_32 = ebx_3[1]
                                                int16_t ecx_33 = esi_2[1]
                                                
                                                if (eax_32 u< ecx_33)
                                                    break
                                                
                                                if (eax_32 u<= ecx_33)
                                                    int16_t eax_33 = ebx_3[2]
                                                    int16_t ecx_34 = esi_2[2]
                                                    
                                                    if (eax_33 u< ecx_34)
                                                        break
                                                    
                                                    if (eax_33 u<= ecx_34)
                                                        int16_t eax_34 = ebx_3[3]
                                                        int16_t ecx_35 = esi_2[3]
                                                        
                                                        if (eax_34 u< ecx_35)
                                                            break
                                                        
                                                        if (eax_34 u<= ecx_35)
                                                            int16_t eax_35 = ebx_3[4]
                                                            int16_t ecx_36 = esi_2[4]
                                                            
                                                            if (eax_35 u< ecx_36)
                                                                break
                                                            
                                                            if (eax_35 u<= ecx_36)
                                                                int16_t eax_36 = ebx_3[5]
                                                                int16_t ecx_37 = esi_2[5]
                                                                
                                                                if (eax_36 u< ecx_37)
                                                                    break
                                                                
                                                                if (eax_36 u<= ecx_37
                                                                        && ebx_3[6] u< esi_2[6])
                                                                    break
                                            
                                            int16_t* eax_38 = edi_1
                                            edi_1 = &edi_1[7]
                                            edx_7 = var_10_2 + 0xe
                                            var_c = edi_1
                                            var_10_2 = edx_7
                                            
                                            if (eax_38 != ebx_3)
                                                int64_t xmm1_1 = *edx_7
                                                int32_t ecx_39 = *(edx_7 + 8)
                                                edx_7.w = *(edx_7 + 0xc)
                                                *var_10_2 = *ebx_3
                                                *(var_10_2 + 8) = *(ebx_3 + 8)
                                                int32_t eax_40
                                                eax_40.w = ebx_3[6]
                                                *(var_10_2 + 0xc) = eax_40.w
                                                edi_1 = var_c
                                                *ebx_3 = xmm1_1
                                                *(ebx_3 + 8) = ecx_39
                                                ebx_3[6] = edx_7.w
                
                ebx_3 = &ebx_3[7]
            while (ebx_3 u< arg4)
            
            eax_28 = var_8
            var_10_1 = ebx_3
        
        bool cond:1_1 = eax_28 != arg2
        
        if (eax_28 u> arg2)
            int16_t* ebx_4 = var_8
            void* edi_13 = &ebx_4[-5]
            
            do
                edx_7 = zx.d(*(edi_13 - 4))
                int16_t eax_41 = *esi_2
                
                if (edx_7.w u>= eax_41)
                    if (edx_7.w u> eax_41)
                        goto label_65c81e
                    
                    int16_t ebx_5 = esi_2[1]
                    int16_t ecx_42 = *(edi_13 - 2)
                    ebx_4 = var_8
                    
                    if (ecx_42 u>= ebx_5)
                        if (ecx_42 u> ebx_5)
                            goto label_65c81e
                        
                        int16_t ebx_6 = esi_2[2]
                        int16_t ecx_43 = *edi_13
                        ebx_4 = var_8
                        
                        if (ecx_43 u>= ebx_6)
                            if (ecx_43 u> ebx_6)
                                goto label_65c81e
                            
                            int16_t ebx_7 = esi_2[3]
                            int16_t ecx_44 = *(edi_13 + 2)
                            ebx_4 = var_8
                            
                            if (ecx_44 u>= ebx_7)
                                if (ecx_44 u> ebx_7)
                                    goto label_65c81e
                                
                                int16_t ebx_8 = esi_2[4]
                                int16_t ecx_45 = *(edi_13 + 4)
                                ebx_4 = var_8
                                
                                if (ecx_45 u>= ebx_8)
                                    if (ecx_45 u> ebx_8)
                                        goto label_65c81e
                                    
                                    int16_t ebx_9 = esi_2[5]
                                    int16_t ecx_46 = *(edi_13 + 6)
                                    ebx_4 = var_8
                                    
                                    if (ecx_46 u>= ebx_9)
                                        if (ecx_46 u> ebx_9)
                                            goto label_65c81e
                                        
                                        if (*(edi_13 + 8) u>= esi_2[6])
                                            eax_41 = *esi_2
                                        label_65c81e:
                                            
                                            if (eax_41 u< edx_7.w)
                                                break
                                            
                                            if (eax_41 u<= edx_7.w)
                                                int16_t eax_43 = esi_2[1]
                                                int16_t ecx_48 = *(edi_13 - 2)
                                                
                                                if (eax_43 u< ecx_48)
                                                    break
                                                
                                                if (eax_43 u<= ecx_48)
                                                    int16_t eax_44 = esi_2[2]
                                                    int16_t ecx_49 = *edi_13
                                                    
                                                    if (eax_44 u< ecx_49)
                                                        break
                                                    
                                                    if (eax_44 u<= ecx_49)
                                                        int16_t eax_45 = esi_2[3]
                                                        int16_t ecx_50 = *(edi_13 + 2)
                                                        
                                                        if (eax_45 u< ecx_50)
                                                            break
                                                        
                                                        if (eax_45 u<= ecx_50)
                                                            int16_t eax_46 = esi_2[4]
                                                            int16_t ecx_51 = *(edi_13 + 4)
                                                            
                                                            if (eax_46 u< ecx_51)
                                                                break
                                                            
                                                            if (eax_46 u<= ecx_51)
                                                                int16_t eax_47 = esi_2[5]
                                                                int16_t ecx_52 = *(edi_13 + 6)
                                                                
                                                                if (eax_47 u< ecx_52)
                                                                    break
                                                                
                                                                if (eax_47 u<= ecx_52
                                                                        && esi_2[6] u< *(edi_13 + 8))
                                                                    break
                                            
                                            esi_2 -= 0xe
                                            
                                            if (esi_2 != edi_13 - 4)
                                                int64_t xmm1_2 = *esi_2
                                                int32_t ecx_54 = *(esi_2 + 8)
                                                edx_7.w = esi_2[6]
                                                *esi_2 = *(edi_13 - 4)
                                                *(esi_2 + 8) = *(edi_13 + 4)
                                                int32_t eax_50
                                                eax_50.w = *(edi_13 + 8)
                                                esi_2[6] = eax_50.w
                                                *(edi_13 - 4) = xmm1_2
                                                *(edi_13 + 4) = ecx_54
                                                *(edi_13 + 8) = edx_7.w
                
                ebx_4 -= 0xe
                edi_13 -= 0xe
                var_8 = ebx_4
            while (arg2 u< ebx_4)
            
            eax_28 = var_8
            cond:1_1 = eax_28 != arg2
            ebx_3 = var_10_1
            edi_1 = var_c
        
        if (cond:1_1)
            var_8 = eax_28 - 0xe
            
            if (ebx_3 != arg4)
                edx_7.w = ebx_3[6]
                int64_t xmm1_7 = *ebx_3
                int32_t ecx_60 = *(ebx_3 + 8)
                *ebx_3 = *(eax_28 - 0xe)
                *(ebx_3 + 8) = *(eax_28 - 6)
                int16_t* eax_57
                eax_57.w = var_8[6]
                ebx_3[6] = eax_57.w
                ebx_3 = &ebx_3[7]
                eax_28 = var_8
                *eax_28 = xmm1_7
                *(eax_28 + 8) = ecx_60
                eax_28[6] = edx_7.w
                edx_7 = arg4
                break
            
            esi_2 -= 0xe
            
            if (eax_28 - 0xe != esi_2)
                int64_t xmm1_5 = *(eax_28 - 0xe)
                int32_t ecx_58 = *(eax_28 - 6)
                edx_7.w = *(eax_28 - 2)
                *(eax_28 - 0xe) = *esi_2
                *(var_8 + 8) = *(esi_2 + 8)
                int32_t eax_54
                eax_54.w = esi_2[6]
                var_8[6] = eax_54.w
                ebx_3 = var_10_1
                *esi_2 = xmm1_5
                *(esi_2 + 8) = ecx_58
                esi_2[6] = edx_7.w
            
            edx_7.w = esi_2[6]
            edi_1 -= 0xe
            int64_t xmm1_6 = *esi_2
            int32_t ecx_59 = *(esi_2 + 8)
            var_c = edi_1
            *esi_2 = *edi_1
            *(esi_2 + 8) = *(edi_1 + 8)
            int32_t eax_55
            eax_55.w = edi_1[6]
            esi_2[6] = eax_55.w
            eax_28 = var_8
            *edi_1 = xmm1_6
            *(edi_1 + 8) = ecx_59
            edi_1[6] = edx_7.w
            edx_7 = arg4
        else
            if (ebx_3 == arg4)
                arg3[1] = edi_1
                *arg3 = esi_2
                return arg3
            
            if (edi_1 != ebx_3)
                int64_t xmm1_3 = *esi_2
                int32_t ecx_56 = *(esi_2 + 8)
                edx_7.w = esi_2[6]
                *esi_2 = *edi_1
                *(esi_2 + 8) = *(edi_1 + 8)
                int32_t eax_51
                eax_51.w = edi_1[6]
                esi_2[6] = eax_51.w
                *edi_1 = xmm1_3
                *(edi_1 + 8) = ecx_56
                edi_1[6] = edx_7.w
            
            var_c = &edi_1[7]
            int16_t* edi_15 = esi_2
            esi_2 = &esi_2[7]
            var_10_1 = &var_10_1[7]
            edx_7.w = edi_15[6]
            int64_t xmm1_4 = *edi_15
            int32_t ecx_57 = *(edi_15 + 8)
            *edi_15 = *ebx_3
            *(edi_15 + 8) = *(ebx_3 + 8)
            int32_t eax_52
            eax_52.w = ebx_3[6]
            edi_15[6] = eax_52.w
            edi_1 = var_c
            eax_28 = var_8
            *ebx_3 = xmm1_4
            *(ebx_3 + 8) = ecx_57
            ebx_3[6] = edx_7.w
            ebx_3 = var_10_1
            edx_7 = arg4
