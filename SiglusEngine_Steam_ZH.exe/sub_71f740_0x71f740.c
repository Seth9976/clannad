// 函数: sub_71f740
// 地址: 0x71f740
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (data_bac4f7 != 0)
    return arg1

int32_t ebx_1 = 0
data_bac4f7 = 1
int32_t ecx = 0
int32_t i_10 = 0x4e3ea7c
void* esi_1 = &data_4e3e680
int32_t var_8_1 = 0
int32_t i

do
    int32_t j_9 = 0x1ff
    int32_t j
    
    do
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x80808081, ecx)
        int32_t edx_2 = edx_1 + ecx
        ecx += ebx_1
        int32_t edx_3 = edx_2 s>> 7
        *esi_1 = (edx_3 u>> 0x1f) + edx_3
        esi_1 += 4
        j = j_9
        j_9 -= 1
    while (j != 1)
    *((ebx_1 << 2) + &data_4e3da80) = i_10
    ecx = var_8_1 - 0xff
    i = i_10 + 0x7fc
    var_8_1 = ecx
    ebx_1 += 1
    i_10 = i
while (i s< 0x4ebe67c)
int32_t esi_2 = 0

for (void* i_1 = &data_4e3d680; i_1 s< &data_4e3da80; i_1 += 4)
    int32_t eax_6
    int32_t edx_4
    edx_4:eax_6 = muls.dp.d(0x51eb851f, esi_2)
    esi_2 += 0x1e00
    int32_t edx_5 = edx_4 s>> 5
    *i_1 = (edx_5 u>> 0x1f) + edx_5

int32_t esi_3 = 0

for (void* i_2 = &data_4e3e280; i_2 s< &data_4e3e680; i_2 += 4)
    int32_t eax_10
    int32_t edx_6
    edx_6:eax_10 = muls.dp.d(0x51eb851f, esi_3)
    esi_3 += 0x3b00
    int32_t edx_7 = edx_6 s>> 5
    *i_2 = (edx_7 u>> 0x1f) + edx_7

int32_t esi_4 = 0

for (void* i_3 = &data_4e3de80; i_3 s< &data_4e3e280; i_3 += 4)
    int32_t eax_14
    int32_t edx_8
    edx_8:eax_14 = muls.dp.d(0x51eb851f, esi_4)
    esi_4 += 0xb00
    int32_t edx_9 = edx_8 s>> 5
    *i_3 = (edx_9 u>> 0x1f) + edx_9

void* eax_18 = &data_4e2ed80

for (int32_t i_4 = 0x4e3ea7c; i_4 s< 0x4ebde80; )
    *eax_18 = i_4
    i_4 += 0x7fc
    eax_18 += 4

data_4ced578 = eax_18

for (int32_t i_5 = 0x4ebde80; i_5 s>= 0x4e3ea7c; i_5 -= 0x7fc)
    *eax_18 = i_5
    eax_18 += 4

int64_t xmm0_1 = (zx.o(0)).q
int32_t i_6 = 0
int64_t var_14_1 = (zx.o(0)).q

do
    double xmm0_2 = xmm0_1 f* 0.01745328888888889
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    int64_t xmm0_3
    x87control_1, xmm0_3 = __libm_sse2_sin_precise(mxcsr, x87control, xmm0_2)
    *(i_6 + &data_4e36600) = xmm0_3
    int64_t xmm0_5
    x87control, xmm0_5 = __libm_sse2_cos_precise(mxcsr, x87control_1, xmm0_2)
    *(i_6 + &data_4e2f580) = xmm0_5
    i_6 += 8
    xmm0_1 = var_14_1 f+ 0.10000000000000001
    var_14_1 = xmm0_1
while (i_6 s< 0x7080)

void* var_10_1 = &data_4dae980
int32_t ebx_2 = 0
void* i_11 = &data_4dae980
void* i_7

