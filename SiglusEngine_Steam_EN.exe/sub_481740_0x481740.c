// 函数: sub_481740
// 地址: 0x481740
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg5

if (*ebx == 3)
    return sub_481520(arg2, ebx[0x10], arg3, arg2, arg4)

int32_t var_c = ebx[0xe]
int32_t* result = ebx[0xf]
int32_t* result_3 = result
int32_t edi = ebx[0xd]
*arg4 = 0

if (arg3 u> 0xff)
    *ebx = 1
else
    void* edx_2 = arg3 * 0x58 + &data_1b16490
    arg5 = edx_2
    result = edx_2 + 0x40
    int32_t* result_2 = result
    
    if (*(edx_2 + 0x40) != 0)
        if (edi s< 0)
            *ebx = 1
        else
            result = *(edx_2 + 0x30)
            
            if (edi s>= result[0x25])
                *ebx = 1
            else
                int32_t* edi_1 = *(edx_2 + 0x3c) + edi * 0x78
                int32_t* var_1c_1 = edi_1
                
                while (true)
                    int32_t* result_1
                    result = sub_481670(&var_c, edx_2, ebx, edi_1, &var_c, &result_3, &result_1)
                    int32_t ecx_4 = var_c
                    result_1 = result
                    int32_t* result_4 = result_3
                    edx_2 = arg5
                    void* ecx_10 =
                        *(*(arg5 + 0x38) + ((edi_1[ecx_4 + 2] * 0x1a + result_4) << 2) + 8) * 0x60
                        + *(edx_2 + 0x34)
                    
                    if (*(ecx_10 + 0x40) s>= 0)
                        result = *arg4
                        
                        if (result s>= 0)
                            result = sub_427d40(result, arg2, result_2, arg4, result, 
                                *(ecx_10 + 0x40), *(ecx_10 + 0x10), *(ecx_10 + 0x14))
                            edx_2 = arg5
                            
                            if (result != 0)
                                *arg4 += 1
                    
                    if (result_1 != 0)
                        break
                    
                    result_3 = result_4 + 1
                    edi_1 = var_1c_1

return result
