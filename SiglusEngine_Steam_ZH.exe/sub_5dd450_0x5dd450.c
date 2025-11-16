// 函数: sub_5dd450
// 地址: 0x5dd450
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
void* var_8 = ebx
int32_t* result = sub_5dd5c0(arg1)
int32_t* result_1 = result
int32_t* result_2 = result_1

if (result_1 != 0 && result_1[0x50].b != 0 && *(result_1 + 0x141) == 0)
    result = *(ebx + 0x1b8)
    void* i = *result
    void* i_1 = i
    
    if (i != result)
        int32_t* edi_1 = data_bac4e8
        
        do
            if (edi_1[0xa].b == 0)
            label_5dd504:
                int32_t eax_8 = *edi_1
                
                if (eax_8 s>= 0 && *(i + 0x14) == eax_8 && edi_1[3] == 1)
                    result_1[0x73] = *(i + 0x58)
            else
                int32_t eax = *edi_1
                
                if (eax s>= 0)
                    if (*(i + 0x14) == eax)
                        int32_t ebx_1 = *(i + 0x60)
                        
                        if (ebx_1 s>= 0)
                            int32_t* eax_1 = data_bac430
                            int32_t ecx_1 = eax_1[1] - *eax_1
                            
                            if (ebx_1 s< ecx_1 s/ 0xc)
                                int32_t var_20_1 = ecx_1
                                sub_6018e0(data_bac468 + 0x304, *(*data_bac430 + ebx_1 * 0xc))
                                edi_1 = data_bac4e8
                            
                            result_1 = result_2
                        
                        ebx = var_8
                    
                    goto label_5dd504
            
            if (*(edi_1 + 0x29) == 0)
            label_5dd57a:
                int32_t eax_18 = *edi_1
                
                if (eax_18 s< 0 || *(i + 0x14) != eax_18)
                    ebx = var_8
                else
                    ebx = var_8
                    
                    if (edi_1[3] == 2)
                        result_2[0x74] = *(i + 0x58)
            else
                int32_t eax_10 = *edi_1
                
                if (eax_10 s>= 0)
                    if (*(i + 0x14) == eax_10)
                        int32_t ebx_2 = *(i + 0x60)
                        
                        if (ebx_2 s>= 0)
                            int32_t* eax_11 = data_bac430
                            int32_t ecx_6 = eax_11[1] - *eax_11
                            
                            if (ebx_2 s< ecx_6 s/ 0xc)
                                int32_t var_20_2 = ecx_6
                                sub_6018e0(data_bac468 + 0x304, *(*data_bac430 + ebx_2 * 0xc + 4))
                                edi_1 = data_bac4e8
                    
                    goto label_5dd57a
            
            result = sub_563d80(&i_1)
            i = i_1
            result_1 = result_2
        while (i != *(ebx + 0x1b8))

return result
