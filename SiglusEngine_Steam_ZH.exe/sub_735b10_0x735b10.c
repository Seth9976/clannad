// 函数: sub_735b10
// 地址: 0x735b10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 0x1a4)

if (*(esi + 0x18) == 0)
    *(esi + 0xc) = (*(*(arg1 + 4) + 0x1c))(arg1, *(esi + 8), *(esi + 0x14), *(esi + 0x10), 1)

void* eax_4 = *(esi + 0x18)
(*(*(arg1 + 0x1b8) + 4))(arg1, arg2, arg3, arg4, *(esi + 0xc), esi + 0x18, *(esi + 0x10))
int32_t eax_7 = *(esi + 0x18)

if (eax_7 u> eax_4)
    void* eax_8 = eax_7 - eax_4
    (*(*(arg1 + 0x1c0) + 4))(arg1, *(esi + 0xc) + (eax_4 << 2), 0, eax_8)
    *arg5 += eax_8

int32_t result = *(esi + 0x10)

if (*(esi + 0x18) u>= result)
    *(esi + 0x14) += result
    *(esi + 0x18) = 0

return result
