// 函数: sub_6ece80
// 地址: 0x6ece80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg1
int32_t i = 6
int32_t var_c = edi
int32_t result

do
    int32_t ebx_3 = (i - 1) s/ 3
    int32_t esi_2 = (i - 1) s% 3
    
    if (i - 1 s> 0)
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = sx.q(i - 2)
        int32_t temp0_1 = divs.dp.d(edx_2:eax_4, 3)
        int32_t temp1_1 = mods.dp.d(edx_2:eax_4, 3)
        edi = var_c
        int32_t* edx_4 = edi + ((ebx_3 + 9) * 3 + esi_2) * 0xc
        
        if (*edx_4 == *(edi + ((temp0_1 + 9) * 3 + temp1_1) * 0xc))
            *edx_4 = 0
        
        void* edx_5 = edi + (ebx_3 * 3 + esi_2) * 0xc
        
        if (*(edx_5 + 0x148) == *(edi + (temp0_1 * 3 + temp1_1) * 0xc + 0x148))
            *(edx_5 + 0x148) = 0
    
    if (ebx_3 s> 0)
        int32_t* edx_6 = edi + (esi_2 + 0x1e) * 0xc
        
        if (*edx_6 == *(edi + esi_2 * 0xc + 0x144))
            *edx_6 = 0
        
        void* ecx_10 = edi + esi_2 * 0xc
        
        if (*(ecx_10 + 0x16c) == *(ecx_10 + 0x148))
            *(ecx_10 + 0x16c) = 0
    
    _free(*(edi + ((ebx_3 + 9) * 3 + esi_2) * 0xc))
    result = _free(*(edi + (ebx_3 * 3 + esi_2) * 0xc + 0x148))
    i -= 1
while (i s> 0)

return result
