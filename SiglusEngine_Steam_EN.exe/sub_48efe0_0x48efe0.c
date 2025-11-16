// 函数: sub_48efe0
// 地址: 0x48efe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t eax = 0

if (*(arg2 + 4) != 0)
    if (arg5 == 0xffffffff)
        eax = *(*(arg2 + 0xc) + 0x2c)
    else if (arg5 == 0xfffffffe)
        eax = *(*(arg2 + 0xc) + 0x30)
    else if (arg5 s< 0x64)
        eax = *(*(arg2 + 0xc) + (arg5 << 2) + 0x34)

*arg3 = arg4
arg3[1] = arg5
arg3[2] = eax
arg3[3] = 0
arg3[4] = 0
return sub_48d590(eax, arg4, &arg3[0xe], arg5)
