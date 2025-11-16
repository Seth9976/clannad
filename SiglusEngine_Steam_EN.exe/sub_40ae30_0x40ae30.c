// 函数: sub_40ae30
// 地址: 0x40ae30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *arg1
int32_t eax_2 = eax_1 << 2
int32_t i_8 = eax_1 s>> 2
int32_t eax_3
eax_3.b = (eax_2 + 3).b & 0xfc
int32_t esi_1 = eax_1 s>> 1
int32_t edi_1 = eax_1 s>> 3
__chkstk(eax_3)
int32_t eax_4 = esi_1 << 2
int32_t __saved_edi
int32_t* var_18 = &__saved_edi
void* ecx = &(&__saved_edi)[esi_1]
void* ecx_1 = arg2 + ((i_8 + esi_1) << 2)
uint32_t var_c = 0
float* eax_5 = eax_4 + arg1[2]
float* ebx_2 = ecx_1 + 4

if (edi_1 s> 0)
    void* var_10_1 = ecx
    uint32_t edx_4 = (edi_1 + 1) u>> 1
    uint32_t var_14_1 = edx_4
    var_c = edx_4 * 2
    bool cond:1_1
    
    do
        long double x87_r7_2 = fconvert.t(*(ecx_1 - 8)) + fconvert.t(*ebx_2)
        long double x87_r6_1 = fconvert.t(ebx_2[2])
        ecx_1 -= 0x10
        eax_5 -= 8
        ebx_2 = &ebx_2[4]
        long double x87_r6_2 = x87_r6_1 + fconvert.t(*ecx_1)
        void* edx_7 = var_10_1 + 8
        var_10_1 = edx_7
        *(edx_7 - 8) = fconvert.s(x87_r6_2 * fconvert.t(eax_5[1]) + x87_r7_2 * fconvert.t(*eax_5))
        *(edx_7 - 4) = fconvert.s(x87_r6_2 * fconvert.t(*eax_5) - x87_r7_2 * fconvert.t(eax_5[1]))
        cond:1_1 = var_14_1 != 1
        var_14_1 -= 1
    while (cond:1_1)

int32_t ebx_4 = esi_1 - edi_1
float* edx_11 = arg2 + 4

if (var_c s< ebx_4)
    void* ebx_6 = ecx + (var_c << 2)
    uint32_t i_4 = (ebx_4 - var_c + 1) u>> 1
    var_c += i_4 << 1
    void* edi_4 = ebx_6
    uint32_t i
    
    do
        long double x87_r7_6 = fconvert.t(*(ecx_1 - 8)) - fconvert.t(*edx_11)
        long double x87_r6_6 = fconvert.t(*(ecx_1 - 0x10))
        ecx_1 -= 0x10
        eax_5 -= 8
        long double x87_r6_7 = x87_r6_6 - fconvert.t(edx_11[2])
        edx_11 = &edx_11[4]
        edi_4 += 8
        i = i_4
        i_4 -= 1
        *(edi_4 - 8) = fconvert.s(x87_r6_7 * fconvert.t(eax_5[1]) + x87_r7_6 * fconvert.t(*eax_5))
        *(edi_4 - 4) = fconvert.s(x87_r6_7 * fconvert.t(*eax_5) - x87_r7_6 * fconvert.t(eax_5[1]))
    while (i != 1)

void* ebx_10 = ecx
float* edi_6 = arg2 + eax_2

if (var_c s< esi_1)
    void* ecx_4 = ebx_10 + (var_c << 2)
    uint32_t i_5 = (esi_1 - var_c + 1) u>> 1
    uint32_t i_1
    
    do
        long double x87_r7_9 = fconvert.t(edi_6[-2])
        edi_6 -= 0x10
        eax_5 -= 8
        long double x87_r7_11 = fneg(x87_r7_9) - fconvert.t(*edx_11)
        long double x87_r6_13 = fneg(fconvert.t(*edi_6)) - fconvert.t(edx_11[2])
        edx_11 = &edx_11[4]
        ecx_4 += 8
        i_1 = i_5
        i_5 -= 1
        *(ecx_4 - 8) = fconvert.s(x87_r6_13 * fconvert.t(eax_5[1]) + x87_r7_11 * fconvert.t(*eax_5))
        *(ecx_4 - 4) = fconvert.s(x87_r6_13 * fconvert.t(*eax_5) - x87_r7_11 * fconvert.t(eax_5[1]))
    while (i_1 != 1)
    ebx_10 = ecx

int32_t* edx_13 = arg1
float* edi_7 = edx_13[2]
void* eax_7 = edx_13[1] - 6

