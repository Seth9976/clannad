// 函数: sub_5ee880
// 地址: 0x5ee880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x12d4) = *(arg1 + 0x378) + *(arg1 + 0x344)
*(arg1 + 0x12d8) = *(arg1 + 0x38c)
*(arg1 + 0x12dc) = *(arg1 + 0x390)
int32_t eax_4 = sub_5f07c0(arg1)
int32_t xmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3b4)))
*(arg1 + 0x12e0) = eax_4
*(arg1 + 0x1320) = *(arg1 + 0x630)
int32_t eax_6 = *(arg1 + 0x64c)
*(arg1 + 0x12e4) = xmm0_1
int32_t xmm0_3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3e0)))
*(arg1 + 0x1324) = eax_6
*(arg1 + 0x1328) = *(arg1 + 0x678)
int32_t eax_8 = *(arg1 + 0x6a4)
*(arg1 + 0x12e8) = xmm0_3
int32_t xmm0_5 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40c)))
*(arg1 + 0x132c) = eax_8
*(arg1 + 0x1330) = *(arg1 + 0x6d0)
int32_t eax_10 = *(arg1 + 0x6e4)
*(arg1 + 0x12ec) = xmm0_5
*(arg1 + 0x12f0) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x438)))
*(arg1 + 0x12f4) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x464)))
*(arg1 + 0x12f8) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x490)))
*(arg1 + 0x12fc) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x4bc)))
*(arg1 + 0x1300) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x4e8)))
*(arg1 + 0x1304) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x514)))
*(arg1 + 0x1308) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x540))) / 1000f
*(arg1 + 0x130c) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x56c))) / 1000f
*(arg1 + 0x1310) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x598))) / 1000f
*(arg1 + 0x1314) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x5c4))) / 10f * 0.0174532924f
*(arg1 + 0x1318) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x5f0))) / 10f * 0.0174532924f
*(arg1 + 0x131c) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x61c))) / 10f * 0.0174532924f
*(arg1 + 0x1334) = eax_10
*(arg1 + 0x1338) = *(arg1 + 0x700)
*(arg1 + 0x133c) = *(arg1 + 0x72c)
*(arg1 + 0x1340) = *(arg1 + 0x758)
*(arg1 + 0x1344) = *(arg1 + 0x784)
*(arg1 + 0x1348) = *(arg1 + 0x7b0)
*(arg1 + 0x134c) = *(arg1 + 0x7dc)
*(arg1 + 0x1350) = *(arg1 + 0x808)
*(arg1 + 0x1354) = *(arg1 + 0x834)
*(arg1 + 0x1358) = *(arg1 + 0x860)
*(arg1 + 0x135c) = *(arg1 + 0x88c)
*(arg1 + 0x1360) = *(arg1 + 0x8b8)
*(arg1 + 0x1364) = *(arg1 + 0x8e4)
*(arg1 + 0x1368) = *(arg1 + 0x910)
*(arg1 + 0x136c) = *(arg1 + 0x93c)
bool cond:0 = *(arg1 + 0x9b8) != 0
*(arg1 + 0x1370) = *(arg1 + 0x968)
*(arg1 + 0x1374) = *(arg1 + 0x994)
*(arg1 + 0x1378) = *(arg1 + 0x9a8)
*(arg1 + 0x137c) = *(arg1 + 0x9ac)
int32_t eax_28
eax_28.b = cond:0
bool cond:1 = *(arg1 + 0x9bc) != 0
*(arg1 + 0x1384) = eax_28.b
eax_28.b = cond:1
bool cond:2 = *(arg1 + 0x9c0) != 0
*(arg1 + 0x1385) = eax_28.b
eax_28.b = cond:2
*(arg1 + 0x1386) = eax_28.b
*(arg1 + 0x1388) = *(arg1 + 0x9c4)
int32_t eax_30
int32_t edx
edx:eax_30 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa74) - *(arg1 + 0xa70))
int32_t edx_1 = edx s>> 3
int32_t eax_33 = (edx_1 u>> 0x1f) + edx_1
int32_t eax_34
int32_t edx_2
edx_2:eax_34 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xb30) - *(arg1 + 0xb2c))
int32_t edx_3 = edx_2 s>> 3
int32_t edi_2 = (edx_3 u>> 0x1f) + edx_3
int32_t eax_35
int32_t edx_4
edx_4:eax_35 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xbec) - *(arg1 + 0xbe8))
int32_t edx_5 = edx_4 s>> 3
int32_t ebx_2 = (edx_5 u>> 0x1f) + edx_5
int32_t eax_36
int32_t edx_6
edx_6:eax_36 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xca8) - *(arg1 + 0xca4))
int32_t edx_7 = edx_6 s>> 3
int32_t edx_8 = eax_33
int32_t eax_40 = 0
int32_t var_8 = 0

