// 函数: sub_5d90a0
// 地址: 0x5d90a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1
void* esi = *(arg1 + 0x228)
bool cond:1

if (*(data_bac510 + 0x10bd8) != 1)
    cond:1 = *(esi + 0xe0) == *(esi + 8)
else
    cond:1 = *(esi + 0xe4) == *(esi + 0xc)

if (not(cond:1))
    *(esi + 0x170) = 0
    *(esi + 0x174) = 0
    *(esi + 0x178) = 0
    sub_5de520(esi)
    *(esi + 0x1a5) = 1

void* eax_3 = *(arg1 + 0x228)
int32_t ecx_1 = *(eax_3 + 0xe0)
int32_t result = *(eax_3 + 0xe4)
*(arg1 + 0x1934) = ecx_1
*(arg1 + 0x1938) = result
*(arg1 + 0x195c) = ecx_1
*(arg1 + 0x1960) = result
return result
