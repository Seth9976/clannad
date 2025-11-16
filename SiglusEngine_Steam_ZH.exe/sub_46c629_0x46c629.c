// 函数: sub_46c629
// 地址: 0x46c629
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void*** eax = sub_42cfa1(0x40)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_46bc38(eax)

if (result != 0)
    result[4] = *(arg1 + 0x10)
    result[5] = *(arg1 + 0x14)
    result[6] = *(arg1 + 0x18)
    result[0xe] = *(arg1 + 0x38)
    result[0xf] = *(arg1 + 0x3c)
    int32_t eax_8
    
    if (*(arg1 + 0x1c) != 0)
        eax_8 = (*(**(arg1 + 0x1c) + 4))()
        result[7] = eax_8
    
    if (*(arg1 + 0x1c) == 0 || eax_8 != 0)
        int32_t eax_10
        
        if (*(arg1 + 0x20) != 0)
            eax_10 = (*(**(arg1 + 0x20) + 4))()
            result[8] = eax_10
        
        if (*(arg1 + 0x20) == 0 || eax_10 != 0)
            int32_t eax_12
            
            if (*(arg1 + 0x24) != 0)
                eax_12 = (*(**(arg1 + 0x24) + 4))()
                result[9] = eax_12
            
            if (*(arg1 + 0x24) == 0 || eax_12 != 0)
                int32_t eax_14
                
                if (*(arg1 + 0x28) != 0)
                    eax_14 = (*(**(arg1 + 0x28) + 4))()
                    result[0xa] = eax_14
                
                if (*(arg1 + 0x28) == 0 || eax_14 != 0)
                    int32_t eax_16
                    
                    if (*(arg1 + 0x2c) != 0)
                        eax_16 = (*(**(arg1 + 0x2c) + 4))()
                        result[0xb] = eax_16
                    
                    if (*(arg1 + 0x2c) == 0 || eax_16 != 0)
                        int32_t eax_18
                        
                        if (*(arg1 + 0x30) != 0)
                            eax_18 = (*(**(arg1 + 0x30) + 4))()
                            result[0xc] = eax_18
                        
                        if (*(arg1 + 0x30) == 0 || eax_18 != 0)
                            int32_t eax_20
                            
                            if (*(arg1 + 0x34) != 0)
                                eax_20 = (*(**(arg1 + 0x34) + 4))()
                                result[0xd] = eax_20
                            
                            if (*(arg1 + 0x34) == 0 || eax_20 != 0)
                                return result

return nullptr
