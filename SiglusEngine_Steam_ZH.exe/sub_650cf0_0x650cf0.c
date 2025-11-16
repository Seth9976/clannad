// 函数: sub_650cf0
// 地址: 0x650cf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s< 0)
    return 

void* esi_1 = data_bac504
int32_t eax_1
int32_t edx_3
edx_3:eax_1 = muls.dp.d(0x30c30c31, *(esi_1 + 0x1a0) - *(esi_1 + 0x19c))
int32_t edx_4 = edx_3 s>> 5

if ((edx_4 u>> 0x1f) + edx_4 s<= arg1)
    return 

int32_t edx_5 = arg1 * 0xa8
int64_t* ecx = *(esi_1 + 0x19c)
int32_t var_e_1 = 0
int32_t var_a_1 = 0
ecx[arg1 * 0x15] = 0.q
ecx[arg1 * 0x15 + 1].d = 0
*(&ecx[arg1 * 0x15] + 0xc) = 0
void** eax_6 = *(esi_1 + 0x19c) + 0x10 + edx_5
bool cond:0_1 = eax_6[5] u< 8
eax_6[4] = 0

if (not(cond:0_1))
    eax_6 = *eax_6

*eax_6 = nullptr
void** eax_9 = *(esi_1 + 0x19c) + 0x28 + edx_5
bool cond:1_1 = eax_9[5] u< 8
eax_9[4] = 0

if (not(cond:1_1))
    eax_9 = *eax_9

*eax_9 = nullptr
void** eax_12 = *(esi_1 + 0x19c) + 0x40 + edx_5
bool cond:2_1 = eax_12[5] u< 8
eax_12[4] = 0

if (not(cond:2_1))
    eax_12 = *eax_12

*eax_12 = nullptr
void** eax_15 = *(esi_1 + 0x19c) + 0x58 + edx_5
bool cond:3_1 = eax_15[5] u< 8
eax_15[4] = 0

if (not(cond:3_1))
    eax_15 = *eax_15

*eax_15 = nullptr
void** eax_18 = *(esi_1 + 0x19c) + 0x70 + edx_5
bool cond:4_1 = eax_18[5] u< 8
eax_18[4] = 0

if (not(cond:4_1))
    eax_18 = *eax_18

*eax_18 = nullptr
int32_t ecx_1 = *(esi_1 + 0x19c)
*(ecx_1 + edx_5 + 0x8c) = *(ecx_1 + edx_5 + 0x88)
*(ecx_1 + edx_5 + 0x94) = 0
int32_t ecx_2 = *(esi_1 + 0x19c)
*(ecx_2 + edx_5 + 0x9c) = *(ecx_2 + edx_5 + 0x98)
*(ecx_2 + edx_5 + 0xa4) = 0
