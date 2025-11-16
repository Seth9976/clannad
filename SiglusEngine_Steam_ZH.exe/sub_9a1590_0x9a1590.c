// 函数: sub_9a1590
// 地址: 0x9a1590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2 + 0xc
void* result = arg1 + 4
int32_t i_1 = 0xe
int32_t i

do
    int32_t xmm0_1 = *(esi - 0xc)
    
    if (not(xmm0_1 f<= *(result - 4)))
        *(result - 4) = xmm0_1
    
    int32_t xmm0_2 = *(arg2 - arg1 + result)
    
    if (not(xmm0_2 f<= *result))
        *result = xmm0_2
    
    int32_t xmm0_3 = *(esi - 4)
    
    if (not(xmm0_3 f<= *(result + 4)))
        *(result + 4) = xmm0_3
    
    int32_t xmm0_4 = *esi
    
    if (not(xmm0_4 f<= *(result + 8)))
        *(result + 8) = xmm0_4
    
    result += 0x10
    esi += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
return result
