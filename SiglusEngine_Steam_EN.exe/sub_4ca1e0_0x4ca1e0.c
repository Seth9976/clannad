// 函数: sub_4ca1e0
// 地址: 0x4ca1e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_15 = arg2
int32_t var_28 = 0
int32_t i_16 = i_15
char* esi = arg3
BOOL var_8 = 0
char* var_10 = esi
uint32_t eax_2 = (i_15 * arg4) << 2
sub_4d6960(eax_2, &var_8, &var_28, eax_2, arg7)
BOOL edx_1 = var_8
char* eax_3 = esi

if (i_15 s> 0)
    int32_t i_13 = i_15
    int32_t i
    
    do
        *edx_1 = *eax_3
        *(edx_1 + 1) = eax_3[1]
        *(edx_1 + 2) = eax_3[2]
        char ecx_4 = eax_3[3]
        eax_3 = &eax_3[4]
        *(edx_1 + 3) = ecx_4
        edx_1 += 4
        i = i_13
        i_13 -= 1
    while (i != 1)

void* ecx_6 = arg4 - 1

if (ecx_6 s> 1)
    void* i_12 = ecx_6 - 1
    void* i_1
    
    do
        *edx_1 = *eax_3
        *(edx_1 + 1) = eax_3[1]
        *(edx_1 + 2) = eax_3[2]
        void* eax_5 = &eax_3[3] + (i_15 << 2) + 0xfffffff9
        *(edx_1 + 3) = eax_3[3]
        void* edx_3 = edx_1 + 3 + (i_15 << 2) + 0xfffffff9
        *edx_3 = *eax_5
        *(edx_3 + 1) = *(eax_5 + 1)
        *(edx_3 + 2) = *(eax_5 + 2)
        eax_3 = eax_5 + 4
        *(edx_3 + 3) = *(eax_5 + 3)
        edx_1 = edx_3 + 4
        i_1 = i_12
        i_12 -= 1
    while (i_1 != 1)
    i_15 = i_16

if (i_15 s> 0)
    int32_t i_14 = i_15
    int32_t i_2
    
    do
        edx_1 += 4
        *(edx_1 - 4) = *eax_3
        eax_3 = &eax_3[4]
        *(edx_1 - 3) = eax_3[0xfffffffd]
        *(edx_1 - 2) = eax_3[0xfffffffe]
        *(edx_1 - 1) = eax_3[0xffffffff]
        i_2 = i_14
        i_14 -= 1
    while (i_2 != 1)

void* eax_6 = &esi[i_15 << 2]
BOOL ecx_22 = var_8
int32_t eax_11
int32_t edx_4
edx_4:eax_11 = sx.q(zx.d(*(eax_6 + 4)) + zx.d(esi[4]) + zx.d(*eax_6) + zx.d(*esi))
*ecx_22 = ((eax_11 + (edx_4 & 3)) s>> 2).b
int32_t eax_18
int32_t edx_6
edx_6:eax_18 = sx.q(zx.d(*(eax_6 + 5)) + zx.d(esi[5]) + zx.d(*(eax_6 + 1)) + zx.d(esi[1]))
*(ecx_22 + 1) = ((eax_18 + (edx_6 & 3)) s>> 2).b
int32_t eax_25
int32_t edx_8
edx_8:eax_25 = sx.q(zx.d(*(eax_6 + 6)) + zx.d(esi[6]) + zx.d(*(eax_6 + 2)) + zx.d(esi[2]))
*(ecx_22 + 2) = ((eax_25 + (edx_8 & 3)) s>> 2).b
void* ebx_2 = var_8 + 4
int32_t eax_32
int32_t edx_10
edx_10:eax_32 = sx.q(zx.d(*(eax_6 + 7)) + zx.d(esi[7]) + zx.d(*(eax_6 + 3)) + zx.d(esi[3]))
int32_t ecx_33 = i_16 - 1
int32_t var_30 = ecx_33
*(ecx_22 + 3) = ((eax_32 + (edx_10 & 3)) s>> 2).b
void* edi_4 = eax_6

