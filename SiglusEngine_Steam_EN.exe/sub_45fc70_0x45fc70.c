// 函数: sub_45fc70
// 地址: 0x45fc70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax

if (data_1af4e80 != data_131d2cc || data_1af4e7c != data_1320e58)
    bool cond:0_1 = data_1311178 != 0
    data_1af4e80 = 0xffffffff
    data_1af4e7c = 0xffffffff
    
    if (not(cond:0_1))
        int32_t i = 0
        eax = &data_108f3a8
        
        do
            if ((&data_7035a4)[i] != 0)
                int32_t edx_1 = *(eax - 8)
                
                if (edx_1 != 0xffffffff)
                    int32_t esi_1 = *(eax - 4)
                    
                    if (esi_1 != 0xffffffff)
                        int32_t edi_1 = *eax
                        
                        if (edi_1 != 0xffffffff)
                            int32_t ebx_1 = *(eax + 4)
                            
                            if (ebx_1 != 0xffffffff && data_131d2cc s>= edx_1
                                    && data_131d2cc s<= edi_1)
                                int32_t edx_2 = data_1320e58
                                
                                if (edx_2 s>= esi_1 && edx_2 s<= ebx_1)
                                    sub_48fec0(i)
                                    int32_t eax_1
                                    eax_1.b = 1
                                    return eax_1
            
            i += 1
            eax += 0x1c
        while (i s< 8)

eax.b = 0
return eax
