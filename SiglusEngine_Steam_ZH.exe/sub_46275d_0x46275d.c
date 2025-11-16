// 函数: sub_46275d
// 地址: 0x46275d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_30 = edi
int32_t* esi = arg1[6]

if (*esi == 0x20666f78)
    int32_t eax_1 = esi[1]
    
    if (eax_1 == 0x34303330)
        if (esi[2] == 0x206e6962 && esi[3] == 0x32333030)
        label_46286a:
            int32_t edx_1 = esi[5]
            
            if (edx_1 s>= 0 && (edx_1 s> 0 || esi[4] u>= 0x20))
                int32_t eax_8 = esi[7]
                int32_t ecx_6 = esi[6]
                
                if (eax_8 s>= 0 && (eax_8 s> 0 || ecx_6 u>= 0))
                    int32_t eax_9 = arg1[9]
                    
                    if (edx_1 s<= 0 && (edx_1 s< 0 || esi[4] u<= eax_9) && eax_8 s<= 0
                            && (eax_8 s< 0 || ecx_6 u<= eax_9))
                        int32_t edx_3 = adc.d(eax_8, esi[5], ecx_6 + esi[4] u< ecx_6)
                        
                        if (edx_3 s<= 0 && (edx_3 s< 0 || ecx_6 + esi[4] u<= eax_9))
                            int32_t ecx_8 = arg1[6]
                            arg1[8] = esi[6] + ecx_8 + esi[4]
                            arg1[7] = esi[4] + ecx_8
                            arg1[0xb] = eax_9 - esi[6] - esi[4]
                            arg1[0xa] = esi[6]
                            return nullptr
        else if (eax_1 == 0x34303330 && esi[2] == 0x70697a62 && esi[3] == 0x32333030)
            void var_14
            sub_48342b(&var_14)
            int32_t eax_2 = sub_48345b(&var_14)
            int32_t* eax_3
            
            if (eax_2 != 0)
                eax_3 = arg1[9]
            
            if (eax_2 == 0 || eax_3 u> 0xffffffff)
                sub_483435(&var_14)
                return 0x8007000e
            
            int32_t var_8
            int32_t* var_34_1 = &var_8
            int32_t var_c
            int32_t* result = sub_48348b(&var_14, arg1[6], eax_3, &var_c)
            
            if (result s< 0)
                sub_483435(&var_14)
                return result
            
            int32_t* esi_2 = arg1[2]
            (*(*esi_2 + 4))(esi_2)
            (*(*arg1 + 0x20))(0)
            sub_4626ed(arg1, esi_2, var_c, var_8)
            (*(*esi_2 + 8))(esi_2)
            esi = arg1[6]
            arg1[0xc].b = 1
            
            if (*esi == 0x20666f78 && esi[1] == 0x34303330 && esi[2] == 0x206e6962
                    && esi[3] == 0x32333030)
                sub_483435(&var_14)
                goto label_46286a
            
            sub_483435(&var_14)

return 0x8876038f
