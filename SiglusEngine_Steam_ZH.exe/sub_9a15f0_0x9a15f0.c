// 函数: sub_9a15f0
// 地址: 0x9a15f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2 + 0xc
void* result = arg1 + 4
int32_t i_1 = 0xe
int32_t i

do
    int32_t xmm1_1 = *(esi - 0xc)
    
    if (not(*(result - 4) f<= xmm1_1))
        *(result - 4) = xmm1_1
    
    int32_t xmm1_2 = *(arg2 - arg1 + result)
    
    if (not(*result f<= xmm1_2))
        *result = xmm1_2
    
    int32_t xmm1_3 = *(esi - 4)
    
    if (not(*(result + 4) f<= xmm1_3))
        *(result + 4) = xmm1_3
    
    int32_t xmm1_4 = *esi
    
    if (not(*(result + 8) f<= xmm1_4))
        *(result + 8) = xmm1_4
    
    result += 0x10
    esi += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
return result
