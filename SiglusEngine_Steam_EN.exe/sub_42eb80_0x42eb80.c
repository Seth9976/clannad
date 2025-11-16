// 函数: sub_42eb80
// 地址: 0x42eb80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = 0
void* ebx = *(arg1 + 0x50)
int32_t var_14 = 0
int32_t i_1 = 0

if (*(arg1 + 0x54) s> 0)
    int32_t i
    
    do
        int32_t esi_1 = 0
        int32_t j = 0
        int32_t j_1 = 0
        int32_t edx_1 = 1
        
        if (*(ebx + 0x174) s> 0)
            int32_t var_10_1 = 0
            int32_t* edi_3 = *(ebx + 0x170) + 8
            
            do
                void* var_8_1
                
                if (j s>= *(ebx + 0x174) - 1)
                    var_8_1 = nullptr
                else
                    j = j_1
                    var_8_1 = *(ebx + 0x170) + var_10_1 + 0x30
                
                int32_t eax_5 = edi_3[4]
                
                if (eax_5 == 0)
                label_42ebf6:
                    edx_1 = 1
                    *edi_3 = esi_1
                    esi_1 += 1
                else if (eax_5 == 1)
                    switch (edi_3[5])
                        case 0, 2
                            goto label_42ebf6
                        case 1
                            if (edx_1 != 0)
                                sub_42eab0(ebx, j)
                                j = j_1
                            
                            edx_1 = 1
                            
                            if (var_8_1 == 0 || *(var_8_1 + 0x18) != 1)
                                *edi_3 = esi_1
                                esi_1 += 1
                            else
                                bool cond:1_1 = *(var_8_1 + 0x1c) != 1
                                *edi_3 = esi_1
                                
                                if (cond:1_1)
                                    esi_1 += 1
                                else
                                    edx_1 = 0
                        case 3
                            edx_1 = 1
                            *edi_3 = esi_1
                            
                            if (var_8_1 != 0)
                                edi_3[3] = 1
                            else
                                edi_3[3] = var_8_1
                                esi_1 += 1
                else if (eax_5 == 2)
                    goto label_42ebf6
                
                var_10_1 += 0x30
                j += 1
                edi_3 = &edi_3[0xc]
                j_1 = j
            while (j s< *(ebx + 0x174))
        
        int32_t edi_4 = *(ebx + 0x174)
        int32_t edx_2 = 0
        int32_t esi_2 = 0
        int32_t eax_9 = 0
        int32_t var_10_2 = 0
        
        if (edi_4 s> 0)
            int32_t* ecx_4 = *(ebx + 0x170) + 8
            
            do
                int32_t edx_3 = *ecx_4
                
                if (esi_2 == edx_3)
                    edx_2 = var_10_2
                else
                    esi_2 = edx_3
                    edx_2 = eax_9
                    var_10_2 = edx_2
                
                eax_9 += 1
                ecx_4 = &ecx_4[0xc]
            while (eax_9 s< edi_4)
        
        eax = var_14
        *(ebx + 0x1c) = edx_2
        
        if (esi_2 s> eax)
            eax = esi_2
        
        i = i_1 + 1
        *(ebx + 0x18) = esi_2
        ebx += 0x178
        var_14 = eax
        i_1 = i
    while (i s< *(arg1 + 0x54))

*(arg1 + 0x20) = eax
int32_t result = data_131310c
*(arg1 + 0x28) = 0
*(arg1 + 0x24) = result
return result
