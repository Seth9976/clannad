// 函数: sub_662840
// 地址: 0x662840
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** edi = arg2
void* ebx_1 = edi[4] * 2

if (edi[5] u>= 8)
    edi = *edi

if (ebx_1 s> 0)
    sub_5979b0(arg1, arg1[3] + ebx_1)
    int32_t ecx = *arg1
    
    if (ecx == arg1[1])
        ecx = 0
    
    sub_748840(arg1[3] + ecx, edi, ebx_1)
    arg1[3] += ebx_1

sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_2 = *arg1

if (ecx_2 == arg1[1])
    ecx_2 = nullptr

int32_t result = arg1[3]
*(ecx_2 + result) = 0
arg1[3] += 2
return result
