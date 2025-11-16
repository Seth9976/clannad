// 函数: sub_4c7750
// 地址: 0x4c7750
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg8

if (edi s>= arg2)
    return 

int32_t esi_1 = arg9

if (esi_1 s>= arg4)
    return 

int32_t j_5 = arg6
int32_t var_c_1

if (edi s>= 0)
    var_c_1 = 0
else
    j_5 += edi
    int32_t eax_1 = neg.d(edi)
    edi = 0
    var_c_1 = eax_1

arg1 = arg2 - edi

if (arg1 s< j_5)
    j_5 = arg1

int32_t j_4 = j_5

if (j_5 s<= 0)
    return 

if (esi_1 s>= 0)
    arg8 = 0
    arg1 = arg7
else
    arg8 = neg.d(esi_1)
    arg1 = arg7 + esi_1
    esi_1 = 0

int32_t ecx_1 = arg4 - esi_1

if (ecx_1 s< arg1)
    arg1 = ecx_1

int32_t i_6 = arg1

if (arg1 s<= 0)
    return 

if (data_641b68 == 0)
    __builtin_memcpy(&data_20af1a0, 
        "\x00\x00\x00\xff\x00\x00\x00\x40\x00\x00\x00\x80\x00\x00\x00\xc0\x00\x00\x00\xff", 0x14)
    int32_t edx = 0x10
    
    for (void* i = &data_20af1b4; i s< &data_20af1f0; i += 4)
        int32_t eax_6 = edx
        edx += 0x10
        *i = eax_6 << 0x18
    
    sub_4c7570()
    data_641b68 = 1

int32_t* eax_14 = arg3 + ((esi_1 * arg2 + edi) << 2)
int32_t eax_16 = arg6 - j_5
uint32_t xmm1_1[0x4] =
    _mm_shuffle_epi32(zx.o((zx.d(arg10) << 8 | zx.d(arg11)) << 8) | zx.o(arg12), 0)
arg5 = &arg5[arg8 * arg6 + var_c_1]
arg1 = data_1c041fc

if (arg1 == 1)
    data_20af160 = data_20af1a0 | xmm1_1
    int32_t* edi_1 = eax_14
    char* esi_4 = arg5
    int32_t i_4 = i_6
    int32_t i_1
    
    do
        int32_t j_2 = j_4
        int32_t j
        
        do
            int32_t eax_17
            eax_17.b = *esi_4
            eax_17.b = eax_17.b
            
            if (eax_17.b != 0)
                if (eax_17.b != 4)
                    void* esi_5 = &data_20af160 + (eax_17 << 2)
                    j_5.b = *(edi_1 + 3)
                    j_5.b = j_5.b
                    
                    if (j_5.b != 0)
                        j_5.b = *(esi_5 + 3)
                        data_20af144 = j_5
                        int32_t ecx_11 = data_20af144 << 2
                        int32_t eax_18
                        eax_18.b = *(edi_1 + 3)
                        eax_17 = eax_18 << 2
                        int32_t ecx_15 = *(*(ecx_11 + &data_6c2370) + eax_17)
                        
                        if (ecx_15 != 0)
                            int32_t edx_7 = *(*(ecx_11 + &data_681f70) + eax_17)
                            int32_t ebx_1
                            ebx_1.b = *(esi_5 + 2)
                            data_20af148 = ebx_1
                            int32_t ebx_2
                            ebx_2.b = *(esi_5 + 1)
                            data_20af14c = ebx_2
                            int32_t ebx_3
                            ebx_3.b = *esi_5
                            data_20af150 = ebx_3
                            eax_17 = data_20af144
                            
                            if (eax_17 != 0xff)
                                int32_t ebx_8
                                ebx_8.b = *(edi_1 + 3)
                                
                                if (ebx_8 != 0)
                                    int32_t eax_21 = *((eax_17 << 2) + &data_641b70)
                                    data_20af148 = *((data_20af148 << 2) + eax_21)
                                    data_20af14c = *((data_20af14c << 2) + eax_21)
                                    data_20af150 = *((data_20af150 << 2) + eax_21)
                                    int32_t eax_22
                                    eax_22.b = *(edi_1 + 2)
                                    *(edi_1 + 2) = (divu.dp.d(mulu.dp.d(eax_22, edx_7), ecx_15)).b
                                    int32_t eax_27
                                    eax_27.b = *(edi_1 + 1)
                                    *(edi_1 + 1) = (divu.dp.d(mulu.dp.d(eax_27, edx_7), ecx_15)).b
                                    int32_t eax_32
                                    eax_32.b = *edi_1
                                    *edi_1 = divu.dp.d(mulu.dp.d(eax_32, edx_7), ecx_15).b
                                    *(edi_1 + 3) = ecx_15.b
                                else
                                    *(edi_1 + 2) = (data_20af148).b
                                    *(edi_1 + 1) = (data_20af14c).b
                                    *edi_1 = data_20af150.b
                                    *(edi_1 + 3) = eax_17.b
                            else
                                *(edi_1 + 2) = (data_20af148).b
                                *(edi_1 + 1) = (data_20af14c).b
                                *edi_1 = data_20af150.b
                                *(edi_1 + 3) = eax_17.b
                    else
                        *edi_1 = *esi_5
                else
                    *edi_1 = data_20af160.d
            
            edi_1 = &edi_1[1]
            esi_4 = &esi_4[1]
            j = j_2
            j_2 -= 1
        while (j != 1)
        edi_1 = &edi_1[arg2 - j_5]
        esi_4 = &esi_4[eax_16]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    return 

