// 函数: sub_40d883
// 地址: 0x40d883
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0x18)
int32_t result = arg2 * 0xc
int32_t edi
int32_t var_c = edi

if (*(edx + result + 4) == 0xffffffff)
    void* edx_3 = *(arg1 + 0x18) + result
    int32_t edx_4 = *(edx_3 + 8)
    *(arg1 + (zx.d(*(edx_3 + 1)) << 2) + 8) = edx_4
    
    if (edx_4 != 0xffffffff)
        *(*(arg1 + 0x18) + edx_4 * 0xc + 4) = 0xffffffff
else
    int32_t edx_1 = *(edx + result + 4)
    int32_t esi = *(edx + result + 8)
    *(edx + edx_1 * 0xc + 8) = esi
    
    if (esi != 0xffffffff)
        *(*(arg1 + 0x18) + esi * 0xc + 4) = edx_1

*(*(arg1 + 0x18) + result + 8) = 0xffffffff
*(*(arg1 + 0x18) + result + 4) = 0xffffffff
return result
