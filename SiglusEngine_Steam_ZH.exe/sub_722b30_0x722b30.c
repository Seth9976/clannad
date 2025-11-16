// 函数: sub_722b30
// 地址: 0x722b30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 0x1c)
uint32_t result = sub_727d20(esi)
int32_t i_1 = *(esi + 0x14)

if (i_1 u> *(arg1 + 0x10))
    i_1 = *(arg1 + 0x10)

int32_t i_2 = i_1

if (i_1 != 0)
    char* ecx_1 = *(esi + 0x10)
    void* ebx_1 = *(arg1 + 0xc)
    int32_t i
    
    do
        result.b = *ecx_1
        ebx_1 += 1
        *(ebx_1 - 1) = result.b
        ecx_1 = &ecx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(arg1 + 0xc) += i_2
    *(esi + 0x10) += i_2
    *(arg1 + 0x14) += i_2
    *(arg1 + 0x10) -= i_2
    int32_t temp1_1 = *(esi + 0x14)
    *(esi + 0x14) -= i_2
    
    if (temp1_1 == i_2)
        result = *(esi + 8)
        *(esi + 0x10) = result

return result
