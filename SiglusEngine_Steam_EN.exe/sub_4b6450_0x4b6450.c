// 函数: sub_4b6450
// 地址: 0x4b6450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_10 = 0
int32_t j

for (void* i = &data_1b1bdb4; i s< &data_1b8a5b4; )
    j = 0
    void* i_1 = i
    int32_t j_1 = 0
    
    do
        if (*(i - 0x20) != 0)
            sub_4d6c40(i - 0x1c, i - 0x18)
            sub_4d6c40(i - 4, i)
            int32_t eax_1 = *(i + 0x14)
            
            if (eax_1 u<= 0x1ff)
                void* esi_1 = eax_1 * 0x74
                *(esi_1 + &data_13747ac) -= 1
                
                if (*(esi_1 + &data_13747ac) s<= 0)
                    int32_t eax_2 = sub_4d6c40(esi_1 + 0x13747b0, esi_1 + 0x13747b4)
                    *(esi_1 + &data_1374760) = 0
                    sub_4d1ba0(eax_2, 0x24, esi_1 + 0x1374764, 0)
                    *(esi_1 + 0x137478c) = 0xffffffff
                    *(esi_1 + &data_13747ac) = 0
                    *(esi_1 + 0x13747cc) = 0
                    *(esi_1 + 0x13747d0) = 0
                    *(esi_1 + 0x13747b0) = 0
                    *(esi_1 + 0x13747b4) = 0
            
            void* edi_1 = i + 0x18
            int32_t k_3 = 0xa
            int32_t k
            
            do
                int32_t eax_3 = *edi_1
                
                if (eax_3 u<= 0x1ff)
                    void* esi_2 = eax_3 * 0x74
                    *(esi_2 + &data_13747ac) -= 1
                    
                    if (*(esi_2 + &data_13747ac) s<= 0)
                        int32_t eax_4 = sub_4d6c40(esi_2 + 0x13747b0, esi_2 + 0x13747b4)
                        *(esi_2 + &data_1374760) = 0
                        sub_4d1ba0(eax_4, 0x24, esi_2 + 0x1374764, 0)
                        *(esi_2 + 0x137478c) = 0xffffffff
                        *(esi_2 + &data_13747ac) = 0
                        *(esi_2 + 0x13747cc) = 0
                        *(esi_2 + 0x13747d0) = 0
                        *(esi_2 + 0x13747b0) = 0
                        *(esi_2 + 0x13747b4) = 0
                
                edi_1 += 4
                k = k_3
                k_3 -= 1
            while (k != 1)
            void* ebx_1 = i_1 + 0x40
            int32_t k_2 = 8
            int32_t k_1
            
            do
                int32_t ecx_7 = 8
                int32_t var_14_1 = 8
                int32_t temp1_1
                
                do
                    BOOL hMem = *ebx_1
                    
                    if (hMem u<= 0x1ff)
                        void* esi_3 = hMem * 0x74
                        *(esi_3 + &data_13747ac) -= 1
                        
                        if (*(esi_3 + &data_13747ac) s<= 0)
                            if (*(esi_3 + 0x13747b0) != 0)
                                int32_t eax_5 = data_1af413c
                                
                                if (eax_5 == 0)
                                label_4b6635:
                                    hMem = *(esi_3 + 0x13747b0)
                                    
                                    if (hMem != 0)
                                        GlobalUnlock(hMem)
                                        hMem = GlobalFree(*(esi_3 + 0x13747b0))
                                        *(esi_3 + 0x13747b0) = 0
                                    
                                    goto label_4b6654
                                
                                hMem = WaitForSingleObject(data_7027a8, 0xffffffff)
                                
                                if (*(esi_3 + 0x13747b0) == 0)
                                label_4b6654:
                                    *(esi_3 + 0x13747b4) = 0
                                    
                                    if (eax_5 != 0)
                                        sub_4d6500()
                                        hMem = ReleaseSemaphore(data_7027a8, 1, nullptr)
                                else
                                    hMem = sub_4d6b80(esi_3 + 0x13747b0)
                                    
                                    if (hMem.b != 0)
                                        goto label_4b6635
                            else
                                *(esi_3 + 0x13747b4) = 0
                            
                            *(esi_3 + &data_1374760) = 0
                            sub_4d1ba0(hMem, 0x24, esi_3 + 0x1374764, 0)
                            ecx_7 = var_14_1
                            *(esi_3 + 0x137478c) = 0xffffffff
                            *(esi_3 + &data_13747ac) = 0
                            *(esi_3 + 0x13747cc) = 0
                            *(esi_3 + 0x13747d0) = 0
                            *(esi_3 + 0x13747b0) = 0
                            *(esi_3 + 0x13747b4) = 0
                    
                    ebx_1 += 4
                    temp1_1 = ecx_7
                    ecx_7 -= 1
                    var_14_1 = ecx_7
                while (temp1_1 != 1)
                k_1 = k_2
                k_2 -= 1
            while (k_1 != 1)
            sub_4b60d0(var_10, j_1)
            i = i_1
            j = j_1
        
        j += 1
        i += 0x374
        j_1 = j
        i_1 = i
    while (j s< 8)
    
    var_10 += 1

return j
