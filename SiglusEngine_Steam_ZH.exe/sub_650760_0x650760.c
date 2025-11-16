// 函数: sub_650760
// 地址: 0x650760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = data_bac504
int32_t var_e = 0
*(ecx + 0x10) = 0.q
*(ecx + 0x18) = 0
int32_t var_a = 0
void* eax = ecx + 0x20
*(ecx + 0xb8) = 0xffffffff
*(ecx + 0x1c) = 0
bool cond:0 = *(eax + 0x14) u< 8
*(eax + 0x10) = 0

if (not(cond:0))
    eax = *eax

*eax = 0
void* eax_1 = ecx + 0x38
bool cond:1 = *(eax_1 + 0x14) u< 8
*(eax_1 + 0x10) = 0

if (not(cond:1))
    eax_1 = *eax_1

*eax_1 = 0
void* eax_2 = ecx + 0x50
bool cond:2 = *(eax_2 + 0x14) u< 8
*(eax_2 + 0x10) = 0

if (not(cond:2))
    eax_2 = *eax_2

*eax_2 = 0
void* eax_3 = ecx + 0x68
bool cond:3 = *(eax_3 + 0x14) u< 8
*(eax_3 + 0x10) = 0

if (not(cond:3))
    eax_3 = *eax_3

*eax_3 = 0
void* eax_4 = ecx + 0x80
bool cond:4 = *(eax_4 + 0x14) u< 8
*(eax_4 + 0x10) = 0

if (not(cond:4))
    eax_4 = *eax_4

*eax_4 = 0
*(ecx + 0x9c) = *(ecx + 0x98)
*(ecx + 0xa4) = 0
int32_t result = *(ecx + 0xa8)
*(ecx + 0xac) = result
*(ecx + 0xb4) = 0
return result
