// 函数: sub_5de220
// 地址: 0x5de220
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = *(arg1 + 0xf0)
int32_t result

if (*(data_bac510 + 0x10bd8) != 1)
    int32_t edx_2 = *(arg1 + 0xe4)
    
    if (*(arg1 + 0xe0) + edi s> *(arg1 + 0x12c) + *(arg1 + 0x18))
        edx_2 += *(arg1 + 0xf8) + edi
    
    if (arg3 != 0)
        edx_2 += *(arg1 + 0xf8) + edi
    
    if (edx_2 s< *(arg1 + 0x130) - arg2)
        result.b = 1
        return result
else
    int32_t ecx = *(arg1 + 0xe0)
    
    if (*(arg1 + 0xe4) + edi s> *(arg1 + 0x130) + *(arg1 + 0x18))
        ecx -= *(arg1 + 0xf8) + edi
    
    if (arg3 != 0)
        ecx -= *(arg1 + 0xf8) + edi
    
    if (ecx s> arg2 - *(arg1 + 0x12c))
        result.b = 1
        return result

result.b = 0
return result
