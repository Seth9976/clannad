// 函数: sub_72bab0
// 地址: 0x72bab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* (** eax_2)(void* arg1) = (**(arg1 + 4))(arg1, 0, 0xa8)
*(arg1 + 0x1ac) = eax_2
int32_t i_1 = 0x10
*eax_2 = sub_72ba70
void* ecx = &eax_2[0x18]
eax_2[1] = sub_72b5d0
eax_2[2] = sub_72b8e0
eax_2[6] = sub_72b340
eax_2[0x17] = 0
int32_t i

do
    *(ecx - 0x44) = sub_72b340
    ecx += 4
    *(ecx - 4) = 0
    i = i_1
    i_1 -= 1
while (i != 1)
eax_2[7] = sub_72b1d0
eax_2[0x15] = sub_72b1d0
void* result = *(arg1 + 0x1ac)
*(arg1 + 0xc4) = 0
*(arg1 + 0x7c) = 0
*(arg1 + 0x194) = 0
*(result + 0xc) = 0
*(result + 0x14) = 0
*(result + 0xa0) = 0
return result
