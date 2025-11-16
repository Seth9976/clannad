// 函数: sub_650820
// 地址: 0x650820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = data_bac504
int32_t var_e = 0
*(ecx + 0xf4) = 0.q
*(ecx + 0xfc) = 0
int32_t var_a = 0
void* eax = ecx + 0x104
*(ecx + 0x100) = 0
bool cond:0 = *(eax + 0x14) u< 8
*(eax + 0x10) = 0

if (not(cond:0))
    eax = *eax

*eax = 0
void* eax_1 = ecx + 0x11c
bool cond:1 = *(eax_1 + 0x14) u< 8
*(eax_1 + 0x10) = 0

if (not(cond:1))
    eax_1 = *eax_1

*eax_1 = 0
void* eax_2 = ecx + 0x134
bool cond:2 = *(eax_2 + 0x14) u< 8
*(eax_2 + 0x10) = 0

if (not(cond:2))
    eax_2 = *eax_2

*eax_2 = 0
void* eax_3 = ecx + 0x14c
bool cond:3 = *(eax_3 + 0x14) u< 8
*(eax_3 + 0x10) = 0

if (not(cond:3))
    eax_3 = *eax_3

*eax_3 = 0
void* eax_4 = ecx + 0x164
bool cond:4 = *(eax_4 + 0x14) u< 8
*(eax_4 + 0x10) = 0

if (not(cond:4))
    eax_4 = *eax_4

*eax_4 = 0
*(ecx + 0x180) = *(ecx + 0x17c)
*(ecx + 0x188) = 0
int32_t result = *(ecx + 0x18c)
*(ecx + 0x190) = result
*(ecx + 0x198) = 0
return result
