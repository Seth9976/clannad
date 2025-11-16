// 函数: sub_4a4ac0
// 地址: 0x4a4ac0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg4
char* i_6 = (&data_63ecb0)[arg2]
void* i_5 = i_6

if (edx s>= 0)
    void* var_18
    int32_t var_14
    char* var_8
    i_6 = sub_4a44b0(&i_5, edx, arg2, &i_5, &var_18, &arg4, &var_14, &var_8)
    
    if (i_6 != 0)
        i_6 = sub_4a4a30(i_6, arg2, arg3, edx)
        char* i_8 = i_6
        
        if (i_8 != 0)
            i_6.b = *i_8
            arg4:3.b = i_6.b
            char* edi_1 = *arg4
            
            if (i_6.b != 0)
            label_4a4b44:
                i_6 = sub_4d0f10(i_8, edi_1)
                
                if (i_6 != 0)
                    bool cond:0_1 = arg4:3.b != 0
                    i_5 = i_8 - arg3
                    
                    if (cond:0_1)
                        var_8 = sub_4cfc80(i_8)
                    else
                        var_8 = 1
                    
                    void* edx_3
                    
                    if (edi_1 == 0 || *edi_1 == 0)
                        edx_3 = 1
                        arg4 = 1
                    else
                        void* eax_4 = sub_4cfc80(edi_1)
                        edx_3 = eax_4
                        arg4 = eax_4
                    
                    char* eax_5 = var_8
                    void* i_7 = var_14 - eax_5 - i_5
                    i_5 = i_7
                    
                    if (i_7 s>= 1)
                        bool cond:1_1 = eax_5 s>= edx_3
                        
                        if (eax_5 == edx_3)
                            if (edi_1 == 0 || *edi_1 == 0)
                                *i_8 = 0
                            else
                                sub_4d1c30(eax_5, edi_1, i_8, edx_3)
                                edx_3 = arg4
                            
                            cond:1_1 = eax_5 s>= edx_3
                        
                        if (cond:1_1)
                            void* ecx_10 = edx_3 + i_8
                            void* i_4 = i_5
                            
                            if (i_4 s> 0)
                                char* var_c_2 = eax_5 + i_8 - ecx_10
                                void* i_2 = i_4
                                void* i
                                
                                do
                                    eax_5.b = *(var_c_2 + ecx_10)
                                    ecx_10 += 1
                                    *(ecx_10 - 1) = eax_5.b
                                    i = i_2
                                    i_2 -= 1
                                while (i != 1)
                                i_4 = i_5
                                edx_3 = arg4
                                eax_5 = var_8
                            
                            if (edi_1 == 0 || *edi_1 == 0)
                                *i_8 = 0
                            else
                                sub_4d1c30(eax_5, edi_1, i_8, edx_3)
                                edx_3 = arg4
                            
                            int32_t eax_12 = eax_5 - edx_3
                            return sub_4d1ba0(eax_12, eax_12, i_4 + edx_3 + i_8, 0)
                        
                        void* i_3 = i_7 + eax_5 - edx_3
                        
                        if (i_3 s>= 1)
                            void* ecx_8 = &i_8[0xffffffff + i_3 + edx_3]
                            int32_t eax_11 = var_8 - 1 + i_3 + i_8
                            var_14 = eax_11
                            
                            if (i_3 s> 0)
                                void* edx_6 = eax_11 - ecx_8
                                void* i_1
                                
                                do
                                    eax_11.b = *(edx_6 + ecx_8)
                                    ecx_8 -= 1
                                    *(ecx_8 + 1) = eax_11.b
                                    i_1 = i_3
                                    i_3 -= 1
                                while (i_1 != 1)
                                edx_3 = arg4
                            
                            if (edi_1 != 0 && *edi_1 != 0)
                                sub_4d1c30(eax_11, edi_1, i_8, edx_3)
                                return eax_11
                            
                            *i_8 = 0
                            return eax_11
                    
                    return sub_4a4370(arg2)
            else if (edi_1 != 0 && *edi_1 != i_6.b)
                goto label_4a4b44

return i_6
