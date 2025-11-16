// 函数: sub_40d2dc
// 地址: 0x40d2dc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t eax_1 = *(arg1 + 0x238) + 3
int32_t edi
int32_t var_14 = edi
__chkstk(eax_1 & 0xfffffffc)
int32_t ecx = *(arg1 + 0x238)
int32_t esi_2 = ecx * arg3 + arg4
int32_t eax_5 = ecx * arg2 + arg4
int32_t* var_8_1 = &var_14
int32_t esi_3
int32_t edi_1
edi_1, esi_3 = __builtin_memcpy(&var_14, esi_2, ecx u>> 2 << 2)
__builtin_memcpy(edi_1, esi_3, ecx & 3)
int32_t ecx_4 = *(arg1 + 0x238)
int32_t esi_5
int32_t edi_3
edi_3, esi_5 = __builtin_memcpy(esi_2, eax_5, ecx_4 u>> 2 << 2)
__builtin_memcpy(edi_3, esi_5, ecx_4 & 3)
int32_t result_1 = *(arg1 + 0x238)
int32_t result = result_1
int32_t esi_6
int32_t edi_5
edi_5, esi_6 = __builtin_memcpy(eax_5, &var_14, result_1 u>> 2 << 2)
__builtin_memcpy(edi_5, esi_6, result & 3)

if ((*(arg1 + 0x218) & 2) != 0)
    int32_t ecx_11 = *(arg1 + 0x244)
    int16_t* edx_3 = ecx_11 + (arg3 << 1)
    int16_t edi_6 = *edx_3
    int16_t* esi_8 = arg2 * 2
    ecx_11.w = *(esi_8 + ecx_11)
    *edx_3 = ecx_11.w
    result = *(arg1 + 0x244)
    *(esi_8 + result) = edi_6

return result
