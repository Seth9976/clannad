// 函数: sub_71cfd0
// 地址: 0x71cfd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = *(arg1 + 0x40) != 8
*(arg1 + 4) = 0

if (cond:0)
    goto label_71cff6

void* edx_1 = *(arg1 + 0x44)
void* ebx_1 = *(arg1 + 0x3c)
int32_t ecx = *(arg1 + 0x24)
void* eax = ebx_1 + edx_1
void* result

if (ecx u>= eax)
    sub_748840(*(arg1 + 0x20) + ebx_1, arg1 + 0x48, edx_1)
    *(arg1 + 0x3c) += *(arg1 + 0x44)
    *(arg1 + 0x40) = 0
    *(arg1 + 0x44) = 1
    *(arg1 + 0x48) = 0
else
    *(arg1 + 4) = eax - ecx
label_71cff6:
    
    if (*(arg1 + 4) u> 0)
        result.b = 0
        return result

result.b = 1
return result