if (eax_7 s> 0)
    float* edx_12 = &edi_7[4]
    int32_t ecx_6 = esi_1 s>> 1
    void* eax_8 = ebx_10 + (ecx_6 << 2) - 0x20
    void* ecx_7 = eax_8 + ((esi_1 - ecx_6) << 2) + 0x1c
    
    do
        long double x87_r7_15 = fconvert.t(*(ecx_7 - 4)) - fconvert.t(*(eax_8 + 0x18))
        long double x87_r6_18 = fconvert.t(*ecx_7) - fconvert.t(*(eax_8 + 0x1c))
        *(ecx_7 - 4) = fconvert.s(fconvert.t(*(eax_8 + 0x18)) + fconvert.t(*(ecx_7 - 4)))
        *ecx_7 = fconvert.s(fconvert.t(*(eax_8 + 0x1c)) + fconvert.t(*ecx_7))
        *(eax_8 + 0x18) =
            fconvert.s(x87_r7_15 * fconvert.t(edx_12[-4]) + x87_r6_18 * fconvert.t(edx_12[-3]))
        *(eax_8 + 0x1c) =
            fconvert.s(x87_r6_18 * fconvert.t(edx_12[-4]) - x87_r7_15 * fconvert.t(edx_12[-3]))
        long double x87_r7_19 = fconvert.t(*(ecx_7 - 0xc)) - fconvert.t(*(eax_8 + 0x10))
        long double x87_r6_23 = fconvert.t(*(ecx_7 - 8)) - fconvert.t(*(eax_8 + 0x14))
        *(ecx_7 - 0xc) = fconvert.s(fconvert.t(*(eax_8 + 0x10)) + fconvert.t(*(ecx_7 - 0xc)))
        *(ecx_7 - 8) = fconvert.s(fconvert.t(*(ecx_7 - 8)) + fconvert.t(*(eax_8 + 0x14)))
        *(eax_8 + 0x10) =
            fconvert.s(x87_r6_23 * fconvert.t(edx_12[1]) + x87_r7_19 * fconvert.t(*edx_12))
        *(eax_8 + 0x14) =
            fconvert.s(x87_r6_23 * fconvert.t(*edx_12) - x87_r7_19 * fconvert.t(edx_12[1]))
        long double x87_r7_23 = fconvert.t(*(ecx_7 - 0x14)) - fconvert.t(*(eax_8 + 8))
        long double x87_r6_28 = fconvert.t(*(ecx_7 - 0x10)) - fconvert.t(*(eax_8 + 0xc))
        *(ecx_7 - 0x14) = fconvert.s(fconvert.t(*(eax_8 + 8)) + fconvert.t(*(ecx_7 - 0x14)))
        *(ecx_7 - 0x10) = fconvert.s(fconvert.t(*(eax_8 + 0xc)) + fconvert.t(*(ecx_7 - 0x10)))
        *(eax_8 + 8) =
            fconvert.s(x87_r6_28 * fconvert.t(edx_12[5]) + x87_r7_23 * fconvert.t(edx_12[4]))
        *(eax_8 + 0xc) =
            fconvert.s(x87_r6_28 * fconvert.t(edx_12[4]) - x87_r7_23 * fconvert.t(edx_12[5]))
        long double x87_r7_27 = fconvert.t(*(ecx_7 - 0x1c)) - fconvert.t(*eax_8)
        long double x87_r6_33 = fconvert.t(*(ecx_7 - 0x18)) - fconvert.t(*(eax_8 + 4))
        *(ecx_7 - 0x1c) = fconvert.s(fconvert.t(*(ecx_7 - 0x1c)) + fconvert.t(*eax_8))
        *(ecx_7 - 0x18) = fconvert.s(fconvert.t(*(eax_8 + 4)) + fconvert.t(*(ecx_7 - 0x18)))
        long double x87_r5_36 = x87_r6_33 * fconvert.t(edx_12[9])
        long double x87_r4_14 = x87_r7_27 * fconvert.t(edx_12[8])
        eax_8 -= 0x20
        ecx_7 -= 0x20
        edx_12 = &edx_12[0x10]
        *(eax_8 + 0x20) = fconvert.s(x87_r5_36 + x87_r4_14)
        *(eax_8 + 0x24) =
            fconvert.s(x87_r6_33 * fconvert.t(edx_12[-8]) - x87_r7_27 * fconvert.t(edx_12[-7]))
    while (eax_8 u>= ebx_10)
    
    edx_13 = arg1

int32_t ecx_8 = 1
int32_t var_14_3 = 1

if (eax_7 - 1 s> 0)
    void* var_10_3 = eax_7 - 1
    bool cond:7_1
    
    do
        int32_t edx_14 = 1 << ecx_8.b
        
        if (edx_14 s> 0)
            int32_t eax_10 = 4 << ecx_8.b
            int32_t edi_11 = esi_1 s>> ecx_8.b
            arg2 = edx_14
            int32_t var_1c_1 = eax_10
            
            while (true)
                sub_40ad10(edi_7, ebx_10, edi_11, eax_10)
                ebx_10 += edi_11 << 2
                bool cond:9_1 = arg2 != 1
                arg2 -= 1
                
                if (not(cond:9_1))
                    break
                
                eax_10 = var_1c_1
            
            ecx_8 = var_14_3
            ebx_10 = ecx
        
        ecx_8 += 1
        cond:7_1 = var_10_3 != 1
        var_14_3 = ecx_8
        var_10_3 -= 1
    while (cond:7_1)
    edx_13 = arg1

