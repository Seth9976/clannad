// 函数: sub_491130
// 地址: 0x491130
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

arg1 = arg3[4].b
int32_t ecx

if (arg4 == 0)
    ecx = sx.d(*arg3)
    
    if (arg1 != 0)
        if (arg1 != 1)
            ecx = neg.d(ecx) * 2
        else
            ecx *= 2
else if (arg1 != 0)
    ecx = 0
else
    ecx = neg.d(sx.d(*arg3))

if (arg5 == 0)
    *arg2 = arg5
    return arg5

if (arg5 == 0x64)
    *arg2 = ecx
    return arg5

int32_t eax_4 = ecx * arg5 s/ 0x64
*arg2 = eax_4
return eax_4
