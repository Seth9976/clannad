// 函数: sub_4744c0
// 地址: 0x4744c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx
int32_t* var_8 = edx
int32_t* ecx = *arg1

switch (ecx)
    case nullptr, 2, 3
        sub_473470()
    case 1
        *(arg3 + 0x4c) = 0
    case 4, 5, 6, 7, 8, 9, 0xa
        int32_t eax_3 = arg1[1]
        
        if (eax_3 != 0)
            if (eax_3 == 1)
                arg1[1] = 2
                
                if (&ecx[-1] u<= 6)
                    sub_41d6d0(eax_3, arg2, arg1, &ecx[-1])
                
                *(arg3 + 0x74) += 1
                sub_473470()
                return 
            
            arg1[1] = 0
            arg1[7] = 0
            arg1[6] = data_1cd6410
        else if (data_703840 == 0 && arg1[3] == 0)
            int32_t eax_6 = 0
            
            if (ecx == 4 || ecx == 8)
                if (data_12dc610 == 0)
                    if (data_1392700 != 0)
                        int32_t* var_1c_3 = arg2
                        ecx = sub_41d9d0(0, edx, ecx, arg1)
                        edx = var_8
                        eax_6 = 1
                    
                    goto label_4745d9
                
            label_4745d9:
                int32_t edi_3 = arg1[7] - arg1[6] + data_1cd6410
                
                if (eax_6 != 0)
                label_474642:
                    int32_t* var_1c_6 = arg2
                    sub_41d740(eax_6, edx, ecx, arg1)
                    arg1[7] = 0
                    arg1[6] = data_1cd6410
                else
                    eax_6 = *arg1
                    
                    if (eax_6 != 9 && eax_6 != 0xa)
                        int32_t eax_9 = arg1[8]
                        
                        if (edi_3 u>= eax_9)
                            if (eax_9 u> 0xa)
                                while (true)
                                    int32_t* var_1c_5 = arg2
                                    edi_3 -= eax_9
                                    sub_41d740(eax_9, edx, ecx, arg1)
                                    eax_9 = arg1[8]
                                    
                                    if (eax_9 u<= 0xa)
                                        break
                                    
                                    edx = var_8
                                    
                                    if (edi_3 u< eax_9)
                                        goto label_474607
                            else
                                int32_t* var_1c_4 = arg2
                                sub_41d740(eax_9, edx, ecx, arg1)
                            
                            edi_3 = 0
                        label_474607:
                            int32_t eax_10 = data_1cd6410
                            arg1[7] = edi_3
                            arg1[6] = eax_10
                            sub_473470()
                            return 
                    else if (edi_3 u>= arg1[8])
                        goto label_474642
            else
                if (data_12dc610 != 0 || data_1392700 == 0)
                    goto label_4745d9
                
                if ((ecx == 9 || ecx == 0xa) && &ecx[-1] u<= 6)
                    sub_41d6d0(0, arg2, arg1, &ecx[-1])
                    arg1[6] = data_1cd6410
                    sub_473470()
                    return 
                
                arg1[6] = data_1cd6410
        
        sub_473470()
