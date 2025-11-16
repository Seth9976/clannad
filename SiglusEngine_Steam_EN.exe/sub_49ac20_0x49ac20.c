// 函数: sub_49ac20
// 地址: 0x49ac20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 7 || arg2 u> 1)
    return 

int32_t esi_1 = arg2 + (arg3 << 1)

if (arg4 u> 0xff)
    return 

void* ecx_2 = &(&data_8d02b4)[esi_1 * 0xb20 + arg4 * 0xb]
*(ecx_2 + 0x64) = arg5
*(ecx_2 + 0x68) = arg7

if (arg6 != 0)
    sub_4cfd70(ecx_2 + 0x6c, arg6)
    (&data_20f0094)[esi_1] += 1
    return 

sub_4d1ba0(arg7, 0x24, ecx_2 + 0x6c, 0)
(&data_20f0094)[esi_1] += 1
