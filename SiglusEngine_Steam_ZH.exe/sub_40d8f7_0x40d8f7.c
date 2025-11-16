// 函数: sub_40d8f7
// 地址: 0x40d8f7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2 * 0xc
int32_t edi
int32_t var_10 = edi
void* edi_1 = *(arg1 + 0x18) + result
void* ebx = arg1 + (zx.d(*(edi_1 + 1)) << 2) + 8
int32_t edx_2 = *ebx
*(edi_1 + 8) = edx_2

if (edx_2 != 0xffffffff)
    *(*(arg1 + 0x18) + edx_2 * 0xc + 4) = arg2

*ebx = arg2
*(*(arg1 + 0x18) + result + 4) = 0xffffffff
return result