if (ecx_33 s> 1)
    int32_t i_9 = ecx_33 - 1
    int32_t i_3
    
    do
        ebx_2 += 4
        esi = &esi[4]
        uint32_t ecx_36 = zx.d(*(edi_4 + 8)) + zx.d(*(edi_4 + 4))
        edi_4 += 4
        int32_t eax_40
        int32_t edx_12
        edx_12:eax_40 = muls.dp.d(0x2aaaaaab, 
            ecx_36 + zx.d(esi[4]) + zx.d(*esi) + zx.d(*(edi_4 - 4)) + zx.d(esi[0xfffffffc]))
        *(ebx_2 - 4) = (edx_12 u>> 0x1f).b + edx_12.b
        *(ebx_2 - 3) = ((zx.d(*(edi_4 + 5)) + zx.d(*(edi_4 + 1)) + zx.d(esi[5]) + zx.d(esi[1])
            + zx.d(*(edi_4 - 3)) + zx.d(esi[0xfffffffd])) s/ 6).b
        *(ebx_2 - 2) = ((zx.d(*(edi_4 + 6)) + zx.d(*(edi_4 + 2)) + zx.d(esi[6]) + zx.d(esi[2])
            + zx.d(*(edi_4 - 2)) + zx.d(esi[0xfffffffe])) s/ 6).b
        i_3 = i_9
        i_9 -= 1
        *(ebx_2 - 1) = ((zx.d(*(edi_4 + 7)) + zx.d(*(edi_4 + 3)) + zx.d(esi[7]) + zx.d(esi[3])
            + zx.d(*(edi_4 - 1)) + zx.d(esi[0xffffffff])) s/ 6).b
    while (i_3 != 1)
    ecx_33 = var_30

int32_t ebx_3 = i_16 << 2
void* var_c = ecx_6 * ebx_3 + var_8 + 4
char* eax_74 = var_10
char* esi_4 = &arg4[0xfffffffe] * ebx_3 + eax_74
void* edi_5 = &esi_4[ebx_3]

if (ecx_33 s> 1)
    arg4 = ecx_33 - 1
    char* i_4
    
    do
        esi_4 = &esi_4[4]
        int32_t eax_80
        int32_t edx_19
        edx_19:eax_80 = muls.dp.d(0x2aaaaaab, 
            zx.d(*(edi_5 + 8)) + zx.d(*(edi_5 + 4)) + zx.d(esi_4[4]) + zx.d(*esi_4) + zx.d(*edi_5)
                + zx.d(esi_4[0xfffffffc]))
        char* ecx_66 = var_c
        *ecx_66 = (edx_19 u>> 0x1f).b + edx_19.b
        ecx_66[1] = ((zx.d(*(edi_5 + 9)) + zx.d(*(edi_5 + 5)) + zx.d(esi_4[5]) + zx.d(esi_4[1])
            + zx.d(*(edi_5 + 1)) + zx.d(esi_4[0xfffffffd])) s/ 6).b
        ecx_66[2] = ((zx.d(*(edi_5 + 0xa)) + zx.d(*(edi_5 + 6)) + zx.d(esi_4[6]) + zx.d(esi_4[2])
            + zx.d(*(edi_5 + 2)) + zx.d(esi_4[0xfffffffe])) s/ 6).b
        ecx_66[3] = ((zx.d(*(edi_5 + 0xb)) + zx.d(*(edi_5 + 7)) + zx.d(esi_4[7]) + zx.d(esi_4[3])
            + zx.d(*(edi_5 + 3)) + zx.d(esi_4[0xffffffff])) s/ 6).b
        var_c = &ecx_66[4]
        i_4 = arg4
        arg4 -= 1
        edi_5 += 4
    while (i_4 != 1)
    eax_74 = var_10

void* edi_6 = ecx_6
int32_t ecx_93 = var_8 + ebx_3
void* edx_23 = eax_6 + ebx_3
void* var_1c = edx_23

