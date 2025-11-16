// 函数: sub_724ce0
// 地址: 0x724ce0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
void* edi = *(arg3 + 0x1c)

if (*(edi + 0x34) == 0)
    int32_t eax_2 = (*(arg3 + 0x20))(*(arg3 + 0x28), 1 << (*(edi + 0x24)).b, 1)
    *(edi + 0x34) = eax_2
    
    if (eax_2 == 0)
        return 1

if (*(edi + 0x28) == 0)
    *(edi + 0x28) = 1 << (*(edi + 0x24)).b
    *(edi + 0x30) = 0
    *(edi + 0x2c) = 0

int32_t i_3 = *(edi + 0x28)
int32_t i_8 = arg4

if (i_8 u>= i_3)
    void* edx_1 = *(edi + 0x34)
    char* esi_1 = arg2 - i_3
    
    if (i_3 != 0)
        int32_t i
        
        do
            i_8.b = *esi_1
            edx_1 += 1
            *(edx_1 - 1) = i_8.b
            esi_1 = &esi_1[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    *(edi + 0x2c) = *(edi + 0x28)
    *(edi + 0x30) = 0
    return 0

int32_t i_7 = i_3 - *(edi + 0x30)

if (i_7 u> i_8)
    i_7 = i_8

void* ebx_3 = *(edi + 0x34) + *(edi + 0x30)
char* edx_3 = arg2 - i_8

if (i_7 != 0)
    int32_t i_5 = i_7
    int32_t i_1
    
    do
        i_8.b = *edx_3
        ebx_3 += 1
        *(ebx_3 - 1) = i_8.b
        edx_3 = &edx_3[1]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    i_8 = arg4

int32_t i_6 = i_8 - i_7
arg4 = i_6

if (i_8 == i_7)
    *(edi + 0x30) += i_7
    int32_t edx_4 = *(edi + 0x28)
    
    if (*(edi + 0x30) == edx_4)
        *(edi + 0x30) = 0
    
    int32_t eax_9 = *(edi + 0x2c)
    
    if (eax_9 u< edx_4)
        *(edi + 0x2c) = eax_9 + i_7
    
    return 0

void* ecx_2 = *(edi + 0x34)
int32_t i_4 = i_6
char* esi_2 = arg2 - i_6
int32_t i_2

do
    i_6.b = *esi_2
    ecx_2 += 1
    *(ecx_2 - 1) = i_6.b
    esi_2 = &esi_2[1]
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
*(edi + 0x30) = arg4
*(edi + 0x2c) = *(edi + 0x28)
return 0
