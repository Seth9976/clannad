// 函数: sub_46a9d0
// 地址: 0x46a9d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return 

void* esi_1 = (arg2 + (arg3 << 1)) * 0x650
int32_t eax_8 = zx.d(*(esi_1 + 0x72d80e)) - arg4
sub_466780(eax_8, arg8, esi_1 + 0x72dbc8, arg9, arg10, 0x6a, 0, eax_8, 
    zx.d(*(esi_1 + 0x72d80f)) - arg5, zx.d(*(esi_1 + 0x72d810)) - arg6, 
    zx.d(*(esi_1 + 0x72d811)) - arg7)
*(esi_1 + 0x72d80f) = arg5.b
*(esi_1 + 0x72d810) = arg6.b
*(esi_1 + 0x72d80e) = arg4.b
*(esi_1 + 0x72d811) = arg7.b
