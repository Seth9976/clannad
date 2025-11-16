// 函数: sub_5f27f0
// 地址: 0x5f27f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg3
int32_t* result = arg2
int32_t* result_1 = result
int32_t* var_10 = esi
int32_t* result_3 = &esi[1]
int32_t* result_5 = result_3

if (result_3 != result)
    do
        int32_t ebx_1 = *result_3
        int32_t* result_2 = result_3
        
        if (arg4(ebx_1, *esi) == 0)
            void* result_6 = &result_3[-1]
            
            if (arg4(ebx_1, result_3[-1]) != 0)
                int32_t* result_4 = result_2
                char i
                
                do
                    *result_4 = *result_6
                    result_4 = result_6
                    int32_t var_24_4 = *(result_6 - 4)
                    result_6 -= 4
                    i = arg4(ebx_1, var_24_4)
                while (i != 0)
                result_2 = result_4
                result_3 = result_5
            
            result = result_2
            esi = var_10
            *result = ebx_1
        else
            int32_t ecx = (result_3 - esi) s>> 2 << 2
            result = _memcpy(result_3 - ecx + 4, esi, ecx)
            *esi = ebx_1
        
        result_3 = &result_3[1]
        result_5 = result_3
    while (result_3 != result_1)

return result
