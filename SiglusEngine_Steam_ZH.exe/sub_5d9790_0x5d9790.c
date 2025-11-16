// 函数: sub_5d9790
// 地址: 0x5d9790
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_5 = data_bac510
int32_t esi = *(arg1 + 0xa0) * 0xfc
*(arg1 + 0x160) = *(esi + edx_5 + 0xa2ebf4)
*(arg1 + 0x164) = *(esi + edx_5 + 0xa2ebf8)
int32_t ecx_1 = *(arg1 + 0x22c) - *(arg1 + 0x228)
int32_t result
int32_t edx
edx:result = muls.dp.d(0x92492493, ecx_1)
int32_t i_1 = ecx_1 s/ 0x1c0

if (i_1 s> 0)
    result = 0
    int32_t i
    
    do
        int32_t* edx_4 = *(arg1 + 0x228) + result
        result += 0x1c0
        edx_4[0x36] = *edx_4
        edx_4[0x37] = edx_4[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
