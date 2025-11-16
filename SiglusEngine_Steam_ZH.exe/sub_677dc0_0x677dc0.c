// 函数: sub_677dc0
// 地址: 0x677dc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = data_bac49c
int32_t ecx = edi[1]
int32_t edx = edi[2]
int32_t i_2 = ecx - *(edi[7] - 4)

if (ecx + 1 + i_2 u>= edx)
    int32_t eax_4 = edx + 0x401 + i_2
    edi[2] = eax_4
    int32_t eax_7 = HeapReAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, *edi, eax_4 << 2)
    edi = data_bac49c
    *edi = eax_7

int32_t edx_1 = edi[1]
int32_t ecx_1 = *edi
int32_t* esi = ecx_1 + ((edx_1 - i_2) << 2)
void* ecx_2 = ecx_1 + (edx_1 << 2)

if (i_2 s> 0)
    int32_t i_1 = i_2
    int32_t i
    
    do
        ecx_2 += 4
        *(ecx_2 - 4) = *esi
        esi = &esi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t ecx_7 = edi[1]
void* esi_1 = &edi[6]
int32_t eax_11 = *(esi_1 + 4)
int32_t var_8 = ecx_7
int32_t edx_2

if (&var_8 u< eax_11)
    edx_2 = *esi_1
    edi = data_bac49c

if (&var_8 u>= eax_11 || edx_2 u> &var_8)
    if (eax_11 == *(esi_1 + 8))
        sub_55d250(esi_1, 1)
        edi = data_bac49c
    
    eax_11 = *(esi_1 + 4)
    
    if (eax_11 != 0)
        *eax_11 = ecx_7
else
    if (eax_11 == *(esi_1 + 8))
        eax_11 = sub_55d250(esi_1, 1)
        edi = data_bac49c
    
    int32_t* edx_3 = *(esi_1 + 4)
    
    if (edx_3 != 0)
        int32_t eax_13 = *(*esi_1 + ((&var_8 - edx_2) s>> 2 << 2))
        *edx_3 = eax_13
        *(esi_1 + 4) += 4
        edi[1] += i_2
        return eax_13

*(esi_1 + 4) += 4
edi[1] += i_2
return eax_11
