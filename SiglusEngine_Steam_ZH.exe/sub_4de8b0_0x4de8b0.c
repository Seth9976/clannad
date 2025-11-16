// 函数: sub_4de8b0
// 地址: 0x4de8b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx_1 = *(arg1 + 0x1bc)
void* ebx = *(arg1 + 0x1c0)
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(ebx + 0x10))
*(ecx_1 + 0x18) += (eax_1 + (edx & 7)) s>> 3
*(ebx + 0x10) = 0
int32_t result = (*(ecx_1 + 8))(arg1)

if (result == 0)
    return result

int32_t ecx = *(arg1 + 0x14c)

if (ecx s> 0)
    __builtin_memset(ebx + 0x14, 0, ecx << 2)

*(ebx + 0x24) = *(arg1 + 0x118)

if (*(arg1 + 0x1a4) == 0)
    *(ebx + 8) = 0

return 1
