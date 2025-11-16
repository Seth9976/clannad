// 函数: sub_7400e0
// 地址: 0x7400e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t i_2 = 7
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
void var_174
void* var_1a4 = &var_174
void* eax_9 = arg3 + 0x20
void* ecx_1 = *(arg2 + 0x54) + 0x40
int16_t* var_1b0 = eax_9
void* var_1a0 = ecx_1
int32_t i

do
    int32_t eax_11 = sx.d(*(eax_9 + 0x20)) * *(ecx_1 + 0x40)
    int32_t edi_4 = ((sx.d(*(eax_9 - 0x20)) * *(ecx_1 - 0x40)) << 0xd) + 0x400
    int32_t esi_1 = eax_11 * 0x28c6
    int32_t edx_1 = eax_11 * 0xa12
    int32_t ecx_2 = eax_11 * 0x1c37
    int32_t ebx_2 = edi_4 - ecx_2
    int32_t eax_12 = esi_1 + edi_4
    int32_t eax_13 = edx_1 + edi_4
    int32_t ecx_7 = (ecx_2 * 2 - edx_1 * 2 - esi_1 * 2 + edi_4) s>> 0xb
    int32_t ecx_9 = sx.d(var_1b0[0x20]) * *(var_1a0 + 0x80)
    int32_t esi_3 = sx.d(*var_1b0) * *var_1a0
    int32_t edi_5 = (ecx_9 + esi_3) * 0x2362
    int32_t edx_4 = esi_3 * 0x8bd + edi_5
    int32_t edi_6 = edi_5 - ecx_9 * 0x3704
    int32_t ecx_11 = esi_3 * 0x13a3 - ecx_9 * 0x2c1f
    int32_t eax_20 = edx_4 + eax_12
    int32_t esi_5 = eax_12 - edx_4
    int32_t eax_21 = edi_6 + eax_13
    int32_t edx_6 = eax_13 - edi_6
    int32_t eax_22 = ecx_11 + ebx_2
    int32_t ebx_3 = ebx_2 - ecx_11
    int32_t edi_8 = sx.d(var_1b0[-8]) * *(var_1a0 - 0x20)
    int32_t eax_24 = sx.d(var_1b0[0x18]) * *(var_1a0 + 0x60)
    int32_t ebx_5 = sx.d(var_1b0[8]) * *(var_1a0 + 0x20)
    int32_t edx_8 = sx.d(var_1b0[0x28]) * *(var_1a0 + 0xa0)
    int32_t ecx_13 = eax_24 + edi_8
    int32_t esi_8 = edx_8 << 0xd
    int32_t eax_26 = (ebx_5 + edi_8) * 0x2ab7
    int32_t eax_27 = ecx_13 * 0x2652
    int32_t ecx_14 = ecx_13 * 0x1814
    int32_t edi_12 = esi_8 - edi_8 * 0x2410 + eax_27 + eax_26
    int32_t eax_31 = edi_8 - ebx_5
    int32_t eax_33 = eax_31 * 0xef2 - esi_8
    int32_t ecx_16 = ecx_14 - edi_8 * 0x21f5 + eax_33
    int32_t edx_11 = neg.d(esi_8) - (eax_24 + ebx_5) * 0x511
    int32_t var_198_2 = eax_26 + edx_11 - ebx_5 * 0xd92
    int32_t var_19c_2 = eax_27 + edx_11 - eax_24 * 0x4bf7
    int32_t ecx_19 = (eax_24 - ebx_5) * 0x2cf8
    int32_t var_1bc_2 = ecx_14 + esi_8 - eax_24 * 0x361a + ecx_19
    int32_t ebx_8 = (eax_31 + edx_8 - eax_24) << 2
    int32_t esi_12 = eax_33 + ebx_5 * 0x1599 + ecx_19
    *(var_1a4 - 0x1c) = (eax_20 + edi_12) s>> 0xb
    *(var_1a4 + 0x150) = (eax_20 - edi_12) s>> 0xb
    *(var_1a4 + 0x134) = (eax_21 - var_198_2) s>> 0xb
    *var_1a4 = (eax_21 + var_198_2) s>> 0xb
    *(var_1a4 + 0x1c) = (eax_22 + var_19c_2) s>> 0xb
    *(var_1a4 + 0x118) = (eax_22 - var_19c_2) s>> 0xb
    *(var_1a4 + 0xfc) = ecx_7 - ebx_8
    *(var_1a4 + 0x38) = ebx_8 + ecx_7
    *(var_1a4 + 0x54) = (ebx_3 + var_1bc_2) s>> 0xb
    *(var_1a4 + 0xe0) = (ebx_3 - var_1bc_2) s>> 0xb
    *(var_1a4 + 0x70) = (edx_6 + esi_12) s>> 0xb
    *(var_1a4 + 0xc4) = (edx_6 - esi_12) s>> 0xb
    ecx_1 = var_1a0 + 4
    *(var_1a4 + 0x8c) = (ecx_16 + esi_5) s>> 0xb
    eax_9 = &var_1b0[1]
    *(var_1a4 + 0xa8) = (esi_5 - ecx_16) s>> 0xb
    i = i_2
    i_2 -= 1
    var_1b0 = eax_9
    var_1a0 = ecx_1
    var_1a4 += 4
