// 函数: sub_5c3670
// 地址: 0x5c3670
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_6 = data_1cd43f8
int32_t ecx = data_1cd43f0
int32_t eax = data_1cd43f4
int32_t ecx_1 = data_1cd43ec

if (eax_6 == ecx)
    if (eax != ecx_1)
        if (eax s>= ecx_1)
            return sub_5c3300() __tailcall
        
        return sub_5c3290() __tailcall
    
    int32_t* esi_1 = data_1cd4408
    int32_t* edi_1 = data_1cd4404
    int32_t ecx_2 = data_1cd440c
    int32_t eax_1
    
    while (true)
        int32_t* var_10_1 = esi_1
        int32_t* var_14_1 = edi_1
        int32_t i_3 = data_1cd4410
        int32_t i
        
        do
            eax_1 = *esi_1
            *edi_1 = eax_1
            esi_1 = &esi_1[1]
            edi_1 = &edi_1[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
        int32_t temp1_1 = ecx_2
        ecx_2 -= 1
        
        if (temp1_1 == 1)
            break
        
        esi_1 = var_10_1 + data_1cd4400
        edi_1 = var_14_1 + data_1cd43fc
    
    return eax_1

int32_t ebx
int32_t esi
int32_t edi

if (eax_6 s>= ecx)
    if (eax == ecx_1)
        return sub_5c34e0() __tailcall
    
    if (eax s>= ecx_1)
        int32_t var_4_4 = ebx
        int32_t var_8_4 = esi
        int32_t var_c_5 = edi
        int32_t* esi_18 = data_1cd4408
        int32_t* edi_21 = data_1cd4404
        int32_t ecx_14 = data_1cd440c
        int32_t ebx_10 = data_1cd4414
        
        while (true)
            int32_t* var_14_5 = esi_18
            int32_t* var_18_4 = edi_21
            int32_t edx_9 = data_1cd4418
            int32_t ecx_15 = data_1cd4410
        label_5c360c:
            int32_t eax_10 = *esi_18
            *edi_21 = eax_10
            int32_t edx_10 = edx_9
            
            while (true)
                esi_18 = &esi_18[1]
                edx_10 += data_1cd43f0
                
                if (edx_10 s>= data_1cd43f8)
                    edx_9 = edx_10 - data_1cd43f8
                    edi_21 = &edi_21[1]
                    int32_t temp6_1 = ecx_15
                    ecx_15 -= 1
                    
                    if (temp6_1 == 1)
                        goto label_5c3637
                    
                    goto label_5c360c
                
                int32_t temp4_1 = ecx_15
                ecx_15 -= 1
                
                if (temp4_1 == 1)
                label_5c3637:
                    int32_t ebx_11 = ebx_10
                    esi_18 = var_14_5
                    int32_t ecx_16 = ecx_14
                    
                    while (true)
                        esi_18 += data_1cd4400
                        ebx_11 += data_1cd43ec
                        
                        if (ebx_11 s< data_1cd43f4)
                            int32_t temp11_1 = ecx_16
                            ecx_16 -= 1
                            
                            if (temp11_1 != 1)
                                continue
                        else
                            ebx_10 = ebx_11 - data_1cd43f4
                            edi_21 = var_18_4 + data_1cd43fc
                            ecx_14 = ecx_16 - 1
                            
                            if (ecx_16 != 1)
                                break
                        
                        return eax_10
                    
                    break
    else
        int32_t var_4_3 = ebx
        int32_t var_8_3 = esi
        int32_t var_c_4 = edi
        int32_t* esi_16 = data_1cd4408
        int32_t* edi_18 = data_1cd4404
        int32_t ecx_11 = data_1cd440c
        int32_t ebx_7 = data_1cd4414
        
        while (true)
            int32_t* var_14_4 = esi_16
            int32_t* var_18_3 = edi_18
            int32_t edx_7 = data_1cd4418
            int32_t ecx_12 = data_1cd4410
        label_5c357c:
            int32_t eax_9 = *esi_16
            *edi_18 = eax_9
            int32_t edx_8 = edx_7
            
            while (true)
                esi_16 = &esi_16[1]
                edx_8 += data_1cd43f0
                
                if (edx_8 s>= data_1cd43f8)
                    edx_7 = edx_8 - data_1cd43f8
                    edi_18 = &edi_18[1]
                    int32_t temp7_1 = ecx_12
                    ecx_12 -= 1
                    
                    if (temp7_1 == 1)
                        goto label_5c35a9
                    
                    goto label_5c357c
                
                int32_t temp5_1 = ecx_12
                ecx_12 -= 1
                
                if (temp5_1 == 1)
                label_5c35a9:
                    esi_16 = var_14_4
                    edi_18 = var_18_3 + data_1cd43fc
                    ebx_7 += data_1cd43f4
                    
                    if (ebx_7 s>= data_1cd43ec)
                        ebx_7 -= data_1cd43ec
                        esi_16 += data_1cd4400
                    
                    int32_t temp9_1 = ecx_11
                    ecx_11 -= 1
                    
                    if (temp9_1 == 1)
                        return eax_9
                    
                    break
else
    if (eax == ecx_1)
        return sub_5c3370() __tailcall
    
    if (eax s< ecx_1)
        int32_t var_4_1 = ebx
        int32_t var_8_1 = esi
        int32_t var_c_2 = edi
        int32_t* esi_12 = data_1cd4408
        int32_t* edi_12 = data_1cd4404
        int32_t i_4 = data_1cd440c
        int32_t ebx_1 = data_1cd4414
        int32_t eax_7
        int32_t i_1
        
        do
            int32_t* var_14_2 = esi_12
            int32_t* var_18_1 = edi_12
            int32_t edx_3 = data_1cd4418
            int32_t j_1 = data_1cd4410
            int32_t j
            
            do
                eax_7 = *esi_12
                *edi_12 = eax_7
                edi_12 = &edi_12[1]
                edx_3 += data_1cd43f8
                
                if (edx_3 s>= data_1cd43f0)
                    edx_3 -= data_1cd43f0
                    esi_12 = &esi_12[1]
                
                j = j_1
                j_1 -= 1
            while (j != 1)
            esi_12 = var_14_2
            edi_12 = var_18_1 + data_1cd43fc
            ebx_1 += data_1cd43f4
            
            if (ebx_1 s>= data_1cd43ec)
                ebx_1 -= data_1cd43ec
                esi_12 += data_1cd4400
            
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        return eax_7
    
    int32_t var_4_2 = ebx
    int32_t var_8_2 = esi
    int32_t var_c_3 = edi
    int32_t* esi_14 = data_1cd4408
    int32_t* edi_15 = data_1cd4404
    int32_t ecx_9 = data_1cd440c
    int32_t ebx_4 = data_1cd4414
    
    while (true)
        int32_t* var_14_3 = esi_14
        int32_t* var_18_2 = edi_15
        int32_t edx_5 = data_1cd4418
        int32_t i_5 = data_1cd4410
        int32_t eax_8
        int32_t i_2
        
        do
            eax_8 = *esi_14
            *edi_15 = eax_8
            edi_15 = &edi_15[1]
            edx_5 += data_1cd43f8
            
            if (edx_5 s>= data_1cd43f0)
                edx_5 -= data_1cd43f0
                esi_14 = &esi_14[1]
            
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
        int32_t ebx_5 = ebx_4
        esi_14 = var_14_3
        int32_t ecx_10 = ecx_9
        
        while (true)
            esi_14 += data_1cd4400
            ebx_5 += data_1cd43ec
            
            if (ebx_5 s< data_1cd43f4)
                int32_t temp10_1 = ecx_10
                ecx_10 -= 1
                
                if (temp10_1 != 1)
                    continue
            else
                ebx_4 = ebx_5 - data_1cd43f4
                edi_15 = var_18_2 + data_1cd43fc
                ecx_9 = ecx_10 - 1
                
                if (ecx_10 != 1)
                    break
            
            return eax_8
