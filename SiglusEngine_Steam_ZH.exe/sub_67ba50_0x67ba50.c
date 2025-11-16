// 函数: sub_67ba50
// 地址: 0x67ba50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg1[1]
int32_t esi = *arg1

if (arg3 s< 0 && edx u< neg.d(arg3))
    int32_t edx_1 = edx + arg3
    *arg2 = esi + 0xfffffffc - ((0xffffffff - edx_1) u>> 5 << 2)
    arg2[1] = edx_1 & 0x1f
    return arg2

int32_t edx_3 = edx + arg3
*arg2 = esi + (edx_3 u>> 5 << 2)
arg2[1] = edx_3 & 0x1f
return arg2