while (i != 1)
int32_t i_1 = 0
void var_180
void* result = &var_180
int32_t i_3 = 0

do
    int32_t ebx_9 = *result
    int32_t edi_15 = *(result - 8)
    char* ecx_34 = *(arg4 + (i_1 << 2)) + arg5
    int32_t ecx_37 = (*(result - 0x10) + 0x10) << 0xd
    int32_t esi_13 = (ebx_9 - *(result + 8)) * 0x1c37
    int32_t ecx_42 = (edi_15 - ebx_9) * 0xa12
    int32_t edx_29 = *(result + 8)
    int32_t ecx_46 = ecx_42 - ebx_9 * 0x3aeb + esi_13 + ecx_37
    int32_t ecx_47 = edx_29 + edi_15
    int32_t esi_15 = ecx_47 * 0x28c6 + ecx_37
    int32_t var_1a4_2 = esi_13 + esi_15 - edx_29 * 0x27d
    int32_t edx_32 = *(result - 4)
    int32_t edi_16 = *(result + 4)
    int32_t var_1a0_2 = ecx_42 + esi_15 - edi_15 * 0x4f0f
    int32_t esi_17 = *(result - 0xc)
    int32_t ebx_11 = (edx_32 + esi_17) * 0x1def
    int32_t ecx_54 = (esi_17 - edx_32) * 0x573
    int32_t ecx_56 = (edi_16 + edx_32) * 0xffffd3e1
    int32_t var_194_6 = ebx_11 + ecx_54 + ecx_56
    int32_t edx_33 = (edi_16 + esi_17) * 0x13a3
    int32_t ebx_13 = ebx_11 - ecx_54 + edx_33
    int32_t esi_19 = ecx_56 + edi_16 * 0x3bde + edx_33
    *ecx_34 = ((var_1a4_2 + ebx_13) s>> 0x12 & 0x3ff)[eax_6]
    ecx_34[6] = ((var_1a4_2 - ebx_13) s>> 0x12 & 0x3ff)[eax_6]
    result += 0x1c
    ecx_34[1] = ((ecx_46 + var_194_6) s>> 0x12 & 0x3ff)[eax_6]
    ecx_34[5] = ((ecx_46 - var_194_6) s>> 0x12 & 0x3ff)[eax_6]
    ecx_34[2] = ((var_1a0_2 + esi_19) s>> 0x12 & 0x3ff)[eax_6]
    ecx_34[4] = ((var_1a0_2 - esi_19) s>> 0x12 & 0x3ff)[eax_6]
    ecx_34[3] = ((ecx_37 + (ebx_9 - ecx_47) * 0x2d41) s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0xe)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
