// 函数: sub_5d9030
// 地址: 0x5d9030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t result = (*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0

if (result s> 0)
    int32_t esi_2 = 0
    
    do
        esi_2 += 0x1c0
        ebx += 1
        *(esi_2 + *(arg1 + 0x228) - 0x18) = 0
        result = (*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0
    while (ebx s< result)

return result
