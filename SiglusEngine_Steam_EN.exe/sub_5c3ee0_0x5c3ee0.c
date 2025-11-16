// 函数: sub_5c3ee0
// 地址: 0x5c3ee0
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
        int32_t eax_2
        
        while (true)
            char* var_14_1 = esi_1
            char* var_18_1 = edi_1
            int32_t i_6 = data_1cd4410
            int32_t i
            
            do
                eax_2.b = esi_1[3]
                eax_2.b = eax_2.b
                
                if (eax_2.b != 0)
                    if (eax_2 == 0xff)
                        eax_2 = *esi_1
                        *edi_1 = eax_2
                    else
                        int32_t edx_1 = *((eax_2 << 2) + data_1cd4328)
                        int32_t ebx_4
                        ebx_4.b = *esi_1
                        int32_t eax_4
                        eax_4.b = *edi_1
                        *edi_1 = eax_4.b + (*(((ebx_4 - eax_4) << 2) + edx_1)).b
                        int32_t ebx_8
                        ebx_8.b = esi_1[1]
                        int32_t eax_6
                        eax_6.b = edi_1[1]
                        edi_1[1] = eax_6.b + (*(((ebx_8 - eax_6) << 2) + edx_1)).b
                        int32_t ebx_12
                        ebx_12.b = esi_1[2]
                        int32_t eax_8
                        eax_8.b = edi_1[2]
                        eax_2 = eax_8 + *(((ebx_12 - eax_8) << 2) + edx_1)
                        edi_1[2] = eax_2.b
                
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
        
        return eax_2
    
    if (eax s< ecx_1)
        int32_t var_4_1 = ebx
        int32_t var_8_1 = esi
        int32_t var_c_1 = edi
        void* esi_4 = data_1cd4408
        char* edi_4 = data_1cd4404
        int32_t i_7 = data_1cd440c
        int32_t ebx_17 = data_1cd4414
        int32_t eax_9
        int32_t i_1
        
        do
            void* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                eax_9.b = *(esi_4 + 3)
                eax_9.b = eax_9.b
                
                if (eax_9.b != 0)
                    if (eax_9 == 0xff)
                        eax_9 = *esi_4
                        *edi_4 = eax_9
                    else
                        int32_t edx_2 = *((eax_9 << 2) + data_1cd4328)
                        int32_t ebx_21
                        ebx_21.b = *esi_4
                        int32_t eax_11
                        eax_11.b = *edi_4
                        *edi_4 = eax_11.b + (*(((ebx_21 - eax_11) << 2) + edx_2)).b
                        int32_t ebx_25
                        ebx_25.b = *(esi_4 + 1)
                        int32_t eax_13
                        eax_13.b = edi_4[1]
                        edi_4[1] = eax_13.b + (*(((ebx_25 - eax_13) << 2) + edx_2)).b
                        int32_t ebx_29
                        ebx_29.b = *(esi_4 + 2)
                        int32_t eax_15
                        eax_15.b = edi_4[2]
                        eax_9 = eax_15 + *(((ebx_29 - eax_15) << 2) + edx_2)
                        edi_4[2] = eax_9.b
                
                esi_4 += 4
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_17 += data_1cd43f4
            
            if (ebx_17 s>= data_1cd43ec)
                ebx_17 -= data_1cd43ec
                esi_4 += data_1cd4400
            
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        return eax_9
    
    int32_t var_4_2 = ebx
    int32_t var_8_2 = esi
    int32_t var_c_2 = edi
    void* esi_6 = data_1cd4408
    char* edi_7 = data_1cd4404
    int32_t ecx_5 = data_1cd440c
    int32_t ebx_35 = data_1cd4414
    
    while (true)
        void* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        int32_t eax_16
        int32_t i_2
        
        do
            eax_16.b = *(esi_6 + 3)
            eax_16.b = eax_16.b
            
            if (eax_16.b != 0)
                if (eax_16 == 0xff)
                    eax_16 = *esi_6
                    *edi_7 = eax_16
                else
                    int32_t edx_3 = *((eax_16 << 2) + data_1cd4328)
                    int32_t ebx_39
                    ebx_39.b = *esi_6
                    int32_t eax_18
                    eax_18.b = *edi_7
                    *edi_7 = eax_18.b + (*(((ebx_39 - eax_18) << 2) + edx_3)).b
                    int32_t ebx_43
                    ebx_43.b = *(esi_6 + 1)
                    int32_t eax_20
                    eax_20.b = edi_7[1]
                    edi_7[1] = eax_20.b + (*(((ebx_43 - eax_20) << 2) + edx_3)).b
                    int32_t ebx_47
                    ebx_47.b = *(esi_6 + 2)
                    int32_t eax_22
                    eax_22.b = edi_7[2]
                    eax_16 = eax_22 + *(((ebx_47 - eax_22) << 2) + edx_3)
                    edi_7[2] = eax_16.b
            
            esi_6 += 4
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_51 = ebx_35
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 += data_1cd4400
            ebx_51 += data_1cd43ec
            
            if (ebx_51 s< data_1cd43f4)
                int32_t temp16_1 = ecx_6
                ecx_6 -= 1
                
                if (temp16_1 != 1)
                    continue
            else
                ebx_35 = ebx_51 - data_1cd43f4
                edi_7 = &var_18_3[data_1cd43fc]
                ecx_5 = ecx_6 - 1
                
                if (ecx_6 != 1)
                    break
            
            return eax_16
