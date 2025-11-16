// 函数: sub_42d090
// 地址: 0x42d090
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 2 || (&data_8c4ca4)[arg1 * 0x22] == 0)
    return 

int32_t edi_1 = (&data_8c4d20)[arg1 * 0x22]

if (edi_1 == 0)
    return 

int32_t ecx = data_131310c
int32_t eax_2 = ecx - (&data_8c4d1c)[arg1 * 0x22]
(&data_8c4d24)[arg1 * 0x22] += eax_2
(&data_8c4d1c)[arg1 * 0x22] = ecx

if ((&data_8c4d24)[arg1 * 0x22] u>= edi_1)
    sub_42ce80(eax_2, (&data_8c4d0c)[arg1 * 0x22], arg1, (&data_8c4d14)[arg1 * 0x22])
    (&data_8c4d20)[arg1 * 0x22] = 0
    return 

int32_t ecx_2 = edi_1
int32_t eax_4 = (&data_8c4d08)[arg1 * 0x22]
int32_t ebx
ebx.b = (&data_8c4d18)[arg1 * 0x88]
int32_t var_40_1 = data_1392710
int32_t edx_3 = (&data_8c4d0c)[arg1 * 0x22]
int32_t var_4c_1 = eax_4
int32_t var_58 = edx_3
int32_t var_34_1 = 1

if (ecx_2 s< 0)
    ecx_2 = neg.d(ecx_2)

int32_t var_38_1 = ecx_2
int32_t var_3c_1 = 0
int32_t var_48_1 = edx_3
int32_t var_44_1 = edx_3

if (ebx.b == 0xff)
    int32_t var_48_2 = eax_4
    int32_t var_44_2 = eax_4
    var_58 = eax_4
    char var_50_1 = ebx.b
else if (ebx.b == 1 || ebx.b == 2)
    char eax_5 = ebx.b
    
    if (edx_3 == edx_3)
        eax_5 = 0
    
    char var_50_3 = eax_5
else
    char var_50_2 = ebx.b

sub_4d1fd0(&var_58, (&data_8c4d24)[arg1 * 0x22])
int32_t eax_6 = (&data_8c4d10)[arg1 * 0x22]
int32_t ecx_4 = (&data_8c4d14)[arg1 * 0x22]
int32_t var_18_1 = data_1392710
int32_t var_24_1 = eax_6
int32_t var_30 = ecx_4
int32_t var_c_1 = 1

if (edi_1 s< 0)
    edi_1 = neg.d(edi_1)

int32_t var_10_1 = edi_1
int32_t var_14_1 = 0
int32_t var_20_1 = ecx_4
int32_t var_1c_1 = ecx_4

if (ebx.b == 0xff)
    int32_t var_20_2 = eax_6
    int32_t var_1c_2 = eax_6
    var_30 = eax_6
    char var_28_1 = ebx.b
else if (ebx.b == 1 || ebx.b == 2)
    char eax_7 = ebx.b
    
    if (ecx_4 == ecx_4)
        eax_7 = 0
    
    char var_28_3 = eax_7
else
    char var_28_2 = ebx.b

sub_42ce80(sub_4d1fd0(&var_30, (&data_8c4d24)[arg1 * 0x22]), eax_4, arg1, eax_6)
