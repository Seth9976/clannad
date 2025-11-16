// 函数: sub_570f70
// 地址: 0x570f70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg6 = 0xffffffff
*arg2 = 0xffffffff
*arg4 = 0xffffffff
*arg5 = 0xffffffff
*arg7 = 0xffffffff
*arg8 = 0xffffffff
int32_t eax_3 = data_20f02a0

if (eax_3 == 0xffffffff)
    return 1

if (eax_3 == arg3)
    *arg2 = data_20f02a8
    *arg4 = data_20f02ac
    *arg5 = data_20f02b0
    *arg6 = data_20f02b4
    *arg7 = data_20f02b8
    *arg8 = data_20f02bc
    return 0

if (data_13191b0 == 1)
    int32_t i = 1
    int128_t* ecx_2 = &data_20f02c0:4
    
    do
        if (*ecx_2 == arg3)
            *arg2 = *(ecx_2 + 8)
            *arg4 = *(ecx_2 + 0xc)
            *arg5 = ecx_2[1].d
            *arg6 = *(ecx_2 + 0x14)
            *arg7 = *(ecx_2 + 0x18)
            *arg8 = *(ecx_2 + 0x1c)
            return 2
        
        i += 1
        ecx_2 += 0x24
    while (i s< 0xa)

return 3
