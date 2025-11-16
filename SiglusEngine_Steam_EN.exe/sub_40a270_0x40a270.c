// 函数: sub_40a270
// 地址: 0x40a270
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t eax = *ebx
int32_t edi_1 = eax s>> 1
int32_t eax_1 = eax s>> 2
void* ecx = arg2 + (edi_1 << 2) - 0x1c
int32_t eax_2 = eax_1 << 2
float* ebp_1 = arg3 + ((eax_1 + edi_1) << 2)
void* eax_3 = eax_2 + ebx[2]
float* edx_1 = ebp_1

do
    long double x87_r7_2 = fconvert.t(*(ecx + 8)) * fconvert.t(*(eax_3 + 0xc))
    edx_1 -= 0x10
    ecx -= 0x20
    eax_3 += 0x10
    *edx_1 = fconvert.s(fneg(x87_r7_2) - fconvert.t(*(ecx + 0x20)) * fconvert.t(*(eax_3 - 8)))
    edx_1[1] = fconvert.s(fconvert.t(*(ecx + 0x20)) * fconvert.t(*(eax_3 - 4))
        - fconvert.t(*(ecx + 0x28)) * fconvert.t(*(eax_3 - 8)))
    edx_1[2] = fconvert.s(fneg(fconvert.t(*(eax_3 - 0xc)) * fconvert.t(*(ecx + 0x38)))
        - fconvert.t(*(ecx + 0x30)) * fconvert.t(*(eax_3 - 0x10)))
    edx_1[3] = fconvert.s(fconvert.t(*(eax_3 - 0xc)) * fconvert.t(*(ecx + 0x30))
        - fconvert.t(*(eax_3 - 0x10)) * fconvert.t(*(ecx + 0x38)))
while (ecx u>= arg2)

float* edx_2 = ebp_1
void* ecx_1 = arg2 + (edi_1 << 2) - 0x20
void* eax_5 = eax_2 + ebx[2]

do
    long double x87_r7_16 = fconvert.t(*(ecx_1 + 0x10)) * fconvert.t(*(eax_5 - 4))
    long double x87_r6_10 = fconvert.t(*(eax_5 - 8)) * fconvert.t(*(ecx_1 + 0x18))
    eax_5 -= 0x10
    ecx_1 -= 0x20
    edx_2 = &edx_2[4]
    edx_2[-4] = fconvert.s(x87_r7_16 + x87_r6_10)
    edx_2[-3] = fconvert.s(fconvert.t(*(ecx_1 + 0x30)) * fconvert.t(*(eax_5 + 8))
        - fconvert.t(*(eax_5 + 0xc)) * fconvert.t(*(ecx_1 + 0x38)))
    edx_2[-2] = fconvert.s(fconvert.t(*(ecx_1 + 0x28)) * fconvert.t(*eax_5)
        + fconvert.t(*(ecx_1 + 0x20)) * fconvert.t(*(eax_5 + 4)))
    edx_2[-1] = fconvert.s(fconvert.t(*(ecx_1 + 0x20)) * fconvert.t(*eax_5)
        - fconvert.t(*(eax_5 + 4)) * fconvert.t(*(ecx_1 + 0x28)))
while (ecx_1 u>= arg2)

float* edx_3 = ebx[2]
int32_t ebp_3 = edi_1 << 2
float ebp_4 = ebp_3 + arg3
float var_14 = ebp_4
int32_t eax_8 = ebx[1] - 6

