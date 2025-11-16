// 函数: sub_430f50
// 地址: 0x430f50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

for (void* i = &data_1392720; i s< &data_1392cb0; i += 0x2c8)
    int32_t edi_1 = *i
    
    if (edi_1 u<= 0x1ff)
        *(edi_1 * 0x74 + &data_13747ac) -= 1
        
        if (*(edi_1 * 0x74 + &data_13747ac) s<= 0)
            sub_4d6c40(edi_1 * 0x74 + 0x13747b0, edi_1 * 0x74 + 0x13747b4)
            sub_425320(edi_1)
    
    int32_t edi_2 = *(i + 4)
    
    if (edi_2 u<= 0x1ff)
        *(edi_2 * 0x6c + &data_1382f88) -= 1
        
        if (*(edi_2 * 0x6c + &data_1382f88) s<= 0)
            sub_428300(edi_2 * 0x6c + 0x1382f8c)
            sub_428710(edi_2)
