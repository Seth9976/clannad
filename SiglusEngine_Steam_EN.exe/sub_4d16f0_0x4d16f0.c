// 函数: sub_4d16f0
// 地址: 0x4d16f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg3

if (eax s< 0)
    eax = 0
else if (eax s> 0x59)
    eax = 0x59

int32_t ecx_1 = sub_4d1650(0xb3 - eax) * 0x64
int32_t ecx_3

if (arg2 s>= arg4)
    ecx_3 = arg2 - arg4
else
    ecx_3 = arg4 - arg2

int32_t eax_9 = (ecx_3 + 1) * ecx_1 s/ 0x7f80 s/ 0x64

if (eax_9 s> 0)
    eax_9 -= 1

if (arg2 s>= arg4)
    return arg2 - eax_9

return eax_9 + arg2
