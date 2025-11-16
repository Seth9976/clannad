// 函数: sub_40d78b
// 地址: 0x40d78b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 0x24c)
int32_t edi
int32_t var_20 = edi
int32_t eax_1 = arg2 * 0xc
int32_t edx_2 = arg3 * 0xc
int32_t esi_2 = *(arg1 + 0x250)
int32_t esi_3 = esi_2 + edx_2
int32_t* edx_3 = esi + eax_1
void* eax_4 = esi + edx_2 - edx_3
void* eax_6 = esi_3 - edx_3
int32_t* eax_8 = eax_1 + esi_2 - edx_3
int32_t var_8 = esi_3
int32_t i_1 = 3
int32_t* result
int32_t i

do
    int32_t* eax_10 = eax_4 + edx_3
    int32_t* result_1 = *eax_10
    *eax_10 = *edx_3
    result = result_1
    *edx_3 = result
    
    if ((*(arg1 + 0x218) & 1) != 0)
        void* eax_12 = eax_6 + edx_3
        int32_t* result_2 = *eax_12
        *eax_12 = *(eax_8 + edx_3)
        result = result_2
        *(eax_8 + edx_3) = result
    
    edx_3 = &edx_3[1]
    i = i_1
    i_1 -= 1
while (i != 1)

if ((*(arg1 + 0x218) & 4) != 0)
    int32_t edx_4 = *(arg1 + 0x254)
    int32_t* esi_8 = edx_4 + (arg3 << 2)
    int32_t* esi_9 = *esi_8
    *esi_8 = *(edx_4 + (arg2 << 2))
    result = *(arg1 + 0x254)
    result[arg2] = esi_9

if ((*(arg1 + 0x218) & 8) != 0)
    int32_t ecx = *(arg1 + 0x258)
    int16_t* edx_7 = ecx + (arg3 << 1)
    int32_t* ebx
    ebx.w = *edx_7
    int16_t* esi_11 = arg2 * 2
    ecx.w = *(esi_11 + ecx)
    *edx_7 = ecx.w
    result = *(arg1 + 0x258)
    *(esi_11 + result) = ebx.w

return result
