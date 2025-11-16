// 函数: sub_6a64d0
// 地址: 0x6a64d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = 0xffffffff
void* result = &arg1[0x13]
__builtin_memset(&arg1[1], 0, 0x24)
__builtin_memset(&arg1[0xb], 0, 0x1c)
bool cond:0 = *(result + 0x14) u< 8
*(result + 0x10) = 0

if (not(cond:0))
    result = *result

*result = 0
arg1[0x19] = 0xffffffff
arg1[0x1a] = 0
return result
