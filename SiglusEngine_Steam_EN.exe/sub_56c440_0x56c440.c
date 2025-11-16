// 函数: sub_56c440
// 地址: 0x56c440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND result = arg3
HWND result_1 = result

if (result != 0)
    int32_t result_2 = 0
    
    if (arg5 s> 0)
        int32_t esi_1 = arg7
        int32_t* edi_2 = arg4 + 0xc
        result = nullptr
        
        do
            int32_t ebx_1 = edi_2[-1]
            int32_t edx = edi_2[-3]
            int32_t ecx = edi_2[-2]
            int32_t esi_2
            
            if (ebx_1 != 0xffffffff)
                if (ebx_1 s>= 0 && ebx_1 s< esi_1 && ecx u<= 1)
                    esi_2 = ecx + (ebx_1 << 1)
                label_56c4c3:
                    int32_t* esi_4 = (esi_2 << 4) + arg2
                    
                    if (esi_4 != 0)
                        if (arg6 != 0 || *edi_2 != edx || edi_2[1] != ecx || edi_2[2] != ebx_1
                                || esi_4[1] != *esi_4)
                            void* eax_14
                            
                            if (ebx_1 == 0xffffffff)
                                *((result_2 << 2) + &data_20cf720) = edx
                                *((result_2 << 2) + &data_20d0720) = ecx
                                eax_14 = (ecx + (edx << 1)) * 0x650 + &data_72d6b0
                                sub_56a2a0(eax_14, result_2, result_1, edx, ecx, ebx_1, eax_14, 
                                    *((ecx + (edx << 1)) * 0x7a0 + 0x98bf08), 
                                    *((ecx + (edx << 1)) * 0x7a0 + 0x98bf14), 
                                    (ecx + (edx << 1)) * 0x7a0 + 0x98bf38, 
                                    (ecx + (edx << 1)) * 0x7a0 + &data_98c178, 
                                    edx * 0x24 + &data_12b9268)
                            else if (*((ecx + (edx << 1)) * 0x7a0 + 0x98c180) != 0 && ebx_1 s>= 0
                                    && ebx_1 s< *((ecx + (edx << 1)) * 0x7a0 + &data_98c178))
                                void* ecx_2 =
                                    ebx_1 * 0x7d8 + *((ecx + (edx << 1)) * 0x7a0 + 0x98c180)
                                eax_14 = ecx_2 + 0x184
                                sub_56a2a0(eax_14, result_2, result_1, edx, ecx, ebx_1, eax_14, 
                                    *(ecx_2 + 4), 0, ecx_2 + 0x18, nullptr, 
                                    edx * 0x24 + &data_12b9268)
                        
                        *edi_2 = edx
                        edi_2[1] = ecx
                        edi_2[2] = ebx_1
                        esi_4[1] = *esi_4
                        result = result_2
                    
                    esi_1 = arg7
            else if (edx s>= 0 && edx s< esi_1 && ecx u<= 1)
                esi_2 = ecx + (edx << 1)
                goto label_56c4c3
            result = &result->unused + 1
            edi_2 = &edi_2[6]
            result_2 = result
        while (result s< arg5)

return result
