// 函数: sub_5d4230
// 地址: 0x5d4230
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 0x118)

if (result s> 0)
    int32_t ecx = *(arg1 + 0x11c)
    int32_t esi_1 = *(arg1 + 0x10c)
    int32_t result_1
    
    if (*(data_bac510 + 0x10bd8) != 1)
        int32_t eax_30
        int32_t edx_11
        edx_11:eax_30 = sx.q(*(arg1 + 0xe0) - *(arg1 + 0xd8))
        int32_t edi_5 = (eax_30 - edx_11) s>> 1
        int32_t eax_34
        int32_t edx_12
        edx_12:eax_34 = sx.q(*(ecx * 0x2e60 + esi_1 + 0x218))
        int32_t edx_14 = edi_5 - ((eax_34 - edx_12) s>> 1)
        int32_t eax_42
        int32_t edx_17
        edx_17:eax_42 = sx.q(
            *(mods.dp.d(sx.q(*(arg1 + 0x118) + ecx - 1), *(arg1 + 0x108)) * 0x2e60 + esi_1 + 0x218))
        int32_t eax_44 = *(arg1 + 0x148)
        int32_t ecx_15 = ((eax_42 - edx_17) s>> 1) - *(arg1 + 0x13c) + edi_5
        
        if (*(arg1 + 0x118) == 1)
            ecx_15 = edx_14
        
        if (eax_44 s< ecx_15)
            eax_44 = ecx_15
        else if (eax_44 s> edx_14)
            eax_44 = edx_14
        
        *(arg1 + 0x148) = eax_44
        int32_t esi_5 = *(data_bac510 + 0xa47c90)
        int32_t eax_46 = sub_5ef9c0(arg1 + 0x418, 0)
        int32_t edx_19 = *(data_bac510 + 0xa47c98) - eax_46
        
        if (ecx_15 != edx_14)
            esi_5 = divs.dp.d(sx.q((*(arg1 + 0x148) - ecx_15) * (esi_5 - edx_19)), edx_14 - ecx_15)
                + edx_19
        
        *(arg1 + 0x14c) = esi_5
        int32_t eax_52 = sub_5ef9c0(arg1 + 0x418, 0)
        void* ecx_20 = data_bac510
        result_1 = *(ecx_20 + 0xa47c98) - eax_52
        result = *(ecx_20 + 0xa47c90)
    else
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(*(arg1 + 0xdc) - *(arg1 + 0xd4))
        int32_t edi_2 = (eax_3 - edx_1) s>> 1
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(*(ecx * 0x2e60 + esi_1 + 0x218))
        int32_t eax_10 = ((eax_7 - edx_2) s>> 1) - edi_2
        int32_t eax_16
        int32_t edx_5
        edx_5:eax_16 = sx.q(
            *(mods.dp.d(sx.q(*(arg1 + 0x118) + ecx - 1), *(arg1 + 0x108)) * 0x2e60 + esi_1 + 0x218))
        int32_t eax_19 = *(arg1 + 0x148)
        int32_t ecx_4 = *(arg1 + 0x13c) - ((eax_16 - edx_5) s>> 1) - edi_2
        
        if (*(arg1 + 0x118) == 1)
            ecx_4 = eax_10
        
        if (eax_19 s< eax_10)
            eax_19 = eax_10
        else if (eax_19 s> ecx_4)
            eax_19 = ecx_4
        
        *(arg1 + 0x148) = eax_19
        int32_t esi_2 = *(data_bac510 + &data_a47c8c)
        int32_t eax_21 = sub_5ef850(arg1 + 0x418, 0)
        int32_t edx_7 = *(data_bac510 + 0xa47c98) - eax_21
        
        if (eax_10 != ecx_4)
            esi_2 = divs.dp.d(sx.q((*(arg1 + 0x148) - eax_10) * (esi_2 - edx_7)), ecx_4 - eax_10)
                + edx_7
        
        *(arg1 + 0x14c) = esi_2
        int32_t eax_27 = sub_5ef850(arg1 + 0x418, 0)
        void* ecx_10 = data_bac510
        result_1 = *(ecx_10 + 0xa47c98) - eax_27
        result = *(ecx_10 + &data_a47c8c)
    
    int32_t result_2 = *(arg1 + 0x14c)
    
    if (result_2 s>= result)
        result = result_2
        
        if (result_2 s> result_1)
            result = result_1
    
    *(arg1 + 0x14c) = result

return result
