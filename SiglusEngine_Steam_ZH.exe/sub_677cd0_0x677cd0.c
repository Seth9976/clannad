// 函数: sub_677cd0
// 地址: 0x677cd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t* ecx = data_bac49c
int32_t edx = *(arg1 + 0x7c)
int32_t edi = ecx[2]

if (ecx[1] + 1 + edx u>= edi)
    int32_t eax_4 = edi + 0x401 + edx
    ecx[2] = eax_4
    int32_t eax_7 = HeapReAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, *ecx, eax_4 << 2)
    ecx = data_bac49c
    *ecx = eax_7

var_8 = ecx[1]
sub_59a180(&ecx[6], &var_8)
int32_t* edi_1 = data_bac49c
void* edx_1 = *edi_1 + (edi_1[1] << 2)
int32_t i = 0

if (*(arg1 + 0x7c) s> 0)
    do
        edx_1 += 4
        *(edx_1 - 4) = *(arg1 + (i << 2))
        i += 1
    while (i s< *(arg1 + 0x7c))

int32_t result = *(arg1 + 0x7c)
edi_1[1] += result
return result
