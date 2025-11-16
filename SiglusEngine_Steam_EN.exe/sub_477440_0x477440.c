// 函数: sub_477440
// 地址: 0x477440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

void* esi_3 = arg4 * 0x7d8 + edi
sub_476c40(arg4, arg2, arg3, arg4, 0)
*(esi_3 + 0x18c) = arg5
*(esi_3 + 0x190) = arg5
int32_t result = *(esi_3 + 0x16c) + 1
*(esi_3 + 0xe0) = result
return result
