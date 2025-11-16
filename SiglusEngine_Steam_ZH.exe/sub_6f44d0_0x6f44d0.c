// 函数: sub_6f44d0
// 地址: 0x6f44d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = &data_4d2e180
int32_t ebx = 0
void* i_4 = &data_4d2e180
void* i

do
    int32_t j = 0
    int32_t edi_1 = 0
    
    do
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x80808081, edi_1)
        int32_t j_6 = j
        j += 1
        int32_t edx_2 = edx_1 + edi_1
        edi_1 += ebx
        int32_t edx_3 = edx_2 s>> 7
        *var_8 = j_6 - ((edx_3 u>> 0x1f) + edx_3) + ebx
        var_8 += 4
    while (j s< 0x100)
    
    *((ebx << 2) + &data_4ced980) = i_4
    i = i_4 + 0x400
    ebx += 1
    i_4 = i
while (i s< &data_4d6e180)
void* eax_5 = &data_4cee180
int32_t edi_2 = 0
void* ebx_1 = &data_4cee180

for (int32_t i_1 = 0xff; i_1 s> 0xffffffff; )
    bool cond:0_1 = data_b94f20 s< 2
    uint32_t xmm0_2[0x4] = _mm_shuffle_epi32(zx.o(edi_2), 0)
    
    if (cond:0_1)
        int32_t ecx_7 = 0
        int32_t j_7 = 0x100
        int32_t j_1
        
        do
            *eax_5 = ecx_7
            eax_5 += 4
            ecx_7 += i_1
            j_1 = j_7
            j_7 -= 1
        while (j_1 != 1)
    else
        int32_t j_2 = 0
        int32_t xmm3_1[0x4] = data_b0da70
        int32_t xmm2_2[0x4] = _mm_sub_epi32(data_b0da90, xmm0_2)
        
        do
            int32_t ecx_6 = j_2 + 4
            uint32_t xmm1_1[0x4] = _mm_shuffle_epi32(zx.o(j_2), 0)
            j_2 += 8
            *eax_5 = _mm_mullo_epi32(xmm2_2, _mm_add_epi32(xmm1_1, xmm3_1))
            *(eax_5 + 0x10) =
                _mm_mullo_epi32(xmm2_2, _mm_add_epi32(_mm_shuffle_epi32(zx.o(ecx_6), 0), xmm3_1))
            eax_5 += 0x20
        while (j_2 s< 0x100)
    
    *((edi_2 << 2) + &data_4cedd80) = ebx_1
    i_1 -= 1
    edi_2 += 1
    ebx_1 += 0x400

int32_t ebx_2 = 0
int32_t esi_1 = 0
void* i_2 = &data_4cad570
void* ecx_8 = &data_4cad570

do
    bool cond:1_1 = data_b94f20 s< 2
    uint32_t xmm3_2[0x4] = _mm_shuffle_epi32(zx.o(ebx_2), 0)
    
    if (cond:1_1)
        int32_t eax_7 = 0
        int32_t j_8 = 0x100
        int32_t j_3
        
        do
            *ecx_8 = eax_7
            ecx_8 += 4
            eax_7 += esi_1
            j_3 = j_8
            j_8 -= 1
        while (j_3 != 1)
    else
        int32_t xmm1_5[0x4] = data_b0da70
        int32_t j_4 = 0
        int32_t xmm2_3[0x4] = data_b0da90
        
        do
            int32_t eax_6 = j_4 + 4
            int32_t xmm0_11[0x4] = _mm_shuffle_epi32(zx.o(j_4), 0)
            j_4 += 8
            *ecx_8 =
                _mm_mullo_epi32(_mm_mullo_epi32(_mm_add_epi32(xmm0_11, xmm1_5), xmm3_2), xmm2_3)
            *(ecx_8 + 0x10) = _mm_mullo_epi32(
                _mm_mullo_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(eax_6), 0), xmm1_5), xmm3_2), 
                xmm2_3)
            ecx_8 += 0x20
        while (j_4 s< 0x100)
    
    *((ebx_2 << 2) + &data_4ced580) = i_2
    esi_1 += 0xff
    i_2 += 0x400
    ebx_2 += 1
while (i_2 s< &data_4ced570)

int32_t ecx_9 = 0
void* var_10 = &data_4c6d170
void* esi_2 = &data_4c6d570
int32_t var_c = 0
int32_t ebx_3 = 0
void* i_5 = &data_4c6d570
void* i_3

do
    int32_t j_9 = 0x100
    int32_t j_5
    
    do
        int32_t eax_8
        int32_t edx_4
        edx_4:eax_8 = muls.dp.d(0x80808081, ecx_9)
        int32_t edx_5 = edx_4 + ecx_9
        ecx_9 += ebx_3
        int32_t edx_6 = edx_5 s>> 7
        *esi_2 = (edx_6 u>> 0x1f) + edx_6
        esi_2 += 4
        j_5 = j_9
        j_9 -= 1
    while (j_5 != 1)
    ebx_3 -= 1
    ecx_9 = var_c + 0xff
    *var_10 = i_5
    i_3 = i_5 + 0x400
    var_c = ecx_9
    i_5 = i_3
    var_10 += 4
while (i_3 s< &data_4cad570)

data_4ced574 = &data_4ced980
data_c6d16c = &data_4cedd80
data_4ced570 = &data_4ced580
data_c6d168 = &data_4c6d170
data_bac4f6 = 1
return i_3
