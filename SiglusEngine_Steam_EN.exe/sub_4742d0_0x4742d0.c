// 函数: sub_4742d0
// 地址: 0x4742d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg6
int32_t edx = *esi

switch (edx)
    case 0
        sub_473470()
    case 1
        *(arg8 + 0x4c) = 0
    case 2, 3
        sub_473470()
        
        if (esi[1] != 0)
            *(arg8 + 0x74) += 1
            esi[1] = 0
    case 4, 5, 6, 7, 8, 9, 0xa
        int32_t eax_3 = esi[1]
        
        if (eax_3 != 0)
            if (eax_3 == 1)
                esi[1] = 2
                *(arg8 + 0x74) += 1
                sub_473470()
                return 
            
            esi[1] = 0
            esi[7] = 0
            esi[6] = data_1cd6410
        else if (data_703840 == 0 && esi[3] == 0)
            int32_t ecx = arg5
            int32_t eax_6 = arg4
            arg6 = nullptr
            
            if (edx == 4 || edx == 8)
                if (data_12dc610 == 0)
                    if (data_1392700 != 0)
                        edx = sub_428f50(eax_6, ecx, esi, arg7)
                        ecx = arg5
                        eax_6 = arg4
                        arg6 = 1
                    
                    goto label_474402
                
            label_474402:
                int32_t edi_3 = data_1cd6410 - esi[6] + esi[7]
                
                if (arg6 != 0)
                label_474480:
                    sub_428d60(eax_6, edx, arg3, eax_6, ecx, esi, arg7)
                    esi[7] = 0
                    esi[6] = data_1cd6410
                else
                    edx = *esi
                    
                    if (edx != 9 && edx != 0xa)
                        int32_t eax_9 = esi[8]
                        
                        if (edi_3 u>= eax_9)
                            if (eax_9 u> 0xa)
                                while (true)
                                    edi_3 -= eax_9
                                    edx = sub_428d60(eax_9, edx, arg3, arg4, ecx, esi, arg7)
                                    eax_9 = esi[8]
                                    
                                    if (eax_9 u<= 0xa)
                                        break
                                    
                                    ecx = arg5
                                    
                                    if (edi_3 u< eax_9)
                                        goto label_474436
                            else
                                sub_428d60(eax_9, edx, arg3, arg4, ecx, esi, arg7)
                            
                            edi_3 = 0
                        label_474436:
                            int32_t eax_10 = data_1cd6410
                            esi[7] = edi_3
                            esi[6] = eax_10
                            sub_473470()
                            return 
                    else if (edi_3 u>= esi[8])
                        goto label_474480
            else
                if (data_12dc610 != 0 || data_1392700 == 0)
                    goto label_474402
                
                if (edx == 9 || edx == 0xa)
                    sub_428c30(eax_6, ecx, esi, arg7)
                    esi[6] = data_1cd6410
                    sub_473470()
                    return 
                
                esi[6] = data_1cd6410
        
        sub_473470()
