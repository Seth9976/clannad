// 函数: sub_6242c0
// 地址: 0x6242c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x4b3e4) = *(arg1 + 0x4b3e0)

if (*(arg1 + 0x4a79c) != 0)
    int32_t eax
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x72c62a25, *(arg1 + 0x56b38) - *(arg1 + 0x56b34))
    int32_t edx_2 = edx_1 s>> 0xa
    int32_t i_2 = (edx_2 u>> 0x1f) + edx_2
    
    if (i_2 s> 0)
        int32_t edi_1 = 0
        int32_t i
        
        do
            sub_608c70(*(arg1 + 0x56b34) + edi_1)
            edi_1 += 0x8ec
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (*(arg1 + 0x630c4) != 0)
        int32_t eax_1
        int32_t edx_3
        edx_3:eax_1 = muls.dp.d(0x72c62a25, *(arg1 + 0x62f1c) - *(arg1 + 0x62f18))
        int32_t edx_4 = edx_3 s>> 0xa
        int32_t i_3 = (edx_4 u>> 0x1f) + edx_4
        
        if (i_3 s> 0)
            int32_t edi_2 = 0
            int32_t i_1
            
            do
                sub_608c70(*(arg1 + 0x62f18) + edi_2)
                edi_2 += 0x8ec
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    
    sub_624390(arg1)

void* result
result.b = 1
return result
