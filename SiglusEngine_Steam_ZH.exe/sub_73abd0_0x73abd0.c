// 函数: sub_73abd0
// 地址: 0x73abd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t i_2 = 8
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
void var_1a8
void* var_1e4 = &var_1a8
void* eax_9 = arg3 + 0x20
void* ecx_1 = *(arg2 + 0x54) + 0x40
int16_t* var_1d4 = eax_9
void* var_1d0 = ecx_1
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
    int32_t ecx_9 = sx.d(var_1d4[0x20]) * *(var_1d0 + 0x80)
    int32_t esi_3 = sx.d(*var_1d4) * *var_1d0
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
    int32_t edi_8 = sx.d(var_1d4[-8]) * *(var_1d0 - 0x20)
    int32_t eax_24 = sx.d(var_1d4[0x18]) * *(var_1d0 + 0x60)
    int32_t ebx_5 = sx.d(var_1d4[8]) * *(var_1d0 + 0x20)
    int32_t edx_8 = sx.d(var_1d4[0x28]) * *(var_1d0 + 0xa0)
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
    int32_t var_1f4_2 = eax_26 + edx_11 - ebx_5 * 0xd92
    int32_t var_1ec_2 = eax_27 + edx_11 - eax_24 * 0x4bf7
    int32_t ecx_19 = (eax_24 - ebx_5) * 0x2cf8
    int32_t var_1d8_2 = ecx_14 + esi_8 - eax_24 * 0x361a + ecx_19
    int32_t ebx_8 = (eax_31 + edx_8 - eax_24) << 2
    int32_t esi_12 = eax_33 + ebx_5 * 0x1599 + ecx_19
    *(var_1e4 - 0x20) = (eax_20 + edi_12) s>> 0xb
    *(var_1e4 + 0x180) = (eax_20 - edi_12) s>> 0xb
    *(var_1e4 + 0x160) = (eax_21 - var_1f4_2) s>> 0xb
    *var_1e4 = (eax_21 + var_1f4_2) s>> 0xb
    *(var_1e4 + 0x20) = (eax_22 + var_1ec_2) s>> 0xb
    *(var_1e4 + 0x140) = (eax_22 - var_1ec_2) s>> 0xb
    *(var_1e4 + 0x120) = ecx_7 - ebx_8
    *(var_1e4 + 0x40) = ebx_8 + ecx_7
    *(var_1e4 + 0x60) = (ebx_3 + var_1d8_2) s>> 0xb
    *(var_1e4 + 0x100) = (ebx_3 - var_1d8_2) s>> 0xb
    *(var_1e4 + 0x80) = (edx_6 + esi_12) s>> 0xb
    *(var_1e4 + 0xe0) = (edx_6 - esi_12) s>> 0xb
    ecx_1 = var_1d0 + 4
    *(var_1e4 + 0xa0) = (ecx_16 + esi_5) s>> 0xb
    eax_9 = &var_1d4[1]
    *(var_1e4 + 0xc0) = (esi_5 - ecx_16) s>> 0xb
    i = i_2
    i_2 -= 1
    var_1d4 = eax_9
    var_1d0 = ecx_1
    var_1e4 += 4
while (i != 1)
int32_t i_1 = 0
void var_1c0
void* ecx_33 = &var_1c0
int32_t i_3 = 0
void* var_1d4_1 = &var_1c0

do
    int32_t edi_18 = (*(ecx_33 - 8) + 0x10) << 0xd
    char* eax_59 = *(arg4 + (i_1 << 2)) + arg5
    int32_t eax_60 = *(ecx_33 + 8)
    int32_t esi_13 = eax_60 * 0x28c6
    int32_t edx_28 = eax_60 * 0xa12
    int32_t ecx_34 = eax_60 * 0x1c37
    int32_t ebx_10 = edi_18 - ecx_34
    int32_t eax_61 = esi_13 + edi_18
    int32_t eax_62 = edx_28 + edi_18
    int32_t ecx_38 = ecx_34 * 2 - edx_28 * 2 - esi_13 * 2 + edi_18
    int32_t edx_29 = *var_1d4_1
    int32_t ecx_40 = *(var_1d4_1 + 0x10)
    int32_t edi_19 = (ecx_40 + edx_29) * 0x2362
    int32_t esi_15 = edx_29 * 0x8bd + edi_19
    int32_t edi_20 = edi_19 - ecx_40 * 0x3704
    int32_t ecx_42 = edx_29 * 0x13a3 - ecx_40 * 0x2c1f
    int32_t eax_68 = esi_15 + eax_61
    int32_t edx_31 = eax_61 - esi_15
    int32_t eax_69 = edi_20 + eax_62
    int32_t edx_33 = eax_62 - edi_20
    int32_t eax_70 = ecx_42 + ebx_10
    int32_t ebx_11 = ebx_10 - ecx_42
    int32_t eax_71 = *(var_1d4_1 - 4)
    int32_t ebx_12 = *(var_1d4_1 + 0xc)
    int32_t esi_16 = *(var_1d4_1 + 4)
    int32_t ecx_44 = ebx_12 + eax_71
    int32_t edx_35 = *(var_1d4_1 + 0x14) << 0xd
    int32_t edi_21 = ecx_44 * 0x2652
    int32_t eax_73 = (eax_71 + esi_16) * 0x2ab7
    int32_t ecx_45 = ecx_44 * 0x1814
    int32_t edi_24 = edi_21 - eax_71 * 0x2410 + eax_73 + edx_35
    int32_t eax_77 = eax_71 - esi_16
    int32_t eax_79 = eax_77 * 0xef2 - edx_35
    int32_t ecx_47 = ecx_45 - eax_71 * 0x21f5 + eax_79
    int32_t edx_37 = neg.d(edx_35) - (ebx_12 + esi_16) * 0x511
    int32_t var_1d0_2 = eax_73 + edx_37 - esi_16 * 0xd92
    int32_t var_1e4_2 = edi_21 + edx_37 - ebx_12 * 0x4bf7
    int32_t edx_39 = (ebx_12 - esi_16) * 0x2cf8
    int32_t var_1dc_4 = ecx_45 + edx_39 - ebx_12 * 0x361a + edx_35
    int32_t esi_18 = eax_79 + esi_16 * 0x1599 + edx_39
    int32_t eax_92 = ((eax_77 - ebx_12) << 0xd) + edx_35
    *eax_59 = ((eax_68 + edi_24) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[0xd] = ((eax_68 - edi_24) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[1] = ((eax_69 + var_1d0_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[0xc] = ((eax_69 - var_1d0_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[2] = ((eax_70 + var_1e4_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[0xb] = ((eax_70 - var_1e4_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[3] = ((eax_92 + ecx_38) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[0xa] = ((ecx_38 - eax_92) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[4] = ((ebx_11 + var_1dc_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[9] = ((ebx_11 - var_1dc_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[5] = ((edx_33 + esi_18) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[8] = ((edx_33 - esi_18) s>> 0x12 & 0x3ff)[eax_6]
    ecx_33 = var_1d4_1 + 0x20
    var_1d4_1 = ecx_33
    eax_59[6] = ((ecx_47 + edx_31) s>> 0x12 & 0x3ff)[eax_6]
    eax_59[7] = ((edx_31 - ecx_47) s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0xe)

sub_745f2b(eax_1 ^ &__saved_ebp)
return i_1
