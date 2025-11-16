// 函数: sub_46c1a0
// 地址: 0x46c1a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0
BOOL var_8 = 0

if (arg3 s< 0 || arg3 s>= data_7031bc)
    *arg4 = 0
    *arg5 = 0
    return arg5

char* edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98bf3c)

if (edi == 0)
    *arg4 = 0
    *arg5 = 0
    return arg5

uint32_t eax_3 = sub_4cfc80(edi)
BOOL eax_4 = sub_4d6960(eax_3, &var_8, &var_c, eax_3, "objmojiget")
BOOL esi_1 = var_8
sub_4d1c30(eax_4, edi, esi_1, eax_3)
*arg4 = var_c
*arg5 = esi_1
return arg5
