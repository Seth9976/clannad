// 函数: sub_6caa70
// 地址: 0x6caa70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg3
char* var_8 = arg2
int32_t result_1 = result

if ((*(result + 0x11c) & 0x20000000) != 0)
    result = *(result + 0x78) & 0x300
    
    if (result != 0x300)
        result = arg3
    label_6caaa0:
        int32_t i_5 = arg4
        
        if (i_5 != 0)
            result = *(result + 0x138)
            int32_t i_4
            int32_t i_6
            
            do
                i_4 = i_5
                
                if (i_5 == 0)
                    i_4 = 0xffffffff
                
                int32_t i_3 = i_4
                
                if (var_8 != 0)
                    int32_t eax_1 = not.d(result)
                    
                    if (i_4 u>= 8)
                        uint32_t i_2 = i_4 u>> 3
                        uint32_t i
                        
                        do
                            i_3 -= 8
                            int32_t eax_3 =
                                eax_1 u>> 8 ^ *(((zx.d(*arg2) ^ zx.d(eax_1.b)) << 2) + &data_adc650)
                            int32_t eax_5 = eax_3 u>> 8
                                ^ *(((zx.d(arg2[1]) ^ zx.d(eax_3.b)) << 2) + &data_adc650)
                            int32_t eax_7 = eax_5 u>> 8
                                ^ *(((zx.d(arg2[2]) ^ zx.d(eax_5.b)) << 2) + &data_adc650)
                            int32_t eax_9 = eax_7 u>> 8
                                ^ *(((zx.d(arg2[3]) ^ zx.d(eax_7.b)) << 2) + &data_adc650)
                            int32_t eax_11 = eax_9 u>> 8
                                ^ *(((zx.d(arg2[4]) ^ zx.d(eax_9.b)) << 2) + &data_adc650)
                            int32_t eax_13 = eax_11 u>> 8
                                ^ *(((zx.d(arg2[5]) ^ zx.d(eax_11.b)) << 2) + &data_adc650)
                            int32_t eax_15 = eax_13 u>> 8
                                ^ *(((zx.d(arg2[6]) ^ zx.d(eax_13.b)) << 2) + &data_adc650)
                            char ecx_21 = arg2[7]
                            arg2 = &arg2[8]
                            eax_1 = eax_15 u>> 8
                                ^ *(((zx.d(ecx_21) ^ zx.d(eax_15.b)) << 2) + &data_adc650)
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                        i_5 = arg4
                    
                    if (i_3 != 0)
                        int32_t i_1
                        
                        do
                            char ecx_24 = *arg2
                            arg2 = &arg2[1]
                            eax_1 = eax_1 u>> 8
                                ^ *(((zx.d(ecx_24) ^ zx.d(eax_1.b)) << 2) + &data_adc650)
                            i_1 = i_3
                            i_3 -= 1
                        while (i_1 != 1)
                    
                    result = not.d(eax_1)
                else
                    result = 0
                
                arg2 = &var_8[i_4]
                i_6 = i_5
                i_5 -= i_4
                var_8 = arg2
                arg4 = i_5
            while (i_6 != i_4)
            *(result_1 + 0x138) = result
else if ((*(result + 0x78) & 0x800) == 0)
    goto label_6caaa0

return result
