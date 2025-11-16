// 函数: sub_410ba0
// 地址: 0x410ba0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = arg2 + arg1[1]
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi_1)
arg1[1] = esi_1 & 7
int32_t result = (eax_1 + (edx & 7)) s>> 3
arg1[3] += result
*arg1 += result
return result
