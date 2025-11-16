// 函数: sub_468d00
// 地址: 0x468d00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
void* result = arg2

if (arg3 s>= 0 && arg3 s< data_7031bc && arg4 u<= 7)
    void* ecx = (result + (arg3 << 1)) * 0x650
    void* result_1 = (arg4 << 2) + &data_72d8ac + ecx
    void* ebx_2 = (arg4 << 2) + &data_72d88c + ecx
    int32_t eax_5 = *ebx_2 - arg5
    sub_466780(eax_5, arg7, ecx + 0x72dbc8, arg8, arg9, 0x65, arg4.b, eax_5, *result_1 - arg6, 0, 0)
    result = result_1
    *ebx_2 = arg5
    *result = arg6

return result
