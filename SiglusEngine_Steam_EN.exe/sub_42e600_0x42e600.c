// 函数: sub_42e600
// 地址: 0x42e600
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* result = arg1
int32_t i = 0
void* result_1 = result

if (*(result + 0x2c) s> 0)
    int32_t* esi_1 = *(result + 0x28) + 4
    
    do
        int32_t edi_1 = *esi_1
        
        if (edi_1 != 0xffffffff)
            if (edi_1 u<= 0x1ff)
                *(edi_1 * 0x74 + &data_13747ac) -= 1
                
                if (*(edi_1 * 0x74 + &data_13747ac) s<= 0)
                    sub_4d6c40(edi_1 * 0x74 + 0x13747b0, edi_1 * 0x74 + 0x13747b4)
                    sub_425320(edi_1)
                    result = result_1
            
            *esi_1 = 0xffffffff
        
        i += 1
        esi_1 = &esi_1[0x2e]
    while (i s< *(result + 0x2c))

return result
