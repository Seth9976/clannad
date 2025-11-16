// 函数: sub_6e0e70
// 地址: 0x6e0e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x14)
uint32_t ecx = zx.d(*(eax + 0xc))
uint32_t ecx_1

if (ecx.w != 0)
    ecx_1 = divu.dp.d(0:(*(eax + 8)), ecx)
else
    ecx_1 = 0

int32_t eax_4
int32_t edx_3
edx_3:eax_4 = sx.q(*(arg1 + 8))
return ((eax_4 + (edx_3 & 7)) s>> 3) * *(arg1 + 4) * ecx_1
