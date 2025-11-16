// 函数: sub_71d040
// 地址: 0x71d040
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = *(arg1 + 0x44)
void* ebx = *(arg1 + 0x3c)
int32_t ecx = *(arg1 + 0x24)
*(arg1 + 4) = 0
void* eax = ebx + edx

if (ecx u< eax)
    void* eax_1 = eax - ecx
    *(arg1 + 4) = eax_1
    eax_1.b = eax_1 u<= 0
    return eax_1

sub_748840(*(arg1 + 0x20) + ebx, arg1 + 0x48, edx)
*(arg1 + 0x3c) += *(arg1 + 0x44)
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 1
*(arg1 + 0x48) = 0
int32_t eax_4
eax_4.b = *(arg1 + 4) u<= 0
return eax_4
