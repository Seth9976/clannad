// 函数: sub_5f0c90
// 地址: 0x5f0c90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = *(arg1 + 0xa8) - *(arg1 + 0xa4)
int32_t result
int32_t edx
edx:result = muls.dp.d(0xba506bb7, esi_1)
int32_t i_1 = esi_1 s/ 0x15fc

if (i_1 s> 0)
    int32_t esi_2 = 0
    int32_t i
    
    do
        result = sub_5e4fc0(*(arg1 + 0xa4) + esi_2)
        esi_2 += 0x15fc
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