if (eax_8 s> 0)
    int32_t ecx_3 = edi_1 s>> 1
    float* edx_4 = &edx_3[4]
    float* eax_9 = ebp_4 i+ (ecx_3 << 2) - 0x20
    void* ecx_4 = &eax_9[edi_1 - ecx_3 + 7]
    
    do
        long double x87_r7_28 = fconvert.t(*(ecx_4 - 4)) - fconvert.t(eax_9[6])
        long double x87_r6_18 = fconvert.t(*ecx_4) - fconvert.t(eax_9[7])
        *(ecx_4 - 4) = fconvert.s(fconvert.t(*(ecx_4 - 4)) + fconvert.t(eax_9[6]))
        *ecx_4 = fconvert.s(fconvert.t(eax_9[7]) + fconvert.t(*ecx_4))
        eax_9[6] = fconvert.s(x87_r6_18 * fconvert.t(edx_4[-3]) + x87_r7_28 * fconvert.t(edx_4[-4]))
        eax_9[7] = fconvert.s(x87_r6_18 * fconvert.t(edx_4[-4]) - x87_r7_28 * fconvert.t(edx_4[-3]))
        long double x87_r7_32 = fconvert.t(*(ecx_4 - 0xc)) - fconvert.t(eax_9[4])
        long double x87_r6_23 = fconvert.t(*(ecx_4 - 8)) - fconvert.t(eax_9[5])
        *(ecx_4 - 0xc) = fconvert.s(fconvert.t(eax_9[4]) + fconvert.t(*(ecx_4 - 0xc)))
        *(ecx_4 - 8) = fconvert.s(fconvert.t(*(ecx_4 - 8)) + fconvert.t(eax_9[5]))
        eax_9[4] = fconvert.s(x87_r6_23 * fconvert.t(edx_4[1]) + x87_r7_32 * fconvert.t(*edx_4))
        eax_9[5] = fconvert.s(x87_r6_23 * fconvert.t(*edx_4) - x87_r7_32 * fconvert.t(edx_4[1]))
        long double x87_r7_36 = fconvert.t(*(ecx_4 - 0x14)) - fconvert.t(eax_9[2])
        long double x87_r6_28 = fconvert.t(*(ecx_4 - 0x10)) - fconvert.t(eax_9[3])
        *(ecx_4 - 0x14) = fconvert.s(fconvert.t(eax_9[2]) + fconvert.t(*(ecx_4 - 0x14)))
        *(ecx_4 - 0x10) = fconvert.s(fconvert.t(*(ecx_4 - 0x10)) + fconvert.t(eax_9[3]))
        eax_9[2] = fconvert.s(x87_r6_28 * fconvert.t(edx_4[5]) + x87_r7_36 * fconvert.t(edx_4[4]))
        eax_9[3] = fconvert.s(x87_r6_28 * fconvert.t(edx_4[4]) - x87_r7_36 * fconvert.t(edx_4[5]))
        long double x87_r7_40 = fconvert.t(*(ecx_4 - 0x1c)) - fconvert.t(*eax_9)
        long double x87_r6_33 = fconvert.t(*(ecx_4 - 0x18)) - fconvert.t(eax_9[1])
        *(ecx_4 - 0x1c) = fconvert.s(fconvert.t(*(ecx_4 - 0x1c)) + fconvert.t(*eax_9))
        *(ecx_4 - 0x18) = fconvert.s(fconvert.t(eax_9[1]) + fconvert.t(*(ecx_4 - 0x18)))
        long double x87_r5_27 = x87_r6_33 * fconvert.t(edx_4[9])
        long double x87_r4_8 = x87_r7_40 * fconvert.t(edx_4[8])
        eax_9 -= 0x20
        ecx_4 -= 0x20
        edx_4 = &edx_4[0x10]
        eax_9[8] = fconvert.s(x87_r5_27 + x87_r4_8)
        eax_9[9] = fconvert.s(x87_r6_33 * fconvert.t(edx_4[-8]) - x87_r7_40 * fconvert.t(edx_4[-7]))
    while (eax_9 u>= ebp_4)

int32_t ecx_5 = 1
int32_t var_20 = 1

if (eax_8 - 1 s> 0)
    int32_t var_1c_1 = eax_8 - 1
    bool cond:5_1
    
    do
        int32_t eax_11 = 1 << ecx_5.b
        
        if (eax_11 s> 0)
            int32_t esi_4 = edi_1 s>> ecx_5.b
            arg2 = eax_11
            bool cond:6_1
            
            do
                sub_40ad10(edx_3, ebp_4, esi_4, 4 << ecx_5.b)
                ebp_4 += esi_4 << 2
                cond:6_1 = arg2 != 1
                arg2 -= 1
            while (cond:6_1)
            ebx = arg1
            ebp_4 = var_14
            ecx_5 = var_20
        
        ecx_5 += 1
        cond:5_1 = var_1c_1 != 1
        var_20 = ecx_5
        var_1c_1 -= 1
    while (cond:5_1)

