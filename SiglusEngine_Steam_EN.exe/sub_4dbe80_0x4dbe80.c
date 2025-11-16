// 函数: sub_4dbe80
// 地址: 0x4dbe80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1
int32_t* edx = *(eax + 0x34)
void* ecx_2 = *(eax + 0x80) u>> 6 & 1
arg1 = ecx_2

if (edx == 0)
    return ecx_2

(*(*edx + 0x24))(edx, arg2, arg3, arg4, arg5, arg6, &arg1)
return arg1