else if (eax_1 s< ecx)
    if (eax == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        void* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        int32_t eax_23
        
        while (true)
            void* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_4 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                eax_23.b = *(esi_8 + 3)
                eax_23.b = eax_23.b
                
                if (eax_23.b != 0)
                    if (eax_23 == 0xff)
                        eax_23 = *esi_8
                        *edi_10 = eax_23
                    else
                        int32_t edx_5 = *((eax_23 << 2) + data_1cd4328)
                        int32_t ebx_56
                        ebx_56.b = *esi_8
                        int32_t eax_25
                        eax_25.b = *edi_10
                        *edi_10 = eax_25.b + (*(((ebx_56 - eax_25) << 2) + edx_5)).b
                        int32_t ebx_60
                        ebx_60.b = *(esi_8 + 1)
                        int32_t eax_27
                        eax_27.b = edi_10[1]
                        edi_10[1] = eax_27.b + (*(((ebx_60 - eax_27) << 2) + edx_5)).b
                        int32_t ebx_64
                        ebx_64.b = *(esi_8 + 2)
                        int32_t eax_29
                        eax_29.b = edi_10[2]
                        eax_23 = eax_29 + *(((ebx_64 - eax_29) << 2) + edx_5)
                        edi_10[2] = eax_23.b
                
                edi_10 = &edi_10[4]
                edx_4 += data_1cd43f8
                
                if (edx_4 s>= data_1cd43f0)
                    edx_4 -= data_1cd43f0
                    esi_8 += 4
                
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
            int32_t temp6_1 = ecx_7
            ecx_7 -= 1
            
            if (temp6_1 == 1)
                break
            
            esi_8 = var_14_4 + data_1cd4400
            edi_10 = &var_18_4[data_1cd43fc]
        
        return eax_23
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        void* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_69 = data_1cd4414
        int32_t eax_30
        int32_t i_4
        
        do
            void* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                eax_30.b = *(esi_11 + 3)
                eax_30.b = eax_30.b
                
                if (eax_30.b != 0)
                    if (eax_30 == 0xff)
                        eax_30 = *esi_11
                        *edi_13 = eax_30
                    else
                        int32_t edx_8 = *((eax_30 << 2) + data_1cd4328)
                        int32_t ebx_73
                        ebx_73.b = *esi_11
                        int32_t eax_32
                        eax_32.b = *edi_13
                        *edi_13 = eax_32.b + (*(((ebx_73 - eax_32) << 2) + edx_8)).b
                        int32_t ebx_77
                        ebx_77.b = *(esi_11 + 1)
                        int32_t eax_34
                        eax_34.b = edi_13[1]
                        edi_13[1] = eax_34.b + (*(((ebx_77 - eax_34) << 2) + edx_8)).b
                        int32_t ebx_81
                        ebx_81.b = *(esi_11 + 2)
                        int32_t eax_36
                        eax_36.b = edi_13[2]
                        eax_30 = eax_36 + *(((ebx_81 - eax_36) << 2) + edx_8)
                        edi_13[2] = eax_30.b
                
                edi_13 = &edi_13[4]
                edx_7 += data_1cd43f8
                
                if (edx_7 s>= data_1cd43f0)
                    edx_7 -= data_1cd43f0
                    esi_11 += 4
                
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            esi_11 = var_14_5
            edi_13 = &var_18_5[data_1cd43fc]
            ebx_69 += data_1cd43f4
            
            if (ebx_69 s>= data_1cd43ec)
                ebx_69 -= data_1cd43ec
                esi_11 += data_1cd4400
            
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        return eax_30
    
    int32_t var_4_5 = ebx
    int32_t var_8_5 = esi
    int32_t var_c_5 = edi
    void* esi_13 = data_1cd4408
    char* edi_16 = data_1cd4404
    int32_t ecx_10 = data_1cd440c
    int32_t ebx_87 = data_1cd4414
    
    while (true)
        void* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_10 = data_1cd4418
        int32_t i_11 = data_1cd4410
        int32_t eax_37
        int32_t i_5
        
        do
            eax_37.b = *(esi_13 + 3)
            eax_37.b = eax_37.b
            
            if (eax_37.b != 0)
                if (eax_37 == 0xff)
                    eax_37 = *esi_13
                    *edi_16 = eax_37
                else
                    int32_t edx_11 = *((eax_37 << 2) + data_1cd4328)
                    int32_t ebx_91
                    ebx_91.b = *esi_13
                    int32_t eax_39
                    eax_39.b = *edi_16
                    *edi_16 = eax_39.b + (*(((ebx_91 - eax_39) << 2) + edx_11)).b
                    int32_t ebx_95
                    ebx_95.b = *(esi_13 + 1)
                    int32_t eax_41
                    eax_41.b = edi_16[1]
                    edi_16[1] = eax_41.b + (*(((ebx_95 - eax_41) << 2) + edx_11)).b
                    int32_t ebx_99
                    ebx_99.b = *(esi_13 + 2)
                    int32_t eax_43
                    eax_43.b = edi_16[2]
                    eax_37 = eax_43 + *(((ebx_99 - eax_43) << 2) + edx_11)
                    edi_16[2] = eax_37.b
            
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 += 4
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_103 = ebx_87
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 += data_1cd4400
            ebx_103 += data_1cd43ec
            
            if (ebx_103 s< data_1cd43f4)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_87 = ebx_103 - data_1cd43f4
                edi_16 = &var_18_6[data_1cd43fc]
                ecx_10 = ecx_11 - 1
                
                if (ecx_11 != 1)
                    break
            
            return eax_37
else if (eax == ecx_1)
    int32_t var_4_6 = ebx
    int32_t var_8_6 = esi
    int32_t var_c_6 = edi
    void* esi_15 = data_1cd4408
    char* edi_19 = data_1cd4404
    int32_t ecx_12 = data_1cd440c
    
    while (true)
        void* var_14_7 = esi_15
        char* var_18_7 = edi_19
        int32_t edx_13 = data_1cd4418
        int32_t ecx_13 = data_1cd4410
    label_5c3c47:
        int32_t eax_44
        eax_44.b = *(esi_15 + 3)
        eax_44.b = eax_44.b
        
        if (eax_44.b != 0)
            if (eax_44 == 0xff)
                eax_44 = *esi_15
                *edi_19 = eax_44
            else
                int32_t edx_14 = *((eax_44 << 2) + data_1cd4328)
                int32_t ebx_108
                ebx_108.b = *esi_15
                int32_t eax_46
                eax_46.b = *edi_19
                *edi_19 = eax_46.b + (*(((ebx_108 - eax_46) << 2) + edx_14)).b
                int32_t ebx_112
                ebx_112.b = *(esi_15 + 1)
                int32_t eax_48
                eax_48.b = edi_19[1]
                edi_19[1] = eax_48.b + (*(((ebx_112 - eax_48) << 2) + edx_14)).b
                int32_t ebx_116
                ebx_116.b = *(esi_15 + 2)
                int32_t eax_50
                eax_50.b = edi_19[2]
                eax_44 = eax_50 + *(((ebx_116 - eax_50) << 2) + edx_14)
                edi_19[2] = eax_44.b
        
        int32_t edx_15 = edx_13
        
        while (true)
            esi_15 += 4
            edx_15 += data_1cd43f0
            
            if (edx_15 s>= data_1cd43f8)
                edx_13 = edx_15 - data_1cd43f8
                edi_19 = &edi_19[4]
                int32_t temp10_1 = ecx_13
                ecx_13 -= 1
                
                if (temp10_1 == 1)
                    goto label_5c3cd8
                
                goto label_5c3c47
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5c3cd8:
                int32_t temp9_1 = ecx_12
                ecx_12 -= 1
                
                if (temp9_1 == 1)
                    return eax_44
                
                esi_15 = var_14_7 + data_1cd4400
                edi_19 = &var_18_7[data_1cd43fc]
                break
else if (eax s< ecx_1)
    int32_t var_4_7 = ebx
    int32_t var_8_7 = esi
    int32_t var_c_7 = edi
    void* esi_18 = data_1cd4408
    char* edi_22 = data_1cd4404
    int32_t ecx_15 = data_1cd440c
    int32_t ebx_121 = data_1cd4414
    
    while (true)
        void* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5c3d1e:
        int32_t eax_51
        eax_51.b = *(esi_18 + 3)
        eax_51.b = eax_51.b
        
        if (eax_51.b != 0)
            if (eax_51 == 0xff)
                eax_51 = *esi_18
                *edi_22 = eax_51
            else
                int32_t edx_17 = *((eax_51 << 2) + data_1cd4328)
                int32_t ebx_125
                ebx_125.b = *esi_18
                int32_t eax_53
                eax_53.b = *edi_22
                *edi_22 = eax_53.b + (*(((ebx_125 - eax_53) << 2) + edx_17)).b
                int32_t ebx_129
                ebx_129.b = *(esi_18 + 1)
                int32_t eax_55
                eax_55.b = edi_22[1]
                edi_22[1] = eax_55.b + (*(((ebx_129 - eax_55) << 2) + edx_17)).b
                int32_t ebx_133
                ebx_133.b = *(esi_18 + 2)
                int32_t eax_57
                eax_57.b = edi_22[2]
                eax_51 = eax_57 + *(((ebx_133 - eax_57) << 2) + edx_17)
                edi_22[2] = eax_51.b
        
        int32_t edx_18 = edx_16
        
        while (true)
            esi_18 += 4
            edx_18 += data_1cd43f0
            
            if (edx_18 s>= data_1cd43f8)
                edx_16 = edx_18 - data_1cd43f8
                edi_22 = &edi_22[4]
                int32_t temp13_1 = ecx_16
                ecx_16 -= 1
                
                if (temp13_1 == 1)
                    goto label_5c3dae
                
                goto label_5c3d1e
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5c3dae:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_121 += data_1cd43f4
                
                if (ebx_121 s>= data_1cd43ec)
                    ebx_121 -= data_1cd43ec
                    esi_18 += data_1cd4400
                
                int32_t temp17_1 = ecx_15
                ecx_15 -= 1
                
                if (temp17_1 == 1)
                    return eax_51
                
                break
else
    int32_t var_4_8 = ebx
    int32_t var_8_8 = esi
    int32_t var_c_8 = edi
    void* esi_20 = data_1cd4408
    char* edi_25 = data_1cd4404
    int32_t ecx_18 = data_1cd440c
    int32_t ebx_139 = data_1cd4414
    
    while (true)
        void* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5c3e0e:
        int32_t eax_58
        eax_58.b = *(esi_20 + 3)
        eax_58.b = eax_58.b
        
        if (eax_58.b != 0)
            if (eax_58 == 0xff)
                eax_58 = *esi_20
                *edi_25 = eax_58
            else
                int32_t edx_20 = *((eax_58 << 2) + data_1cd4328)
                int32_t ebx_143
                ebx_143.b = *esi_20
                int32_t eax_60
                eax_60.b = *edi_25
                *edi_25 = eax_60.b + (*(((ebx_143 - eax_60) << 2) + edx_20)).b
                int32_t ebx_147
                ebx_147.b = *(esi_20 + 1)
                int32_t eax_62
                eax_62.b = edi_25[1]
                edi_25[1] = eax_62.b + (*(((ebx_147 - eax_62) << 2) + edx_20)).b
                int32_t ebx_151
                ebx_151.b = *(esi_20 + 2)
                int32_t eax_64
                eax_64.b = edi_25[2]
                eax_58 = eax_64 + *(((ebx_151 - eax_64) << 2) + edx_20)
                edi_25[2] = eax_58.b
        
        int32_t edx_21 = edx_19
        
        while (true)
            esi_20 += 4
            edx_21 += data_1cd43f0
            
            if (edx_21 s>= data_1cd43f8)
                edx_19 = edx_21 - data_1cd43f8
                edi_25 = &edi_25[4]
                int32_t temp18_1 = ecx_19
                ecx_19 -= 1
                
                if (temp18_1 == 1)
                    goto label_5c3e9c
                
                goto label_5c3e0e
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5c3e9c:
                int32_t ebx_155 = ebx_139
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 += data_1cd4400
                    ebx_155 += data_1cd43ec
                    
                    if (ebx_155 s< data_1cd43f4)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_139 = ebx_155 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_58
                
                break
