// 函数: sub_48f070
// 地址: 0x48f070
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = sub_48d600(&arg3[5], *arg3, &arg3[0xe], arg3[1], arg3[2], arg3[3], arg3[4], 
    &arg3[5], arg3[0x4ed0], arg4, arg5, arg6, arg7, arg8)

if (result == 0)
    return result

arg3[2] = arg6
arg3[3] = arg7
arg3[4] = arg8
*arg3 = arg4
arg3[1] = arg5
sub_48d590(arg5, arg4, &arg3[0xe], arg5)
int32_t eax_2 = *arg3

if (eax_2 s> 0 && eax_2 s< 0x2710 && *(arg2 + 4) != 0)
    *(arg2 + 0x20) = *(arg2 + 0x18) + arg3[2]
    return result

*(arg2 + 0x20) = 0xffffffff
return result
