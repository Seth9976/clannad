// 函数: sub_5d3cc0
// 地址: 0x5d3cc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1

if (*(arg1 + 0x18c) != 0)
    int32_t result = timeGetTime() - *(arg1 + 0x18c)
    
    if (result u<= 0xc8)
        return result
else
    *(arg1 + 0x18c) = timeGetTime()

int32_t ecx = *(arg1 + 0x118)
int32_t temp1_1 = mods.dp.d(sx.q(*(arg1 + 0x11c) - 1 + ecx), *(arg1 + 0x108))
int32_t eax_6 = *(arg1 + 0x140)

if (eax_6 s> temp1_1)
    *(arg1 + 0x140) = eax_6 + 1
    
    if (eax_6 + 1 s>= ecx)
        *(arg1 + 0x140) = eax_6 + 1 - ecx
else
    *(arg1 + 0x140) = eax_6 + 1
    
    if (eax_6 + 1 s> temp1_1)
        *(arg1 + 0x140) = temp1_1

int32_t eax_10 = *(arg1 + 0x140)

if (eax_10 s>= 0 && eax_10 s< ecx)
    int32_t eax_13
    int32_t edx_3
    edx_3:eax_13 = sx.q(*(arg1 + 0xe0) - *(arg1 + 0xd8))
    void* esi_2 = eax_10 * 0x2e60 + *(arg1 + 0x10c)
    int32_t eax_16
    int32_t edx_4
    edx_4:eax_16 = sx.q(*(esi_2 + 0x218))
    *(arg1 + 0x148) = ((eax_13 - edx_3) s>> 1) - ((eax_16 - edx_4) s>> 1) - *(esi_2 + 0x214)

sub_5d3e70(arg1)
return sub_5d4230(arg1)
