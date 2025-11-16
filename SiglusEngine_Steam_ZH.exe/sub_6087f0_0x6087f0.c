// 函数: sub_6087f0
// 地址: 0x6087f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi = arg2
int32_t esi_2 = arg3
int32_t i_8 = (*(arg1 + 0x148) - *(arg1 + 0x144)) s/ 0x15fc
int32_t i_5 = i_8

if (i_8 s> 0)
    int32_t ecx = 0
    arg2 = 0
    int32_t i
    
    do
        void* eax_4 = *(arg1 + 0x144) + ecx
        
        if (*(eax_4 + 0xa0) != 0)
            sub_5eb4b0(eax_4, edi, esi_2, 0)
            ecx = arg2
        
        ecx += 0x15fc
        i = i_5
        i_5 -= 1
        arg2 = ecx
    while (i != 1)

int32_t eax_5
int32_t edx_3
edx_3:eax_5 = muls.dp.d(0x4fba3d0b, *(arg1 + 0x43c) - *(arg1 + 0x438))
int32_t edx_4 = edx_3 s>> 0xb
int32_t i_9 = (edx_4 u>> 0x1f) + edx_4
int32_t i_6 = i_9

if (i_9 s> 0)
    int32_t eax_8 = 0
    arg2 = 0
    int32_t i_1
    
    do
        void* esi_3 = *(arg1 + 0x438)
        *(esi_3 + eax_8 + 0x1d0) += edi
        void* esi_4 = esi_3 + eax_8
        sub_5e2e70(esi_4 + 0x234, edi, arg3)
        sub_5e2e70(esi_4 + 0xf28, edi, arg3)
        eax_8 = arg2 + 0x19b0
        i_1 = i_6
        i_6 -= 1
        arg2 = eax_8
    while (i_1 != 1)
    esi_2 = arg3

int32_t var_18_3 = esi_2
sub_5aeba0(arg1 + 0x4cc, edi)
int32_t eax_10
int32_t edx_5
edx_5:eax_10 = muls.dp.d(0x6bca1af3, *(arg1 + 0x76c) - *(arg1 + 0x768))
int32_t edx_6 = edx_5 s>> 8
int32_t eax_13 = (edx_6 u>> 0x1f) + edx_6
arg2 = eax_13

if (eax_13 s> 0)
    int32_t eax_14 = 0
    arg3 = 0
    int32_t i_2
    
    do
        sub_60b150(*(arg1 + 0x768) + eax_14, edi, esi_2)
        eax_14 = arg3 + 0x260
        i_2 = arg2
        arg2 -= 1
        arg3 = eax_14
    while (i_2 != 1)

int32_t eax_16
int32_t edx_7
edx_7:eax_16 = muls.dp.d(0x51eb851f, *(arg1 + 0x824) - *(arg1 + 0x820))
int32_t edx_8 = edx_7 s>> 8
int32_t eax_19 = (edx_8 u>> 0x1f) + edx_8
arg2 = eax_19

if (eax_19 s> 0)
    int32_t eax_20 = 0
    arg3 = 0
    int32_t i_3
    
    do
        sub_5fafb0(*(arg1 + 0x820) + eax_20, edi, esi_2)
        eax_20 = arg3 + 0x320
        i_3 = arg2
        arg2 -= 1
        arg3 = eax_20
    while (i_3 != 1)

int32_t ecx_16 = *(arg1 + 0x8dc) - *(arg1 + 0x8d8)
void* result
int32_t edx_9
edx_9:result = muls.dp.d(0x8d3dcb09, ecx_16)
int32_t i_7 = ecx_16 s/ 0xe8

if (i_7 s> 0)
    int32_t ecx_17 = 0
    int32_t i_4
    
    do
        void* eax_22 = *(arg1 + 0x8d8)
        *(eax_22 + ecx_17 + 0xac) += edi
        result = eax_22 + ecx_17
        ecx_17 += 0xe8
        *(result + 0xb8) += edi
        i_4 = i_7
        i_7 -= 1
    while (i_4 != 1)

return result
