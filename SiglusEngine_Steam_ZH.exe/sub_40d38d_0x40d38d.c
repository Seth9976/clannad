// 函数: sub_40d38d
// 地址: 0x40d38d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 0x24c)
int32_t edi
int32_t var_20 = edi
int32_t* edi_1 = arg2
int32_t eax_1 = edi_1 * 6
int32_t edx_2 = arg3 * 6
void* esi_2 = *(arg1 + 0x250)
int16_t* esi_3 = esi_2 + edx_2
int16_t* edx_3 = esi + eax_1
void* eax_4 = esi + edx_2 - edx_3
void* eax_6 = esi_3 - edx_3
int16_t* eax_8 = eax_1 + esi_2 - edx_3
int16_t* var_8 = esi_3
int32_t i_1 = 3
int16_t* result
int32_t i

do
    result = eax_4 + edx_3
    esi_3.w = *result
    arg2.w = esi_3.w
    esi_3.w = *edx_3
    *result = esi_3.w
    result.w = arg2.w
    *edx_3 = result.w
    
    if ((*(arg1 + 0x218) & 1) != 0)
        result = eax_6 + edx_3
        esi_3.w = *result
        arg2.w = esi_3.w
        int16_t* esi_4
        esi_4.w = *(eax_8 + edx_3)
        *result = esi_4.w
        result.w = arg2.w
        *(eax_8 + edx_3) = result.w
    
    edx_3 = &edx_3[1]
    i = i_1
    i_1 -= 1
while (i != 1)

if ((*(arg1 + 0x218) & 4) != 0)
    int32_t edx_5 = *(arg1 + 0x254)
    int32_t* esi_5 = edx_5 + (arg3 << 2)
    int16_t* esi_6 = *esi_5
    *esi_5 = *(edx_5 + (edi_1 << 2))
    result = *(arg1 + 0x254)
    *(result + (edi_1 << 2)) = esi_6

if ((*(arg1 + 0x218) & 8) != 0)
    int32_t ecx = *(arg1 + 0x258)
    int16_t* edx_8 = ecx + (arg3 << 1)
    int16_t* ebx
    ebx.w = *edx_8
    int16_t* esi_8 = edi_1 * 2
    ecx.w = *(esi_8 + ecx)
    *edx_8 = ecx.w
    result = *(arg1 + 0x258)
    *(esi_8 + result) = ebx.w

return result
