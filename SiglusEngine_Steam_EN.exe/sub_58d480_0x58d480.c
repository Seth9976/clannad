// 函数: sub_58d480
// 地址: 0x58d480
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_28 = data_1c45980
int32_t ecx = data_1c05514
int32_t eax = data_1ccce7c
int32_t ecx_1 = data_1c45970

if (eax_28 == ecx)
    if (eax == ecx_1)
        char* esi = data_1ccce58
        int32_t* edi = data_1c45554
        int32_t ecx_2 = data_1ccce84
        int32_t eax_3
        
        while (true)
            char* var_14_1 = esi
            int32_t* var_18_1 = edi
            int32_t i_6 = data_1c4555c
            int32_t i
            
            do
                int32_t eax_1
                eax_1.b = *esi
                eax_3 = *(data_1c45994 + (eax_1 << 2))
                *edi = eax_3
                esi = &esi[1]
                edi = &edi[1]
                i = i_6
                i_6 -= 1
            while (i != 1)
            int32_t temp3_1 = ecx_2
            ecx_2 -= 1
            
            if (temp3_1 == 1)
                break
            
            esi = &var_14_1[data_1c45558]
            edi = var_18_1 + data_1c45520
        
        return eax_3
    
    if (eax s< ecx_1)
        char* esi_2 = data_1ccce58
        int32_t* edi_2 = data_1c45554
        int32_t i_7 = data_1ccce84
        int32_t ebx_3 = data_1c4552c
        int32_t eax_6
        int32_t i_1
        
        do
            char* var_14_2 = esi_2
            int32_t* var_18_2 = edi_2
            int32_t j_2 = data_1c4555c
            int32_t j
            
            do
                int32_t eax_4
                eax_4.b = *esi_2
                eax_6 = *(data_1c45994 + (eax_4 << 2))
                *edi_2 = eax_6
                esi_2 = &esi_2[1]
                edi_2 = &edi_2[1]
                j = j_2
                j_2 -= 1
            while (j != 1)
            esi_2 = var_14_2
            edi_2 = var_18_2 + data_1c45520
            ebx_3 += data_1ccce7c
            
            if (ebx_3 s>= data_1c45970)
                ebx_3 -= data_1c45970
                esi_2 = &esi_2[data_1c45558]
            
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        return eax_6
    
    char* esi_3 = data_1ccce58
    int32_t* edi_4 = data_1c45554
    int32_t ecx_5 = data_1ccce84
    int32_t ebx_7 = data_1c4552c
    
    while (true)
        char* var_14_3 = esi_3
        int32_t* var_18_3 = edi_4
        int32_t i_8 = data_1c4555c
        int32_t eax_9
        int32_t i_2
        
        do
            int32_t eax_7
            eax_7.b = *esi_3
            eax_9 = *(data_1c45994 + (eax_7 << 2))
            *edi_4 = eax_9
            esi_3 = &esi_3[1]
            edi_4 = &edi_4[1]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        int32_t ebx_10 = ebx_7
        esi_3 = var_14_3
        int32_t ecx_6 = ecx_5
        
        while (true)
            esi_3 = &esi_3[data_1c45558]
            ebx_10 += data_1c45970
            
            if (ebx_10 s< data_1ccce7c)
                int32_t temp14_1 = ecx_6
                ecx_6 -= 1
                
                if (temp14_1 != 1)
                    continue
            else
                ebx_7 = ebx_10 - data_1ccce7c
                edi_4 = var_18_3 + data_1c45520
                ecx_5 = ecx_6 - 1
                
                if (ecx_6 != 1)
                    break
            
            return eax_9
