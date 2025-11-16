// 函数: sub_49881e
// 地址: 0x49881e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_7 = *(arg1 + 0x10)
void* esi = *(arg1 + 0x1c)
int32_t edx = *(esi + 0x14)

if (edx u> ecx_7)
    edx = ecx_7

if (edx == 0)
    return 

int32_t esi_2
int32_t edi_2
edi_2, esi_2 = __builtin_memcpy(*(arg1 + 0xc), *(esi + 0x10), edx u>> 2 << 2)
__builtin_memcpy(edi_2, esi_2, edx & 3)
void* ecx_4 = *(arg1 + 0x1c)
*(arg1 + 0xc) += edx
*(ecx_4 + 0x10) += edx
*(arg1 + 0x14) += edx
*(arg1 + 0x10) -= edx
void* ecx_5 = *(arg1 + 0x1c)
*(ecx_5 + 0x14) -= edx
arg1 = *(arg1 + 0x1c)

if (*(arg1 + 0x14) == 0)
    *(arg1 + 0x10) = *(arg1 + 8)