if (edi_1 s> 0)
    uint32_t i_3 = (edi_1 + 0x1f) u>> 5
    uint32_t i
    
    do
        sub_40a780(ebp_4)
        ebp_4 += 0x80
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t eax_17 = *ebx
int32_t* esi_5 = ebx[3]
void* ebp_5 = arg3 + (eax_17 s>> 1 << 2)
float* edx_6 = arg3 + 8
float* eax_18 = ebx[2] + (eax_17 << 2)
float* ecx_10 = ebp_5 + 0xc

do
    int32_t edi_3 = *esi_5
    int32_t ebx_2 = esi_5[1]
    ecx_10 -= 0x10
    long double x87_r7_44 =
        fconvert.t(*(ebp_5 + (edi_3 << 2) + 4)) - fconvert.t(*(ebp_5 + (ebx_2 << 2) + 4))
    float* edi_4 = ebp_5 + (edi_3 << 2)
    float* ebx_3 = ebp_5 + (ebx_2 << 2)
    long double x87_r6_38 = fconvert.t(*(ebp_5 + (ebx_2 << 2))) + fconvert.t(*edi_4)
    arg2 = fconvert.s(x87_r6_38 * fconvert.t(*eax_18) + x87_r7_44 * fconvert.t(eax_18[1]))
    long double x87_r7_46 = x87_r6_38 * fconvert.t(eax_18[1]) - x87_r7_44 * fconvert.t(*eax_18)
    long double x87_r6_44 = (fconvert.t(ebx_3[1]) + fconvert.t(edi_4[1])) * fconvert.t(0.5f)
    float var_20_1 = fconvert.s((fconvert.t(*edi_4) - fconvert.t(*ebx_3)) * fconvert.t(0.5f))
    edx_6[-2] = fconvert.s(fconvert.t(arg2) + x87_r6_44)
    ecx_10[-1] = fconvert.s(x87_r6_44 - fconvert.t(arg2))
    edx_6[-1] = fconvert.s(x87_r7_46 + fconvert.t(var_20_1))
    *ecx_10 = fconvert.s(x87_r7_46 - fconvert.t(var_20_1))
    int32_t edi_5 = esi_5[2]
    int32_t ebx_4 = esi_5[3]
    long double x87_r7_49 =
        fconvert.t(*(ebp_5 + (edi_5 << 2) + 4)) - fconvert.t(*(ebp_5 + (ebx_4 << 2) + 4))
    float* edi_6 = ebp_5 + (edi_5 << 2)
    float* ebx_5 = ebp_5 + (ebx_4 << 2)
    long double x87_r6_49 = fconvert.t(*(ebp_5 + (ebx_4 << 2))) + fconvert.t(*edi_6)
    arg2 = fconvert.s(x87_r6_49 * fconvert.t(eax_18[2]) + x87_r7_49 * fconvert.t(eax_18[3]))
    long double x87_r7_51 = x87_r6_49 * fconvert.t(eax_18[3]) - x87_r7_49 * fconvert.t(eax_18[2])
    long double x87_r6_55 = (fconvert.t(ebx_5[1]) + fconvert.t(edi_6[1])) * fconvert.t(0.5f)
    float var_20_2 = fconvert.s((fconvert.t(*edi_6) - fconvert.t(*ebx_5)) * fconvert.t(0.5f))
    *edx_6 = fconvert.s(fconvert.t(arg2) + x87_r6_55)
    ecx_10[-3] = fconvert.s(x87_r6_55 - fconvert.t(arg2))
    edx_6[1] = fconvert.s(x87_r7_51 + fconvert.t(var_20_2))
    edx_6 = &edx_6[4]
    eax_18 = &eax_18[4]
    esi_5 = &esi_5[4]
    ecx_10[-2] = fconvert.s(x87_r7_51 - fconvert.t(var_20_2))
while (&edx_6[-2] u< &ecx_10[-3])

