// 函数: sub_46c706
// 地址: 0x46c706
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_14 = edi
void*** eax = sub_42cfa1(0x40)
void*** var_8_1
void*** edi_1

if (eax == 0)
    var_8_1 = nullptr
    edi_1 = nullptr
else
    edi_1 = sub_46bd30(eax)
    var_8_1 = edi_1

if (edi_1 != 0)
    edi_1[4] = *(arg1 + 0x10)
    edi_1[5] = *(arg1 + 0x14)
    edi_1[6] = *(arg1 + 0x18)
    edi_1[7] = *(arg1 + 0x1c)
    edi_1[0xd] = *(arg1 + 0x34)
    int32_t eax_8
    
    if (*(arg1 + 0x20) != 0)
        eax_8 = (*(**(arg1 + 0x20) + 4))()
        edi_1[8] = eax_8
    
    if (*(arg1 + 0x20) == 0 || eax_8 != 0)
        int32_t eax_10
        
        if (*(arg1 + 0x24) != 0)
            eax_10 = (*(**(arg1 + 0x24) + 4))()
            edi_1[9] = eax_10
        
        if (*(arg1 + 0x24) == 0 || eax_10 != 0)
            int32_t eax_12
            
            if (*(arg1 + 0x28) != 0)
                eax_12 = (*(**(arg1 + 0x28) + 4))()
                edi_1[0xa] = eax_12
            
            if (*(arg1 + 0x28) == 0 || eax_12 != 0)
                int32_t eax_14
                
                if (*(arg1 + 0x2c) != 0)
                    eax_14 = (*(**(arg1 + 0x2c) + 4))()
                    edi_1[0xb] = eax_14
                
                if (*(arg1 + 0x2c) == 0 || eax_14 != 0)
                    int32_t eax_16
                    
                    if (*(arg1 + 0x30) != 0)
                        eax_16 = (*(**(arg1 + 0x30) + 4))()
                        edi_1[0xc] = eax_16
                    
                    if (*(arg1 + 0x30) == 0 || eax_16 != 0)
                        int32_t eax_17 = *(arg1 + 0x34)
                        
                        if (eax_17 == 0)
                            return edi_1
                        
                        int32_t eax_19 = sub_46b465(data_b97498, eax_17 << 2, 0x10)
                        edi_1[0xe] = eax_19
                        
                        if (eax_19 != 0)
                            int32_t eax_22 = sub_46b465(data_b97498, *(arg1 + 0x14) << 2, 0x10)
                            edi_1[0xf] = eax_22
                            
                            if (eax_22 != 0)
                                int32_t ecx_9 = *(arg1 + 0x34) << 2
                                int32_t esi_2
                                int32_t edi_3
                                edi_3, esi_2 =
                                    __builtin_memcpy(edi_1[0xe], *(arg1 + 0x38), ecx_9 u>> 2 << 2)
                                __builtin_memcpy(edi_3, esi_2, ecx_9 & 3)
                                int32_t ecx_14 = *(arg1 + 0x14) << 2
                                int32_t esi_4
                                int32_t edi_5
                                edi_5, esi_4 = __builtin_memcpy(var_8_1[0xf], *(arg1 + 0x3c), 
                                    ecx_14 u>> 2 << 2)
                                __builtin_memcpy(edi_5, esi_4, ecx_14 & 3)
                                return var_8_1

return nullptr
