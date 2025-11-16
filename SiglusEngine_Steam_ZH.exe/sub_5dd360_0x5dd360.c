// 函数: sub_5dd360
// 地址: 0x5dd360
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg1
void* var_c = edx
int32_t* result = *(edx + 0x1b8)
int32_t* i = *result

if (i != result)
    int32_t edi
    int32_t var_18_1 = edi
    
    do
        void* edi_2 = data_bac4e8
        void* var_8
        void** ecx = &var_8
        var_8 = &i[5]
        result = *(edi_2 + 0x30)
        
        if (&var_8 u< result)
            ecx = *(edi_2 + 0x2c)
            edx = var_c
        
        if (&var_8 u>= result || ecx u> &var_8)
            if (result == *(edi_2 + 0x34))
                void** var_1c_2 = ecx
                sub_530c10(edi_2 + 0x2c)
                edx = var_c
            
            result = *(edi_2 + 0x30)
            
            if (result != 0)
                *result = &i[5]
        else
            if (result == *(edi_2 + 0x34))
                void** var_1c_1 = ecx
                result = sub_530c10(edi_2 + 0x2c)
                edx = var_c
            
            int32_t** ecx_2 = *(edi_2 + 0x30)
            
            if (ecx_2 != 0)
                result = *(*(edi_2 + 0x2c) + ((&var_8 - ecx) s>> 2 << 2))
                *ecx_2 = result
        
        *(edi_2 + 0x30) += 4
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                result = i[1]
                
                if (*(result + 0xd) == 0)
                    while (i == result[2])
                        i = result
                        result = result[1]
                        
                        if (*(result + 0xd) != 0)
                            break
                
                i = result
            else
                i = i_1
                result = *i
                
                while (*(result + 0xd) == 0)
                    i = result
                    result = *i
    while (i != *(edx + 0x1b8))

return result
