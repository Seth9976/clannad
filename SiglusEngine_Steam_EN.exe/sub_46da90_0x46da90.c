// 函数: sub_46da90
// 地址: 0x46da90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return 

int32_t edx = (arg2 + (arg3 << 1)) * 0x650
int32_t esi_1 = arg5
int32_t ecx_1 = arg4 * 7

if (esi_1 s<= 0)
    esi_1 = 1

*(edx + (ecx_1 << 2) + 0x72d9ae) = esi_1.w

if (arg6 != 0xffffffff)
    *(edx + (ecx_1 << 2) + 0x72d9b0) = arg6.b
