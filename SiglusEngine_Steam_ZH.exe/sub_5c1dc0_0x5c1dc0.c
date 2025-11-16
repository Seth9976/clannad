// 函数: sub_5c1dc0
// 地址: 0x5c1dc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0xa4)

if (edx == *(arg1 + 0xa8))
    edx = 0

int32_t* result = arg4 - arg3
void* edi = result * 0x2c

if (edi s> 0)
    int32_t ecx = *arg2
    
    if (ecx == arg2[1])
        ecx = 0
    
    result = sub_748840(arg3 * 0x2c + edx, arg2[3] + ecx, edi)
    arg2[3] += edi

return result