float* i_1 = ebp_1
float* ecx_12 = ebp_3 + arg1[2]
void* esi_6 = ebp_1
void* eax_20 = arg3 + 0xc

do
    long double x87_r7_54 = fconvert.t(ecx_12[1]) * fconvert.t(*(eax_20 - 0xc))
    long double x87_r6_60 = fconvert.t(*(eax_20 - 8)) * fconvert.t(*ecx_12)
    i_1 -= 0x10
    eax_20 += 0x20
    esi_6 += 0x10
    ecx_12 = &ecx_12[8]
    i_1[3] = fconvert.s(x87_r7_54 - x87_r6_60)
    *(esi_6 - 0x10) = fconvert.s(fneg(fconvert.t(ecx_12[-7]) * fconvert.t(*(eax_20 - 0x28))
        + fconvert.t(*(eax_20 - 0x2c)) * fconvert.t(ecx_12[-8])))
    i_1[2] = fconvert.s(fconvert.t(*(eax_20 - 0x24)) * fconvert.t(ecx_12[-5])
        - fconvert.t(*(eax_20 - 0x20)) * fconvert.t(ecx_12[-6]))
    *(esi_6 - 0xc) = fconvert.s(fneg(fconvert.t(*(eax_20 - 0x20)) * fconvert.t(ecx_12[-5])
        + fconvert.t(*(eax_20 - 0x24)) * fconvert.t(ecx_12[-6])))
    i_1[1] = fconvert.s(fconvert.t(*(eax_20 - 0x1c)) * fconvert.t(ecx_12[-3])
        - fconvert.t(*(eax_20 - 0x18)) * fconvert.t(ecx_12[-4]))
    *(esi_6 - 8) = fconvert.s(fneg(fconvert.t(*(eax_20 - 0x18)) * fconvert.t(ecx_12[-3])
        + fconvert.t(*(eax_20 - 0x1c)) * fconvert.t(ecx_12[-4])))
    *i_1 = fconvert.s(fconvert.t(*(eax_20 - 0x14)) * fconvert.t(ecx_12[-1])
        - fconvert.t(*(eax_20 - 0x10)) * fconvert.t(ecx_12[-2]))
    *(esi_6 - 4) = fconvert.s(fneg(fconvert.t(*(eax_20 - 0x10)) * fconvert.t(ecx_12[-1])
        + fconvert.t(*(eax_20 - 0x14)) * fconvert.t(ecx_12[-2])))
while (eax_20 - 0xc u< i_1)

float* i_2 = ebp_1
void* ecx_14 = eax_2 + arg3 + 8
void* edx_8 = &i_2[2 - edi_1]

do
    long double x87_r7_81 = fconvert.t(i_2[-1])
    i_2 -= 0x10
    edx_8 -= 0x10
    ecx_14 += 0x10
    *(edx_8 + 4) = fconvert.s(x87_r7_81)
    *(ecx_14 - 0x18) = fconvert.s(fneg(x87_r7_81))
    long double x87_r7_83 = fconvert.t(i_2[2])
    *edx_8 = fconvert.s(x87_r7_83)
    *(ecx_14 - 0x14) = fconvert.s(fneg(x87_r7_83))
    long double x87_r7_85 = fconvert.t(i_2[1])
    *(edx_8 - 4) = fconvert.s(x87_r7_85)
    *(ecx_14 - 0x10) = fconvert.s(fneg(x87_r7_85))
    long double x87_r7_87 = fconvert.t(*i_2)
    *(edx_8 - 8) = fconvert.s(x87_r7_87)
    *(ecx_14 - 0xc) = fconvert.s(fneg(x87_r7_87))
while (ecx_14 - 8 u< i_2)

void* ecx_15 = ebp_1
float* result = ebp_1

do
    float esi_9 = *(ecx_15 + 0xc)
    result -= 0x10
    ecx_15 += 0x10
    *result = esi_9
    result[1] = *(ecx_15 - 8)
    result[2] = *(ecx_15 - 0xc)
    result[3] = *(ecx_15 - 0x10)
while (result u> var_14)

return result
