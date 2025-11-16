// 函数: sub_4660f0
// 地址: 0x4660f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg1
int32_t i = 0
int32_t* result = esi * 0x7a0
int32_t var_c = esi

if (data_7031bc s> 0)
    void* edx_1 = &result[0x262fc2]
    void* edi_2 = esi * 0x650 + &data_72d7fc
    result = &result[0x263060]
    void* var_14_1 = edx_1
    void* var_10_1 = edi_2
    int32_t* result_1 = result
    
    do
        int32_t ecx = *(edi_2 - 0x140)
        
        if (ecx != 8)
            if (ecx == 1)
                int32_t edx_4 = *edx_1
                
                if (edx_4 != 0xffffffff && *(edi_2 + 0x160) != 0xffffffff)
                    sub_465fd0(edx_4, *(edi_2 - 0xc8), edi_2 + 0xfc, edi_2)
                    result = result_1
        else if (i s< 0 || i s>= data_7031bc)
            sub_476410(result, esi, i, 0)
            result = result_1
        else
            void* esi_1 = *result
            
            if (esi_1 == 0)
                esi = var_c
                sub_476410(result, esi, i, 0)
                result = result_1
            else
                int32_t j_1 = result[-2]
                
                if (j_1 s> 0)
                    int32_t j
                    
                    do
                        if (*(esi_1 + 0x190) == 1)
                            sub_478480(esi_1)
                        
                        esi_1 += 0x7d8
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    result = result_1
                
                esi = var_c
                edi_2 = var_10_1
        
        var_14_1 += 0xf40
        edi_2 += 0xca0
        edx_1 = var_14_1
        i += 1
        result = &result[0x3d0]
        var_10_1 = edi_2
        result_1 = result
    while (i s< data_7031bc)

return result
