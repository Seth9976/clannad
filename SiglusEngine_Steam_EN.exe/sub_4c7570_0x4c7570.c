// 函数: sub_4c7570
// 地址: 0x4c7570
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = &data_6c2770
int32_t ebx = 0
void* i_3 = &data_6c2770
void* i

do
    int32_t j = 0
    int32_t edi_1 = 0
    
    do
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x80808081, edi_1)
        int32_t j_5 = j
        j += 1
        int32_t edx_2 = edx_1 + edi_1
        edi_1 += ebx
        int32_t edx_3 = edx_2 s>> 7
        *var_8 = j_5 - ((edx_3 u>> 0x1f) + edx_3) + ebx
        var_8 += 4
    while (j s< 0x100)
    
    *((ebx << 2) + &data_6c2370) = i_3
    i = i_3 + 0x400
    ebx += 1
    i_3 = i
while (i s< &data_702770)
void* eax_5 = &data_682370
int32_t edi_2 = 0
void* ebx_1 = &data_682370

for (int32_t i_1 = 0xff; i_1 s> 0xffffffff; )
    bool cond:0_1 = data_6410f8 s< 2
    uint32_t xmm0_2[0x4] = _mm_shuffle_epi32(zx.o(edi_2), 0)
    
    if (cond:0_1)
        int32_t ecx_7 = 0
        int32_t j_6 = 0x100
        int32_t j_1
        
        do
            *eax_5 = ecx_7
            eax_5 += 4
            ecx_7 += i_1
            j_1 = j_6
            j_6 -= 1
        while (j_1 != 1)
    else
        int32_t j_2 = 0
        int32_t xmm3_1[0x4] = data_624960
        int32_t xmm2_2[0x4] = _mm_sub_epi32(data_6249b0, xmm0_2)
        
        do
            int32_t ecx_6 = j_2 + 4
            uint32_t xmm1_1[0x4] = _mm_shuffle_epi32(zx.o(j_2), 0)
            j_2 += 8
            *eax_5 = _mm_mullo_epi32(xmm2_2, _mm_add_epi32(xmm1_1, xmm3_1))
            *(eax_5 + 0x10) =
                _mm_mullo_epi32(xmm2_2, _mm_add_epi32(_mm_shuffle_epi32(zx.o(ecx_6), 0), xmm3_1))
            eax_5 += 0x20
        while (j_2 s< 0x100)
    
    *((edi_2 << 2) + &data_681f70) = ebx_1
    i_1 -= 1
    edi_2 += 1
    ebx_1 += 0x400

int32_t ebx_2 = 0
int32_t esi_1 = 0
void* i_2 = &data_641f70
void* ecx_8 = &data_641f70
int32_t result

do
    bool cond:1_1 = data_6410f8 s< 2
    uint32_t xmm3_2[0x4] = _mm_shuffle_epi32(zx.o(ebx_2), 0)
    
    if (cond:1_1)
        result = 0
        int32_t j_7 = 0x100
        int32_t j_3
        
        do
            *ecx_8 = result
            ecx_8 += 4
            result += esi_1
            j_3 = j_7
            j_7 -= 1
        while (j_3 != 1)
    else
        int32_t xmm1_5[0x4] = data_624960
        int32_t j_4 = 0
        int32_t xmm2_3[0x4] = data_6249b0
        
        do
            result = j_4 + 4
            int32_t xmm0_11[0x4] = _mm_shuffle_epi32(zx.o(j_4), 0)
            j_4 += 8
            *ecx_8 =
                _mm_mullo_epi32(_mm_mullo_epi32(_mm_add_epi32(xmm0_11, xmm1_5), xmm3_2), xmm2_3)
            *(ecx_8 + 0x10) = _mm_mullo_epi32(
                _mm_mullo_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(result), 0), xmm1_5), xmm3_2), 
                xmm2_3)
            ecx_8 += 0x20
        while (j_4 s< 0x100)
    
    *((ebx_2 << 2) + &data_641b70) = i_2
    esi_1 += 0xff
    i_2 += 0x400
    ebx_2 += 1
while (i_2 s< &data_681f70)

return result
