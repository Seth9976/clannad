// 函数: sub_40d5af
// 地址: 0x40d5af
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx.w = arg2
uint32_t result = zx.d(ebx.w) * 6
void* edx_1 = *(arg1 + 0x10) + result
int32_t edi
int32_t var_10 = edi
void* edi_1 = arg1 + (zx.d(*(edx_1 + 1)) << 1) + 8
uint32_t esi
esi.w = *edi_1
*(edx_1 + 4) = esi.w

if (esi.w != 0xffff)
    *(*(arg1 + 0x10) + zx.d(esi.w) * 6 + 2) = ebx.w

*edi_1 = ebx.w
*(*(arg1 + 0x10) + result + 2) = 0xffff
return result
