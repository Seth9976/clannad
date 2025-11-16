// 函数: sub_481860
// 地址: 0x481860
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg4
void* result = arg2
int32_t* result_2 = result

if (*edi == 3)
    return sub_481590(result, edi[0x10], arg3, result)

if (*(result + 0x4c) != 0 && *(result + 0x48) != 0)
    int32_t edx_1 = edi[0xd]
    int32_t var_8 = edi[0xe]
    result = edi[0xf]
    arg4 = result
    
    if (arg3 u> 0xff)
        *edi = 1
        return result
    
    if (*(arg3 * 0x58 + 0x1b164d0) != 0)
        if (edx_1 s>= 0)
            result = *(arg3 * 0x58 + 0x1b164c0)
        
        if (edx_1 s< 0 || edx_1 s>= *(result + 0x94))
            *edi = 1
            return result
        
        int32_t* esi_1 = *(arg3 * 0x58 + 0x1b164cc) + edx_1 * 0x78
        int32_t* var_14_1 = esi_1
        
        while (true)
            void* result_1
            result = sub_481670(&var_8, arg3 * 0x58 + &data_1b16490, edi, esi_1, &var_8, &arg4, 
                &result_1)
            int32_t ecx_4 = var_8
            result_1 = result
            void* esi_2 = arg4
            void* ecx_9 =
                *(*(arg3 * 0x58 + 0x1b164c8) + ((esi_1[ecx_4 + 2] * 0x1a + esi_2) << 2) + 8) * 0x60
                + *(arg3 * 0x58 + 0x1b164c4)
            int32_t edx_5 = *(ecx_9 + 0x40)
            
            if (edx_5 s>= 0)
                sub_424660(result, result_2, arg3 * 0x58 + 0x1b164d0, 0, edx_5, *(ecx_9 + 0x10), 
                    *(ecx_9 + 0x14))
                result = result_1
            
            if (result != 0)
                break
            
            arg4 = esi_2 + 1
            esi_1 = var_14_1

return result
