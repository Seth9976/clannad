// 函数: sub_5d4120
// 地址: 0x5d4120
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t ebx = *(arg1 + 0x11c)
int32_t esi = *(arg1 + 0x108)
int32_t edi = *(arg1 + 0x118)
int32_t eax_4 = data_bac510
*(arg1 + 0x140) = mods.dp.d(sx.q(edi - 1 + esi + ebx), esi)

if (*(eax_4 + 0x10bd8) != 1)
    int32_t edi_2 = edi - 1
    
    if (edi - 1 s>= 0)
        int32_t ebx_3 = ebx + edi_2
        int32_t temp4_1
        
        do
            int32_t temp1_2 = mods.dp.d(sx.q(ebx_3), esi)
            int32_t edx_8 = *(arg1 + 0x10c)
            int32_t eax_17 = temp1_2 * 0x2e60
            int32_t eax_20
            int32_t edx_9
            edx_9:eax_20 = sx.q(*(arg1 + 0xe0) - *(arg1 + 0xd8))
            eax_4 = (eax_20 - edx_9) s>> 1
            
            if (*(eax_17 + edx_8 + 0x218) + *(eax_17 + edx_8 + 0x214) + *(arg1 + 0x148) s>= eax_4)
                eax_4 = temp1_2
                *(arg1 + 0x140) = eax_4
            
            esi = *(arg1 + 0x108)
            ebx_3 -= 1
            temp4_1 = edi_2
            edi_2 -= 1
        while (temp4_1 - 1 s>= 0)
else
    int32_t edi_1 = edi - 1
    
    if (edi - 1 s>= 0)
        int32_t ebx_1 = ebx + edi_1
        int32_t eax_13
        int32_t temp5_1
        
        do
            int32_t temp1_1 = mods.dp.d(sx.q(ebx_1), esi)
            int32_t edx_4 = *(arg1 + 0x10c)
            int32_t eax_8 = temp1_1 * 0x2e60
            int32_t eax_11
            int32_t edx_5
            edx_5:eax_11 = sx.q(*(arg1 + 0xdc) - *(arg1 + 0xd4))
            eax_13 = (eax_11 - edx_5) s>> 1
            
            if (*(arg1 + 0xdc) - *(eax_8 + edx_4 + 0x218) - *(eax_8 + edx_4 + 0x214)
                    - *(arg1 + 0xd4) + *(arg1 + 0x148) s<= eax_13)
                eax_13 = temp1_1
                *(arg1 + 0x140) = eax_13
            
            esi = *(arg1 + 0x108)
            ebx_1 -= 1
            temp5_1 = edi_1
            edi_1 -= 1
        while (temp5_1 - 1 s>= 0)
        return eax_13

return eax_4
