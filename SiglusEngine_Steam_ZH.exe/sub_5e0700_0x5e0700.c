// 函数: sub_5e0700
// 地址: 0x5e0700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t result = (*(arg1 + 0x80) - *(arg1 + 0x7c)) s/ 0x8c

if (result s> 0)
    int32_t esi_2 = 0
    
    do
        sub_5e1b10(*(arg1 + 0x7c) + esi_2, arg2)
        ebx += 1
        esi_2 += 0x8c
        result = (*(arg1 + 0x80) - *(arg1 + 0x7c)) s/ 0x8c
    while (ebx s< result)

return result
