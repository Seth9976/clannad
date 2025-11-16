// 函数: sub_477de0
// 地址: 0x477de0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t** var_8 = arg3
arg3[0x64] = 1

if (arg3[0xbf] != 1)
    arg3[0xbf] = 1
    arg3[0x112] = 0
    arg3[0x113] = 0

int32_t edx = arg3[1]

if (edx == 0xffffffff)
    return sub_41d600(&arg3[0xf3], *arg3, arg3[0x64], &arg3[0xf3], &arg3[0xb4], arg2, arg4)

int32_t var_10_1 = arg9
return sub_428ac0(&arg3[0xf3], edx, arg3[0x64], edx, arg3[0x82], &arg3[0xf3], &arg3[0xb4], arg2, 
    arg5, arg6, arg3, arg7, arg8)
