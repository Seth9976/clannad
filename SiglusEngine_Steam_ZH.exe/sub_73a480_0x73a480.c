// 函数: sub_73a480
// 地址: 0x73a480
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
void var_188
void* var_1c0 = &var_188
int32_t i_2 = 8
int16_t* eax_9 = arg3 + 0x40
int32_t* ecx_1 = *(arg2 + 0x54) + 0x80
int16_t* var_1ec = eax_9
int32_t* var_1cc = ecx_1
int32_t i

do
    int32_t eax_11 = sx.d(eax_9[0x10]) * ecx_1[0x10]
    int32_t esi_2 = sx.d(*eax_9) * *ecx_1
    int32_t edi_2 = sx.d(eax_9[-0x10]) * ecx_1[-0x10]
    int32_t ebx_4 = ((sx.d(eax_9[-0x20]) * ecx_1[-0x20]) << 0xd) + 0x400
    int32_t edx_1 = eax_11 + esi_2
    int32_t esi_3 = esi_2 - eax_11
    int32_t ecx_2 = edx_1 * 0x24f9
    int32_t eax_13 = esi_3 * 0x319 + ebx_4
    int32_t ebx_7 = edi_2 * 0x2bf1 + eax_13 + ecx_2
    int32_t ecx_3 = edx_1 * 0xa20
    int32_t ebx_10 = edi_2 * 0x100c - ecx_2 + eax_13
    int32_t eax_15 = esi_3 * 0xf95 + ebx_4
    int32_t eax_18 = edi_2 * 0x21e0 - ecx_3 + eax_15
    int32_t var_1b4_3 = eax_15 - edi_2 * 0x2812 + ecx_3
    int32_t eax_20 = edx_1 * 0xdf2
    int32_t ecx_5 = esi_3 * 0x1dfe - ebx_4
    int32_t edx_5 = neg.d(ecx_5) - edi_2 * 0x574 - eax_20
    int32_t edx_8 = eax_20 - edi_2 * 0x19b5 - ecx_5
    int32_t esi_6 = sx.d(var_1ec[-0x18]) * var_1cc[-0x18]
    int32_t ecx_7 = sx.d(var_1ec[-8]) * var_1cc[-8]
    int32_t edx_10 = sx.d(var_1ec[8]) * var_1cc[8]
    int32_t ebx_13 = sx.d(var_1ec[0x18]) * var_1cc[0x18]
    int32_t eax_27 = (ecx_7 + esi_6) * 0x2a50
    int32_t eax_29 = (edx_10 + esi_6) * 0x253e
    int32_t edx_11 = ebx_13 + esi_6
    int32_t edi_4 = edx_11 * 0x1e02
    int32_t edi_7 = edi_4 - esi_6 * 0x40a5 + eax_29 + eax_27
    int32_t ecx_8 = (edx_10 + ecx_7) * 0xfffff52b
    int32_t edx_12 = edx_11 * 0xad5
    int32_t ecx_10 = (ecx_7 + ebx_13) * 0xffffdac2
    int32_t var_1ac_3 = eax_27 + ecx_7 * 0x1acb + ecx_8 + ecx_10
    int32_t eax_42 = (edx_10 + ebx_13) * 0xffffeaf8
    int32_t var_1b0_3 = eax_29 + ecx_8 - edx_10 * 0x324f + eax_42
    int32_t ecx_13 = edi_4 + ebx_13 * 0x4694 + ecx_10 + eax_42
    int32_t edx_13 = (edx_10 - ecx_7) * 0x1e02
    int32_t esi_10 = esi_6 * 0xa33 - ecx_7 * 0xeea + edx_12 + edx_13
    int32_t edx_15 = edx_12 + edx_10 * 0xc4e - ebx_13 * 0x37c1 + edx_13
    *(var_1c0 + 0x160) = (ebx_7 - edi_7) s>> 0xb
    *(var_1c0 - 0x20) = (ebx_7 + edi_7) s>> 0xb
    *var_1c0 = (eax_18 + var_1ac_3) s>> 0xb
    *(var_1c0 + 0x140) = (eax_18 - var_1ac_3) s>> 0xb
    *(var_1c0 + 0x20) = (ebx_10 + var_1b0_3) s>> 0xb
    *(var_1c0 + 0x120) = (ebx_10 - var_1b0_3) s>> 0xb
    *(var_1c0 + 0x100) = (edx_5 - ecx_13) s>> 0xb
    *(var_1c0 + 0x40) = (edx_5 + ecx_13) s>> 0xb
    *(var_1c0 + 0xe0) = (edx_8 - esi_10) s>> 0xb
    *(var_1c0 + 0x60) = (esi_10 + edx_8) s>> 0xb
    *(var_1c0 + 0x80) = (edx_15 + var_1b4_3) s>> 0xb
    *(var_1c0 + 0xc0) = (var_1b4_3 - edx_15) s>> 0xb
    *(var_1c0 + 0xa0) = ((esi_3 - edi_2) * 0x2d41 + ebx_4) s>> 0xb
    ecx_1 = &var_1cc[1]
    eax_9 = &var_1ec[1]
    var_1cc = ecx_1
    i = i_2
    i_2 -= 1
    var_1ec = eax_9
    var_1c0 += 4
