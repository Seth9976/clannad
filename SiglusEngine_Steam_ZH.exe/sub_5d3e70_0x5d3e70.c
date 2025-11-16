// 函数: sub_5d3e70
// 地址: 0x5d3e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0x140)
int32_t eax_1 = *(arg1 + 0x118) - 1

if (edx s< 0)
    edx = 0
else if (edx s> eax_1)
    edx = eax_1

void* eax_2 = data_bac510
*(arg1 + 0x140) = edx
void* esi_1 = edx * 0x2e60 + *(arg1 + 0x10c)

if (*(eax_2 + 0x10bd8) != 1)
    int32_t eax_15
    int32_t edx_3
    edx_3:eax_15 = sx.q(*(arg1 + 0xe0) - *(arg1 + 0xd8))
    int32_t eax_18
    int32_t edx_4
    edx_4:eax_18 = sx.q(*(esi_1 + 0x218))
    int32_t eax_20 = (eax_18 - edx_4) s>> 1
    *(arg1 + 0x148) = ((eax_15 - edx_3) s>> 1) - eax_20 - *(esi_1 + 0x214)
    return eax_20

int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(*(arg1 + 0xdc) - *(arg1 + 0xd4))
int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q(*(esi_1 + 0x218))
int32_t eax_12 = ((eax_8 - edx_2) s>> 1) - ((eax_5 - edx_1) s>> 1) + *(esi_1 + 0x214)
*(arg1 + 0x148) = eax_12
return eax_12
