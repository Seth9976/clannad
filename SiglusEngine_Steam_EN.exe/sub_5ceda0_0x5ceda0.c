// 函数: sub_5ceda0
// 地址: 0x5ceda0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = data_1cd43f8
int32_t ecx = data_1cd43f0
int32_t eax = data_1cd43f4
int32_t ecx_1 = data_1cd43ec
int32_t ebx
int32_t esi
int32_t edi

if (eax_1 == ecx)
    if (eax == ecx_1)
        int32_t var_4 = ebx
        int32_t var_8 = esi
        int32_t var_c = edi
        char* esi_1 = data_1cd4408
        char* edi_1 = data_1cd4404
        int32_t ecx_2 = data_1cd440c
        int32_t eax_7
        
        while (true)
            char* var_14_1 = esi_1
            char* var_18_1 = edi_1
            int32_t i_6 = data_1cd4410
            int32_t i
            
            do
                int32_t edx_1 = data_1cd43a4
                int32_t ebx_1
                ebx_1.b = *esi_1
                int32_t eax_2
                eax_2.b = *edi_1
                int32_t eax_3 = eax_2 + *((ebx_1 << 2) + edx_1)
                
                if (eax_3 s> 0xff)
                    eax_3 = 0xff
                
                *edi_1 = eax_3.b
                int32_t ebx_5
                ebx_5.b = esi_1[1]
                int32_t eax_4
                eax_4.b = edi_1[1]
                int32_t eax_5 = eax_4 + *((ebx_5 << 2) + edx_1)
                
                if (eax_5 s> 0xff)
                    eax_5 = 0xff
                
                edi_1[1] = eax_5.b
                int32_t ebx_9
                ebx_9.b = esi_1[2]
                int32_t eax_6
                eax_6.b = edi_1[2]
                eax_7 = eax_6 + *((ebx_9 << 2) + edx_1)
                
                if (eax_7 s> 0xff)
                    eax_7 = 0xff
                
                edi_1[2] = eax_7.b
                esi_1 = &esi_1[4]
                edi_1 = &edi_1[4]
                i = i_6
                i_6 -= 1
            while (i != 1)
            int32_t temp1_1 = ecx_2
            ecx_2 -= 1
            
            if (temp1_1 == 1)
                break
            
            esi_1 = &var_14_1[data_1cd4400]
            edi_1 = &var_18_1[data_1cd43fc]
        
        return eax_7
    
    if (eax s< ecx_1)
        int32_t var_4_1 = ebx
        int32_t var_8_1 = esi
        int32_t var_c_1 = edi
        char* esi_4 = data_1cd4408
        char* edi_4 = data_1cd4404
        int32_t i_7 = data_1cd440c
        int32_t ebx_14 = data_1cd4414
        int32_t eax_13
        int32_t i_1
        
        do
            char* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                int32_t edx_2 = data_1cd43a4
                int32_t ebx_15
                ebx_15.b = *esi_4
                int32_t eax_8
                eax_8.b = *edi_4
                int32_t eax_9 = eax_8 + *((ebx_15 << 2) + edx_2)
                
                if (eax_9 s> 0xff)
                    eax_9 = 0xff
                
                *edi_4 = eax_9.b
                int32_t ebx_19
                ebx_19.b = esi_4[1]
                int32_t eax_10
                eax_10.b = edi_4[1]
                int32_t eax_11 = eax_10 + *((ebx_19 << 2) + edx_2)
                
                if (eax_11 s> 0xff)
                    eax_11 = 0xff
                
                edi_4[1] = eax_11.b
                int32_t ebx_23
                ebx_23.b = esi_4[2]
                int32_t eax_12
                eax_12.b = edi_4[2]
                eax_13 = eax_12 + *((ebx_23 << 2) + edx_2)
                
                if (eax_13 s> 0xff)
                    eax_13 = 0xff
                
                edi_4[2] = eax_13.b
                esi_4 = &esi_4[4]
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_14 += data_1cd43f4
            
            if (ebx_14 s>= data_1cd43ec)
                ebx_14 -= data_1cd43ec
                esi_4 = &esi_4[data_1cd4400]
            
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        return eax_13
    
    int32_t var_4_2 = ebx
    int32_t var_8_2 = esi
    int32_t var_c_2 = edi
    char* esi_6 = data_1cd4408
    char* edi_7 = data_1cd4404
    int32_t ecx_5 = data_1cd440c
    int32_t ebx_29 = data_1cd4414
    
    while (true)
        char* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        int32_t eax_19
        int32_t i_2
        
        do
            int32_t edx_3 = data_1cd43a4
            int32_t ebx_30
            ebx_30.b = *esi_6
            int32_t eax_14
            eax_14.b = *edi_7
            int32_t eax_15 = eax_14 + *((ebx_30 << 2) + edx_3)
            
            if (eax_15 s> 0xff)
                eax_15 = 0xff
            
            *edi_7 = eax_15.b
            int32_t ebx_34
            ebx_34.b = esi_6[1]
            int32_t eax_16
            eax_16.b = edi_7[1]
            int32_t eax_17 = eax_16 + *((ebx_34 << 2) + edx_3)
            
            if (eax_17 s> 0xff)
                eax_17 = 0xff
            
            edi_7[1] = eax_17.b
            int32_t ebx_38
            ebx_38.b = esi_6[2]
            int32_t eax_18
            eax_18.b = edi_7[2]
            eax_19 = eax_18 + *((ebx_38 << 2) + edx_3)
            
            if (eax_19 s> 0xff)
                eax_19 = 0xff
            
            edi_7[2] = eax_19.b
            esi_6 = &esi_6[4]
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_42 = ebx_29
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 = &esi_6[data_1cd4400]
            ebx_42 += data_1cd43ec
            
            if (ebx_42 s< data_1cd43f4)
                int32_t temp16_1 = ecx_6
                ecx_6 -= 1
                
                if (temp16_1 != 1)
                    continue
            else
                ebx_29 = ebx_42 - data_1cd43f4
                edi_7 = &var_18_3[data_1cd43fc]
                ecx_5 = ecx_6 - 1
                
                if (ecx_6 != 1)
                    break
            
            return eax_19
