// 函数: sub_49b000
// 地址: 0x49b000
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_703840 != 0)
    return 

int32_t* eax = &data_f466f8
int32_t i_1 = 0
int32_t* edx_1 = &data_12b9200
int32_t* var_8_1 = &data_f466f8
int32_t* var_c_1 = &data_12b9200
int32_t* esi_1 = &data_8d2f24
int32_t i

do
    for (int32_t j = 0; j s< 2; )
        int32_t ecx_1 = esi_1[-0xb1c]
        int32_t ebx_1 = data_131310c
        
        if (ecx_1 != 0 && esi_1[-0xb1b] == 0)
            int32_t eax_1 = *esi_1
            
            if (eax_1 == 0xffffffff)
                *esi_1 = ebx_1
                eax = var_8_1
            else if (ecx_1 - 1 u> 5)
                edx_1 = var_c_1
                eax = var_8_1
            else
                switch (ecx_1)
                    case 1, 2, 3, 4
                        if (data_12dc610 != 0 || data_1392700 == 0)
                            edx_1 = var_c_1
                            
                            if (*edx_1 != 0 && data_1313c7c == 0)
                                goto label_49b0f9
                            
                        label_49b0a7:
                            int32_t edx_4 = ebx_1 - eax_1
                            int32_t eax_3 = esi_1[esi_1[-2] * 0xb - 0xb02]
                            
                            if (edx_4 u>= eax_3)
                                var_8_1[j] = 1
                                int32_t edx_7 = esi_1[-2] + 1
                                esi_1[-2] = edx_7
                                
                                if (ecx_1 == 1 || ecx_1 == 3)
                                    if (edx_7 == esi_1[-1] + 1)
                                        sub_49c620(i_1, j)
                                    else if (edx_7 s>= esi_1[-3])
                                        esi_1[-2] = 0
                                else if (edx_7 s>= esi_1[-3])
                                    esi_1[-2] = 0
                                
                                int32_t ecx_5 = edx_4 - eax_3
                                int32_t eax_10 = esi_1[esi_1[-2] * 0xb - 0xb02]
                                
                                if (ecx_5 s> eax_10)
                                    ecx_5 = eax_10
                                
                                *esi_1 = ebx_1 - ecx_5
                            
                            edx_1 = var_c_1
                            eax = var_8_1
                        else
                            edx_1 = var_c_1
                        label_49b0f9:
                            
                            if (ecx_1 != 2 && ecx_1 != 4)
                                if (ecx_1 != 1 && ecx_1 != 3)
                                    goto label_49b0a7
                                
                                int32_t eax_4 = esi_1[-1]
                                esi_1[-2] = eax_4
                                esi_1[1] = eax_4
                                goto label_49b11c
                            
                            if (esi_1[1] == 0xffffffff)
                                goto label_49b0a7
                            
                            *esi_1 = ebx_1
                            eax = var_8_1
                    case 5, 6
                        if (data_12dc610 != 0 || data_1392700 == 0)
                            edx_1 = var_c_1
                            
                            if (*edx_1 != 0 && data_1313c7c == 0)
                                goto label_49b1dd
                            
                        label_49b1fa:
                            uint32_t ebx_4 = ebx_1 - eax_1
                            int32_t ecx_6 = esi_1[-0xb04]
                            uint32_t edx_11
                            
                            if (ecx_1 != 5)
                                edx_11 = modu.dp.d(0:ebx_4, ecx_6)
                                eax_1 = *esi_1
                            else
                                if (ebx_4 u>= ecx_6)
                                    goto label_49b212
                                
                                edx_11 = ebx_4
                            
                            esi_1[-0xb05] = edx_11
                            
                            if (ebx_4 u>= ecx_6)
                                *esi_1 = eax_1 - edx_11 + ebx_4
                            
                            int32_t eax_17 = esi_1[-0xb09]
                            int32_t ebx_5 = esi_1[-0xb08]
                            int32_t eax_18
                            
                            if (eax_17 s<= ebx_5)
                                eax_18 = ebx_5 * edx_11
                            else
                                eax_18 = eax_17 * edx_11
                            
                            int32_t var_20
                            int32_t var_1c
                            sub_4d2390(&var_1c, esi_1[-0xb0e], esi_1[-0xb0f], esi_1[-0xb0d], 
                                esi_1[-0xb0c], &var_1c, &var_20, divu.dp.d(0:eax_18, ecx_6))
                            int32_t ecx_8 = var_1c
                            int32_t eax_21 = var_20
                            
                            if (esi_1[-0xb0b] != ecx_8 || esi_1[-0xb0a] != eax_21)
                                edx_1 = var_c_1
                                esi_1[-0xb0a] = eax_21
                                eax = var_8_1
                                esi_1[-0xb0b] = ecx_8
                                eax[j] = 1
                            else
                                edx_1 = var_c_1
                                eax = var_8_1
                        else
                            edx_1 = var_c_1
                        label_49b1dd:
                            
                            if (ecx_1 != 6)
                                if (ecx_1 != 5)
                                    goto label_49b1fa
                                
                            label_49b212:
                                esi_1[1] = esi_1[-2]
                                esi_1[-0xb0b] = esi_1[-0xb0d]
                                esi_1[-0xb0a] = esi_1[-0xb0c]
                            label_49b11c:
                                var_8_1[j] = 1
                                sub_49c620(i_1, j)
                                edx_1 = var_c_1
                                eax = var_8_1
                            else
                                if (esi_1[1] == 0xffffffff)
                                    goto label_49b1fa
                                
                                *esi_1 = ebx_1 - esi_1[-0xb05]
                                eax = var_8_1
        
        j += 1
        esi_1 = &esi_1[0xb20]
    
    edx_1 = &edx_1[3]
    var_8_1 = &eax[2]
    i = i_1 + 1
    var_c_1 = edx_1
    i_1 = i
    eax = var_8_1
while (i s< 8)
