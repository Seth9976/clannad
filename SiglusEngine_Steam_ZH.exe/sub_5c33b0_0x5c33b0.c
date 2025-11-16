// 函数: sub_5c33b0
// 地址: 0x5c33b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0xa4)
int32_t* result = nullptr

if (edx == *(arg1 + 0xa8))
    edx = 0

int32_t edi_2 = (arg4 - arg3) << 2

if (edi_2 s> 0)
    int32_t ecx = *arg2
    
    if (ecx == arg2[1])
        ecx = 0
    
    result = sub_748840(edx + (arg3 << 2), arg2[3] + ecx, edi_2)
    arg2[3] += edi_2

return result
