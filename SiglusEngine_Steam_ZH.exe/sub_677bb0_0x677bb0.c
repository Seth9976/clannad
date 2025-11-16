// 函数: sub_677bb0
// 地址: 0x677bb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = data_bac49c
int32_t esi = edx[1]
int32_t eax = edx[2]

if (esi u>= eax)
    do
        eax += 0x400
    while (esi u>= eax)
    
    edx[2] = eax
    int32_t eax_3 = HeapReAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, *edx, eax << 2)
    edx = data_bac49c
    *edx = eax_3

int32_t result = *edx
*(result + (edx[1] << 2)) = arg1
edx[1] += 1
return result
