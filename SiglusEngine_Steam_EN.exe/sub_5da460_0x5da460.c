// 函数: sub_5da460
// 地址: 0x5da460
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
                        int32_t ebx_4
                        ebx_4.b = *esi_1
                        int32_t eax_4
                        eax_4.b = *edi_1
                        int32_t eax_5 = eax_4 - ebx_4
                        
                        if (eax_5 s< 0)
                            eax_5 = 0
                        
                        *edi_1 = eax_5.b
                        int32_t ebx_5
                        ebx_5.b = esi_1[1]
                        int32_t eax_6
                        eax_6.b = edi_1[1]
                        int32_t eax_7 = eax_6 - ebx_5
                        
                        if (eax_7 s< 0)
                            eax_7 = 0
                        
                        edi_1[1] = eax_7.b
                        int32_t ebx_6
                        ebx_6.b = esi_1[2]
                        int32_t eax_8
                        eax_8.b = edi_1[2]
                        eax_2 = eax_8 - ebx_6
                        
                        if (eax_2 s< 0)
                            eax_2 = 0
                        
                        edi_1[2] = eax_2.b
                    else
                        int32_t edx_1 = *((eax_2 << 2) + data_1cd4328)
                        int32_t ebx_7
                        ebx_7.b = *esi_1
                        int32_t eax_9
                        eax_9.b = *edi_1
                        int32_t eax_10 = eax_9 - *((ebx_7 << 2) + edx_1)
                        
                        if (eax_10 s< 0)
                            eax_10 = 0
                        
                        *edi_1 = eax_10.b
                        int32_t ebx_11
                        ebx_11.b = esi_1[1]
                        int32_t eax_11
                        eax_11.b = edi_1[1]
                        int32_t eax_12 = eax_11 - *((ebx_11 << 2) + edx_1)
                        
                        if (eax_12 s< 0)
                            eax_12 = 0
                        
                        edi_1[1] = eax_12.b
                        int32_t ebx_15
                        ebx_15.b = esi_1[2]
                        int32_t eax_13
                        eax_13.b = edi_1[2]
                        eax_2 = eax_13 - *((ebx_15 << 2) + edx_1)
                        
                        if (eax_2 s< 0)
                            eax_2 = 0
                        
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
        int32_t ebx_20 = data_1cd4414
        int32_t eax_14
        int32_t i_1
        
        do
            void* var_14_2 = esi_4
            char* var_18_2 = edi_4
            int32_t j_2 = data_1cd4410
            int32_t j
            
            do
                eax_14.b = *(esi_4 + 3)
                eax_14.b = eax_14.b
                
                if (eax_14.b != 0)
                    if (eax_14 == 0xff)
                        int32_t ebx_24
                        ebx_24.b = *esi_4
                        int32_t eax_16
                        eax_16.b = *edi_4
                        int32_t eax_17 = eax_16 - ebx_24
                        
                        if (eax_17 s< 0)
                            eax_17 = 0
                        
                        *edi_4 = eax_17.b
                        int32_t ebx_25
                        ebx_25.b = *(esi_4 + 1)
                        int32_t eax_18
                        eax_18.b = edi_4[1]
                        int32_t eax_19 = eax_18 - ebx_25
                        
                        if (eax_19 s< 0)
                            eax_19 = 0
                        
                        edi_4[1] = eax_19.b
                        int32_t ebx_26
                        ebx_26.b = *(esi_4 + 2)
                        int32_t eax_20
                        eax_20.b = edi_4[2]
                        eax_14 = eax_20 - ebx_26
                        
                        if (eax_14 s< 0)
                            eax_14 = 0
                        
                        edi_4[2] = eax_14.b
                    else
                        int32_t edx_2 = *((eax_14 << 2) + data_1cd4328)
                        int32_t ebx_27
                        ebx_27.b = *esi_4
                        int32_t eax_21
                        eax_21.b = *edi_4
                        int32_t eax_22 = eax_21 - *((ebx_27 << 2) + edx_2)
                        
                        if (eax_22 s< 0)
                            eax_22 = 0
                        
                        *edi_4 = eax_22.b
                        int32_t ebx_31
                        ebx_31.b = *(esi_4 + 1)
                        int32_t eax_23
                        eax_23.b = edi_4[1]
                        int32_t eax_24 = eax_23 - *((ebx_31 << 2) + edx_2)
                        
                        if (eax_24 s< 0)
                            eax_24 = 0
                        
                        edi_4[1] = eax_24.b
                        int32_t ebx_35
                        ebx_35.b = *(esi_4 + 2)
                        int32_t eax_25
                        eax_25.b = edi_4[2]
                        eax_14 = eax_25 - *((ebx_35 << 2) + edx_2)
                        
                        if (eax_14 s< 0)
                            eax_14 = 0
                        
                        edi_4[2] = eax_14.b
                
                esi_4 += 4
                edi_4 = &edi_4[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_4 = var_14_2
            edi_4 = &var_18_2[data_1cd43fc]
            ebx_20 += data_1cd43f4
            
            if (ebx_20 s>= data_1cd43ec)
                ebx_20 -= data_1cd43ec
                esi_4 += data_1cd4400
            
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        return eax_14
    
    int32_t var_4_2 = ebx
    int32_t var_8_2 = esi
    int32_t var_c_2 = edi
    void* esi_6 = data_1cd4408
    char* edi_7 = data_1cd4404
    int32_t ecx_5 = data_1cd440c
    int32_t ebx_41 = data_1cd4414
    
    while (true)
        void* var_14_3 = esi_6
        char* var_18_3 = edi_7
        int32_t i_8 = data_1cd4410
        int32_t eax_26
        int32_t i_2
        
        do
            eax_26.b = *(esi_6 + 3)
            eax_26.b = eax_26.b
            
            if (eax_26.b != 0)
                if (eax_26 == 0xff)
                    int32_t ebx_45
                    ebx_45.b = *esi_6
                    int32_t eax_28
                    eax_28.b = *edi_7
                    int32_t eax_29 = eax_28 - ebx_45
                    
                    if (eax_29 s< 0)
                        eax_29 = 0
                    
                    *edi_7 = eax_29.b
                    int32_t ebx_46
                    ebx_46.b = *(esi_6 + 1)
                    int32_t eax_30
                    eax_30.b = edi_7[1]
                    int32_t eax_31 = eax_30 - ebx_46
                    
                    if (eax_31 s< 0)
                        eax_31 = 0
                    
                    edi_7[1] = eax_31.b
                    int32_t ebx_47
                    ebx_47.b = *(esi_6 + 2)
                    int32_t eax_32
                    eax_32.b = edi_7[2]
                    eax_26 = eax_32 - ebx_47
                    
                    if (eax_26 s< 0)
                        eax_26 = 0
                    
                    edi_7[2] = eax_26.b
                else
                    int32_t edx_3 = *((eax_26 << 2) + data_1cd4328)
                    int32_t ebx_48
                    ebx_48.b = *esi_6
                    int32_t eax_33
                    eax_33.b = *edi_7
                    int32_t eax_34 = eax_33 - *((ebx_48 << 2) + edx_3)
                    
                    if (eax_34 s< 0)
                        eax_34 = 0
                    
                    *edi_7 = eax_34.b
                    int32_t ebx_52
                    ebx_52.b = *(esi_6 + 1)
                    int32_t eax_35
                    eax_35.b = edi_7[1]
                    int32_t eax_36 = eax_35 - *((ebx_52 << 2) + edx_3)
                    
                    if (eax_36 s< 0)
                        eax_36 = 0
                    
                    edi_7[1] = eax_36.b
                    int32_t ebx_56
                    ebx_56.b = *(esi_6 + 2)
                    int32_t eax_37
                    eax_37.b = edi_7[2]
                    eax_26 = eax_37 - *((ebx_56 << 2) + edx_3)
                    
                    if (eax_26 s< 0)
                        eax_26 = 0
                    
                    edi_7[2] = eax_26.b
            
            esi_6 += 4
            edi_7 = &edi_7[4]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_60 = ebx_41
        esi_6 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_6 += data_1cd4400
            ebx_60 += data_1cd43ec
            
            if (ebx_60 s< data_1cd43f4)
                int32_t temp16_1 = ecx_6
                ecx_6 -= 1
                
                if (temp16_1 != 1)
                    continue
            else
                ebx_41 = ebx_60 - data_1cd43f4
                edi_7 = &var_18_3[data_1cd43fc]
                ecx_5 = ecx_6 - 1
                
                if (ecx_6 != 1)
                    break
            
            return eax_26
else if (eax_1 s< ecx)
    if (eax == ecx_1)
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_3 = edi
        void* esi_8 = data_1cd4408
        char* edi_10 = data_1cd4404
        int32_t ecx_7 = data_1cd440c
        int32_t eax_38
        
        while (true)
            void* var_14_4 = esi_8
            char* var_18_4 = edi_10
            int32_t edx_4 = data_1cd4418
            int32_t i_9 = data_1cd4410
            int32_t i_3
            
            do
                eax_38.b = *(esi_8 + 3)
                eax_38.b = eax_38.b
                
                if (eax_38.b != 0)
                    if (eax_38 == 0xff)
                        int32_t ebx_65
                        ebx_65.b = *esi_8
                        int32_t eax_40
                        eax_40.b = *edi_10
                        int32_t eax_41 = eax_40 - ebx_65
                        
                        if (eax_41 s< 0)
                            eax_41 = 0
                        
                        *edi_10 = eax_41.b
                        int32_t ebx_66
                        ebx_66.b = *(esi_8 + 1)
                        int32_t eax_42
                        eax_42.b = edi_10[1]
                        int32_t eax_43 = eax_42 - ebx_66
                        
                        if (eax_43 s< 0)
                            eax_43 = 0
                        
                        edi_10[1] = eax_43.b
                        int32_t ebx_67
                        ebx_67.b = *(esi_8 + 2)
                        int32_t eax_44
                        eax_44.b = edi_10[2]
                        eax_38 = eax_44 - ebx_67
                        
                        if (eax_38 s< 0)
                            eax_38 = 0
                        
                        edi_10[2] = eax_38.b
                    else
                        int32_t edx_5 = *((eax_38 << 2) + data_1cd4328)
                        int32_t ebx_68
                        ebx_68.b = *esi_8
                        int32_t eax_45
                        eax_45.b = *edi_10
                        int32_t eax_46 = eax_45 - *((ebx_68 << 2) + edx_5)
                        
                        if (eax_46 s< 0)
                            eax_46 = 0
                        
                        *edi_10 = eax_46.b
                        int32_t ebx_72
                        ebx_72.b = *(esi_8 + 1)
                        int32_t eax_47
                        eax_47.b = edi_10[1]
                        int32_t eax_48 = eax_47 - *((ebx_72 << 2) + edx_5)
                        
                        if (eax_48 s< 0)
                            eax_48 = 0
                        
                        edi_10[1] = eax_48.b
                        int32_t ebx_76
                        ebx_76.b = *(esi_8 + 2)
                        int32_t eax_49
                        eax_49.b = edi_10[2]
                        eax_38 = eax_49 - *((ebx_76 << 2) + edx_5)
                        
                        if (eax_38 s< 0)
                            eax_38 = 0
                        
                        edi_10[2] = eax_38.b
                
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
        
        return eax_38
    
    if (eax s< ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_4 = edi
        void* esi_11 = data_1cd4408
        char* edi_13 = data_1cd4404
        int32_t i_10 = data_1cd440c
        int32_t ebx_81 = data_1cd4414
        int32_t eax_50
        int32_t i_4
        
        do
            void* var_14_5 = esi_11
            char* var_18_5 = edi_13
            int32_t edx_7 = data_1cd4418
            int32_t j_3 = data_1cd4410
            int32_t j_1
            
            do
                eax_50.b = *(esi_11 + 3)
                eax_50.b = eax_50.b
                
                if (eax_50.b != 0)
                    if (eax_50 == 0xff)
                        int32_t ebx_85
                        ebx_85.b = *esi_11
                        int32_t eax_52
                        eax_52.b = *edi_13
                        int32_t eax_53 = eax_52 - ebx_85
                        
                        if (eax_53 s< 0)
                            eax_53 = 0
                        
                        *edi_13 = eax_53.b
                        int32_t ebx_86
                        ebx_86.b = *(esi_11 + 1)
                        int32_t eax_54
                        eax_54.b = edi_13[1]
                        int32_t eax_55 = eax_54 - ebx_86
                        
                        if (eax_55 s< 0)
                            eax_55 = 0
                        
                        edi_13[1] = eax_55.b
                        int32_t ebx_87
                        ebx_87.b = *(esi_11 + 2)
                        int32_t eax_56
                        eax_56.b = edi_13[2]
                        eax_50 = eax_56 - ebx_87
                        
                        if (eax_50 s< 0)
                            eax_50 = 0
                        
                        edi_13[2] = eax_50.b
                    else
                        int32_t edx_8 = *((eax_50 << 2) + data_1cd4328)
                        int32_t ebx_88
                        ebx_88.b = *esi_11
                        int32_t eax_57
                        eax_57.b = *edi_13
                        int32_t eax_58 = eax_57 - *((ebx_88 << 2) + edx_8)
                        
                        if (eax_58 s< 0)
                            eax_58 = 0
                        
                        *edi_13 = eax_58.b
                        int32_t ebx_92
                        ebx_92.b = *(esi_11 + 1)
                        int32_t eax_59
                        eax_59.b = edi_13[1]
                        int32_t eax_60 = eax_59 - *((ebx_92 << 2) + edx_8)
                        
                        if (eax_60 s< 0)
                            eax_60 = 0
                        
                        edi_13[1] = eax_60.b
                        int32_t ebx_96
                        ebx_96.b = *(esi_11 + 2)
                        int32_t eax_61
                        eax_61.b = edi_13[2]
                        eax_50 = eax_61 - *((ebx_96 << 2) + edx_8)
                        
                        if (eax_50 s< 0)
                            eax_50 = 0
                        
                        edi_13[2] = eax_50.b
                
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
            ebx_81 += data_1cd43f4
            
            if (ebx_81 s>= data_1cd43ec)
                ebx_81 -= data_1cd43ec
                esi_11 += data_1cd4400
            
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        return eax_50
    
    int32_t var_4_5 = ebx
    int32_t var_8_5 = esi
    int32_t var_c_5 = edi
    void* esi_13 = data_1cd4408
    char* edi_16 = data_1cd4404
    int32_t ecx_10 = data_1cd440c
    int32_t ebx_102 = data_1cd4414
    
    while (true)
        void* var_14_6 = esi_13
        char* var_18_6 = edi_16
        int32_t edx_10 = data_1cd4418
        int32_t i_11 = data_1cd4410
        int32_t eax_62
        int32_t i_5
        
        do
            eax_62.b = *(esi_13 + 3)
            eax_62.b = eax_62.b
            
            if (eax_62.b != 0)
                if (eax_62 == 0xff)
                    int32_t ebx_106
                    ebx_106.b = *esi_13
                    int32_t eax_64
                    eax_64.b = *edi_16
                    int32_t eax_65 = eax_64 - ebx_106
                    
                    if (eax_65 s< 0)
                        eax_65 = 0
                    
                    *edi_16 = eax_65.b
                    int32_t ebx_107
                    ebx_107.b = *(esi_13 + 1)
                    int32_t eax_66
                    eax_66.b = edi_16[1]
                    int32_t eax_67 = eax_66 - ebx_107
                    
                    if (eax_67 s< 0)
                        eax_67 = 0
                    
                    edi_16[1] = eax_67.b
                    int32_t ebx_108
                    ebx_108.b = *(esi_13 + 2)
                    int32_t eax_68
                    eax_68.b = edi_16[2]
                    eax_62 = eax_68 - ebx_108
                    
                    if (eax_62 s< 0)
                        eax_62 = 0
                    
                    edi_16[2] = eax_62.b
                else
                    int32_t edx_11 = *((eax_62 << 2) + data_1cd4328)
                    int32_t ebx_109
                    ebx_109.b = *esi_13
                    int32_t eax_69
                    eax_69.b = *edi_16
                    int32_t eax_70 = eax_69 - *((ebx_109 << 2) + edx_11)
                    
                    if (eax_70 s< 0)
                        eax_70 = 0
                    
                    *edi_16 = eax_70.b
                    int32_t ebx_113
                    ebx_113.b = *(esi_13 + 1)
                    int32_t eax_71
                    eax_71.b = edi_16[1]
                    int32_t eax_72 = eax_71 - *((ebx_113 << 2) + edx_11)
                    
                    if (eax_72 s< 0)
                        eax_72 = 0
                    
                    edi_16[1] = eax_72.b
                    int32_t ebx_117
                    ebx_117.b = *(esi_13 + 2)
                    int32_t eax_73
                    eax_73.b = edi_16[2]
                    eax_62 = eax_73 - *((ebx_117 << 2) + edx_11)
                    
                    if (eax_62 s< 0)
                        eax_62 = 0
                    
                    edi_16[2] = eax_62.b
            
            edi_16 = &edi_16[4]
            edx_10 += data_1cd43f8
            
            if (edx_10 s>= data_1cd43f0)
                edx_10 -= data_1cd43f0
                esi_13 += 4
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_121 = ebx_102
        esi_13 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_13 += data_1cd4400
            ebx_121 += data_1cd43ec
            
            if (ebx_121 s< data_1cd43f4)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_102 = ebx_121 - data_1cd43f4
                edi_16 = &var_18_6[data_1cd43fc]
                ecx_10 = ecx_11 - 1
                
                if (ecx_11 != 1)
                    break
            
            return eax_62
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
    label_5da0c7:
        int32_t eax_74
        eax_74.b = *(esi_15 + 3)
        eax_74.b = eax_74.b
        
        if (eax_74.b != 0)
            if (eax_74 == 0xff)
                int32_t ebx_126
                ebx_126.b = *esi_15
                int32_t eax_76
                eax_76.b = *edi_19
                int32_t eax_77 = eax_76 - ebx_126
                
                if (eax_77 s< 0)
                    eax_77 = 0
                
                *edi_19 = eax_77.b
                int32_t ebx_127
                ebx_127.b = *(esi_15 + 1)
                int32_t eax_78
                eax_78.b = edi_19[1]
                int32_t eax_79 = eax_78 - ebx_127
                
                if (eax_79 s< 0)
                    eax_79 = 0
                
                edi_19[1] = eax_79.b
                int32_t ebx_128
                ebx_128.b = *(esi_15 + 2)
                int32_t eax_80
                eax_80.b = edi_19[2]
                eax_74 = eax_80 - ebx_128
                
                if (eax_74 s< 0)
                    eax_74 = 0
                
                edi_19[2] = eax_74.b
            else
                int32_t edx_14 = *((eax_74 << 2) + data_1cd4328)
                int32_t ebx_129
                ebx_129.b = *esi_15
                int32_t eax_81
                eax_81.b = *edi_19
                int32_t eax_82 = eax_81 - *((ebx_129 << 2) + edx_14)
                
                if (eax_82 s< 0)
                    eax_82 = 0
                
                *edi_19 = eax_82.b
                int32_t ebx_133
                ebx_133.b = *(esi_15 + 1)
                int32_t eax_83
                eax_83.b = edi_19[1]
                int32_t eax_84 = eax_83 - *((ebx_133 << 2) + edx_14)
                
                if (eax_84 s< 0)
                    eax_84 = 0
                
                edi_19[1] = eax_84.b
                int32_t ebx_137
                ebx_137.b = *(esi_15 + 2)
                int32_t eax_85
                eax_85.b = edi_19[2]
                eax_74 = eax_85 - *((ebx_137 << 2) + edx_14)
                
                if (eax_74 s< 0)
                    eax_74 = 0
                
                edi_19[2] = eax_74.b
        
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
                    goto label_5da1ab
                
                goto label_5da0c7
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_5da1ab:
                int32_t temp9_1 = ecx_12
                ecx_12 -= 1
                
                if (temp9_1 == 1)
                    return eax_74
                
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
    int32_t ebx_142 = data_1cd4414
    
    while (true)
        void* var_14_8 = esi_18
        char* var_18_8 = edi_22
        int32_t edx_16 = data_1cd4418
        int32_t ecx_16 = data_1cd4410
    label_5da1fe:
        int32_t eax_86
        eax_86.b = *(esi_18 + 3)
        eax_86.b = eax_86.b
        
        if (eax_86.b != 0)
            if (eax_86 == 0xff)
                int32_t ebx_146
                ebx_146.b = *esi_18
                int32_t eax_88
                eax_88.b = *edi_22
                int32_t eax_89 = eax_88 - ebx_146
                
                if (eax_89 s< 0)
                    eax_89 = 0
                
                *edi_22 = eax_89.b
                int32_t ebx_147
                ebx_147.b = *(esi_18 + 1)
                int32_t eax_90
                eax_90.b = edi_22[1]
                int32_t eax_91 = eax_90 - ebx_147
                
                if (eax_91 s< 0)
                    eax_91 = 0
                
                edi_22[1] = eax_91.b
                int32_t ebx_148
                ebx_148.b = *(esi_18 + 2)
                int32_t eax_92
                eax_92.b = edi_22[2]
                eax_86 = eax_92 - ebx_148
                
                if (eax_86 s< 0)
                    eax_86 = 0
                
                edi_22[2] = eax_86.b
            else
                int32_t edx_17 = *((eax_86 << 2) + data_1cd4328)
                int32_t ebx_149
                ebx_149.b = *esi_18
                int32_t eax_93
                eax_93.b = *edi_22
                int32_t eax_94 = eax_93 - *((ebx_149 << 2) + edx_17)
                
                if (eax_94 s< 0)
                    eax_94 = 0
                
                *edi_22 = eax_94.b
                int32_t ebx_153
                ebx_153.b = *(esi_18 + 1)
                int32_t eax_95
                eax_95.b = edi_22[1]
                int32_t eax_96 = eax_95 - *((ebx_153 << 2) + edx_17)
                
                if (eax_96 s< 0)
                    eax_96 = 0
                
                edi_22[1] = eax_96.b
                int32_t ebx_157
                ebx_157.b = *(esi_18 + 2)
                int32_t eax_97
                eax_97.b = edi_22[2]
                eax_86 = eax_97 - *((ebx_157 << 2) + edx_17)
                
                if (eax_86 s< 0)
                    eax_86 = 0
                
                edi_22[2] = eax_86.b
        
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
                    goto label_5da2e1
                
                goto label_5da1fe
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_5da2e1:
                esi_18 = var_14_8
                edi_22 = &var_18_8[data_1cd43fc]
                ebx_142 += data_1cd43f4
                
                if (ebx_142 s>= data_1cd43ec)
                    ebx_142 -= data_1cd43ec
                    esi_18 += data_1cd4400
                
                int32_t temp17_1 = ecx_15
                ecx_15 -= 1
                
                if (temp17_1 == 1)
                    return eax_86
                
                break
else
    int32_t var_4_8 = ebx
    int32_t var_8_8 = esi
    int32_t var_c_8 = edi
    void* esi_20 = data_1cd4408
    char* edi_25 = data_1cd4404
    int32_t ecx_18 = data_1cd440c
    int32_t ebx_163 = data_1cd4414
    
    while (true)
        void* var_14_9 = esi_20
        char* var_18_9 = edi_25
        int32_t edx_19 = data_1cd4418
        int32_t ecx_19 = data_1cd4410
    label_5da33e:
        int32_t eax_98
        eax_98.b = *(esi_20 + 3)
        eax_98.b = eax_98.b
        
        if (eax_98.b != 0)
            if (eax_98 == 0xff)
                int32_t ebx_167
                ebx_167.b = *esi_20
                int32_t eax_100
                eax_100.b = *edi_25
                int32_t eax_101 = eax_100 - ebx_167
                
                if (eax_101 s< 0)
                    eax_101 = 0
                
                *edi_25 = eax_101.b
                int32_t ebx_168
                ebx_168.b = *(esi_20 + 1)
                int32_t eax_102
                eax_102.b = edi_25[1]
                int32_t eax_103 = eax_102 - ebx_168
                
                if (eax_103 s< 0)
                    eax_103 = 0
                
                edi_25[1] = eax_103.b
                int32_t ebx_169
                ebx_169.b = *(esi_20 + 2)
                int32_t eax_104
                eax_104.b = edi_25[2]
                eax_98 = eax_104 - ebx_169
                
                if (eax_98 s< 0)
                    eax_98 = 0
                
                edi_25[2] = eax_98.b
            else
                int32_t edx_20 = *((eax_98 << 2) + data_1cd4328)
                int32_t ebx_170
                ebx_170.b = *esi_20
                int32_t eax_105
                eax_105.b = *edi_25
                int32_t eax_106 = eax_105 - *((ebx_170 << 2) + edx_20)
                
                if (eax_106 s< 0)
                    eax_106 = 0
                
                *edi_25 = eax_106.b
                int32_t ebx_174
                ebx_174.b = *(esi_20 + 1)
                int32_t eax_107
                eax_107.b = edi_25[1]
                int32_t eax_108 = eax_107 - *((ebx_174 << 2) + edx_20)
                
                if (eax_108 s< 0)
                    eax_108 = 0
                
                edi_25[1] = eax_108.b
                int32_t ebx_178
                ebx_178.b = *(esi_20 + 2)
                int32_t eax_109
                eax_109.b = edi_25[2]
                eax_98 = eax_109 - *((ebx_178 << 2) + edx_20)
                
                if (eax_98 s< 0)
                    eax_98 = 0
                
                edi_25[2] = eax_98.b
        
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
                    goto label_5da41f
                
                goto label_5da33e
            
            int32_t temp14_1 = ecx_19
            ecx_19 -= 1
            
            if (temp14_1 == 1)
            label_5da41f:
                int32_t ebx_182 = ebx_163
                esi_20 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_20 += data_1cd4400
                    ebx_182 += data_1cd43ec
                    
                    if (ebx_182 s< data_1cd43f4)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_163 = ebx_182 - data_1cd43f4
                        edi_25 = &var_18_9[data_1cd43fc]
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_98
                
                break
