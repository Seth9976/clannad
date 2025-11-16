// 函数: sub_420bb0
// 地址: 0x420bb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_4d6c40(&data_1312570, &data_1312574)
int32_t result = sub_4d6c40(&data_1312590, &data_1312594)

for (int32_t* i = &data_13127d8; i s< &data_13130b8; i = &i[0x47])
    int32_t edi_1 = *i
    
    if (edi_1 u<= 0x1ff)
        *(edi_1 * 0x74 + &data_13747ac) -= 1
        
        if (*(edi_1 * 0x74 + &data_13747ac) s<= 0)
            sub_4d6c40(edi_1 * 0x74 + 0x13747b0, edi_1 * 0x74 + 0x13747b4)
            result = sub_425320(edi_1)
    
    *i = 0xffffffff

return result