if (edi_6 s> 1)
    void* esi_6 = eax_6 + 6
    void* var_c_4 = &eax_74[6]
    void* edi_7 = edx_23 + 6
    arg4 = ecx_93 + 2
    void* i_10 = edi_6 - 1
    void* edx_25 = var_1c
    void* eax_118 = 0xfffffffe - ebx_3
    void* ecx_95 = 0xfffffffa - ebx_3
    void* var_48_1 = eax_118
    void* var_4c_1 = ecx_95
    void* i_5
    
    do
        uint32_t ecx_101 = zx.d(*(ecx_95 + esi_6)) + zx.d(*(eax_118 + esi_6)) + zx.d(*(esi_6 - 6))
            + zx.d(*(esi_6 - 2)) + zx.d(*(edi_7 - 2)) + zx.d(*edx_25)
        arg4[0xfffffffe] = (ecx_101 s/ 6).b
        uint32_t ecx_107 = zx.d(*(0xfffffffb - ebx_3 + esi_6)) + zx.d(*(0xffffffff - ebx_3 + esi_6))
            + zx.d(*(esi_6 - 5)) + zx.d(*(esi_6 - 1)) + zx.d(*(edi_7 - 5))
        int32_t eax_135
        int32_t edx_27
        edx_27:eax_135 = muls.dp.d(0x2aaaaaab, ecx_107 + zx.d(*(edi_7 - 1)))
        arg4[0xffffffff] = (edx_27 u>> 0x1f).b + edx_27.b
        int32_t eax_146
        int32_t edx_28
        edx_28:eax_146 = muls.dp.d(0x2aaaaaab, 
            zx.d(*(0xfffffffc - ebx_3 + esi_6)) + zx.d(*(esi_6 - 4)) + zx.d(*(edi_7 - 4))
                + zx.d(*edi_7) + zx.d(*esi_6) + zx.d(*var_c_4))
        *arg4 = (edx_28 u>> 0x1f).b + edx_28.b
        uint32_t ecx_121 = zx.d(*(0xfffffffd - ebx_3 + esi_6)) + zx.d(*(1 - ebx_3 + esi_6))
            + zx.d(*(esi_6 - 3)) + zx.d(*(esi_6 + 1)) + zx.d(*(edi_7 - 3))
        int32_t eax_157
        int32_t edx_29
        edx_29:eax_157 = muls.dp.d(0x2aaaaaab, ecx_121 + zx.d(*(edi_7 + 1)))
        arg4[1] = (edx_29 u>> 0x1f).b + edx_29.b
        var_c_4 += ebx_3
        arg4 = &arg4[ebx_3]
        esi_6 += ebx_3
        eax_118 = var_48_1
        edx_25 = var_1c + ebx_3
        ecx_95 = var_4c_1
        edi_7 += ebx_3
        i_5 = i_10
        i_10 -= 1
        var_1c = edx_25
    while (i_5 != 1)
    edi_6 = ecx_6

char* ecx_125 = var_10
void* eax_163 = &ecx_125[(i_16 - 2) << 2]
char* var_1c_1 = eax_163
void* edx_31 = eax_163 + ebx_3
char* var_20_1 = edx_31
void* var_18 = edx_31 + ebx_3

if (edi_6 s> 1)
    char* esi_8 = eax_163 + 6
    void* edi_8 = edx_31 + 6
    void* edx_33 = var_18 + 6
    void* var_c_5 = edx_33
    arg4 = eax_163 - ecx_125 + ebx_3 + var_8 + 6
    void* i_8 = ecx_6 - 1
    void* i_6
    
    do
        char* eax_175 = var_1c_1
        var_1c_1 = &var_1c_1[ebx_3]
        int32_t eax_177
        int32_t edx_34
        edx_34:eax_177 = muls.dp.d(0x2aaaaaab, 
            zx.d(*(edx_33 - 2)) + zx.d(*(edi_8 - 2)) + zx.d(esi_8[0xfffffffe]) + zx.d(*var_18)
                + zx.d(*var_20_1) + zx.d(*eax_175))
        arg4[0xfffffffe] = (edx_34 u>> 0x1f).b + edx_34.b
        uint32_t ecx_140 = zx.d(*(var_c_5 - 5)) + zx.d(*(var_c_5 - 1)) + zx.d(*(edi_8 - 5))
            + zx.d(*(edi_8 - 1)) + zx.d(esi_8[0xfffffffb]) + zx.d(esi_8[0xffffffff])
        char* edx_36 = var_c_5
        arg4[0xffffffff] = (ecx_140 s/ 6).b
        int32_t eax_196
        int32_t edx_37
        edx_37:eax_196 = muls.dp.d(0x2aaaaaab, 
            zx.d(edx_36[0xfffffffc]) + zx.d(*(edi_8 - 4)) + zx.d(esi_8[0xfffffffc]) + zx.d(*edx_36)
                + zx.d(*esi_8) + zx.d(*edi_8))
        *arg4 = (edx_37 u>> 0x1f).b + edx_37.b
        uint32_t ecx_154 = zx.d(*(var_c_5 - 3)) + zx.d(*(var_c_5 + 1)) + zx.d(*(edi_8 - 3))
            + zx.d(*(edi_8 + 1)) + zx.d(esi_8[0xfffffffd]) + zx.d(esi_8[1])
        arg4[1] = (ecx_154 s/ 6).b
        arg4 = &arg4[ebx_3]
        esi_8 = &esi_8[ebx_3]
        var_20_1 = &var_20_1[ebx_3]
        edx_33 = var_c_5 + ebx_3
        var_18 += ebx_3
        edi_8 += ebx_3
        i_6 = i_8
        i_8 -= 1
        var_c_5 = edx_33
    while (i_6 != 1)
    ecx_125 = var_10
    edi_6 = ecx_6

