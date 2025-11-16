// 函数: sub_6f5460
// 地址: 0x6f5460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = *(arg1 + 8)

if (*(arg1 + 0x10) s> result)
    int32_t* ecx_2 = *arg2 * result + arg2[1]
    sub_748840(ecx_2, ecx_2 - *arg2, *(arg1 + 4) << 2)

int32_t ecx_3 = *(arg1 + 4)

if (*(arg1 + 0xc) s> ecx_3)
    int32_t i = 0
    int32_t** ecx_4 = arg2[1] + (ecx_3 << 2)
    int32_t** edx_1 = &ecx_4[-1]
    
    if (*(arg1 + 8) s> 0)
        do
            i += 1
            *ecx_4 = *edx_1
            ecx_4 += *arg2
            edx_1 += *arg2
        while (i s< *(arg1 + 8))
    
    if (*(arg1 + 0x10) s> *(arg1 + 8))
        *ecx_4 = *edx_1

result.b = 1
return result
