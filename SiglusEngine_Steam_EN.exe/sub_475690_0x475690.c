// 函数: sub_475690
// 地址: 0x475690
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = 0

if (data_7031bc s> 0)
    void* esi_1 = &data_72d8f8
    void* edi_1 = &data_98c178
    void* var_c_1 = &data_72d8f8
    void* var_8_1 = &data_98c178
    int32_t i
    
    do
        int32_t eax_1 = *(esi_1 - 0x23c)
        
        if (eax_1 u<= 9)
            switch (eax_1)
                case 1, 2
                    if (sub_475620(esi_1) != 0)
                        return 1
                case 5
                    return 1
                case 8
                    void* eax_4 = *(edi_1 + 8)
                    
                    if (eax_4 != 0)
                        int32_t ebx_1 = *edi_1
                        
                        if (ebx_1 s> 0)
                            int32_t edi_2 = 0
                            
                            if (ebx_1 s> 0)
                                int32_t* esi_2 = eax_4 + 0x3cc
                                
                                do
                                    if (esi_2[-0x8f] == 1 && sub_475620(esi_2) != 0)
                                        return 1
                                    
                                    edi_2 += 1
                                    esi_2 = &esi_2[0x1f6]
                                while (edi_2 s< ebx_1)
                                
                                esi_1 = var_c_1
                            
                            edi_1 = var_8_1
        else if (data_702fc0 != 0 && data_641ae0 == 0)
            MessageBoxA(data_7027bc, 0x619d6c, &data_619d44, MB_OK)
            data_641ae0 = 1
        
        esi_1 += 0xca0
        i = i_1 + 1
        var_c_1 = esi_1
        edi_1 += 0xf40
        i_1 = i
        var_8_1 = edi_1
    while (i s< data_7031bc)

return 0
