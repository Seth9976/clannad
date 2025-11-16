// 函数: sub_464df0
// 地址: 0x464df0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_4 = *arg1
*(eax_4 + 0x14) = 0x66
(*(eax_4 + 4))(arg1, 1)

if (*(arg1[0x6f] + 0xc) != 0)
    void* eax_1 = *arg1
    *(eax_1 + 0x14) = 0x3d
    (*eax_1)(arg1)

void* eax_2 = &arg1[0x3e]
int32_t i_1 = 0x10
int32_t i

do
    *(eax_2 - 0x10) = 0
    *eax_2 = 1
    *(eax_2 + 0x10) = 5
    eax_2 += 1
    i = i_1
    i_1 -= 1
while (i != 1)
void* ecx_1 = arg1[0x6f]
arg1[0x46] = 0
arg1[0xa] = 0
arg1[0x4c] = 0
arg1[0x47] = 0
*(arg1 + 0x122) = 0
arg1[0x4a] = 0
arg1[0x4b].b = 0
arg1[0x48].b = 1
*(arg1 + 0x121) = 1
arg1[0x49].w = 1
*(arg1 + 0x126) = 1
*(ecx_1 + 0xc) = 1
return 1
