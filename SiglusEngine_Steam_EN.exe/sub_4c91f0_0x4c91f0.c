// 函数: sub_4c91f0
// 地址: 0x4c91f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL var_c = 0
BOOL var_8 = 0
sub_4c4a00(&var_8, &var_c, arg1, &var_8, "KOEPACHEADER", arg2, 0x20, 0xffffffff, 0xffffffff)

if (var_c == 0)
    char* eax_1
    eax_1.b = 0
    return eax_1

BOOL eax_2 = var_8
int32_t esi = *(eax_2 + 0x18)
int32_t ecx = *(eax_2 + 0x10)

if (esi == 0)
    esi = 0x5622

sub_4d6c40(&var_c, &var_8)
var_8 = 0
var_c = 0
sub_4c4a00(&var_c, &var_8, arg1, &var_c, "KOEPACFACT", arg2 + 0x20, ecx << 3, 0xffffffff, 
    0xffffffff)
BOOL ecx_3 = var_c

if (ecx_3 == 0)
    char* eax_7
    eax_7.b = 0
    return eax_7

BOOL eax_8 = var_8
data_20af41c = esi
data_20af410 = eax_8
data_20af418 = ecx
int32_t eax_9
eax_9.b = 1
data_20af414 = ecx_3
return eax_9
