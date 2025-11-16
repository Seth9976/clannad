// 函数: sub_40d521
// 地址: 0x40d521
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0x10)
uint32_t result = zx.d(arg2) * 6
int32_t edi
int32_t var_10 = edi

if (*(edx + result + 2) == 0xffff)
    void* edx_3 = edx + result
    int32_t esi
    esi.w = zx.w(*(edx_3 + 1))
    edx_3.w = *(edx_3 + 4)
    *(arg1 + (zx.d(esi.w) << 1) + 8) = edx_3.w
    
    if (edx_3.w != 0xffff)
        *(*(arg1 + 0x10) + zx.d(edx_3.w) * 6 + 2) = 0xffff
else
    int32_t ebx
    ebx.w = *(edx + result + 2)
    int32_t edi_1
    edi_1.w = *(edx + result + 4)
    *(edx + zx.d(ebx.w) * 6 + 4) = edi_1.w
    
    if (edi_1.w != 0xffff)
        *(*(arg1 + 0x10) + zx.d(edi_1.w) * 6 + 2) = ebx.w

*(*(arg1 + 0x10) + result + 4) = 0xffff
*(*(arg1 + 0x10) + result + 2) = 0xffff
return result
