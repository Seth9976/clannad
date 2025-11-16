// 函数: sub_4038a0
// 地址: 0x4038a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t edi_1 = (arg2 + 7) & 0xfffffff8

if (*(arg1 + 0x48) + edi_1 s> *(arg1 + 0x4c))
    if (*(arg1 + 0x44) != 0)
        int32_t* eax_2 = _malloc(8)
        *(arg1 + 0x50) += *(arg1 + 0x48)
        eax_2[1] = *(arg1 + 0x54)
        *eax_2 = *(arg1 + 0x44)
        *(arg1 + 0x54) = eax_2
    
    *(arg1 + 0x4c) = edi_1
    *(arg1 + 0x44) = _malloc(edi_1)
    *(arg1 + 0x48) = 0

int32_t ecx_5 = *(arg1 + 0x48)
int32_t result = *(arg1 + 0x44) + ecx_5
*(arg1 + 0x48) = ecx_5 + edi_1
return result
