// 函数: sub_5d3f10
// 地址: 0x5d3f10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t result = *(arg1 + 0x118)

if (result s> 0)
    int32_t ecx = *(arg1 + 0x11c)
    int32_t esi_1 = *(arg1 + 0x10c)
    int32_t result_4
    int32_t result_1
    int32_t result_2
    int32_t edx_8
    int32_t edi_5
    
    if (*(data_bac510 + 0x10bd8) != 1)
        int32_t eax_24
        int32_t edx_9
        edx_9:eax_24 = sx.q(*(arg1 + 0xe0) - *(arg1 + 0xd8))
        int32_t edi_7 = (eax_24 - edx_9) s>> 1
        int32_t eax_28
        int32_t edx_10
        edx_10:eax_28 = sx.q(*(ecx * 0x2e60 + esi_1 + 0x218))
        result_2 = edi_7 - ((eax_28 - edx_10) s>> 1)
        int32_t eax_36
        int32_t edx_15
        edx_15:eax_36 = sx.q(
            *(mods.dp.d(sx.q(*(arg1 + 0x118) + ecx - 1), *(arg1 + 0x108)) * 0x2e60 + esi_1 + 0x218))
        result_1 = ((eax_36 - edx_15) s>> 1) - *(arg1 + 0x13c) + edi_7
        
        if (*(arg1 + 0x118) == 1)
            result_1 = result_2
        
        int32_t eax_38 = sub_5ef9c0(arg1 + 0x418, 0)
        void* ecx_10 = data_bac510
        int32_t edi_8 = *(arg1 + 0x14c)
        int32_t edx_17 = *(ecx_10 + 0xa47c98) - eax_38
        int32_t eax_39 = *(ecx_10 + 0xa47c90)
        
        if (edi_8 s>= eax_39)
            eax_39 = edi_8
            
            if (edi_8 s> edx_17)
                eax_39 = edx_17
        
        *(arg1 + 0x14c) = eax_39
        int32_t eax_40 = sub_5ef9c0(arg1 + 0x418, 0)
        void* ecx_12 = data_bac510
        edx_8 = *(ecx_12 + 0xa47c90)
        edi_5 = *(ecx_12 + 0xa47c98) - eax_40
        
        if (edx_8 != edi_5)
        label_5d40ef:
            result_4 = result_2
            result =
                divs.dp.d(sx.q((*(arg1 + 0x14c) - edx_8) * (result_1 - result_2)), edi_5 - edx_8)
                + result_4
        else
            result_4 = result_2
            result = result_1
    else
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(*(arg1 + 0xdc) - *(arg1 + 0xd4))
        int32_t edi_2 = (eax_3 - edx_1) s>> 1
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(*(ecx * 0x2e60 + esi_1 + 0x218))
        result_1 = ((eax_7 - edx_2) s>> 1) - edi_2
        int32_t eax_16
        int32_t edx_5
        edx_5:eax_16 = sx.q(
            *(mods.dp.d(sx.q(*(arg1 + 0x118) + ecx - 1), *(arg1 + 0x108)) * 0x2e60 + esi_1 + 0x218))
        int32_t result_3 = *(arg1 + 0x13c) - ((eax_16 - edx_5) s>> 1) - edi_2
        
        if (*(arg1 + 0x118) == 1)
            result_3 = result_1
        
        result_2 = result_3
        int32_t eax_19 = sub_5ef850(arg1 + 0x418, 0)
        void* ecx_5 = data_bac510
        int32_t edi_3 = *(arg1 + 0x14c)
        int32_t edx_7 = *(ecx_5 + 0xa47c98) - eax_19
        int32_t eax_20 = *(ecx_5 + &data_a47c8c)
        
        if (edi_3 s>= eax_20)
            eax_20 = edi_3
            
            if (edi_3 s> edx_7)
                eax_20 = edx_7
        
        *(arg1 + 0x14c) = eax_20
        int32_t eax_21 = sub_5ef850(arg1 + 0x418, 0)
        void* ecx_7 = data_bac510
        edx_8 = *(ecx_7 + &data_a47c8c)
        edi_5 = *(ecx_7 + 0xa47c98) - eax_21
        
        if (edx_8 != edi_5)
            goto label_5d40ef
        
        result_4 = result_2
        result = result_1
    *(arg1 + 0x148) = result
    
    if (result s>= result_1)
        result_1 = result
        
        if (result s> result_4)
            result_1 = result_4
    
    *(arg1 + 0x148) = result_1

return result