if (edx_8 s>= 4)
    void* eax_42 = *(arg1 + 0xa70) + 0x44
    int32_t i_14 = ((edx_8 - 4) u>> 2) + 1
    var_8 = i_14 << 2
    edx_8 = eax_33
    int32_t i_7 = i_14
    int32_t i
    
    do
        float xmm1_3 = _mm_cvtepi32_ps(zx.o(*(eax_42 - 0x2c))) f+ *(arg1 + 0x12e4)
        *(arg1 + 0x12e4) = xmm1_3
        float xmm0_41 = _mm_cvtepi32_ps(zx.o(*eax_42)) + xmm1_3
        *(arg1 + 0x12e4) = xmm0_41
        float xmm1_6 = _mm_cvtepi32_ps(zx.o(*(eax_42 + 0x2c))) + xmm0_41
        *(arg1 + 0x12e4) = xmm1_6
        uint128_t xmm0_42 = zx.o(*(eax_42 + 0x58))
        eax_42 += 0xb0
        *(arg1 + 0x12e4) = _mm_cvtepi32_ps(xmm0_42) + xmm1_6
        i = i_7
        i_7 -= 1
    while (i != 1)
    eax_40 = var_8

if (eax_40 s< edx_8)
    int32_t ecx_10 = *(arg1 + 0xa70)
    int32_t eax_43 = eax_40 * 0x2c
    int32_t i_10 = edx_8 - var_8
    int32_t i_1
    
    do
        uint128_t xmm0_45 = zx.o(*(ecx_10 + eax_43 + 0x18))
        eax_43 += 0x2c
        *(arg1 + 0x12e4) = _mm_cvtepi32_ps(xmm0_45) f+ *(arg1 + 0x12e4)
        i_1 = i_10
        i_10 -= 1
    while (i_1 != 1)

int32_t edx_10 = 0

if (edi_2 s>= 4)
    void* eax_45 = *(arg1 + 0xb2c) + 0x44
    edx_10 = (((edi_2 - 4) u>> 2) + 1) << 2
    int32_t i_8 = ((edi_2 - 4) u>> 2) + 1
    int32_t i_2
    
    do
        float xmm1_9 = _mm_cvtepi32_ps(zx.o(*(eax_45 - 0x2c))) f+ *(arg1 + 0x12e8)
        *(arg1 + 0x12e8) = xmm1_9
        float xmm0_50 = _mm_cvtepi32_ps(zx.o(*eax_45)) + xmm1_9
        *(arg1 + 0x12e8) = xmm0_50
        float xmm1_12 = _mm_cvtepi32_ps(zx.o(*(eax_45 + 0x2c))) + xmm0_50
        *(arg1 + 0x12e8) = xmm1_12
        uint128_t xmm0_51 = zx.o(*(eax_45 + 0x58))
        eax_45 += 0xb0
        *(arg1 + 0x12e8) = _mm_cvtepi32_ps(xmm0_51) + xmm1_12
        i_2 = i_8
        i_8 -= 1
    while (i_2 != 1)

