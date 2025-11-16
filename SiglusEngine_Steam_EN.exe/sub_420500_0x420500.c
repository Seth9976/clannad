// 函数: sub_420500
// 地址: 0x420500
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if ((data_12a2980 == 0 && data_702fc0 == 0) || data_1311178 != 0)
    return 

sub_4d6c40(&data_1370160, &data_1370160:4)
int32_t eax = sub_4d6c40(&data_1370170, &data_1370174)
sub_4d1c30(eax, &data_1370110, &data_1370160, 0x50)

if (data_1370160:4 != 0)
    int32_t eax_1 = data_1370110:0xc
    data_1370160.d = 0
    data_1370160:4 = 0
    int32_t eax_3 = eax_1 * 0x14
    sub_4d6960(eax_3, &data_1370160:4, &data_1370160, eax_3, "FSCMSGBK_MOJI_TMP_BACKUP")
    eax = data_1370110:0xc * 0x14
    sub_4d1c30(eax, data_1370110:4, data_1370160:4, eax)

if (data_1370174 != 0)
    char* edi_1 = data_1370124
    data_1370170 = 0
    data_1370174 = 0
    
    if (edi_1 != 0)
        uint32_t eax_6 = sub_4cfc80(edi_1)
        eax = sub_4d6960(eax_6, &data_1370174, &data_1370170, eax_6, "FSCMSGBK_NAME_TMP_BACKUP")
        sub_4d1c30(eax, edi_1, data_1370174, eax_6)

sub_4d1c30(eax, &data_13701b0, 0x13701bc, 0xc)
