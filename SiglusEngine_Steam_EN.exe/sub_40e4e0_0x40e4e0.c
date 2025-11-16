// 函数: sub_40e4e0
// 地址: 0x40e4e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = arg3 & 0x7fff
int32_t ecx_1 = (arg4 & 0x7fff) - esi_1
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx_1)
int32_t temp0 = divs.dp.d(sx.q(((eax_1 ^ edx) - edx) * (arg5 - arg1)), arg2 - arg1)

if (ecx_1 s>= 0)
    return temp0 + esi_1

return esi_1 - temp0
