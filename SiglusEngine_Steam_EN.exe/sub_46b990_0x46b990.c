// 函数: sub_46b990
// 地址: 0x46b990
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return 

void* esi_1 = (arg2 + (arg3 << 1)) * 0x650
int32_t edx_1 = data_70300c - 1
int32_t edi_2 = data_7030dc - 1
int32_t eax_1 = *(esi_1 + 0x72d83c)
int32_t var_10_1
int32_t var_8_1
int32_t ecx_1

if (eax_1 != 0xfff0bdc1 || *(esi_1 + 0x72d840) != eax_1 || *(esi_1 + 0x72d844) != eax_1
        || *(esi_1 + 0x72d848) != eax_1)
    ecx_1 = *(esi_1 + 0x72d840)
    var_10_1 = *(esi_1 + 0x72d844)
    var_8_1 = *(esi_1 + 0x72d848)
else
    var_10_1 = edx_1
    var_8_1 = edi_2
    eax_1 = neg.d(edx_1)
    ecx_1 = neg.d(edi_2)

int32_t ebx_4 = arg4
int32_t var_c_2

if (ebx_4 != 0xfff0bdc1 || arg5 != ebx_4 || arg6 != ebx_4 || arg7 != ebx_4)
    edi_2 = arg7
    var_c_2 = arg5
    edx_1 = arg6
else
    ebx_4 = neg.d(edx_1)
    var_c_2 = neg.d(edi_2)

int32_t eax_3 = eax_1 - ebx_4
sub_466780(eax_3, arg8, esi_1 + 0x72dbc8, arg9, arg10, 0x71, 0, eax_3, ecx_1 - var_c_2, 
    var_10_1 - edx_1, var_8_1 - edi_2)
*(esi_1 + 0x72d83c) = arg4
*(esi_1 + 0x72d840) = arg5
*(esi_1 + 0x72d844) = arg6
*(esi_1 + 0x72d848) = arg7
