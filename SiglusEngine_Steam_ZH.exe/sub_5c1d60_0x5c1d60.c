// 函数: sub_5c1d60
// 地址: 0x5c1d60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = *(arg1 + 0xa4)

if (edi == *(arg1 + 0xa8))
    edi = 0

int32_t* result = arg4 - arg3
void* ebx = result * 0x2c

if (ebx s> 0)
    sub_5979b0(arg2, arg2[3] + ebx)
    int32_t ecx_1 = *arg2
    
    if (ecx_1 == arg2[1])
        ecx_1 = 0
    
    result = sub_748840(arg2[3] + ecx_1, arg3 * 0x2c + edi, ebx)
    arg2[3] += ebx

return result
