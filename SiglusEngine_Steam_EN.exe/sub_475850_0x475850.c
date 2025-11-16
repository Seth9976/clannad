// 函数: sub_475850
// 地址: 0x475850
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* i_1 = data_1318c38
int32_t edi = data_1318c3c

if (i_1 s>= 0 && i_1 s< data_7031bc && edi u<= 1)
    i_1 = edi + (i_1 << 1)
    void* i_2 = i_1 * 0x7a0 + &data_98bf04
    int32_t ecx = *(i_2 + 0x27c)
    
    if (ecx != 0)
        int32_t esi_1 = 0x1e6a420
        
        if (arg1 != 0)
            i_1 = i_2
            
            if (*(i_1 + 0x274) s> 0)
                int32_t ecx_2 = ecx + 0x184
                int32_t var_8_1 = ecx_2
                void* edi_2 = (edi << 4) + &data_20db9e0
                int32_t i = 0
                
                do
                    if (sub_4d1be0(i_1, ecx_2, esi_1, 0x650) != 0)
                        *edi_2 += 1
                    
                    i_1 = i_2
                    i += 1
                    esi_1 += 0x650
                    ecx_2 = var_8_1 + 0x7d8
                    edi_2 += 0x20
                    var_8_1 = ecx_2
                while (i s< *(i_1 + 0x274))
        else
            i_1 = nullptr
            
            if (*(i_2 + 0x274) s> 0)
                int32_t edx_1 = ecx + 0x184
                
                do
                    sub_4d1c30(i_1, edx_1, esi_1, 0x650)
                    i_1 += 1
                    edx_1 += 0x7d8
                    esi_1 += 0x650
                while (i_1 s< *(i_2 + 0x274))

return i_1
