// 函数: sub_5901c0
// 地址: 0x5901c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1

if (data_1c45988 == 0)
    sub_4d6960(sub_4d6960(i_1, &data_1c4ce40, &data_1c45988, 0x40000, "256_TABLE"), &data_1cd4348, 
        &data_1c45990, 0x400, "256_TABLE_ADR")
    int32_t* esi_1 = data_1c4ce40
    int32_t* ebx_1 = data_1cd4348
    int32_t i = 0
    int32_t var_8_1 = 0
    
    do
        *esi_1 = 0
        int32_t j = 1
        esi_1 = &esi_1[1]
        
        do
            int32_t temp0_1 = divs.dp.d(sx.q(i), j)
            j += 1
            *esi_1 = temp0_1
            esi_1 = &esi_1[1]
        while (j s< 0x100)
        
        i += 0xff
        i_1 = data_1c4ce40 + var_8_1
        *ebx_1 = i_1
        ebx_1 = &ebx_1[1]
        var_8_1 += 0x400
    while (i s< 0xff00)

if (data_1c4ce2c == 0)
    sub_4d6960(sub_4d6960(i_1, &data_1ccce64, &data_1c4ce2c, 0x7fc00, "CLR_TABLE"), &data_1cd4328, 
        &data_1c45538, 0x400, "CLR_TABLE_ADR")
    int32_t ebx_2 = 0
    int32_t* esi_2 = data_1ccce64
    void* var_8_2 = data_1cd4328
    i_1 = 0
    int32_t var_10_1 = 0
    int32_t i_12 = 0
    
    do
        int32_t i_13 = i_1
        int32_t j_3 = 0x1ff
        int32_t j_1
        
        do
            int32_t eax_7
            int32_t edx_5
            edx_5:eax_7 = muls.dp.d(0x80808081, i_13)
            int32_t edx_6 = edx_5 + i_13
            i_13 += ebx_2
            int32_t edx_7 = edx_6 s>> 7
            *esi_2 = (edx_7 u>> 0x1f) + edx_7
            esi_2 = &esi_2[1]
            j_1 = j_3
            j_3 -= 1
        while (j_1 != 1)
        ebx_2 += 1
        int32_t* edx_8 = var_8_2
        int32_t eax_13 = data_1ccce64 + 0x3fc + var_10_1
        var_10_1 += 0x7fc
        *edx_8 = eax_13
        i_1 = i_12 - 0xff
        var_8_2 = &edx_8[1]
        i_12 = i_1
    while (i_1 s> 0xffff0100)

if (data_1ccce6c == 0)
    sub_4d6960(
        sub_4d6960(sub_4d6960(i_1, &data_1cd432c, &data_1ccce6c, 0x400, "MONO_TABLE_R"), 
            &data_1cd4330, &data_1c0550c, 0x400, "MONO_TABLE_G"), 
        &data_1cd4334, &data_1c05504, 0x400, "MONO_TABLE_B")
    void* esi_3 = data_1cd432c
    
    for (int32_t i_2 = 0; i_2 s< 0x1e0000; )
        esi_3 += 4
        int32_t eax_17
        int32_t edx_10
        edx_10:eax_17 = muls.dp.d(0x51eb851f, i_2)
        i_2 += 0x1e00
        int32_t edx_11 = edx_10 s>> 5
        *(esi_3 - 4) = (edx_11 u>> 0x1f) + edx_11
    
    void* esi_4 = data_1cd4330
    
    for (int32_t i_3 = 0; i_3 s< 0x3b0000; )
        esi_4 += 4
        int32_t eax_21
        int32_t edx_12
        edx_12:eax_21 = muls.dp.d(0x51eb851f, i_3)
        i_3 += 0x3b00
        int32_t edx_13 = edx_12 s>> 5
        *(esi_4 - 4) = (edx_13 u>> 0x1f) + edx_13
    
    void* esi_5 = data_1cd4334
    
    for (int32_t i_4 = 0; i_4 s< 0xb0000; )
        esi_5 += 4
        int32_t eax_25
        int32_t edx_14
        edx_14:eax_25 = muls.dp.d(0x51eb851f, i_4)
        i_4 += 0xb00
        int32_t edx_15 = edx_14 s>> 5
        i_1 = (edx_15 u>> 0x1f) + edx_15
        *(esi_5 - 4) = i_1

