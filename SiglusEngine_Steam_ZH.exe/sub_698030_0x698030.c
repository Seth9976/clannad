// 函数: sub_698030
// 地址: 0x698030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = data_bac45c
int32_t edi = arg3
int16_t* var_18 = arg1
int32_t var_c = 0
int32_t edx = *(*(esi + 0x10) + 0x20)
int32_t eax_1
int32_t ecx

if (edi s>= edx)
    void* ecx_2 = arg2 * 0x54 + *(esi + 0x54)
    edi -= edx
    eax_1 = *(ecx_2 + 0x34)
    ecx = *(ecx_2 + 0x38)
else
    eax_1 = *(esi + 0x20)
    ecx = *(esi + 0x24)

int32_t edx_1 = *(eax_1 + (edi << 3))
int32_t esi_1 = ecx + ((*(eax_1 + (edi << 3) + 4) + edx_1) << 1)
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0
sub_5b2590(arg1, ecx + (edx_1 << 1), esi_1)
return arg1
