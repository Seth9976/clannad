// 函数: sub_43a30f
// 地址: 0x43a30f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
void* const edi_1 = arg1
int32_t var_8_1 = ecx

if (edi_1 != 0 && *(edi_1 + 4) == 0xf)
    int32_t* eax_1 = *(edi_1 + 0x30)
    
    if (eax_1 != 0 && *(edi_1 + 0x34) u>= 4)
        int32_t eax_3 = *eax_1 & 0xffff0000
        
        if (eax_3 == 0x7ffe0000)
            arg1 = 0x1c
        label_43a391:
            void*** eax_4 = sub_42cfa1(0x50)
            void*** result
            
            if (eax_4 == 0)
                result = nullptr
            else
                result = sub_46bee5(eax_4, 0, 0, 0, 0, 1, edi_1 + 0x10)
            
            if (result != 0)
                void*** eax_6 = sub_42cfa1(0x24)
                void*** eax_7
                
                if (eax_6 == 0)
                    eax_7 = nullptr
                else
                    eax_7 = sub_46bbbb(eax_6, 3, arg1, 1, 1, 0x200)
                
                result[4] = eax_7
                
                if (eax_7 != 0)
                    void*** eax_8 = sub_42cfa1(0x40)
                    void*** eax_9
                    
                    if (eax_8 == 0)
                        eax_9 = nullptr
                    else
                        eax_9 = sub_46c09c(eax_8, 5, *(edi_1 + 0x30), *(edi_1 + 0x34), edi_1 + 0x10)
                    
                    result[8] = eax_9
                    
                    if (eax_9 != 0)
                        void*** eax_10 = sub_42cfa1(0x14)
                        void*** eax_11
                        
                        if (eax_10 == 0)
                            eax_11 = nullptr
                        else
                            eax_11 = sub_46b602(eax_10, result[8], 0, "Value")
                        
                        if (eax_11 != 0)
                            result[8] = eax_11
                            sub_4381dc(result)
                            return result
        else
            if (eax_3 == 0x7fff0000)
                arg1 = 0x1b
                goto label_43a391
            
            if (eax_3 == 0xfffe0000)
                arg1 = 0x1a
                goto label_43a391
            
            if (eax_3 == 0xffff0000)
                arg1 = 0x19
                goto label_43a391

return nullptr
