// 函数: sub_9a9420
// 地址: 0x9a9420
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4 & 0x7fff
int32_t edi_2 = (arg5 & 0x7fff) - eax_1
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(edi_2)
int32_t temp0 = divs.dp.d(sx.q((arg6 - arg3) * ((eax_3 ^ edx) - edx)), arg2 - arg3)

if (edi_2 s>= 0)
    return eax_1 + temp0

return eax_1 - temp0
