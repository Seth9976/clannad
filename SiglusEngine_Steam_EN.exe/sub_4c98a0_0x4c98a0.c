// 函数: sub_4c98a0
// 地址: 0x4c98a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL var_c = 0
BOOL var_8 = 0
sub_4c4a00(&var_8, &var_c, arg1, &var_8, "OVKCNT", arg2, 4, 0xffffffff, 0xffffffff)
BOOL eax_1 = var_8

if (eax_1 == 0)
    eax_1.b = 0
    return eax_1

int32_t ebx = *eax_1
sub_4d6c40(&var_c, &var_8)
var_8 = 0
var_c = 0
sub_4c4a00(&var_c, &var_8, arg1, &var_c, "OVKPACKHEADER", arg2 + 4, ebx << 4, 0xffffffff, 
    0xffffffff)
BOOL ecx_2 = var_c

if (ecx_2 == 0)
    char* eax_6
    eax_6.b = 0
    return eax_6

BOOL eax_7 = var_8
data_20af84c = ebx
data_20af844 = eax_7
eax_7.b = 1
data_20af848 = ecx_2
return eax_7
