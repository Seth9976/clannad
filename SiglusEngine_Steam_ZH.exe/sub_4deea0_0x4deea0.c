// 函数: sub_4deea0
// 地址: 0x4deea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* entry_ebx
void* ecx_1 = *(entry_ebx + 0x1bc)
void* esi = *(entry_ebx + 0x1c0)
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(esi + 0x10))
*(ecx_1 + 0x18) += (eax_1 + (edx & 7)) s>> 3
*(esi + 0x10) = 0
int32_t result = (*(ecx_1 + 8))(entry_ebx)

if (result == 0)
    return result

int32_t ecx = *(entry_ebx + 0x14c)

if (ecx s> 0)
    __builtin_memset(esi + 0x18, 0, ecx << 2)

*(esi + 0x28) = *(entry_ebx + 0x118)
bool cond:0 = *(entry_ebx + 0x1a4) != 0
*(esi + 0x14) = 0

if (not(cond:0))
    *(esi + 8) = 0

return 1
