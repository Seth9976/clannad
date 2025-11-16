// 函数: sub_5dbf60
// 地址: 0x5dbf60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x174) = 0
*(arg1 + 0x178) = 0
__builtin_memset(arg1 + 0x180, 0, 0x14)
*(arg1 + 0x1a8) = 0
void* eax = arg1 + 0x134
*(arg1 + 0x164) = 0xffffffff
*(arg1 + 0x168) = 0xffffffff
*(arg1 + 0x16c) = 0xffffffff
*(arg1 + 0x170) = 0
*(arg1 + 0x17c) = 0xffffffff
*(arg1 + 0x194) = 0xffffffff
*(arg1 + 0x198) = 0xffffffff
*(arg1 + 0x19c) = 0xffffffff
*(arg1 + 0x1a0) = 0xffffffff
*(arg1 + 0x1a4) = 0x100
bool cond:0 = *(eax + 0x14) u< 8
*(eax + 0x10) = 0

if (not(cond:0))
    eax = *eax

*eax = 0
void* eax_1 = arg1 + 0x14c
bool cond:1 = *(eax_1 + 0x14) u< 8
*(eax_1 + 0x10) = 0

if (not(cond:1))
    eax_1 = *eax_1

int32_t var_8
int32_t var_18 = var_8
*eax_1 = 0
int32_t var_1c = 0
sub_551590(*(arg1 + 0x1ac), *(arg1 + 0x1b0))
*(arg1 + 0x1b0) = *(arg1 + 0x1ac)
sub_563c60(*(*(arg1 + 0x1b8) + 4))
void* eax_4 = *(arg1 + 0x1b8)
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *(arg1 + 0x1b8)
*eax_5 = eax_5
void* eax_6 = *(arg1 + 0x1b8)
*(eax_6 + 8) = eax_6
void* eax_7 = data_bac510
*(arg1 + 0x1bc) = 0

if (*(eax_7 + 0x10bd8) != 1)
    int32_t ecx_5 = *(arg1 + 0xd8)
    int32_t edx_4 = *(arg1 + 0x18)
    *(arg1 + 0x12c) = (ecx_5 - 1) * *(arg1 + 0x1c) + ecx_5 * edx_4
    int32_t eax_16 = *(arg1 + 0xdc)
    *(arg1 + 0x130) = (eax_16 - 1) * *(arg1 + 0x20) + edx_4 * eax_16
    return eax_16

int32_t ecx_2 = *(arg1 + 0xdc)
int32_t ecx_3 = *(arg1 + 0xd8)
int32_t eax_11 = (ecx_3 - 1) * *(arg1 + 0x1c)
int32_t ecx_4 = ecx_3 * *(arg1 + 0x18)
*(arg1 + 0x12c) = (ecx_2 - 1) * *(arg1 + 0x20) + *(arg1 + 0x18) * ecx_2
int32_t eax_12 = eax_11 + ecx_4
*(arg1 + 0x130) = eax_12
return eax_12
