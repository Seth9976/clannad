// 函数: sub_47eab0
// 地址: 0x47eab0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg2, arg3, arg4)

void* esi_2 = arg4 * 0x7d8 + edi
int32_t edx_2 = data_70300c - 1
int32_t edi_2 = data_7030dc - 1
int32_t eax_3 = *(esi_2 + 0x310)
int32_t var_10
int32_t var_8
int32_t ecx_1

if (eax_3 != 0xfff0bdc1 || *(esi_2 + 0x314) != eax_3 || *(esi_2 + 0x318) != eax_3
        || *(esi_2 + 0x31c) != eax_3)
    ecx_1 = *(esi_2 + 0x314)
    var_10 = *(esi_2 + 0x318)
    var_8 = *(esi_2 + 0x31c)
else
    var_10 = edx_2
    var_8 = edi_2
    eax_3 = neg.d(edx_2)
    ecx_1 = neg.d(edi_2)

int32_t ebx_4 = arg5
int32_t var_c_1

if (ebx_4 != 0xfff0bdc1 || arg6 != ebx_4 || arg7 != ebx_4 || arg8 != ebx_4)
    edi_2 = arg8
    var_c_1 = arg6
    edx_2 = arg7
else
    ebx_4 = neg.d(edx_2)
    var_c_1 = neg.d(edi_2)

int32_t eax_5 = eax_3 - ebx_4
sub_466780(eax_5, arg9, esi_2 + 0x69c, arg10, arg11, 0x71, 0, eax_5, ecx_1 - var_c_1, 
    var_10 - edx_2, var_8 - edi_2)
*(esi_2 + 0x310) = arg5
*(esi_2 + 0x314) = arg6
*(esi_2 + 0x318) = arg7
*(esi_2 + 0x31c) = arg8
return arg8
