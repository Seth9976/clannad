// 函数: sub_5b0040
// 地址: 0x5b0040
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_14 = arg1
void* ecx = data_bac468
int32_t eax
eax.b = arg2 s< 0
*(arg1 + 0x1c0) = arg2
sub_6018e0(ecx + 0x304, eax + 1)
int32_t* edx = data_bac49c
int32_t ecx_2 = edx[1]
int32_t eax_2 = edx[2]

if (ecx_2 u>= eax_2)
    do
        eax_2 += 0x400
    while (ecx_2 u>= eax_2)
    
    edx[2] = eax_2
    int32_t eax_5 = HeapReAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, *edx, eax_2 << 2)
    edx = data_bac49c
    *edx = eax_5

*(*edx + (edx[1] << 2)) = arg2
void* ecx_4 = data_bac504
edx[1] += 1
sub_6508f0(ecx_4 + 0x10)
bool cond:1 = *(arg1 + 0x1c0) s< 0
*(arg1 + 0x1cb) = 0

if (not(cond:1))
    int32_t eax_7 = *(arg1 + 0x190)
    
    if (eax_7 s>= 1)
        *(arg1 + 0x1b4) = eax_7
        *(arg1 + 0x1b8) = *(arg1 + 0x194)
        *(arg1 + 0x1bc) = 0
        return sub_621120()

sub_5affa0(arg1)
return sub_621120()