if (arg1 != 2)
    return 

for (void* i_2 = nullptr; i_2 s< 0x40; i_2 += 0x20)
    *(i_2 + &data_20af160) = *(i_2 + &data_20af1b0) | xmm1_1
    *(i_2 + 0x20af170) = *(i_2 + 0x20af1c0) | xmm1_1

int32_t* edi_2 = eax_14
char* esi_6 = arg5
int32_t i_5 = i_6
int32_t i_3

do
    int32_t j_3 = j_4
    int32_t j_1
    
    do
        arg1.b = *esi_6
        arg1.b = arg1.b
        
        if (arg1.b != 0)
            if (arg1.b != 0x10)
                void* esi_7 = &data_20af160 + (arg1 << 2)
                j_5.b = *(edi_2 + 3)
                j_5.b = j_5.b
                
                if (j_5.b != 0)
                    j_5.b = *(esi_7 + 3)
                    data_20af144 = j_5
                    int32_t ecx_19 = data_20af144 << 2
                    int32_t eax_36
                    eax_36.b = *(edi_2 + 3)
                    arg1 = eax_36 << 2
                    int32_t ecx_23 = *(*(ecx_19 + &data_6c2370) + arg1)
                    
                    if (ecx_23 != 0)
                        int32_t edx_16 = *(*(ecx_19 + &data_681f70) + arg1)
                        int32_t ebx_24
                        ebx_24.b = *(esi_7 + 2)
                        data_20af148 = ebx_24
                        int32_t ebx_25
                        ebx_25.b = *(esi_7 + 1)
                        data_20af14c = ebx_25
                        int32_t ebx_26
                        ebx_26.b = *esi_7
                        data_20af150 = ebx_26
                        arg1 = data_20af144
                        
                        if (arg1 != 0xff)
                            int32_t ebx_31
                            ebx_31.b = *(edi_2 + 3)
                            
                            if (ebx_31 != 0)
                                int32_t eax_39 = *((arg1 << 2) + &data_641b70)
                                data_20af148 = *((data_20af148 << 2) + eax_39)
                                data_20af14c = *((data_20af14c << 2) + eax_39)
                                data_20af150 = *((data_20af150 << 2) + eax_39)
                                int32_t eax_40
                                eax_40.b = *(edi_2 + 2)
                                *(edi_2 + 2) = (divu.dp.d(mulu.dp.d(eax_40, edx_16), ecx_23)).b
                                int32_t eax_45
                                eax_45.b = *(edi_2 + 1)
                                *(edi_2 + 1) = (divu.dp.d(mulu.dp.d(eax_45, edx_16), ecx_23)).b
                                int32_t eax_50
                                eax_50.b = *edi_2
                                *edi_2 = divu.dp.d(mulu.dp.d(eax_50, edx_16), ecx_23).b
                                *(edi_2 + 3) = ecx_23.b
                            else
                                *(edi_2 + 2) = (data_20af148).b
                                *(edi_2 + 1) = (data_20af14c).b
                                *edi_2 = data_20af150.b
                                *(edi_2 + 3) = arg1.b
                        else
                            *(edi_2 + 2) = (data_20af148).b
                            *(edi_2 + 1) = (data_20af14c).b
                            *edi_2 = data_20af150.b
                            *(edi_2 + 3) = arg1.b
                else
                    *edi_2 = *esi_7
            else
                *edi_2 = data_20af160.d
        
        edi_2 = &edi_2[1]
        esi_6 = &esi_6[1]
        j_1 = j_3
        j_3 -= 1
    while (j_1 != 1)
    edi_2 = &edi_2[arg2 - j_5]
    esi_6 = &esi_6[eax_16]
    i_3 = i_5
    i_5 -= 1
while (i_3 != 1)
