// 函数: sub_677d60
// 地址: 0x677d60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t* ebx = data_bac49c
int32_t result = ebx[1] - *(ebx[7] - 4)
ebx[7] -= 4
int32_t* edx = *ebx + ((ebx[1] - result) << 2)
void* ecx_2 = arg1

if (result s> 0)
    int32_t esi_1 = result
    int32_t i
    
    do
        ecx_2 += 4
        *(ecx_2 - 4) = *edx
        edx = &edx[1]
        i = esi_1
        esi_1 -= 1
    while (i != 1)

*(arg1 + 0x7c) = result
ebx[1] -= result
return result
