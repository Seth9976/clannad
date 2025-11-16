// 函数: sub_420620
// 地址: 0x420620
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if ((data_12a2980 == 0 && data_702fc0 == 0) || data_1311178 != 0)
    return 

sub_4d6c40(&data_1370110, &data_1370110:4)
int32_t eax = sub_4d6c40(&data_1370120, &data_1370124)
sub_4d1c30(eax, &data_1370160, &data_1370110, 0x50)

if (data_1370110:4 != 0)
    int32_t eax_1 = data_1370160:0xc
    data_1370110.d = 0
    data_1370110:4 = 0
    int32_t eax_3 = eax_1 * 0x14
    sub_4d6960(eax_3, &data_1370110:4, &data_1370110, eax_3, "FSCMSGBK_MOJI_TMP")
    eax = data_1370160:0xc * 0x14
    sub_4d1c30(eax, data_1370160:4, data_1370110:4, eax)

if (data_1370124 != 0)
    char* edi_1 = data_1370174
    data_1370120 = 0
    data_1370124 = 0
    
    if (edi_1 != 0)
        uint32_t eax_6 = sub_4cfc80(edi_1)
        eax = sub_4d6960(eax_6, &data_1370124, &data_1370120, eax_6, "FSCMSGBK_NAME_TMP")
        sub_4d1c30(eax, edi_1, data_1370124, eax_6)

sub_4d1c30(eax, 0x13701bc, &data_13701b0, 0xc)
