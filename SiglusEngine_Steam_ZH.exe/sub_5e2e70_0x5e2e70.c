// 函数: sub_5e2e70
// 地址: 0x5e2e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t i_6 = (*(arg1 + 0x304) - *(arg1 + 0x300)) s/ 0x15fc
int32_t i_3 = i_6

if (i_6 s> 0)
    int32_t esi_2 = 0
    int32_t i
    
    do
        sub_5eb4b0(*(arg1 + 0x300) + esi_2, arg2, arg3, 0)
        esi_2 += 0x15fc
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t i_7 = (*(arg1 + 0x4c0) - *(arg1 + 0x4bc)) s/ 0x15fc
int32_t i_4 = i_7

if (i_7 s> 0)
    int32_t esi_3 = 0
    int32_t i_1
    
    do
        sub_5eb4b0(*(arg1 + 0x4bc) + esi_3, arg2, arg3, 0)
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
        result = sub_5eb4b0(*(arg1 + 0x678) + esi_4, arg2, arg3, 0)
        esi_4 += 0x15fc
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

return result
