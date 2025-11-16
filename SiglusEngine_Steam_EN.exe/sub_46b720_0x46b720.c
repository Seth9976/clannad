// 函数: sub_46b720
// 地址: 0x46b720
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return 

void* esi_1 = (arg2 + (arg3 << 1)) * 0x650
int32_t eax_1 = *(esi_1 + 0x72d82c)
int32_t var_18_1
int32_t var_10_1
int32_t ecx_3

if (eax_1 != 0xffffffff || *(esi_1 + 0x72d830) != eax_1 || *(esi_1 + 0x72d834) != eax_1
        || *(esi_1 + 0x72d838) != eax_1)
    var_18_1 = *(esi_1 + 0x72d830)
    var_10_1 = *(esi_1 + 0x72d834)
    ecx_3 = *(esi_1 + 0x72d838)
else
    eax_1 = 0
    var_18_1 = 0
    var_10_1 = data_70300c - 1
    ecx_3 = data_7030dc - 1

int32_t edx = arg4
int32_t var_1c_1
int32_t var_14_1
int32_t var_c_1

if (edx != 0xffffffff || arg5 != 0xffffffff || arg6 != arg5 || arg7 != arg5)
    var_1c_1 = arg5
    var_14_1 = arg6
    var_c_1 = arg7
else
    edx = 0
    var_1c_1 = 0
    var_14_1 = data_70300c - 1
    var_c_1 = data_7030dc - 1

int32_t eax_2 = eax_1 - edx
sub_466780(eax_2, arg8, esi_1 + 0x72dbc8, arg9, arg10, 0x70, 0, eax_2, var_18_1 - var_1c_1, 
    var_10_1 - var_14_1, ecx_3 - var_c_1)
*(esi_1 + 0x72d82c) = arg4
*(esi_1 + 0x72d838) = arg7
*(esi_1 + 0x72d834) = arg6
*(esi_1 + 0x72d830) = arg5
