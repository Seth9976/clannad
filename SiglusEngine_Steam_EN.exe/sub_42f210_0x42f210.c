// 函数: sub_42f210
// 地址: 0x42f210
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg2 + 0x28) == 0)
    *(arg3 + 0x34) = 0
    return *(arg2 + 0x24)

if (*arg4 == 0)
    int32_t esi_7 = *(arg2 + 0xa0) + *(arg2 + 0x94) + *(arg2 + 0x88) + *(arg2 + 0x7c)
        + *(arg2 + 0x70) + *(arg2 + 0x64) + *(arg2 + 0x58)
    int32_t esi_9 = esi_7 + *(arg2 + 0x4c) + *(arg2 + 0x40)
    uint32_t esi_11
    
    if (esi_9 == neg.d(*(arg2 + 0x34)))
        esi_11 = 0
    else
        esi_11 = modu.dp.d(0:(sub_4d18c0(2)), esi_9 + *(arg2 + 0x34))
    
    int32_t edx_2 = 0
    void* ecx = arg2 + 0x34
    int32_t i
    
    for (i = 0; i s< 0xa; )
        edx_2 += *ecx
        
        if (esi_11 s< edx_2)
            break
        
        i += 1
        ecx += 0xc
    
    if (i == 0xa)
        i = 0
    
    int32_t eax_4 = i * 3
    int32_t esi_12 = *(arg2 + (eax_4 << 2) + 0x30)
    int32_t eax_5 = *(arg2 + (eax_4 << 2) + 0x2c)
    int32_t edi_1
    
    if (eax_5 u>= esi_12)
        edi_1 = esi_12
        esi_12 = eax_5
    else
        edi_1 = eax_5
    
    *(arg3 + 0x38) = modu.dp.d(0:(sub_4d18c0(2)), esi_12 - edi_1 + 1) + edi_1
    *arg4 = 1

return *(arg3 + 0x38)
