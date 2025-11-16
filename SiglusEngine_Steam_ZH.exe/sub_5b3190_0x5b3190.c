// 函数: sub_5b3190
// 地址: 0x5b3190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t ebx = 0
int32_t result = (*(arg1 + 0x148) - *(arg1 + 0x144)) s/ 0x15fc

if (result s> 0)
    int32_t esi_2 = 0
    
    do
        sub_5eb4b0(*(arg1 + 0x144) + esi_2, arg2, arg3, 0)
        ebx += 1
        esi_2 += 0x15fc
        result = (*(arg1 + 0x148) - *(arg1 + 0x144)) s/ 0x15fc
    while (ebx s< result)

return result
