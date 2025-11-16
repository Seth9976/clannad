// 函数: sub_4dbde0
// 地址: 0x4dbde0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1
int32_t* edx = *(eax + 0x34)
void* ecx_2 = *(eax + 0x80) u>> 5 & 1
arg1 = ecx_2

if (edx == 0)
    return ecx_2

(*(*edx + 0x1c))(edx, arg2, *arg3, arg3[1], arg4, arg5, &arg1)
return arg1
