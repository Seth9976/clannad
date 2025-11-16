// 函数: sub_723b90
// 地址: 0x723b90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* ecx
char* var_8 = ecx
int32_t* esi = arg1

while (true)
    int32_t ebx_1 = arg2
    
    while (true)
        char* eax_1 = esi[0x1d]
        
        if (eax_1 u>= 0x106)
        label_723bce:
            void* edx
            
            if (eax_1 u>= 3)
                int32_t edi_1 = esi[0x1b]
                int32_t edi_2 = edi_1 & esi[0xd]
                int32_t edx_4 =
                    (esi[0x12] << (esi[0x16]).b ^ zx.d(*(esi[0xe] + edi_1 + 2))) & esi[0x15]
                int32_t eax_4 = esi[0x11]
                int32_t ecx_4 = esi[0x10]
                esi[0x12] = edx_4
                *(ecx_4 + (edi_2 << 1)) = *(eax_4 + (edx_4 << 1))
                uint32_t edi_3 = zx.d(*(esi[0x10] + ((esi[0x1b] & esi[0xd]) << 1)))
                *(esi[0x11] + (esi[0x12] << 1)) = esi[0x1b].w
                
                if (edi_3 != 0 && esi[0x1b] - edi_3 u<= esi[0xb] - 0x106)
                    eax_1, edx = sub_7235f0(esi, edi_3)
                    esi[0x18] = eax_1
            
            int32_t ebx_2
            
            if (esi[0x18] u< 3)
                edx.b = esi[0x1b][esi[0xe]]
                *(esi[0x5a9] + (esi[0x5a8] << 1)) = 0
                esi[0x5a6][esi[0x5a8]] = edx.b
                esi[0x5a8] += 1
                uint32_t eax_31 = zx.d(edx.b)
                esi[eax_31 + 0x25].w += 1
                ebx_2.b = esi[0x5a8] == esi[0x5a7] - 1
                esi[0x1d] -= 1
                esi[0x1b] += 1
            else
                eax_1.w = esi[0x1b].w
                eax_1.w -= esi[0x1c].w
                edx.b = esi[0x18].b
                int16_t edi_4 = eax_1.w
                edx.b -= 3
                *(esi[0x5a9] + (esi[0x5a8] << 1)) = edi_4
                esi[0x5a6][esi[0x5a8]] = edx.b
                esi[0x5a8] += 1
                uint32_t eax_11 = zx.d(*(zx.d(edx.b) + 0xadd300))
                esi[eax_11 + 0x126].w += 1
                uint32_t eax_12 = zx.d(edi_4 - 1)
                uint32_t eax_13
                
                if (edi_4 - 1 u>= 0x100)
                    eax_13 = zx.d(*((eax_12 u>> 7) + 0xadd500))
                else
                    eax_13 = zx.d(*(eax_12 + 0xadd400))
                
                esi[eax_13 + 0x262].w += 1
                int32_t eax_17 = esi[0x18]
                ebx_2.b = esi[0x5a8] == esi[0x5a7] - 1
                esi[0x1d] -= eax_17
                
                if (eax_17 u> esi[0x20] || esi[0x1d] u< 3)
                    esi[0x1b] += eax_17
                    char* eax_26 = esi[0xe] + esi[0x1b]
                    char ecx_16 = (esi[0x16]).b
                    esi[0x18] = 0
                    uint32_t edx_9 = zx.d(*eax_26)
                    esi[0x12] = edx_9
                    esi[0x12] = (edx_9 << ecx_16 ^ zx.d(eax_26[1])) & esi[0x15]
                else
                    esi[0x18] = eax_17 - 1
                    int32_t i
                    
                    do
                        esi[0x1b] += 1
                        int32_t edi_6 = esi[0x1b]
                        int32_t edi_7 = edi_6 & esi[0xd]
                        int32_t ecx_14 = esi[0x10]
                        int32_t edx_8 =
                            (zx.d(*(edi_6 + esi[0xe] + 2)) ^ esi[0x12] << (esi[0x16]).b) & esi[0x15]
                        int32_t eax_22 = esi[0x11]
                        esi[0x12] = edx_8
                        *(ecx_14 + (edi_7 << 1)) = *(eax_22 + (edx_8 << 1))
                        *(esi[0x11] + (esi[0x12] << 1)) = esi[0x1b].w
                        i = esi[0x18]
                        esi[0x18] -= 1
                    while (i != 1)
                    esi[0x1b] += 1
            
            ebx_1 = arg2
            
            if (ebx_2 == 0)
                continue
            else
                int32_t ecx_20 = esi[0x17]
                void* edx_13
                
                if (ecx_20 s< 0)
                    edx_13 = nullptr
                else
                    edx_13 = esi[0xe] + ecx_20
                
                int32_t eax_35 = esi[0x1b] - ecx_20
                sub_7276b0(eax_35, edx_13, esi, eax_35, 0)
                esi[0x17] = esi[0x1b]
                void* eax_37 = *esi
                void* edi_8 = *(eax_37 + 0x1c)
                sub_727d20(edi_8)
                int32_t i_3 = *(edi_8 + 0x14)
                
                if (i_3 u> *(eax_37 + 0x10))
                    i_3 = *(eax_37 + 0x10)
                
                if (i_3 != 0)
                    int32_t i_2 = i_3
                    edx = *(eax_37 + 0xc)
                    ecx = *(edi_8 + 0x10)
                    int32_t i_1
                    
                    do
                        edx += 1
                        *(edx - 1) = *ecx
                        ecx = &ecx[1]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    esi = arg1
                    *(eax_37 + 0xc) += i_3
                    *(edi_8 + 0x10) += i_3
                    *(eax_37 + 0x14) += i_3
                    *(eax_37 + 0x10) -= i_3
                    int32_t temp2_1 = *(edi_8 + 0x14)
                    *(edi_8 + 0x14) -= i_3
                    
                    if (temp2_1 == i_3)
                        *(edi_8 + 0x10) = *(edi_8 + 8)
                
                if (*(*esi + 0x10) != 0)
                    break
        else
            sub_723770(esi)
            eax_1 = esi[0x1d]
            
            if (eax_1 u>= 0x106 || ebx_1 != 0)
                if (eax_1 != 0)
                    goto label_723bce
                
                int32_t ecx_24 = esi[0x1b]
                int32_t eax_43 = 2
                
                if (ecx_24 u< 2)
                    eax_43 = ecx_24
                
                esi[0x5ad] = eax_43
                
                if (ebx_1 == 4)
                    int32_t eax_44 = esi[0x17]
                    void* edx_15
                    
                    if (eax_44 s< 0)
                        edx_15 = nullptr
                    else
                        edx_15 = esi[0xe] + eax_44
                    
                    sub_7276b0(eax_44, edx_15, esi, ecx_24 - eax_44, 1)
                    void* ecx_27 = *esi
                    esi[0x17] = esi[0x1b]
                    sub_722b30(ecx_27)
                    int32_t eax_46
                    eax_46.b = *(*esi + 0x10) != 0
                    return eax_46 + 2
                
                if (esi[0x5a8] != 0)
                    int32_t eax_48 = esi[0x17]
                    void* edx_17
                    
                    if (eax_48 s< 0)
                        edx_17 = nullptr
                    else
                        edx_17 = esi[0xe] + eax_48
                    
                    sub_7276b0(eax_48, edx_17, esi, ecx_24 - eax_48, 0)
                    void* ecx_31 = *esi
                    esi[0x17] = esi[0x1b]
                    sub_722b30(ecx_31)
                
                if (esi[0x5a8] == 0 || *(*esi + 0x10) != 0)
                    return 1
        
        return 0
