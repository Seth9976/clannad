// 函数: sub_729ca0
// 地址: 0x729ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1[6]
void** var_18 = edi
char* ecx = *edi
int32_t ebx = edi[1]

if (*(arg1[0x6b] + 0xd) == 0)
    *(*arg1 + 0x14) = 0x3c
    _strncpy(*arg1 + 0x18, "SOS", 0x50)
    (**arg1)(arg1)

if (ebx != 0)
    goto label_729d0f

if (edi[3](arg1) != 0)
    ecx = *edi
    ebx = edi[1]
label_729d0f:
    void* ecx_1 = &ecx[1]
    uint32_t edx_2 = zx.d(*ecx) << 8
    int32_t ebx_1 = ebx - 1
    
    if (ebx != 1)
        goto label_729d31
    
    if (edi[3](arg1) != 0)
        ecx_1 = *edi
        ebx_1 = edi[1]
    label_729d31:
        void* ecx_2 = ecx_1 + 1
        uint32_t edx_3 = edx_2 + zx.d(*ecx_1)
        int32_t ebx_2 = ebx_1 - 1
        
        if (ebx_1 != 1)
            goto label_729d4e
        
        if (edi[3](arg1) != 0)
            ecx_2 = *edi
            ebx_2 = edi[1]
        label_729d4e:
            int32_t ebx_3 = ebx_2 - 1
            uint32_t edx_4 = zx.d(*ecx_2)
            *(*arg1 + 0x14) = 0x69
            void* var_8_1 = ecx_2 + 1
            *(*arg1 + 0x18) = edx_4
            (*(*arg1 + 4))(arg1, 1)
            uint32_t ecx_4 = edx_4
            
            if (edx_3 != (ecx_4 << 1) + 6 || ecx_4 s> 4)
            label_729d95:
                *(*arg1 + 0x14) = 0xc
                (**arg1)(arg1)
                ecx_4 = edx_4
            else if (ecx_4 == 0 && *(arg1 + 0xc9) == ecx_4.b)
                goto label_729d95
            
            arg1[0x4c] = ecx_4
            int32_t var_c_3 = 0
            
            if (ecx_4 s> 0)
                void* edx_5 = &arg1[0x4d]
                void* var_14_1 = edx_5
                
                while (true)
                    void* ecx_5
                    
                    if (ebx_3 != 0)
                        ecx_5 = var_8_1
                    else
                        if (edi[3](arg1) == 0)
                            return 0
                        
                        ecx_5 = *edi
                        edx_5 = &arg1[0x4d]
                        ebx_3 = edi[1]
                    
                    uint32_t i_1 = zx.d(*ecx_5)
                    int32_t edi_1 = 0
                    int32_t ebx_4 = ebx_3 - 1
                    
                    if (var_c_3 s> 0)
                        do
                            if (i_1 == **edx_5)
                                int32_t eax_21 = *arg1[0x4d]
                                
                                if (var_c_3 s> 1)
                                    void* edx_6 = &arg1[0x4e]
                                    int32_t i_2 = var_c_3 - 1
                                    int32_t i
                                    
                                    do
                                        int32_t* ecx_9 = *edx_6
                                        edx_6 += 4
                                        int32_t ecx_10 = *ecx_9
                                        
                                        if (ecx_10 s> eax_21)
                                            eax_21 = ecx_10
                                        
                                        i = i_2
                                        i_2 -= 1
                                    while (i != 1)
                                
                                i_1 = eax_21 + 1
                                break
                            
                            edi_1 += 1
                            edx_5 += 4
                        while (edi_1 s< var_c_3)
                    
                    int32_t edx_7 = arg1[9]
                    int32_t ecx_11 = 0
                    int32_t* edi_2 = arg1[0x31]
                    
                    if (edx_7 s<= 0)
                    label_729e5f:
                        *(*arg1 + 0x14) = 4
                        *(*arg1 + 0x18) = i_1
                        (**arg1)(arg1)
                    else
                        while (i_1 != *edi_2)
                            ecx_11 += 1
                            edi_2 = &edi_2[0x16]
                            
                            if (ecx_11 s>= edx_7)
                                goto label_729e5f
                    
                    *var_14_1 = edi_2
                    void* eax_26
                    
                    if (ebx_4 != 0)
                        eax_26 = ecx_5 + 1
                    else
                        if (var_18[3](arg1) == 0)
                            return 0
                        
                        eax_26 = *var_18
                        ebx_4 = var_18[1]
                    
                    uint32_t ecx_14 = zx.d(*eax_26)
                    ebx_3 = ebx_4 - 1
                    var_8_1 = eax_26 + 1
                    edi_2[6] = ecx_14 & 0xf
                    edi_2[5] = ecx_14 s>> 4 & 0xf
                    void* ecx_16 = *arg1
                    *(ecx_16 + 0x18) = *edi_2
                    *(ecx_16 + 0x1c) = edi_2[5]
                    *(ecx_16 + 0x20) = edi_2[6]
                    *(*arg1 + 0x14) = 0x6a
                    (*(*arg1 + 4))(arg1, 1)
                    var_14_1 += 4
                    int32_t eax_38 = var_c_3 + 1
                    edi = var_18
                    var_c_3 = eax_38
                    
                    if (eax_38 s>= edx_4)
                        break
                    
                    edx_5 = &arg1[0x4d]
            
            void* edx_8
            
            if (ebx_3 != 0)
                edx_8 = var_8_1
            label_729f1d:
                void* edx_9 = edx_8 + 1
                arg1[0x5e] = zx.d(*edx_8)
                int32_t ebx_6 = ebx_3 - 1
                
                if (ebx_3 != 1)
                    goto label_729f40
                
                if (edi[3](arg1) != 0)
                    edx_9 = *edi
                    ebx_6 = edi[1]
                label_729f40:
                    void* edx_10 = edx_9 + 1
                    arg1[0x5f] = zx.d(*edx_9)
                    int32_t ebx_7 = ebx_6 - 1
                    
                    if (ebx_6 != 1)
                        goto label_729f60
                    
                    if (edi[3](arg1) != 0)
                        edx_10 = *edi
                        ebx_7 = edi[1]
                    label_729f60:
                        uint32_t ecx_17 = zx.d(*edx_10)
                        arg1[0x61] = ecx_17 & 0xf
                        void* ecx_19 = *arg1
                        arg1[0x60] = ecx_17 s>> 4 & 0xf
                        *(ecx_19 + 0x18) = arg1[0x5e]
                        *(ecx_19 + 0x1c) = arg1[0x5f]
                        *(ecx_19 + 0x20) = arg1[0x60]
                        *(ecx_19 + 0x24) = arg1[0x61]
                        *(*arg1 + 0x14) = 0x6b
                        (*(*arg1 + 4))(arg1, 1)
                        *(arg1[0x6b] + 0x10) = 0
                        
                        if (edx_4 != 0)
                            arg1[0x1f] += 1
                        
                        *edi = edx_10 + 1
                        void* result
                        result.b = 1
                        edi[1] = ebx_7 - 1
                        return result
            else if (edi[3](arg1) != 0)
                edx_8 = *edi
                ebx_3 = edi[1]
                goto label_729f1d

return 0