else if (eax_1 s< ecx)
    if (eax == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        char* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        int32_t eax_25
        
        while (true)
            char* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_4 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                int32_t edx_5 = data_1cd43a4
                int32_t ebx_44
                ebx_44.b = *esi_8
                int32_t eax_20
                eax_20.b = *edi_10
                int32_t eax_21 = eax_20 + *((ebx_44 << 2) + edx_5)
                
                if (eax_21 s> 0xff)
                    eax_21 = 0xff
                
                *edi_10 = eax_21.b
                int32_t ebx_48
                ebx_48.b = esi_8[1]
                int32_t eax_22
                eax_22.b = edi_10[1]
                int32_t eax_23 = eax_22 + *((ebx_48 << 2) + edx_5)
                
                if (eax_23 s> 0xff)
                    eax_23 = 0xff
                
                edi_10[1] = eax_23.b
                int32_t ebx_52
                ebx_52.b = esi_8[2]
                int32_t eax_24
                eax_24.b = edi_10[2]
                eax_25 = eax_24 + *((ebx_52 << 2) + edx_5)
                
                if (eax_25 s> 0xff)
                    eax_25 = 0xff
                
                edi_10[2] = eax_25.b
                edi_10 = &edi_10[4]
                edx_4 += data_1cd43f8
                
                if (edx_4 s>= data_1cd43f0)
                    edx_4 -= data_1cd43f0
                    esi_8 = &esi_8[4]
                
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
            int32_t temp6_1 = ecx_7
            ecx_7 -= 1
            
            if (temp6_1 == 1)
                break
            
            esi_8 = &var_14_4[data_1cd4400]
            edi_10 = &var_18_4[data_1cd43fc]
        
        return eax_25
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        char* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_57 = data_1cd4414
        int32_t eax_31
        int32_t i_4
        
        do
            char* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                int32_t edx_8 = data_1cd43a4
                int32_t ebx_58
                ebx_58.b = *esi_11
                int32_t eax_26
                eax_26.b = *edi_13
                int32_t eax_27 = eax_26 + *((ebx_58 << 2) + edx_8)
                
                if (eax_27 s> 0xff)
                    eax_27 = 0xff
                
                *edi_13 = eax_27.b
                int32_t ebx_62
                ebx_62.b = esi_11[1]
                int32_t eax_28
                eax_28.b = edi_13[1]
                int32_t eax_29 = eax_28 + *((ebx_62 << 2) + edx_8)
                
                if (eax_29 s> 0xff)
                    eax_29 = 0xff
                
                edi_13[1] = eax_29.b
                int32_t ebx_66
                ebx_66.b = esi_11[2]
                int32_t eax_30
                eax_30.b = edi_13[2]
                eax_31 = eax_30 + *((ebx_66 << 2) + edx_8)
                
                if (eax_31 s> 0xff)
                    eax_31 = 0xff
                
                edi_13[2] = eax_31.b
                edi_13 = &edi_13[4]
                edx_7 += data_1cd43f8
                
                if (edx_7 s>= data_1cd43f0)
                    edx_7 -= data_1cd43f0
                    esi_11 = &esi_11[4]
                
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            esi_11 = var_14_5
            edi_13 = &var_18_5[data_1cd43fc]
            ebx_57 += data_1cd43f4
            
            if (ebx_57 s>= data_1cd43ec)
                ebx_57 -= data_1cd43ec
                esi_11 = &esi_11[data_1cd4400]
            
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        return eax_31
    
    int32_t var_4_5 = ebx
    int32_t var_8_5 = esi
    int32_t var_c_5 = edi
    char* esi_13 = data_1cd4408
    char* edi_16 = data_1cd4404
    int32_t ecx_10 = data_1cd440c
    int32_t ebx_72 = data_1cd4414
    
    while (true)
        char* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_10 = data_1cd4418
        int32_t i_11 = data_1cd4410
        int32_t eax_37
        int32_t i_5
        
        do
            int32_t edx_11 = data_1cd43a4
            int32_t ebx_73
            ebx_73.b = *esi_13
            int32_t eax_32
            eax_32.b = *edi_16
            int32_t eax_33 = eax_32 + *((ebx_73 << 2) + edx_11)
            
            if (eax_33 s> 0xff)
                eax_33 = 0xff
            
            *edi_16 = eax_33.b
            int32_t ebx_77
            ebx_77.b = esi_13[1]
            int32_t eax_34
            eax_34.b = edi_16[1]
            int32_t eax_35 = eax_34 + *((ebx_77 << 2) + edx_11)
            
            if (eax_35 s> 0xff)
                eax_35 = 0xff
            
            edi_16[1] = eax_35.b
            int32_t ebx_81
            ebx_81.b = esi_13[2]
            int32_t eax_36
            eax_36.b = edi_16[2]
            eax_37 = eax_36 + *((ebx_81 << 2) + edx_11)
            
            if (eax_37 s> 0xff)
                eax_37 = 0xff
            
            edi_16[2] = eax_37.b
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 = &esi_13[4]
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_85 = ebx_72
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 = &esi_13[data_1cd4400]
            ebx_85 += data_1cd43ec
            
            if (ebx_85 s< data_1cd43f4)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_72 = ebx_85 - data_1cd43f4
                edi_16 = &var_18_6[data_1cd43fc]
                ecx_10 = ecx_11 - 1
                
                if (ecx_11 != 1)
                    break
            
            return eax_37
else if (eax == ecx_1)
    int32_t var_4_6 = ebx
    int32_t var_8_6 = esi
    int32_t var_c_6 = edi
    char* esi_15 = data_1cd4408
    char* edi_19 = data_1cd4404
    int32_t ecx_12 = data_1cd440c
    
    while (true)
        char* var_14_7 = esi_15
        char* var_18_7 = edi_19
        int32_t edx_13 = data_1cd4418
        int32_t ecx_13 = data_1cd4410
    label_5ceaf5:
        int32_t edx_14 = data_1cd43a4
        int32_t ebx_87
        ebx_87.b = *esi_15
        int32_t eax_38
        eax_38.b = *edi_19
        int32_t eax_39 = eax_38 + *((ebx_87 << 2) + edx_14)
        
        if (eax_39 s> 0xff)
            eax_39 = 0xff
        
        *edi_19 = eax_39.b
        int32_t ebx_91
        ebx_91.b = esi_15[1]
        int32_t eax_40
        eax_40.b = edi_19[1]
        int32_t eax_41 = eax_40 + *((ebx_91 << 2) + edx_14)
        
        if (eax_41 s> 0xff)
            eax_41 = 0xff
        
        edi_19[1] = eax_41.b
        int32_t ebx_95
        ebx_95.b = esi_15[2]
        int32_t eax_42
        eax_42.b = edi_19[2]
        int32_t eax_43 = eax_42 + *((ebx_95 << 2) + edx_14)
        
        if (eax_43 s> 0xff)
            eax_43 = 0xff
        
        edi_19[2] = eax_43.b
        int32_t edx_15 = edx_13
        
        while (true)
            esi_15 = &esi_15[4]
            edx_15 += data_1cd43f0
            
            if (edx_15 s>= data_1cd43f8)
                edx_13 = edx_15 - data_1cd43f8
                edi_19 = &edi_19[4]
                int32_t temp10_1 = ecx_13
                ecx_13 -= 1
                
                if (temp10_1 == 1)
                    goto label_5ceb8b
                
                goto label_5ceaf5
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5ceb8b:
                int32_t temp9_1 = ecx_12
                ecx_12 -= 1
                
                if (temp9_1 == 1)
                    return eax_43
                
                esi_15 = &var_14_7[data_1cd4400]
                edi_19 = &var_18_7[data_1cd43fc]
                break
else if (eax s< ecx_1)
    int32_t var_4_7 = ebx
    int32_t var_8_7 = esi
    int32_t var_c_7 = edi
    char* esi_18 = data_1cd4408
    char* edi_22 = data_1cd4404
    int32_t ecx_15 = data_1cd440c
    int32_t ebx_100 = data_1cd4414
    
    while (true)
        char* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5cebdc:
        int32_t edx_17 = data_1cd43a4
        int32_t ebx_101
        ebx_101.b = *esi_18
        int32_t eax_44
        eax_44.b = *edi_22
        int32_t eax_45 = eax_44 + *((ebx_101 << 2) + edx_17)
        
        if (eax_45 s> 0xff)
            eax_45 = 0xff
        
        *edi_22 = eax_45.b
        int32_t ebx_105
        ebx_105.b = esi_18[1]
        int32_t eax_46
        eax_46.b = edi_22[1]
        int32_t eax_47 = eax_46 + *((ebx_105 << 2) + edx_17)
        
        if (eax_47 s> 0xff)
            eax_47 = 0xff
        
        edi_22[1] = eax_47.b
        int32_t ebx_109
        ebx_109.b = esi_18[2]
        int32_t eax_48
        eax_48.b = edi_22[2]
        int32_t eax_49 = eax_48 + *((ebx_109 << 2) + edx_17)
        
        if (eax_49 s> 0xff)
            eax_49 = 0xff
        
        edi_22[2] = eax_49.b
        int32_t edx_18 = edx_16
        
        while (true)
            esi_18 = &esi_18[4]
            edx_18 += data_1cd43f0
            
            if (edx_18 s>= data_1cd43f8)
                edx_16 = edx_18 - data_1cd43f8
                edi_22 = &edi_22[4]
                int32_t temp13_1 = ecx_16
                ecx_16 -= 1
                
                if (temp13_1 == 1)
                    goto label_5cec71
                
                goto label_5cebdc
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5cec71:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_100 += data_1cd43f4
                
                if (ebx_100 s>= data_1cd43ec)
                    ebx_100 -= data_1cd43ec
                    esi_18 = &esi_18[data_1cd4400]
                
                int32_t temp17_1 = ecx_15
                ecx_15 -= 1
                
                if (temp17_1 == 1)
                    return eax_49
                
                break
else
    int32_t var_4_8 = ebx
    int32_t var_8_8 = esi
    int32_t var_c_8 = edi
    char* esi_20 = data_1cd4408
    char* edi_25 = data_1cd4404
    int32_t ecx_18 = data_1cd440c
    int32_t ebx_115 = data_1cd4414
    
    while (true)
        char* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5ceccc:
        int32_t edx_20 = data_1cd43a4
        int32_t ebx_116
        ebx_116.b = *esi_20
        int32_t eax_50
        eax_50.b = *edi_25
        int32_t eax_51 = eax_50 + *((ebx_116 << 2) + edx_20)
        
        if (eax_51 s> 0xff)
            eax_51 = 0xff
        
        *edi_25 = eax_51.b
        int32_t ebx_120
        ebx_120.b = esi_20[1]
        int32_t eax_52
        eax_52.b = edi_25[1]
        int32_t eax_53 = eax_52 + *((ebx_120 << 2) + edx_20)
        
        if (eax_53 s> 0xff)
            eax_53 = 0xff
        
        edi_25[1] = eax_53.b
        int32_t ebx_124
        ebx_124.b = esi_20[2]
        int32_t eax_54
        eax_54.b = edi_25[2]
        int32_t eax_55 = eax_54 + *((ebx_124 << 2) + edx_20)
        
        if (eax_55 s> 0xff)
            eax_55 = 0xff
        
        edi_25[2] = eax_55.b
        int32_t edx_21 = edx_19
        
        while (true)
            esi_20 = &esi_20[4]
            edx_21 += data_1cd43f0
            
            if (edx_21 s>= data_1cd43f8)
                edx_19 = edx_21 - data_1cd43f8
                edi_25 = &edi_25[4]
                int32_t temp18_1 = ecx_19
                ecx_19 -= 1
                
                if (temp18_1 == 1)
                    goto label_5ced5f
                
                goto label_5ceccc
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5ced5f:
                int32_t ebx_128 = ebx_115
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 = &esi_20[data_1cd4400]
                    ebx_128 += data_1cd43ec
                    
                    if (ebx_128 s< data_1cd43f4)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_115 = ebx_128 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_55
                
                break
