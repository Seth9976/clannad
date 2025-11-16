// 函数: sub_6d0400
// 地址: 0x6d0400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
uint32_t ecx = zx.d(*(arg1 + 0x148))
uint32_t i
uint32_t edi_1

if (ecx.w != 0)
    edi_1 = ecx
    i = 0

if (ecx.w == 0 || edi_1 s<= 0)
label_6d0437:
    *(arg1 + 0x7c) &= 0xff7fffff
    *(arg1 + 0x78) &= 0xffffdfff
    
    if (esi == 0)
        *(arg1 + 0x7c) &= 0xfffffe7f
else
    while (true)
        ecx.b = (*(arg1 + 0x1ac))[i]
        
        if (ecx.b != 0xff)
            if (ecx.b != 0)
                break
            
            esi = 1
        
        i += 1
        
        if (i s>= edi_1)
            goto label_6d0437

int32_t esi_1 = *(arg1 + 0x7c)

if ((esi_1 & 0x100) == 0 || (esi_1 & 0x1000) == 0)
    return 

char* ecx_2 = zx.d(*(arg1 + 0x160)) * 3 + *(arg1 + 0x13c)
*(arg1 + 0x162) = zx.w(*ecx_2)
*(arg1 + 0x164) = zx.w(ecx_2[1])
*(arg1 + 0x166) = zx.w(ecx_2[2])

if ((esi_1 & 0x80000) == 0 || (esi_1 & &data_2000000) != 0)
    return 

uint32_t esi_2 = zx.d(*(arg1 + 0x148))
i = 0

if (esi_2 s<= 0)
    return 

if (esi_2 u>= 0x20)
    void* ebx_2 = *(arg1 + 0x1ac)
    int32_t ecx_4 = esi_2 & 0x8000001f
    
    if (ecx_4 s< 0)
        ecx_4 = ((ecx_4 - 1) | 0xffffffe0) + 1
    
    int32_t xmm2_1[0x4] = data_b0dbf0
    ecx_2 = ebx_2 + 0x10
    
    do
        *(ebx_2 + i) = _mm_sub_epi8(xmm2_1, *(ebx_2 + i))
        i += 0x20
        *ecx_2 = _mm_sub_epi8(xmm2_1, *ecx_2)
        ecx_2 = &ecx_2[0x20]
    while (i s< esi_2 - ecx_4)

if (i s>= esi_2)
    return 

int32_t edx = *(arg1 + 0x1ac)

do
    ecx_2.b = 0xff
    ecx_2.b = 0xff - *(edx + i)
    *(edx + i) = ecx_2.b
    i += 1
while (i s< esi_2)