void* edx_41 = eax_6 + ebx_3
void* var_24_1 = edx_41

if (edi_6 s> 1)
    void* eax_212 = ecx_93 + 4 - ecx_125
    void* var_50_1 = eax_212
    void* i_11 = edi_6 - 1
    void* i_7
    
    do
        void* var_c_6 = edx_41
        arg4 = eax_212 + ecx_125
        char* esi_9 = ecx_125
        ecx_125 = &ecx_125[ebx_3]
        char* edi_10 = ecx_125
        
        if (var_30 s> 1)
            int32_t j_1 = var_30 - 1
            int32_t j
            
            do
                int32_t eax_224
                int32_t edx_42
                edx_42:eax_224 = muls.dp.d(0x38e38e39, 
                    zx.d(*(edx_41 + 8)) + zx.d(*(edx_41 + 4)) + zx.d(edi_10[8]) + zx.d(edi_10[4])
                        + zx.d(esi_9[8]) + zx.d(esi_9[4]) + zx.d(*edi_10) + zx.d(*esi_9)
                        + zx.d(*edx_41))
                int32_t edx_43 = edx_42 s>> 1
                *arg4 = (edx_43 u>> 0x1f).b + edx_43.b
                int32_t eax_236
                int32_t edx_46
                edx_46:eax_236 = muls.dp.d(0x38e38e39, 
                    zx.d(*(var_c_6 + 9)) + zx.d(*(var_c_6 + 5)) + zx.d(edi_10[9]) + zx.d(edi_10[5])
                        + zx.d(esi_9[9]) + zx.d(esi_9[5]) + zx.d(edi_10[1]) + zx.d(esi_9[1])
                        + zx.d(*(var_c_6 + 1)))
                int32_t edx_47 = edx_46 s>> 1
                arg4[1] = (edx_47 u>> 0x1f).b + edx_47.b
                int32_t eax_248
                int32_t edx_50
                edx_50:eax_248 = muls.dp.d(0x38e38e39, 
                    zx.d(*(var_c_6 + 0xa)) + zx.d(*(var_c_6 + 6)) + zx.d(edi_10[0xa])
                        + zx.d(edi_10[6]) + zx.d(esi_9[0xa]) + zx.d(esi_9[6]) + zx.d(edi_10[2])
                        + zx.d(esi_9[2]) + zx.d(*(var_c_6 + 2)))
                int32_t edx_51 = edx_50 s>> 1
                esi_9 = &esi_9[4]
                edi_10 = &edi_10[4]
                arg4[2] = (edx_51 u>> 0x1f).b + edx_51.b
                uint32_t ecx_198 = zx.d(*(var_c_6 + 0xb)) + zx.d(*(var_c_6 + 7)) + zx.d(edi_10[7])
                    + zx.d(edi_10[3]) + zx.d(esi_9[7]) + zx.d(esi_9[3]) + zx.d(edi_10[0xffffffff])
                    + zx.d(esi_9[0xffffffff]) + zx.d(*(var_c_6 + 3))
                arg4[3] = (ecx_198 s/ 9).b
                edx_41 = var_c_6 + 4
                var_c_6 = edx_41
                j = j_1
                j_1 -= 1
                arg4 = &arg4[4]
            while (j != 1)
        
        eax_212 = var_50_1
        edx_41 = var_24_1 + ebx_3
        i_7 = i_11
        i_11 -= 1
        var_24_1 = edx_41
    while (i_7 != 1)

*arg5 = var_28
*arg6 = var_8
return arg6