do
    int32_t j_1 = 0
    int32_t edi_2 = 0
    
    do
        int32_t eax_19
        int32_t edx_10
        edx_10:eax_19 = muls.dp.d(0x80808081, edi_2)
        int32_t j_6 = j_1
        j_1 += 1
        int32_t edx_11 = edx_10 + edi_2
        edi_2 += ebx_2
        int32_t edx_12 = edx_11 s>> 7
        *var_10_1 = j_6 - ((edx_12 u>> 0x1f) + edx_12) + ebx_2
        var_10_1 += 4
    while (j_1 s< 0x100)
    
    *((ebx_2 << 2) + &data_4dae580) = i_11
    i_7 = i_11 + 0x400
    ebx_2 += 1
    i_11 = i_7
while (i_7 s< &data_4dee980)
void* ecx_8 = &data_4deed80
int32_t edi_3 = 0
void* ebx_3 = &data_4deed80

for (int32_t i_8 = 0xff; i_8 s> 0xffffffff; )
    bool cond:1_1 = data_b94f20 s< 2
    uint32_t xmm0_8[0x4] = _mm_shuffle_epi32(zx.o(edi_3), 0)
    
    if (cond:1_1)
        int32_t eax_24 = 0
        int32_t j_7 = 0x100
        int32_t j_2
        
        do
            *ecx_8 = eax_24
            ecx_8 += 4
            eax_24 += i_8
            j_2 = j_7
            j_7 -= 1
        while (j_2 != 1)
    else
        int32_t j_3 = 0
        int32_t xmm3_1[0x4] = data_b0da70
        int32_t xmm2_2[0x4] = _mm_sub_epi32(data_b0da90, xmm0_8)
        
        do
            int32_t eax_23 = j_3 + 4
            uint32_t xmm1_1[0x4] = _mm_shuffle_epi32(zx.o(j_3), 0)
            j_3 += 8
            *ecx_8 = _mm_mullo_epi32(xmm2_2, _mm_add_epi32(xmm1_1, xmm3_1))
            *(ecx_8 + 0x10) =
                _mm_mullo_epi32(xmm2_2, _mm_add_epi32(_mm_shuffle_epi32(zx.o(eax_23), 0), xmm3_1))
            ecx_8 += 0x20
        while (j_3 s< 0x100)
    
    *((edi_3 << 2) + &data_4dee980) = ebx_3
    i_8 -= 1
    edi_3 += 1
    ebx_3 += 0x400

int32_t ebx_4 = 0
int32_t esi_5 = 0
void* i_9 = &data_4d6e580
void* ecx_9 = &data_4d6e580

do
    bool cond:2_1 = data_b94f20 s< 2
    uint32_t xmm3_2[0x4] = _mm_shuffle_epi32(zx.o(ebx_4), 0)
    
    if (cond:2_1)
        int32_t eax_26 = 0
        int32_t j_8 = 0x100
        int32_t j_4
        
        do
            *ecx_9 = eax_26
            ecx_9 += 4
            eax_26 += esi_5
            j_4 = j_8
            j_8 -= 1
        while (j_4 != 1)
    else
        int32_t xmm1_5[0x4] = data_b0da70
        int32_t j_5 = 0
        int32_t xmm2_3[0x4] = data_b0da90
        
        do
            int32_t eax_25 = j_5 + 4
            int32_t xmm0_17[0x4] = _mm_shuffle_epi32(zx.o(j_5), 0)
            j_5 += 8
            *ecx_9 =
                _mm_mullo_epi32(_mm_mullo_epi32(_mm_add_epi32(xmm0_17, xmm1_5), xmm3_2), xmm2_3)
            *(ecx_9 + 0x10) = _mm_mullo_epi32(
                _mm_mullo_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(eax_25), 0), xmm1_5), xmm3_2), 
                xmm2_3)
            ecx_9 += 0x20
        while (j_5 s< 0x100)
    
    *((ebx_4 << 2) + &data_4d6e180) = i_9
    esi_5 += 0xff
    i_9 += 0x400
    ebx_4 += 1
while (i_9 s< &data_4dae580)

return arg1
