// 函数: sub_465bb0
// 地址: 0x465bb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg1
int32_t* result = edx * 0x7a0
int32_t var_10 = edx
void* edi_1 = edx * 0x650 + &data_72d6b0
void* var_8 = result + &data_98bf04
int32_t i = 0
void* var_14 = edi_1

if (data_7031bc s> 0)
    void* ecx = var_8
    result = &result[0x263060]
    int32_t* result_1 = result
    
    do
        if (*(edi_1 + 0xc) != 8)
            sub_465a70(edi_1, ecx)
            result = result_1
            ecx = var_8
            edx = var_10
        else
            int32_t** esi_1
            
            if (i s>= 0 && i s< data_7031bc)
                esi_1 = *result
            
            if (i s< 0 || i s>= data_7031bc || esi_1 == 0)
                sub_476410(result, edx, i, 0)
                result = result_1
                ecx = var_8
                edx = var_10
            else
                int32_t j_1 = result[-2]
                
                if (j_1 s> 0)
                    int32_t j
                    
                    do
                        if (esi_1[0xf6] == 0)
                            sub_478000(esi_1)
                        
                        esi_1 = &esi_1[0x1f6]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    result = result_1
                    ecx = var_8
                    edx = var_10
                
                edi_1 = var_14
        
        edi_1 += 0xca0
        ecx += 0xf40
        i += 1
        var_14 = edi_1
        result = &result[0x3d0]
        var_8 = ecx
        result_1 = result
    while (i s< data_7031bc)

return result
