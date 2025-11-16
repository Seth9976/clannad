// 函数: sub_488630
// 地址: 0x488630
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* i = &data_139329c
void* i_1 = &data_139329c

do
    int32_t edi_1 = *i
    void* ecx_1 = edi_1 * 0x3920
    int32_t eax = edi_1 * 0x1d4
    int32_t var_8_1 = eax
    
    if (*(ecx_1 + &data_f89ba4) != 0)
        for (void* const j = &data_610990; j s< &data_6109d0; j += 4)
            int32_t edx_1 = *j
            
            if (*(eax + edx_1 + 0x1090bb0) != 0 && edi_1 u<= 0x3f && edx_1 u<= 0xf)
                int32_t ecx_2 = *(eax + &data_1090b6c)
                
                if (ecx_2 != 0xffffffff)
                    int32_t eax_3
                    
                    if (*(edi_1 * 0x2d0 + 0x8fcd90) != 0)
                        eax_3 = *(edi_1 * 0x2d0 + &data_8fcd8c)
                    else
                        eax_3 = data_1313290
                    
                    if (eax_3 s< 0 || eax_3 s>= 8)
                        eax_3 = 0
                    
                    int32_t var_20
                    int32_t var_1c
                    int32_t var_18
                    int32_t var_14
                    char eax_7 = sub_576a80(ecx_1, *(ecx_1 + 0xf89d90), 
                        (eax_3 + (ecx_2 << 3)) * 0xff8 + *j * 0x14 + 0x109a860, 
                        *(ecx_1 + 0xf89d94), *(ecx_1 + 0xf89d98), *(ecx_1 + 0xf89d9c), &var_14, 
                        &var_1c, &var_18, &var_20, 1)
                    
                    if (eax_7 != 0)
                        int32_t eax_8 = data_131d2cc
                        
                        if (eax_8 s>= var_14 && eax_8 s<= var_18)
                            int32_t eax_9 = data_1320e58
                            
                            if (eax_9 s>= var_1c && eax_9 s<= var_20)
                                eax_9.b = 1
                                return eax_9
                    
                    eax = var_8_1
    
    i = i_1 - 4
    i_1 = i
while (i s>= &data_13931a0)

i.b = 0
return i
