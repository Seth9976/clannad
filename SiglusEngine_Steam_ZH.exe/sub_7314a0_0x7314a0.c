// 函数: sub_7314a0
// 地址: 0x7314a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
void* edx = ebx[0x6c]
arg1 = edx

if (ebx[0x3f] != 0)
    if (*(edx + 0x34) == 0)
        sub_730db0(ebx)
        edx = arg1
    
    *(edx + 0x34) -= 1

void* i

if (*(edx + 0x10) != 0xffffffff)
    int32_t eax = ebx[0x63]
    i = nullptr
    int32_t edi
    int32_t var_34_1 = edi
    void* i_1 = nullptr
    
    if (ebx[0x53] s> 0)
        void* ecx_2 = &ebx[0x54]
        void* var_20_1 = ecx_2
        
        do
            int16_t* eax_1 = *(arg2 + (i << 2))
            int32_t eax_2 = *ecx_2
            void* ecx_3 = ebx[eax_2 + 0x4d]
            int32_t edi_2 = *(ecx_3 + 0x14)
            char* esi_3 = *(edx + (edi_2 << 2) + 0x38) + *(edx + (eax_2 << 2) + 0x24)
            int32_t eax_4
            
            if (sub_730c20(ebx, esi_3) != 0)
                int32_t eax_5 = sub_730c20(ebx, &esi_3[1])
                void* edx_4 = eax_5 + 2 + esi_3
                void* var_8_1 = edx_4
                int32_t esi_4 = sub_730c20(ebx, edx_4)
                
                if (esi_4 != 0)
                    char* edi_4 = *(arg1 + (edi_2 << 2) + 0x38) + 0x14
                    var_8_1 = edi_4
                    
                    if (sub_730c20(ebx, edi_4) != 0)
                        int32_t j
                        
                        do
                            esi_4 *= 2
                            
                            if (esi_4 == 0x8000)
                            label_7317cb:
                                *(*ebx + 0x14) = 0x75
                                (*(*ebx + 4))(ebx, 0xffffffff)
                                *(arg1 + 0x10) = 0xffffffff
                                goto label_7317e8
                            
                            edi_4 = &edi_4[1]
                            var_8_1 = edi_4
                            j = sub_730c20(ebx, edi_4)
                        while (j != 0)
                
                if (esi_4 s>= 1 << *(edi_2 + ebx + 0xcb) s>> 1)
                    void* eax_15
                    
                    if (esi_4 s<= 1 << *(edi_2 + ebx + 0xdb) s>> 1)
                        eax_15 = (eax_5 << 2) + 4
                    else
                        eax_15 = (eax_5 << 2) + 0xc
                    
                    *(arg1 + (eax_2 << 2) + 0x24) = eax_15
                else
                    *(arg1 + (eax_2 << 2) + 0x24) = 0
                
                int32_t edi_5 = esi_4
                void* eax_17 = var_8_1 + 0xe
                int32_t j_1 = esi_4 s>> 1
                void* var_8_2 = eax_17
                
                while (j_1 != 0)
                    if (sub_730c20(ebx, eax_17) != 0)
                        edi_5 |= j_1
                    
                    j_1 s>>= 1
                    eax_17 = var_8_2
                
                int32_t edi_6 = edi_5 + 1
                
                if (eax_5 != 0)
                    edi_6 = neg.d(edi_6)
                
                eax_4 = eax_2
                edx = arg1
                *(edx + (eax_4 << 2) + 0x14) += edi_6
            else
                eax_4 = eax_2
                edx = arg1
                *(edx + (eax_4 << 2) + 0x24) = 0
            
            eax_4.w = *(edx + (eax_4 << 2) + 0x14)
            *eax_1 = eax_4.w
            
            if (ebx[0x64] != 0)
                int32_t edi_7 = 0
                int32_t eax_20 = *(ecx_3 + 0x18)
                char* esi_5 = *(edx + (eax_20 << 2) + 0x78)
                
                if (sub_730c20(ebx, esi_5) == 0)
                    int32_t j_2
                    
                    do
                        int32_t edi_8 = edi_7 + 1
                        int32_t var_c_2 = edi_8
                        
                        if (sub_730c20(ebx, &esi_5[1]) == 0)
                            int32_t k
                            
                            do
                                esi_5 = &esi_5[3]
                                
                                if (edi_8 s>= ebx[0x64])
                                    goto label_7317cb
                                
                                edi_8 += 1
                                var_c_2 = edi_8
                                k = sub_730c20(ebx, &esi_5[1])
                            while (k == 0)
                        
                        int32_t eax_23 = sub_730c20(ebx, arg1 + 0xb8)
                        void* esi_6 = &esi_5[2]
                        int32_t edi_9 = sub_730c20(ebx, esi_6)
                        
                        if (edi_9 != 0 && sub_730c20(ebx, esi_6) != 0)
                            edi_9 *= 2
                            int32_t esi_7 = 0xd9
                            
                            if (var_c_2 s<= zx.d(*(eax_20 + ebx + 0xeb)))
                                esi_7 = 0xbd
                            
                            esi_6 = esi_7 + *(arg1 + (eax_20 << 2) + 0x78)
                            
                            if (sub_730c20(ebx, esi_6) != 0)
                                int32_t k_1
                                
                                do
                                    edi_9 *= 2
                                    
                                    if (edi_9 == 0x8000)
                                        goto label_7317cb
                                    
                                    esi_6 += 1
                                    k_1 = sub_730c20(ebx, esi_6)
                                while (k_1 != 0)
                        
                        int32_t ecx_24 = edi_9
                        int32_t k_2 = edi_9 s>> 1
                        int32_t var_10_2 = ecx_24
                        
                        for (; k_2 != 0; k_2 s>>= 1)
                            ecx_24 = var_10_2
                            
                            if (sub_730c20(ebx, esi_6 + 0xe) != 0)
                                ecx_24 |= k_2
                                var_10_2 = ecx_24
                        
                        int32_t ecx_25 = ecx_24 + 1
                        
                        if (eax_23 != 0)
                            ecx_25 = neg.d(ecx_25)
                        
                        edi_7 = var_c_2
                        eax_1[*(eax + (edi_7 << 2))] = ecx_25.w
                        
                        if (edi_7 s>= ebx[0x64])
                            break
                        
                        esi_5 = edi_7 * 3 + *(arg1 + (eax_20 << 2) + 0x78)
                        j_2 = sub_730c20(ebx, esi_5)
                    while (j_2 == 0)
                
                edx = arg1
            
            i = i_1 + 1
            ecx_2 = var_20_1 + 4
            i_1 = i
            var_20_1 = ecx_2
        while (i s< ebx[0x53])
        
        i.b = 1
        return i

label_7317e8:
i.b = 1
return i
