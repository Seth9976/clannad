// 函数: sub_46d660
// 地址: 0x46d660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2

if (arg3 s> esi)
    arg1 = arg3
    arg3 = esi
    esi = arg1

if (arg3 s< 0 || esi s>= data_7031bc)
    return 

int32_t i_1 = esi - arg3 + 1

if (i_1 s<= 0)
    return 

int32_t* edx_1 = (arg4 + (arg3 << 1)) * 0x650 + 0x72dcec
arg8 -= arg3
int32_t i

do
    if (arg3 s>= 0 && arg3 s< data_7031bc && arg5 u<= 0xff && arg6 + 1 u<= 0x100 && arg7 u<= 9)
        *edx_1 = arg6
        edx_1[-1] = arg5
        edx_1[1] = arg7
        edx_1[2] = arg8 + arg3
    
    arg3 += 1
    edx_1 = &edx_1[0x328]
    i = i_1
    i_1 -= 1
while (i != 1)
