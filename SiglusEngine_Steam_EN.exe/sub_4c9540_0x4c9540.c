// 函数: sub_4c9540
// 地址: 0x4c9540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL var_c = 0
BOOL var_8 = 0
sub_4c4a00(&var_8, &var_c, arg1, &var_8, "NWKCNT", arg2, 4, 0xffffffff, 0xffffffff)
BOOL esi = var_8

if (esi != 0)
    int32_t esi_1 = *esi
    sub_4d6c40(&var_c, &var_8)
    var_8 = 0
    var_c = 0
    sub_4c4a00(&var_c, &var_8, arg1, &var_c, "NWKPACKHEADER", arg2 + 4, esi_1 * 0xc, 0xffffffff, 
        0xffffffff)
    BOOL ecx_2 = var_c
    
    if (ecx_2 != 0)
        BOOL eax_6 = var_8
        data_20af634 = esi_1
        data_20af62c = eax_6
        eax_6.b = 1
        data_20af630 = ecx_2
        return eax_6

char* eax_1
eax_1.b = 0
return eax_1
