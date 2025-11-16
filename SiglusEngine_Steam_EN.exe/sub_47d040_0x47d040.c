// 函数: sub_47d040
// 地址: 0x47d040
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) == 0 || arg4 s< 0
        || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg2, arg3, arg4)

void* esi_2 = arg4 * 0x7d8 + *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)
int32_t eax_10 = zx.d(*(esi_2 + 0x2e2)) - arg5
sub_466780(eax_10, arg9, esi_2 + 0x69c, arg10, arg11, 0x6a, 0, eax_10, 
    zx.d(*(esi_2 + 0x2e3)) - arg6, zx.d(*(esi_2 + 0x2e4)) - arg7, zx.d(*(esi_2 + 0x2e5)) - arg8)
*(esi_2 + 0x2e3) = arg6.b
*(esi_2 + 0x2e4) = arg7.b
char result = arg8.b
*(esi_2 + 0x2e2) = arg5.b
*(esi_2 + 0x2e5) = result
return result
