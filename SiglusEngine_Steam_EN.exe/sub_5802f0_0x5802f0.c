// 函数: sub_5802f0
// 地址: 0x5802f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t* esi_1 = arg2 * 0x2c + arg3
int32_t* result

if (esi_1[6] != 0 && *esi_1 == arg6 && esi_1[1] == arg7 && esi_1[2] == arg8 && esi_1[3] == arg9)
    result = arg10

if (esi_1[6] == 0 || *esi_1 != arg6 || esi_1[1] != arg7 || esi_1[2] != arg8 || esi_1[3] != arg9
        || esi_1[4] != result)
    sub_580240(esi_1)
    result = arg4
    
    if (result[1] != 0 && arg9 s> 0 && arg10 s> 0)
        result = arg5
        int32_t edx = result[arg8 + 0x22]
        void* edi_2 = result[arg8 + 2] * arg9
        void* ebx_2 = edx * arg10
        
        if (edi_2 s> 0 && ebx_2 s> 0)
            result = data_70300c * 3
            
            if (edi_2 s< result)
                result = data_7030dc * 3
                
                if (ebx_2 s< result)
                    int32_t eax_6 = (ebx_2 * edi_2) << 2
                    BOOL eax_7
                    int32_t ecx_3
                    eax_7, ecx_3 = sub_4d6960(eax_6, &esi_1[6], &esi_1[5], eax_6, "waku_parts")
                    int32_t var_20_1 = ecx_3
                    int32_t ecx_4 = esi_1[6]
                    esi_1[8] = edi_2
                    esi_1[9] = ebx_2
                    esi_1[0xa] = 1
                    sub_425220(eax_7, edi_2, ecx_4, ebx_2, arg4, arg8, arg9)
                    int32_t* ecx_5 = arg10
                    
                    if (ecx_5 s> 1)
                        void* i_1 = ecx_5 - 1
                        int32_t edx_3 = esi_1[6]
                        int32_t edi_4 = (edi_2 * edx) << 2
                        int32_t eax_8 = edx_3 + edi_4
                        
                        if (i_1 s> 0)
                            void* i
                            
                            do
                                sub_4d1c30(eax_8, edx_3, eax_8, edi_4)
                                eax_8 += edi_4
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                            ecx_5 = arg10
                    
                    *esi_1 = arg6
                    esi_1[1] = arg7
                    esi_1[2] = arg8
                    result = arg9
                    esi_1[3] = result
                    esi_1[4] = ecx_5

return result
