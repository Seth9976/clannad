// 函数: sub_7242f0
// 地址: 0x7242f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t ebx = arg2
int32_t* esi = arg1
uint32_t var_8 = ebx
int32_t* var_c = esi

while (true)
    int32_t edi_1 = esi[0x1d]
    
    if (edi_1 u<= 0x102)
        sub_723770(esi)
        edi_1 = esi[0x1d]
        
        if (edi_1 u<= 0x102 && ebx == 0)
            break
        
        if (edi_1 == 0)
            esi[0x5ad] = 0
            
            if (ebx == 4)
                int32_t ecx_23 = esi[0x17]
                void* edx_3
                
                if (ecx_23 s< 0)
                    edx_3 = nullptr
                else
                    edx_3 = esi[0xe] + ecx_23
                
                int32_t eax_25 = esi[0x1b] - ecx_23
                sub_7276b0(eax_25, edx_3, esi, eax_25, 1)
                void* ecx_25 = *esi
                esi[0x17] = esi[0x1b]
                sub_722b30(ecx_25)
                int32_t ecx_26
                ecx_26.b = *(*esi + 0x10) != 0
                return ecx_26 + 2
            
            if (esi[0x5a8] != 0)
                int32_t ecx_27 = esi[0x17]
                void* edx_5
                
                if (ecx_27 s< 0)
                    edx_5 = nullptr
                else
                    edx_5 = esi[0xe] + ecx_27
                
                int32_t eax_30 = esi[0x1b] - ecx_27
                sub_7276b0(eax_30, edx_5, esi, eax_30, 0)
                void* ecx_29 = *esi
                esi[0x17] = esi[0x1b]
                sub_722b30(ecx_29)
            
            if (esi[0x5a8] == 0 || *(*esi + 0x10) != 0)
                return 1
            
            break
    
    esi[0x18] = 0
    
    if (edi_1 u>= 3)
        int32_t ecx_1 = esi[0x1b]
        
        if (ecx_1 != 0)
            char* ebx_2 = esi[0xe] + ecx_1
            arg2 = zx.d(ebx_2[0xffffffff])
            
            if (arg2 == zx.d(*ebx_2) && arg2 == zx.d(ebx_2[1]))
                void* i = &ebx_2[2]
                
                if (arg2 == zx.d(ebx_2[2]))
                    do
                        uint32_t ecx_5 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_5)
                            break
                        
                        uint32_t ecx_6 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_6)
                            break
                        
                        uint32_t ecx_7 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_7)
                            break
                        
                        uint32_t ecx_8 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_8)
                            break
                        
                        uint32_t ecx_9 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_9)
                            break
                        
                        uint32_t ecx_10 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_10)
                            break
                        
                        uint32_t ecx_11 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_11)
                            break
                        
                        uint32_t ecx_12 = zx.d(*(i + 1))
                        i += 1
                        
                        if (arg2 != ecx_12)
                            break
                    while (i u< &ebx_2[0x102])
                    
                    int32_t eax_3 = i - &ebx_2[0x102] + 0x102
                    
                    if (eax_3 u> edi_1)
                        eax_3 = edi_1
                    
                    esi[0x18] = eax_3
            
            ebx = var_8
    
    int32_t ecx_15
    
    if (esi[0x18] u< 3)
        arg2.b = esi[0xe][esi[0x1b]]
        *(esi[0x5a9] + (esi[0x5a8] << 1)) = 0
        esi[0x5a6][esi[0x5a8]] = arg2.b
        esi[0x5a8] += 1
        uint32_t eax_14 = zx.d(arg2.b)
        esi[eax_14 + 0x25].w += 1
        ecx_15.b = esi[0x5a8] == esi[0x5a7] - 1
        esi[0x1d] -= 1
        esi[0x1b] += 1
    else
        arg2.b = esi[0x18].b
        arg2.b -= 3
        *(esi[0x5a9] + (esi[0x5a8] << 1)) = 1
        esi[0x5a6][esi[0x5a8]] = arg2.b
        esi[0x5a8] += 1
        uint32_t eax_7 = zx.d(*(zx.d(arg2.b) + 0xadd300))
        esi[eax_7 + 0x126].w += 1
        esi[0x262].w += 1
        int32_t eax_10 = esi[0x18]
        ecx_15.b = esi[0x5a8] == esi[0x5a7] - 1
        esi[0x18] = 0
        esi[0x1d] -= eax_10
        esi[0x1b] += eax_10
    
    if (ecx_15 != 0)
        int32_t ecx_19 = esi[0x17]
        void* edx_1
        
        if (ecx_19 s< 0)
            edx_1 = nullptr
        else
            edx_1 = esi[0xe] + ecx_19
        
        int32_t eax_18 = esi[0x1b] - ecx_19
        sub_7276b0(eax_18, edx_1, esi, eax_18, 0)
        void* ebx_4 = *esi
        esi[0x17] = esi[0x1b]
        void* edi_2 = *(ebx_4 + 0x1c)
        sub_727d20(edi_2)
        int32_t i_3 = *(edi_2 + 0x14)
        
        if (i_3 u> *(ebx_4 + 0x10))
            i_3 = *(ebx_4 + 0x10)
        
        if (i_3 != 0)
            arg2 = *(ebx_4 + 0xc)
            int32_t i_2 = i_3
            char* ecx_22 = *(edi_2 + 0x10)
            int32_t i_1
            
            do
                arg2 += 1
                *(arg2 - 1) = *ecx_22
                ecx_22 = &ecx_22[1]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            *(ebx_4 + 0xc) += i_3
            *(edi_2 + 0x10) += i_3
            *(ebx_4 + 0x14) += i_3
            *(ebx_4 + 0x10) -= i_3
            int32_t temp1_1 = *(edi_2 + 0x14)
            *(edi_2 + 0x14) -= i_3
            esi = var_c
            
            if (temp1_1 == i_3)
                *(edi_2 + 0x10) = *(edi_2 + 8)
        
        if (*(*esi + 0x10) == 0)
            break
        
        ebx = var_8

return 0
