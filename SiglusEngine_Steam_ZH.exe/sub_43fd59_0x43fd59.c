// 函数: sub_43fd59
// 地址: 0x43fd59
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_28 = edi
void var_1c

if (arg2 != 0 && arg3 != 0)
    if (sub_46b27d(arg2[6], 2, &var_1c) s>= 0)
        int32_t var_18
        int32_t eax_4 = var_18 & 0xffff0000
        
        if (eax_4 == 0xfffe0000)
            int32_t eax_7
            eax_7.b = arg5 != 0
            arg5 = eax_7 * 2 + 0x1a
        else if (eax_4 == 0xffff0000)
            int32_t eax_5
            eax_5.b = arg5 != 0
            arg5 = eax_5 * 2 + 0x19
        
        void*** eax_8 = sub_42cfa1(0x50)
        void*** var_8_1
        void*** ebx_1
        
        if (eax_8 == 0)
            var_8_1 = nullptr
            ebx_1 = nullptr
        else
            ebx_1 = sub_46bee5(eax_8, 0, 0x1b, 0, 0, 1, &arg2[4])
            var_8_1 = ebx_1
        
        if (ebx_1 != 0)
            void*** eax_10 = sub_42cfa1(0x24)
            void*** eax_11
            
            if (eax_10 == 0)
                eax_11 = nullptr
            else
                eax_11 = sub_46bbbb(eax_10, 3, arg5, 1, 1, 0x200)
            
            ebx_1[4] = eax_11
            
            if (eax_11 != 0)
                int32_t eax_12 = sub_46b5aa(arg2)
                ebx_1[8] = eax_12
                
                if (eax_12 != 0)
                    void*** eax_13 = sub_43f941(arg1, arg3, arg4, 1)
                    ebx_1[9] = eax_13
                    
                    if (eax_13 != 0)
                        void*** eax_14 = sub_42cfa1(0x50)
                        void*** result
                        
                        if (eax_14 == 0)
                            result = nullptr
                        else
                            result = sub_46bee5(eax_14, 0, 0, 0, 0, 1, &arg2[4])
                        
                        if (result != 0)
                            void*** eax_16 = sub_42cfa1(0x24)
                            void*** eax_17
                            
                            if (eax_16 == 0)
                                eax_17 = nullptr
                            else
                                eax_17 = sub_46bbbb(eax_16, 3, arg5, 1, 1, 0x200)
                            
                            result[4] = eax_17
                            
                            if (eax_17 != 0)
                                void*** eax_18 = sub_42cfa1(0x14)
                                void*** eax_19
                                
                                if (eax_18 == 0)
                                    eax_19 = nullptr
                                else
                                    eax_19 = sub_46b602(eax_18, 0, 0, "Value")
                                
                                result[8] = eax_19
                                
                                if (eax_19 != 0)
                                    void*** eax_20 = sub_42cfa1(0x40)
                                    void*** eax_21
                                    
                                    if (eax_20 == 0)
                                        eax_21 = nullptr
                                    else
                                        eax_21 = sub_46c032(eax_20, 4, var_8_1, &arg2[4])
                                    
                                    result[8][2] = eax_21
                                    
                                    if (eax_21 != 0)
                                        sub_4381dc(result)
                                        return result
    else
        int32_t var_2c_2 = arg2[6]
        sub_43713d(arg1, &arg2[4], 0xbe1, "unsupported compiler target '%s'")
return nullptr
