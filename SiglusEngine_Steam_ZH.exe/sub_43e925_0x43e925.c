// 函数: sub_43e925
// 地址: 0x43e925
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi

if (arg2 != 0 && arg2[1] == 0xd)
    void* eax_1 = arg3
    
    if (eax_1 != 0 && *(eax_1 + 4) == 0xd)
        void*** eax_2 = sub_42cfa1(0x50)
        void*** result
        
        if (eax_2 == 0)
            result = nullptr
        else
            result = sub_46bee5(eax_2, 0, 0x16, 0, 0, 1, eax_1 + 0x30)
        
        if (result != 0)
            void* esi_1 = arg2[4]
            void* eax_6 = *(arg3 + 0x10)
            
            if (esi_1 == 0)
            label_43eb2e:
                sub_43713d(arg1, eax_1 + 0x30, 0xbcd, "array expected")
            else
                int32_t eax_7 = *(esi_1 + 4)
                int32_t esi_2
                
                if (eax_7 != 8)
                    if (eax_7 != 9)
                        goto label_43eb2e
                    
                    if (*(esi_1 + 0x10) != 1)
                        if (eax_7 != 9 || *(esi_1 + 0x10) != 2)
                            goto label_43eb2e
                        
                        void*** eax_12 = sub_42cfa1(0x24)
                        void*** eax_13
                        
                        if (eax_12 == 0)
                            eax_13 = nullptr
                        else
                            eax_13 = sub_46bbbb(eax_12, 1, *(esi_1 + 0x14), 1, *(esi_1 + 0x1c), 
                                *(esi_1 + 0x20) & 0x200)
                        
                        result[4] = eax_13
                        
                        if (eax_13 != 0)
                            esi_2 = *(esi_1 + 0x18)
                            goto label_43ea65
                    else
                        void*** eax_10 = sub_42cfa1(0x24)
                        void*** eax_11
                        
                        if (eax_10 == 0)
                            eax_11 = nullptr
                        else
                            eax_11 = sub_46bbbb(eax_10, 0, *(esi_1 + 0x14), 1, 1, 
                                *(esi_1 + 0x20) & 0x200)
                        
                        result[4] = eax_11
                        
                        if (eax_11 != 0)
                            esi_2 = *(esi_1 + 0x1c)
                            goto label_43ea65
                else
                    int32_t eax_9
                    
                    if (*(esi_1 + 0x10) != 0)
                        eax_9 = (*(**(esi_1 + 0x10) + 4))()
                        result[4] = eax_9
                    
                    if (*(esi_1 + 0x10) == 0 || eax_9 != 0)
                        esi_2 = *(esi_1 + 0x14)
                    label_43ea65:
                        
                        if (sub_437706(eax_6) != 0)
                            int32_t eax_16 = (*(*arg2 + 4))()
                            result[8] = eax_16
                            
                            if (eax_16 != 0)
                                if (sub_4380be(arg3) == 0)
                                    int32_t eax_22 = sub_46b5aa(arg3)
                                    result[9] = eax_22
                                    
                                    if (eax_22 != 0)
                                        sub_4381dc(result)
                                        return result
                                else if (sub_43e52c(arg3, &arg3) s>= 0)
                                    if (arg3 u>= esi_2)
                                        sub_43713d(arg1, eax_1 + 0x30, 0xbd6, 
                                            "array index out of bounds")
                                        arg3 = nullptr
                                    
                                    int32_t eax_19 = sub_4377a1(arg1, result[4])
                                    void*** eax_20 = sub_42cfa1(0x40)
                                    void*** eax_21
                                    
                                    if (eax_20 == 0)
                                        eax_21 = nullptr
                                    else
                                        eax_21 = sub_46c032(eax_20, 2, eax_19 * arg3, eax_1 + 0x30)
                                    
                                    result[9] = eax_21
                                    
                                    if (eax_21 != 0)
                                        result[7] = 0x17
                                        sub_4381dc(result)
                                        return result
                        else
                            sub_43713d(arg1, eax_1 + 0x30, 0xbeb, "scalar expected")

return nullptr
