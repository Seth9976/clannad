// 函数: sub_47e7f0
// 地址: 0x47e7f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

void* esi_1 = arg4 * 0x7d8
int32_t eax_2 = *(esi_1 + edi + 0x300)
void* esi_2 = esi_1 + edi
int32_t var_18
int32_t var_10
int32_t ecx_3

if (eax_2 != 0xffffffff || *(esi_2 + 0x304) != eax_2 || *(esi_2 + 0x308) != eax_2
        || *(esi_2 + 0x30c) != eax_2)
    var_18 = *(esi_2 + 0x304)
    var_10 = *(esi_2 + 0x308)
    ecx_3 = *(esi_2 + 0x30c)
else
    eax_2 = 0
    var_18 = 0
    var_10 = data_70300c - 1
    ecx_3 = data_7030dc - 1

int32_t edx_2 = arg5
int32_t var_1c
int32_t var_14
int32_t var_c

if (edx_2 != 0xffffffff || arg6 != 0xffffffff || arg7 != arg6 || arg8 != arg6)
    var_1c = arg6
    var_14 = arg7
    var_c = arg8
else
    edx_2 = 0
    var_1c = 0
    var_14 = data_70300c - 1
    var_c = data_7030dc - 1

int32_t eax_3 = eax_2 - edx_2
sub_466780(eax_3, arg9, esi_2 + 0x69c, arg10, arg11, 0x70, 0, eax_3, var_18 - var_1c, 
    var_10 - var_14, ecx_3 - var_c)
*(esi_2 + 0x300) = arg5
*(esi_2 + 0x304) = arg6
*(esi_2 + 0x308) = arg7
*(esi_2 + 0x30c) = arg8
return arg6
