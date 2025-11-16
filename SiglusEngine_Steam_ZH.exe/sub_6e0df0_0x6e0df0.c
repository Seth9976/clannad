// 函数: sub_6e0df0
// 地址: 0x6e0df0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(*(arg1 + 8))
int32_t esi_2 = (((edx & 7) + eax_2) s>> 3) * *(arg1 + 4)
return sub_71d840(*(arg1 + 0x14), arg2, divs.dp.d(sx.q(arg3), esi_2)) * esi_2
