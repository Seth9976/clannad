// 函数: sub_72eee0
// 地址: 0x72eee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
void* ebx = esi[0x6c]

if (*(esi + 0xc9) == 0)
    if (esi[0x5e] != 0 || esi[0x60] != 0 || esi[0x61] != 0)
        *(*esi + 0x14) = 0x7d
        (*(*esi + 4))(esi, 0xffffffff)
    else if ((esi[0x32].b != 0 || esi[0x5f] s< 0x40) && esi[0x5f] != esi[0x64])
        *(*esi + 0x14) = 0x7d
        (*(*esi + 4))(esi, 0xffffffff)
    
    void* (* eax_36)(void* arg1, int32_t arg2) = sub_72eac0
    
    if (esi[0x64] != 0x3f)
        eax_36 = sub_72e6a0
    
    int32_t i = 0
    *(ebx + 4) = eax_36
    
    if (esi[0x4c] s> 0)
        void* ecx_13 = &esi[0x4d]
        void* var_c_2 = ebx + 0x14
        arg1 = ecx_13
        
        do
            void* eax_38 = *ecx_13
            int32_t ecx_14 = *(eax_38 + 0x14)
            void* eax_40 = ebx + 0x40 + (ecx_14 << 2)
            sub_72d6c0(eax_40, 1, esi, ecx_14, eax_40)
            
            if (esi[0x64] != 0)
                int32_t ecx_17 = *(eax_38 + 0x18)
                void* eax_42 = ebx + ((ecx_17 + 0x14) << 2)
                sub_72d6c0(eax_42, 0, esi, ecx_17, eax_42)
            
            i += 1
            ecx_13 = arg1 + 4
            arg1 = ecx_13
            *var_c_2 = 0
            var_c_2 += 4
        while (i s< esi[0x4c])
    
    arg1 = nullptr
    
    if (esi[0x53] s> 0)
        void* edx_2 = &esi[0x54]
        void* edi_3 = ebx + 0xb0
        void* var_c_3 = edx_2
        void* i_1
        
        do
            void* edx_3 = esi[*edx_2 + 0x4d]
            *(edi_3 - 0x50) = *(ebx + (*(edx_3 + 0x14) << 2) + 0x40)
            *(edi_3 - 0x28) = *(ebx + (*(edx_3 + 0x18) << 2) + 0x50)
            
            if (*(edx_3 + 0x34) == 0)
                *edi_3 = 0
            else
                int32_t ecx_20 = *(edx_3 + 0x28)
                int32_t edx_4 = *(edx_3 + 0x24)
                
                switch (esi[0x64])
                    case 0
                        *edi_3 = 1
                    case 3
                        if (ecx_20 s<= 0 || ecx_20 s> 2)
                            ecx_20 = 2
                        
                        if (edx_4 s<= 0 || edx_4 s> 2)
                            edx_4 = 2
                        
                        *edi_3 = *(((edx_4 + (ecx_20 << 1)) << 2) + &data_ade624) + 1
                    case 8
                        if (ecx_20 s<= 0 || ecx_20 s> 3)
                            ecx_20 = 3
                        
                        if (edx_4 s<= 0 || edx_4 s> 3)
                            edx_4 = 3
                        
                        *edi_3 = *(((ecx_20 * 3 + edx_4) << 2) + &data_ade2e0) + 1
                    case 0xf
                        if (ecx_20 s<= 0 || ecx_20 s> 4)
                            ecx_20 = 4
                        
                        if (edx_4 s<= 0 || edx_4 s> 4)
                            edx_4 = 4
                        
                        *edi_3 = *(((edx_4 + (ecx_20 << 2)) << 2) + &data_ade29c) + 1
                    case 0x18
                        if (ecx_20 s<= 0 || ecx_20 s> 5)
                            ecx_20 = 5
                        
                        if (edx_4 s<= 0 || edx_4 s> 5)
                            edx_4 = 5
                        
                        *edi_3 = *(((ecx_20 * 5 + edx_4) << 2) + &data_ade308) + 1
                    case 0x23
                        if (ecx_20 s<= 0 || ecx_20 s> 6)
                            ecx_20 = 6
                        
                        if (edx_4 s<= 0 || edx_4 s> 6)
                            edx_4 = 6
                        
                        *edi_3 = (*U"$019:>?")[edx_4 + ecx_20 * 6] + 1
                    case 0x30
                        if (ecx_20 s<= 0 || ecx_20 s> 7)
                            ecx_20 = 7
                        
                        if (edx_4 s<= 0 || edx_4 s> 7)
                            edx_4 = 7
                        
                        *edi_3 = *(((ecx_20 * 7 + edx_4) << 2) + &data_ade370) + 1
                    default
                        if (ecx_20 s<= 0 || ecx_20 s> 8)
                            ecx_20 = 8
                        
                        if (edx_4 s<= 0 || edx_4 s> 8)
                            edx_4 = 8
                        
                        *edi_3 = (*U"!"*+/0")[edx_4 + (ecx_20 << 3)] + 1
            
            edi_3 += 4
            i_1 = arg1 + 1
            edx_2 = var_c_3 + 4
            arg1 = i_1
            var_c_3 = edx_2
        while (i_1 s< esi[0x53])
else
    int32_t eax_1 = esi[0x5e]
    bool cond:2_1
    
    if (eax_1 != 0)
        int32_t ecx_1 = esi[0x5f]
        
        if (ecx_1 s>= eax_1 && ecx_1 s<= esi[0x64])
            cond:2_1 = esi[0x4c] != 1
            goto label_72ef2d
        
    label_72ef4e:
        *(*esi + 0x14) = 0x11
        *(*esi + 0x18) = esi[0x5e]
        *(*esi + 0x1c) = esi[0x5f]
        *(*esi + 0x20) = esi[0x60]
        *(*esi + 0x24) = esi[0x61]
        (**esi)(esi)
    else
        cond:2_1 = esi[0x5f] != eax_1
    label_72ef2d:
        
        if (cond:2_1)
            goto label_72ef4e
        
        int32_t eax_2 = esi[0x60]
        
        if ((eax_2 != 0 && eax_2 - 1 != esi[0x61]) || esi[0x61] s> 0xd)
            goto label_72ef4e
    void* i_2 = nullptr
    arg1 = nullptr
    
    if (esi[0x4c] s> 0)
        void* eax_11 = &esi[0x4d]
        void* var_c_1 = eax_11
        
        do
            int32_t ecx_6 = *(*eax_11 + 4)
            int32_t* ebx_3 = (ecx_6 << 8) + esi[0x23]
            int32_t var_8_1 = ecx_6
            
            if (esi[0x5e] != 0 && *ebx_3 s< 0)
                *(*esi + 0x14) = 0x76
                *(*esi + 0x18) = ecx_6
                *(*esi + 0x1c) = 0
                (*(*esi + 4))(esi, 0xffffffff)
                ecx_6 = var_8_1
                i_2 = arg1
            
            int32_t j = esi[0x5e]
            
            if (j s<= esi[0x5f])
                int32_t ecx_7 = ecx_6
                
                do
                    int32_t eax_18 = ebx_3[j]
                    
                    if (eax_18 s< 0)
                        eax_18 = 0
                    
                    if (esi[0x60] != eax_18)
                        *(*esi + 0x14) = 0x76
                        *(*esi + 0x18) = ecx_7
                        *(*esi + 0x1c) = j
                        (*(*esi + 4))(esi, 0xffffffff)
                    
                    ecx_7 = var_8_1
                    ebx_3[j] = esi[0x61]
                    j += 1
                while (j s<= esi[0x5f])
                
                i_2 = arg1
            
            i_2 += 1
            eax_11 = var_c_1 + 4
            arg1 = i_2
            var_c_1 = eax_11
        while (i_2 s< esi[0x4c])
    
    int32_t (* eax_26)(int32_t arg1, int32_t* arg2)
    uint32_t (* ecx_8)(void* arg1, int32_t arg2)
    
    if (esi[0x60] != 0)
        eax_26 = sub_72e200
        ecx_8 = sub_72e120
    else
        eax_26 = sub_72dee0
        ecx_8 = sub_72dcc0
    
    if (esi[0x5e] == 0)
        eax_26 = ecx_8
    
    int32_t i_3 = 0
    *(ebx + 4) = eax_26
    int32_t i_4 = 0
    
    if (esi[0x4c] s> 0)
        void* ecx_9 = ebx + 0x14
        void* eax_27 = &esi[0x4d]
        void* var_8_2 = ecx_9
        arg1 = eax_27
        
        do
            void* edx_1 = *eax_27
            
            if (esi[0x5e] != 0)
                int32_t eax_30 = *(edx_1 + 0x18)
                edx_1.b = 0
                int32_t* edi_2 = ebx + ((eax_30 + 0xb) << 2)
                sub_72d6c0(eax_30, edx_1.b, esi, eax_30, edi_2)
                i_3 = i_4
                *(ebx + 0x3c) = *edi_2
                ecx_9 = var_8_2
                eax_27 = arg1
            else if (esi[0x60] == 0)
                int32_t ecx_10 = *(edx_1 + 0x14)
                edx_1.b = 1
                int32_t* eax_29 = ebx + ((ecx_10 + 0xb) << 2)
                sub_72d6c0(eax_29, edx_1.b, esi, ecx_10, eax_29)
                ecx_9 = var_8_2
                eax_27 = arg1
            
            *ecx_9 = 0
            i_3 += 1
            eax_27 += 4
            i_4 = i_3
            ecx_9 += 4
            arg1 = eax_27
            var_8_2 = ecx_9
        while (i_3 s< esi[0x4c])
    
    *(ebx + 0x10) = 0

*(ebx + 0xc) = 0
*(ebx + 8) = 0
*(ebx + 0x24) = 0
int32_t result = esi[0x3f]
*(ebx + 0x28) = result
return result
