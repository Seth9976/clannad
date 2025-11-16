// 函数: sub_6e16f0
// 地址: 0x6e16f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(*(arg1 + 0x14) + 0x2d0) == 0)
    void* eax
    eax.b = 0
    return eax

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(*(arg1 + 8))
int32_t esi = *(arg1 + 4)
int32_t ecx_1 = ((edx & 7) + eax_2) s>> 3
int32_t edi = divs.dp.d(sx.q(divs.dp.d(sx.q(arg2), ecx_1)), esi)
int32_t temp0_2 = divs.dp.d(sx.q(*(arg1 + 0x10)), esi * ecx_1)

if (edi s< 0)
    edi = 0
else if (edi s> temp0_2)
    edi = temp0_2

int32_t eax_12
int32_t edx_6
edx_6:eax_12 = sx.q(edi)
sub_744a60(*(arg1 + 0x14), eax_12, edx_6)
*(arg1 + 0x1c) = arg2
int32_t eax_13
eax_13.b = 1
return eax_13
