// 函数: sub_6dc4d0
// 地址: 0x6dc4d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* ecx = arg2
char* ebx = arg3
int32_t eax_3 = (zx.d(*(arg1 + 0xb)) + 7) s>> 3
int32_t esi = 0
void* edx = &ecx[eax_3]
int32_t edi_1 = edx - ecx

if (ecx u> edx)
    edi_1 = 0

if (edi_1 != 0)
    do
        esi += 1
        *ecx += *ebx
        ebx = &ebx[1]
        ecx = &ecx[1]
    while (esi u< edi_1)

void* result = *(arg1 + 4) - eax_3
void* edx_1 = edx + result

if (ecx u< edx_1)
    result = ecx - eax_3
    arg1 = result
    void* edi_4 = ebx - eax_3
    
    do
        uint32_t esi_2 = zx.d(*result)
        ebx = &ebx[1]
        uint32_t edx_2 = zx.d(*edi_4)
        uint32_t eax_8 = zx.d(ebx[0xffffffff])
        uint32_t edi_7 = eax_8 - edx_2
        uint32_t esi_3 = esi_2 - edx_2
        int32_t eax_10
        int32_t edx_3
        edx_3:eax_10 = sx.q(edi_7)
        int32_t eax_14
        int32_t edx_4
        edx_4:eax_14 = sx.q(esi_3)
        int32_t eax_16 = (eax_14 ^ edx_4) - edx_4
        int32_t eax_18
        int32_t edx_5
        edx_5:eax_18 = sx.q(esi_3 + edi_7)
        int32_t edx_6 = (eax_10 ^ edx_3) - edx_3
        char eax_20
        
        if (eax_16 s>= edx_6)
            eax_20 = esi_2.b
        else
            edx_6 = eax_16
            eax_20 = eax_8.b
        
        edi_4 += 1
        
        if ((eax_18 ^ edx_5) - edx_5 s< edx_6)
            eax_20 = edx_2.b
        
        *ecx += eax_20
        ecx = &ecx[1]
        result = arg1 + 1
        arg1 = result
    while (ecx u< edx_1)

return result