while (i != 1)
int32_t i_1 = 0
void var_198
void* ecx_32 = &var_198
int32_t i_3 = 0
void* var_1ac_4 = &var_198

do
    int32_t edi_13 = *ecx_32
    int32_t esi_11 = *(ecx_32 - 8)
    char* eax_63 = *(arg4 + (i_1 << 2)) + arg5
    int32_t eax_64 = *(ecx_32 + 8)
    int32_t ebx_22 = (*(ecx_32 - 0x10) + 0x10) << 0xd
    int32_t edx_17 = eax_64 + edi_13
    int32_t edi_14 = edi_13 - eax_64
    int32_t ecx_33 = edx_17 * 0x24f9
    int32_t eax_66 = edi_14 * 0x319 + ebx_22
    int32_t ebx_25 = esi_11 * 0x2bf1 + eax_66 + ecx_33
    int32_t ecx_34 = edx_17 * 0xa20
    int32_t ebx_28 = esi_11 * 0x100c - ecx_33 + eax_66
    int32_t eax_68 = edi_14 * 0xf95 + ebx_22
    int32_t eax_71 = esi_11 * 0x21e0 - ecx_34 + eax_68
    int32_t var_1b8_4 = eax_68 - esi_11 * 0x2812 + ecx_34
    int32_t eax_73 = edx_17 * 0xdf2
    int32_t ecx_36 = edi_14 * 0x1dfe - ebx_22
    int32_t edx_21 = neg.d(ecx_36) - esi_11 * 0x574 - eax_73
    int32_t edx_24 = eax_73 - esi_11 * 0x19b5 - ecx_36
    int32_t esi_12 = *(var_1ac_4 - 0xc)
    int32_t edi_16 = *(var_1ac_4 - 4)
    int32_t eax_80 = (edi_16 + esi_12) * 0x2a50
    int32_t eax_82 = (*(var_1ac_4 + 4) + esi_12) * 0x253e
    int32_t ecx_38 = (*(var_1ac_4 + 0xc) + esi_12) * 0x1e02
    int32_t ebx_33 = ecx_38 - esi_12 * 0x40a5 + eax_82 + eax_80
    int32_t ecx_40 = (*(var_1ac_4 + 4) + edi_16) * 0xfffff52b
    int32_t ecx_43 = (*(var_1ac_4 + 0xc) + edi_16) * 0xffffdac2
    int32_t var_1b4_6 = eax_80 + edi_16 * 0x1acb + ecx_40 + ecx_43
    int32_t ecx_44 = *(var_1ac_4 + 0xc)
    int32_t eax_95 = (*(var_1ac_4 + 4) + ecx_44) * 0xffffeaf8
    int32_t var_1b0_6 = eax_82 + ecx_40 - *(var_1ac_4 + 4) * 0x324f + eax_95
    int32_t var_1bc_5 = ecx_38 + *(var_1ac_4 + 0xc) * 0x4694 + ecx_43 + eax_95
    int32_t eax_96 = (ecx_44 + esi_12) * 0xad5
    int32_t esi_13 = *(var_1ac_4 + 4)
    int32_t edx_32 = (esi_13 - edi_16) * 0x1e02
    int32_t edi_18 = esi_12 * 0xa33 - edi_16 * 0xeea + eax_96 + edx_32
    int32_t var_1c8_3 = eax_96 + esi_13 * 0xc4e - ecx_44 * 0x37c1 + edx_32
    *eax_63 = ((ebx_25 + ebx_33) s>> 0x12 & 0x3ff)[eax_6]
    eax_63[0xc] = ((ebx_25 - ebx_33) s>> 0x12 & 0x3ff)[eax_6]
    eax_63[1] = ((eax_71 + var_1b4_6) s>> 0x12 & 0x3ff)[eax_6]
    eax_63[0xb] = ((eax_71 - var_1b4_6) s>> 0x12 & 0x3ff)[eax_6]
    eax_63[2] = ((ebx_28 + var_1b0_6) s>> 0x12 & 0x3ff)[eax_6]
    eax_63[0xa] = ((ebx_28 - var_1b0_6) s>> 0x12 & 0x3ff)[eax_6]
    eax_63[3] = ((edx_21 + var_1bc_5) s>> 0x12 & 0x3ff)[eax_6]
    eax_63[9] = ((edx_21 - var_1bc_5) s>> 0x12 & 0x3ff)[eax_6]
    eax_63[4] = ((edi_18 + edx_24) s>> 0x12 & 0x3ff)[eax_6]
    eax_63[8] = ((edx_24 - edi_18) s>> 0x12 & 0x3ff)[eax_6]
    eax_63[5] = ((var_1c8_3 + var_1b8_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_63[7] = ((var_1b8_4 - var_1c8_3) s>> 0x12 & 0x3ff)[eax_6]
    ecx_32 = var_1ac_4 + 0x20
    var_1ac_4 = ecx_32
    eax_63[6] = (((edi_14 - esi_11) * 0x2d41 + ebx_22) s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0xd)

sub_745f2b(eax_1 ^ &__saved_ebp)
return i_1
