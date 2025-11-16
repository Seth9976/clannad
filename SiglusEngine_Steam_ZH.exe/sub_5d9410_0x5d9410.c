// 函数: sub_5d9410
// 地址: 0x5d9410
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x338) = arg2

if (arg2 == 0)
    *(arg1 + 0x348) = arg2

int32_t esi = 0
int32_t edi = 0

if (*(arg1 + 0x228) != *(arg1 + 0x22c))
    void* eax_2 = *(arg1 + 0x22c)
    esi = *(eax_2 - 0xe0)
    edi = *(eax_2 - 0xdc)
    
    if (*(data_bac510 + 0x10bd8) == 1)
        esi = neg.d(esi)

int32_t result = *(arg1 + 0x14c) + edi
*(arg1 + 0x340) = *(arg1 + 0x148) + esi
*(arg1 + 0x344) = result
return result