else if (eax_28 s< ecx)
    if (eax == ecx_1)
        char* esi_4 = data_1ccce58
        int32_t* edi_6 = data_1c45554
        int32_t ecx_7 = data_1ccce84
        int32_t eax_12
        
        while (true)
            char* var_14_4 = esi_4
            int32_t* var_18_4 = edi_6
            int32_t edx_1 = data_1c4ce44
            int32_t i_9 = data_1c4555c
            int32_t i_3
            
            do
                int32_t eax_10
                eax_10.b = *esi_4
                eax_12 = *(data_1c45994 + (eax_10 << 2))
                *edi_6 = eax_12
                edi_6 = &edi_6[1]
                edx_1 += data_1c45980
                
                if (edx_1 s>= data_1c05514)
                    edx_1 -= data_1c05514
                    esi_4 = &esi_4[1]
                
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
            int32_t temp8_1 = ecx_7
            ecx_7 -= 1
            
            if (temp8_1 == 1)
                break
            
            esi_4 = &var_14_4[data_1c45558]
            edi_6 = var_18_4 + data_1c45520
        
        return eax_12
    
    if (eax s< ecx_1)
        char* esi_6 = data_1ccce58
        int32_t* edi_8 = data_1c45554
        int32_t i_10 = data_1ccce84
        int32_t ebx_13 = data_1c4552c
        int32_t eax_15
        int32_t i_4
        
        do
            char* var_14_5 = esi_6
            int32_t* var_18_5 = edi_8
            int32_t edx_2 = data_1c4ce44
            int32_t j_3 = data_1c4555c
            int32_t j_1
            
            do
                int32_t eax_13
                eax_13.b = *esi_6
                eax_15 = *(data_1c45994 + (eax_13 << 2))
                *edi_8 = eax_15
                edi_8 = &edi_8[1]
                edx_2 += data_1c45980
                
                if (edx_2 s>= data_1c05514)
                    edx_2 -= data_1c05514
                    esi_6 = &esi_6[1]
                
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            esi_6 = var_14_5
            edi_8 = var_18_5 + data_1c45520
            ebx_13 += data_1ccce7c
            
            if (ebx_13 s>= data_1c45970)
                ebx_13 -= data_1c45970
                esi_6 = &esi_6[data_1c45558]
            
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        return eax_15
    
    char* esi_7 = data_1ccce58
    int32_t* edi_10 = data_1c45554
    int32_t ecx_10 = data_1ccce84
    int32_t ebx_17 = data_1c4552c
    
    while (true)
        char* var_14_6 = esi_7
        int32_t* var_18_6 = edi_10
        int32_t edx_3 = data_1c4ce44
        int32_t i_11 = data_1c4555c
        int32_t eax_18
        int32_t i_5
        
        do
            int32_t eax_16
            eax_16.b = *esi_7
            eax_18 = *(data_1c45994 + (eax_16 << 2))
            *edi_10 = eax_18
            edi_10 = &edi_10[1]
            edx_3 += data_1c45980
            
            if (edx_3 s>= data_1c05514)
                edx_3 -= data_1c05514
                esi_7 = &esi_7[1]
            
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        int32_t ebx_20 = ebx_17
        esi_7 = var_14_6
        int32_t ecx_11 = ecx_10
        
        while (true)
            esi_7 = &esi_7[data_1c45558]
            ebx_20 += data_1c45970
            
            if (ebx_20 s< data_1ccce7c)
                int32_t temp20_1 = ecx_11
                ecx_11 -= 1
                
                if (temp20_1 != 1)
                    continue
            else
                ebx_17 = ebx_20 - data_1ccce7c
                edi_10 = var_18_6 + data_1c45520
                ecx_10 = ecx_11 - 1
                
                if (ecx_11 != 1)
                    break
            
            return eax_18
else if (eax == ecx_1)
    char* esi_8 = data_1ccce58
    int32_t* edi_12 = data_1c45554
    int32_t ecx_12 = data_1ccce84
    
    while (true)
        char* var_14_7 = esi_8
        int32_t* var_18_7 = edi_12
        int32_t edx_4 = data_1c4ce44
        int32_t ecx_13 = data_1c4555c
    label_58d790:
        int32_t eax_19
        eax_19.b = *esi_8
        int32_t eax_21 = *(data_1c45994 + (eax_19 << 2))
        *edi_12 = eax_21
        
        while (true)
            esi_8 = &esi_8[1]
            edx_4 += data_1c05514
            
            if (edx_4 s>= data_1c45980)
                edx_4 -= data_1c45980
                edi_12 = &edi_12[1]
                int32_t temp13_1 = ecx_13
                ecx_13 -= 1
                
                if (temp13_1 == 1)
                    goto label_58d7ca
                
                goto label_58d790
            
            int32_t temp5_1 = ecx_13
            ecx_13 -= 1
            
            if (temp5_1 == 1)
            label_58d7ca:
                int32_t temp12_1 = ecx_12
                ecx_12 -= 1
                
                if (temp12_1 == 1)
                    return eax_21
                
                esi_8 = &var_14_7[data_1c45558]
                edi_12 = var_18_7 + data_1c45520
                break