if (data_1c4597c == 0)
    sub_4d6960(i_1, &data_1c4ce30, &data_1c4597c, 0xbf8, "RGBFILTER_TABLE_ADR")
    int32_t* ecx_3 = data_1c4ce30
    
    for (int32_t* i_5 = nullptr; i_5 s< 0x3fc; )
        int32_t eax_29 = *(i_5 + data_1cd4328)
        i_5 = &i_5[1]
        *ecx_3 = eax_29
        ecx_3 = &ecx_3[1]
    
    data_1c45564 = ecx_3
    
    for (int32_t* i_6 = 0x3fc; i_6 s>= 0xfffffc04; )
        ecx_3 = &ecx_3[1]
        i_1 = *(i_6 + data_1cd4328)
        i_6 -= 4
        ecx_3[-1] = i_1

if (data_1c4553c == 0)
    sub_4d6960(
        sub_4d6960(
            sub_4d6960(
                sub_4d6960(sub_4d6960(i_1, &data_1cd4344, &data_1c4553c, 0x400, "SAT_TABLE_R"), 
                    &data_1cd4340, &data_1c45530, 0x400, "SAT_TABLE_G"), 
                &data_1cd433c, &data_1c45974, 0x400, "SAT_TABLE_B"), 
            &data_1ccce78, &data_1c45998, 0x644dc, "SAT_TABLE_S"), 
        &data_1cd4338, &data_1c4ce20, 0x324, "SAT_TABLE_S_ADR")
    void* esi_6 = data_1cd4344
    
    for (int32_t i_7 = 0; i_7 s< 0x1e0000; )
        esi_6 += 4
        int32_t eax_35
        int32_t edx_16
        edx_16:eax_35 = muls.dp.d(0x51eb851f, i_7)
        i_7 += 0x1e00
        int32_t edx_17 = edx_16 s>> 5
        *(esi_6 - 4) = (edx_17 u>> 0x1f) + edx_17
    
    void* esi_7 = data_1cd4340
    
    for (int32_t i_8 = 0; i_8 s< 0x3b0000; )
        esi_7 += 4
        int32_t eax_39
        int32_t edx_18
        edx_18:eax_39 = muls.dp.d(0x51eb851f, i_8)
        i_8 += 0x3b00
        int32_t edx_19 = edx_18 s>> 5
        *(esi_7 - 4) = (edx_19 u>> 0x1f) + edx_19
    
    void* esi_8 = data_1cd433c
    
    for (int32_t i_9 = 0; i_9 s< 0xb0000; )
        esi_8 += 4
        int32_t eax_43
        int32_t edx_20
        edx_20:eax_43 = muls.dp.d(0x51eb851f, i_9)
        i_9 += 0xb00
        int32_t edx_21 = edx_20 s>> 5
        *(esi_8 - 4) = (edx_21 u>> 0x1f) + edx_21
    
    int32_t* ecx_4 = data_1ccce78
    int32_t ebx_4 = 0
    int32_t* esi_9 = data_1cd4338
    int32_t i_10 = 0
    int32_t i_11 = 0
    
    do
        int32_t j_4 = 0x1fe
        *esi_9 = &ecx_4[0xff]
        int32_t i_14 = i_10
        int32_t j_2
        
        do
            int32_t eax_48
            int32_t edx_22
            edx_22:eax_48 = muls.dp.d(0x51eb851f, i_14)
            i_14 += ebx_4
            int32_t edx_23 = edx_22 s>> 5
            *ecx_4 = (edx_23 u>> 0x1f) + edx_23
            ecx_4 = &ecx_4[1]
            j_2 = j_4
            j_4 -= 1
        while (j_2 != 1)
        ebx_4 += 1
        esi_9 = &esi_9[1]
        i_10 = i_11 - 0xff
        i_11 = i_10
    while (i_10 s> 0xffff37c9)

return sub_58ffe0()