if (esi_1 s> 0)
    uint32_t i_7 = (esi_1 + 0x1f) u>> 5
    uint32_t i_2
    
    do
        sub_40a780(ebx_10)
        ebx_10 += 0x80
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)
    edx_13 = arg1

int32_t eax_16 = *edx_13
int32_t* esi_3 = edx_13[3]
float* eax_17 = edx_13[2] + (eax_16 << 2)
void* edx_17 = &var_18[2]
void* edi_14 = &var_18[eax_16 s>> 1]
void* var_14_4 = edi_14
void* ecx_10 = edi_14 + 0xc

while (true)
    ecx_10 -= 0x10
    void* ebx_15 = edi_14 + (*esi_3 << 2)
    void* edi_15 = edi_14 + (esi_3[1] << 2)
    long double x87_r7_31 = fconvert.t(*(ebx_15 + 4)) - fconvert.t(*(edi_15 + 4))
    long double x87_r6_38 = fconvert.t(*edi_15) + fconvert.t(*ebx_15)
    arg2 = fconvert.s(x87_r7_31 * fconvert.t(eax_17[1]) + x87_r6_38 * fconvert.t(*eax_17))
    long double x87_r7_33 = x87_r6_38 * fconvert.t(eax_17[1]) - x87_r7_31 * fconvert.t(*eax_17)
    long double x87_r6_44 =
        (fconvert.t(*(edi_15 + 4)) + fconvert.t(*(ebx_15 + 4))) * fconvert.t(0.5f)
    float var_c_2 = fconvert.s((fconvert.t(*ebx_15) - fconvert.t(*edi_15)) * fconvert.t(0.5f))
    *(edx_17 - 8) = fconvert.s(fconvert.t(arg2) + x87_r6_44)
    *(ecx_10 - 4) = fconvert.s(x87_r6_44 - fconvert.t(arg2))
    *(edx_17 - 4) = fconvert.s(x87_r7_33 + fconvert.t(var_c_2))
    *ecx_10 = fconvert.s(x87_r7_33 - fconvert.t(var_c_2))
    void* ebx_19 = var_14_4 + (esi_3[2] << 2)
    float* edi_17 = var_14_4 + (esi_3[3] << 2)
    long double x87_r7_36 = fconvert.t(*(ebx_19 + 4)) - fconvert.t(edi_17[1])
    long double x87_r6_49 = fconvert.t(*edi_17) + fconvert.t(*ebx_19)
    arg2 = fconvert.s(x87_r6_49 * fconvert.t(eax_17[2]) + x87_r7_36 * fconvert.t(eax_17[3]))
    long double x87_r7_38 = x87_r6_49 * fconvert.t(eax_17[3]) - x87_r7_36 * fconvert.t(eax_17[2])
    long double x87_r6_55 = (fconvert.t(edi_17[1]) + fconvert.t(*(ebx_19 + 4))) * fconvert.t(0.5f)
    float var_c_3 = fconvert.s((fconvert.t(*ebx_19) - fconvert.t(*edi_17)) * fconvert.t(0.5f))
    *edx_17 = fconvert.s(fconvert.t(arg2) + x87_r6_55)
    edx_17 += 0x10
    eax_17 = &eax_17[4]
    esi_3 = &esi_3[4]
    *(ecx_10 - 0xc) = fconvert.s(x87_r6_55 - fconvert.t(arg2))
    *(edx_17 - 0xc) = fconvert.s(x87_r7_38 + fconvert.t(var_c_3))
    *(ecx_10 - 8) = fconvert.s(x87_r7_38 - fconvert.t(var_c_3))
    
    if (edx_17 - 8 u>= ecx_10 - 0xc)
        break
    
    edi_14 = var_14_4

void* esi_4 = arg3
int32_t i_6 = i_8
void* result = eax_4 + arg1[2]
void* edx_19 = eax_4 + esi_4

if (i_6 s> 0)
    int32_t* ecx_12 = var_18
    int32_t i_3
    
    do
        long double x87_r7_41 = fconvert.t(*result) * fconvert.t(*ecx_12)
        long double x87_r6_60 = fconvert.t(*(result + 4)) * fconvert.t(ecx_12[1])
        edx_19 -= 4
        ecx_12 = &ecx_12[2]
        result += 8
        esi_4 += 4
        i_3 = i_6
        i_6 -= 1
        *(esi_4 - 4) = fconvert.s((x87_r7_41 + x87_r6_60) * fconvert.t(arg1[4]))
        *edx_19 = fconvert.s((fconvert.t(*(result - 4)) * fconvert.t(ecx_12[-2])
            - fconvert.t(*(result - 8)) * fconvert.t(ecx_12[-1])) * fconvert.t(arg1[4]))
    while (i_3 != 1)

return result
