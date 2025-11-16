// 函数: sub_5de490
// 地址: 0x5de490
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = *(arg1 + 0x188)
int32_t result = (*(arg1 + 0x1b0) - *(arg1 + 0x1ac)) s/ 0x3b4

if (ebx s< result)
    int32_t esi_2 = ebx * 0x3b4
    
    do
        esi_2 += 0x3b4
        ebx += 1
        *(*(arg1 + 0x1ac) + esi_2 - 0x394) = 1
        *(arg1 + 0x188) += 1
        result = (*(arg1 + 0x1b0) - *(arg1 + 0x1ac)) s/ 0x3b4
    while (ebx s< result)

return result
