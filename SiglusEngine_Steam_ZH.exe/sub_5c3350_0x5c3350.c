// 函数: sub_5c3350
// 地址: 0x5c3350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = *(arg1 + 0xa4)
int32_t* result = nullptr

if (ebx == *(arg1 + 0xa8))
    ebx = 0

int32_t edi_2 = (arg4 - arg3) << 2

if (edi_2 s> 0)
    sub_5979b0(arg2, arg2[3] + edi_2)
    int32_t ecx_1 = *arg2
    
    if (ecx_1 == arg2[1])
        ecx_1 = 0
    
    result = sub_748840(arg2[3] + ecx_1, ebx + (arg3 << 2), edi_2)
    arg2[3] += edi_2

return result