if (edx_10 s< edi_2)
    int32_t ecx_14 = *(arg1 + 0xb2c)
    int32_t eax_46 = edx_10 * 0x2c
    int32_t i_13 = edi_2 - edx_10
    int32_t i_3
    
    do
        uint128_t xmm0_54 = zx.o(*(ecx_14 + eax_46 + 0x18))
        eax_46 += 0x2c
        *(arg1 + 0x12e8) = _mm_cvtepi32_ps(xmm0_54) f+ *(arg1 + 0x12e8)
        i_3 = i_13
        i_13 -= 1
    while (i_3 != 1)

int32_t edx_11 = 0

if (ebx_2 s>= 4)
    void* eax_48 = *(arg1 + 0xbe8) + 0x44
    edx_11 = (((ebx_2 - 4) u>> 2) + 1) << 2
    int32_t i_9 = ((ebx_2 - 4) u>> 2) + 1
    int32_t i_4
    
    do
        float xmm1_15 = _mm_cvtepi32_ps(zx.o(*(eax_48 - 0x2c))) f+ *(arg1 + 0x12ec)
        *(arg1 + 0x12ec) = xmm1_15
        float xmm0_59 = _mm_cvtepi32_ps(zx.o(*eax_48)) + xmm1_15
        *(arg1 + 0x12ec) = xmm0_59
        float xmm1_18 = _mm_cvtepi32_ps(zx.o(*(eax_48 + 0x2c))) + xmm0_59
        *(arg1 + 0x12ec) = xmm1_18
        uint128_t xmm0_60 = zx.o(*(eax_48 + 0x58))
        eax_48 += 0xb0
        *(arg1 + 0x12ec) = _mm_cvtepi32_ps(xmm0_60) + xmm1_18
        i_4 = i_9
        i_9 -= 1
    while (i_4 != 1)

if (edx_11 s< ebx_2)
    int32_t ecx_18 = *(arg1 + 0xbe8)
    int32_t eax_49 = edx_11 * 0x2c
    int32_t i_11 = ebx_2 - edx_11
    int32_t i_5
    
    do
        int32_t xmm0_63[0x4] = zx.o(*(ecx_18 + eax_49 + 0x18))
        eax_49 += 0x2c
        *(arg1 + 0x12ec) = _mm_cvtepi32_ps(xmm0_63) f+ *(arg1 + 0x12ec)
        i_5 = i_11
        i_11 -= 1
    while (i_5 != 1)

int32_t i_12 = (edx_7 u>> 0x1f) + edx_7

if (i_12 s> 0)
    int32_t eax_50 = *(arg1 + 0x1348)
    int32_t* edi_4 = *(arg1 + 0xca4) + 0x18
    int32_t i_6
    
    do
        int32_t ecx_19 = *edi_4
        edi_4 = &edi_4[0xb]
        eax_50 = ecx_19 * eax_50 s/ 0xff
        *(arg1 + 0x1348) = eax_50
        i_6 = i_12
        i_12 -= 1
    while (i_6 != 1)

int32_t* eax_54 = *(arg1 + 0x12a0)
int32_t eax_55

if (eax_54 == 0)
    eax_55 = 0
else
    eax_55 = *eax_54

*(arg1 + 0x12d4) += eax_55
void* eax_56 = *(arg1 + 0x12a0)
int32_t eax_57

if (eax_56 == 0)
    eax_57 = 0
else
    eax_57 = *(eax_56 + 4)

*(arg1 + 0x12e4) = _mm_cvtepi32_ps(zx.o(eax_57)) f+ *(arg1 + 0x12e4)
void* eax_58 = *(arg1 + 0x12a0)
int32_t eax_59

if (eax_58 == 0)
    eax_59 = 0
else
    eax_59 = *(eax_58 + 8)

*(arg1 + 0x12e8) = _mm_cvtepi32_ps(zx.o(eax_59)) f+ *(arg1 + 0x12e8)
void* eax_60 = *(arg1 + 0x12a0)
uint32_t eax_61

if (eax_60 == 0)
    eax_61 = 0xff
else
    eax_61 = zx.d(*(eax_60 + 0x10))

int32_t result = *(arg1 + 0x1348) * eax_61 s/ 0xff
*(arg1 + 0x1348) = result
return result
