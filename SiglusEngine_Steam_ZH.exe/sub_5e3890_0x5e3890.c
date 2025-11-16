// 函数: sub_5e3890
// 地址: 0x5e3890
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_6 = (*(arg1 + 0x304) - *(arg1 + 0x300)) s/ 0x15fc

if (i_6 s> 0)
    int32_t esi_2 = 0
    int32_t i_3 = i_6
    int32_t i
    
    do
        sub_5f3590(*(arg1 + 0x300) + esi_2, 0x80000000)
        esi_2 += 0x15fc
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t i_4 = (*(arg1 + 0x4c0) - *(arg1 + 0x4bc)) s/ 0x15fc

if (i_4 s> 0)
    int32_t esi_3 = 0
    int32_t i_1
    
    do
        sub_5f3590(*(arg1 + 0x4bc) + esi_3, 0x80000000)
        esi_3 += 0x15fc
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

int32_t ecx_7 = *(arg1 + 0x67c) - *(arg1 + 0x678)
int32_t result
int32_t edx_6
edx_6:result = muls.dp.d(0xba506bb7, ecx_7)
int32_t i_5 = ecx_7 s/ 0x15fc

if (i_5 s> 0)
    int32_t esi_4 = 0
    int32_t i_2
    
    do
        result = sub_5f3590(*(arg1 + 0x678) + esi_4, 0x80000000)
        esi_4 += 0x15fc
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

return result
