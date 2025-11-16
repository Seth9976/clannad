// 函数: sub_5d48a0
// 地址: 0x5d48a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** result = *arg1
void** result_1 = result[1]

if (*(result_1 + 0xd) == 0)
    int16_t ebx_1 = *arg2
    
    do
        int16_t ecx = result_1[4].w
        
        if (ecx u< ebx_1)
            result_1 = result_1[2]
        else if (ecx u> ebx_1)
            result = result_1
            result_1 = *result_1
        else
            int16_t ecx_1 = *(result_1 + 0x12)
            int16_t edx_1 = arg2[1]
            
            if (ecx_1 u< edx_1)
                result_1 = result_1[2]
            else if (ecx_1 u> edx_1)
                result = result_1
                result_1 = *result_1
            else
                int16_t ecx_2 = result_1[5].w
                int16_t edx_2 = arg2[2]
                
                if (ecx_2 u< edx_2)
                    result_1 = result_1[2]
                else if (ecx_2 u> edx_2)
                    result = result_1
                    result_1 = *result_1
                else
                    int16_t ecx_3 = *(result_1 + 0x16)
                    int16_t edx_3 = arg2[3]
                    
                    if (ecx_3 u< edx_3)
                        result_1 = result_1[2]
                    else if (ecx_3 u> edx_3)
                        result = result_1
                        result_1 = *result_1
                    else
                        int16_t ecx_4 = result_1[6].w
                        int16_t edx_4 = arg2[4]
                        
                        if (ecx_4 u< edx_4)
                            result_1 = result_1[2]
                        else if (ecx_4 u> edx_4)
                            result = result_1
                            result_1 = *result_1
                        else
                            int16_t ecx_5 = *(result_1 + 0x1a)
                            int16_t edx_5 = arg2[5]
                            
                            if (ecx_5 u< edx_5 || (ecx_5 u<= edx_5 && result_1[7].w u< arg2[6]))
                                result_1 = result_1[2]
                            else
                                result = result_1
                                result_1 = *result_1
    while (*(result_1 + 0xd) == 0)

return result
