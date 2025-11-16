// 函数: sub_4da486
// 地址: 0x4da486
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
int32_t i_2 = 0x100
int32_t i

do
    int16_t* edx_1 = *(arg1 + 0x20) + esi
    void* ecx_1
    ecx_1.w = *edx_1
    int16_t ecx_3
    
    if (ecx_1.w u< 0x8000)
        ecx_3 = 0
    else
        ecx_3 = ecx_1.w + 0x8000
    
    esi += 2
    i = i_2
    i_2 -= 1
    *edx_1 = ecx_3
while (i != 1)
int32_t edx_2 = 0
int32_t i_3 = 0x8000
int32_t i_1

do
    int16_t* esi_2 = *(arg1 + 0x24) + edx_2
    void* ecx_4
    ecx_4.w = *esi_2
    int16_t ecx_6
    
    if (ecx_4.w u< 0x8000)
        ecx_6 = 0
    else
        ecx_6 = ecx_4.w + 0x8000
    
    *esi_2 = ecx_6
    int16_t* ecx_8 = *(arg1 + 0x14) + edx_2
    esi_2.w = *ecx_8
    int16_t esi_4
    
    if (esi_2.w u< 0x8000)
        esi_4 = 0
    else
        esi_4 = esi_2.w + 0x8000
    
    *ecx_8 = esi_4
    int16_t* ecx_10 = *(arg1 + 0x18) + edx_2
    esi_4 = *ecx_10
    int16_t esi_6
    
    if (esi_4 u< 0x8000)
        esi_6 = 0
    else
        esi_6 = esi_4 + 0x8000
    
    edx_2 += 2
    i_1 = i_3
    i_3 -= 1
    *ecx_10 = esi_6
while (i_1 != 1)
return 0x8000