else if (eax s>= ecx_1)
    char* esi_11 = data_1ccce58
    int32_t* edi_16 = data_1c45554
    int32_t ecx_18 = data_1ccce84
    int32_t ebx_27 = data_1c4552c
    
    while (true)
        char* var_14_9 = esi_11
        int32_t* var_18_9 = edi_16
        int32_t edx_6 = data_1c4ce44
        int32_t ecx_19 = data_1c4555c
    label_58d89d:
        int32_t eax_25
        eax_25.b = *esi_11
        int32_t eax_27 = *(data_1c45994 + (eax_25 << 2))
        *edi_16 = eax_27
        
        while (true)
            esi_11 = &esi_11[1]
            edx_6 += data_1c05514
            
            if (edx_6 s>= data_1c45980)
                edx_6 -= data_1c45980
                edi_16 = &edi_16[1]
                int32_t temp15_1 = ecx_19
                ecx_19 -= 1
                
                if (temp15_1 == 1)
                    goto label_58d8d4
                
                goto label_58d89d
            
            int32_t temp10_1 = ecx_19
            ecx_19 -= 1
            
            if (temp10_1 == 1)
            label_58d8d4:
                int32_t ebx_30 = ebx_27
                esi_11 = var_14_9
                int32_t ecx_20 = ecx_18
                
                while (true)
                    esi_11 = &esi_11[data_1c45558]
                    ebx_30 += data_1c45970
                    
                    if (ebx_30 s< data_1ccce7c)
                        int32_t temp21_1 = ecx_20
                        ecx_20 -= 1
                        
                        if (temp21_1 != 1)
                            continue
                    else
                        ebx_27 = ebx_30 - data_1ccce7c
                        edi_16 = var_18_9 + data_1c45520
                        ecx_18 = ecx_20 - 1
                        
                        if (ecx_20 != 1)
                            break
                    
                    return eax_27
                
                break
else
    char* esi_10 = data_1ccce58
    int32_t* edi_14 = data_1c45554
    int32_t ecx_15 = data_1ccce84
    int32_t ebx_23 = data_1c4552c
    
    while (true)
        char* var_14_8 = esi_10
        int32_t* var_18_8 = edi_14
        int32_t edx_5 = data_1c4ce44
        int32_t ecx_16 = data_1c4555c
    label_58d80f:
        int32_t eax_22
        eax_22.b = *esi_10
        int32_t eax_24 = *(data_1c45994 + (eax_22 << 2))
        *edi_14 = eax_24
        
        while (true)
            esi_10 = &esi_10[1]
            edx_5 += data_1c05514
            
            if (edx_5 s>= data_1c45980)
                edx_5 -= data_1c45980
                edi_14 = &edi_14[1]
                int32_t temp16_1 = ecx_16
                ecx_16 -= 1
                
                if (temp16_1 == 1)
                    goto label_58d848
                
                goto label_58d80f
            
            int32_t temp11_1 = ecx_16
            ecx_16 -= 1
            
            if (temp11_1 == 1)
            label_58d848:
                esi_10 = var_14_8
                edi_14 = var_18_8 + data_1c45520
                ebx_23 += data_1ccce7c
                
                if (ebx_23 s>= data_1c45970)
                    ebx_23 -= data_1c45970
                    esi_10 = &esi_10[data_1c45558]
                
                int32_t temp19_1 = ecx_15
                ecx_15 -= 1
                
                if (temp19_1 == 1)
                    return eax_24
                
                break
