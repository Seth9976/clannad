// 函数: sub_494290
// 地址: 0x494290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_1374758 == 0
BOOL i_2 = 0
int32_t var_c = 0

if (cond:0)
    return 

sub_4c4810(&i_2, &var_c, "read.sav", &i_2, "AVG_READ_INI_LOAD", 4, 0x1e)

if (var_c == 0)
    return 

BOOL i_3 = i_2

if (*i_3 == 0x98 && mods.dp.d(sx.q(*(i_3 + 4)), 0x64) == 2
        && sub_4d0f10(i_3 + 0x18, &data_108f5cc) == 0)
    int32_t* ebx_1 = i_3 + 0x98
    BOOL i_1 = 0x2710
    void* esi_1 = &data_1b8c894
    i_2 = 0x2710
    int32_t* edx_4 = &ebx_1[0x2710]
    BOOL i
    
    do
        int32_t edi_1 = *ebx_1
        
        if (edi_1 s> 0)
            int32_t eax_6 = *edx_4
            
            if (*(esi_1 + 0x14) == eax_6)
                sub_4d1c30(eax_6, &edx_4[1], *esi_1, edi_1)
                i_1 = i_2
            
            edx_4 = &edx_4[1] + edi_1
        
        esi_1 += 0x24
        ebx_1 = &ebx_1[1]
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

sub_4d6c40(&var_c, &i_2)
