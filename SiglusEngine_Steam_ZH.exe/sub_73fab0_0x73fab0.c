// 函数: sub_73fab0
// 地址: 0x73fab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
int16_t* edi_1 = arg3 + 0x20
int16_t* var_210 = edi_1
int32_t i_2 = 8
int32_t* esi_1 = *(arg2 + 0x54) + 0x40
void var_1e8
void* var_20c = &var_1e8
int32_t* var_234 = esi_1
int32_t i

do
    int32_t eax_9 = sx.d(edi_1[0x10]) * esi_1[0x10]
    int32_t ecx_1 = eax_9 * 0x29cf
    int32_t eax_10 = eax_9 * 0x1151
    int32_t ebx_4 = ((sx.d(edi_1[-0x10]) * esi_1[-0x10]) << 0xd) + 0x400
    int32_t edx_1 = ecx_1 + ebx_4
    int32_t edx_3 = ebx_4 - ecx_1
    int32_t ecx_2 = eax_10 + ebx_4
    int32_t ebx_5 = ebx_4 - eax_10
    int32_t edx_5 = sx.d(*edi_1) * *esi_1
    int32_t edi_3 = sx.d(edi_1[0x20]) * esi_1[0x20]
    int32_t eax_12 = edx_5 - edi_3
    int32_t ecx_3 = eax_12 * 0x8d4
    int32_t ebx_6 = eax_12 * 0x2c63
    int32_t esi_3 = edx_5 * 0x1ccd + ecx_3
    int32_t ecx_5 = edi_3 * 0x5203 + ebx_6
    int32_t ebx_7 = ebx_6 - edx_5 * 0x133e
    int32_t edx_7 = ecx_3 - edi_3 * 0x1050
    int32_t eax_15 = edx_1 + ecx_5
    int32_t edi_5 = edx_1 - ecx_5
    int32_t eax_16 = ecx_2 + esi_3
    int32_t ecx_7 = ecx_2 - esi_3
    int32_t eax_17 = ebx_5 + ebx_7
    int32_t ecx_9 = ebx_5 - ebx_7
    int32_t eax_18 = edx_7 + edx_3
    int32_t ecx_11 = edx_3 - edx_7
    int32_t edx_9 = sx.d(var_210[-8]) * var_234[-8]
    int32_t eax_20 = sx.d(var_210[0x18]) * var_234[0x18]
    int32_t edi_7 = sx.d(var_210[8]) * var_234[8]
    int32_t ebx_9 = sx.d(var_210[0x28]) * var_234[0x28]
    int32_t ecx_13 = eax_20 + edx_9
    int32_t eax_22 = (edi_7 + edx_9) * 0x2b4e
    int32_t eax_23 = ecx_13 * 0x27e9
    int32_t esi_5 = (ebx_9 + edx_9) * 0x22fc
    int32_t eax_27 = (edx_9 - ebx_9) * 0x1cb6
    int32_t eax_28 = ecx_13 * 0x1555
    int32_t eax_31 = (edx_9 - edi_7) * 0xd23
    int32_t esi_8 = esi_5 - edx_9 * 0x492a + eax_23 + eax_22
    int32_t ecx_17 = eax_31 - edx_9 * 0x3abe + eax_28 + eax_27
    int32_t ecx_18 = (eax_20 + edi_7) * 0x470
    int32_t edx_12 = (eax_20 - edi_7) * 0x2d09
    int32_t edi_8 = edi_7 + ebx_9
    int32_t ecx_22 = edi_8 * 0xffffd817
    int32_t edx_13 = edi_8 * 0xffffeaab
    int32_t var_214_3 = eax_31 + edi_7 * 0x3f1a + edx_12 + ecx_22
    int32_t var_21c_3 = eax_22 + edi_7 * 0x24d + ecx_18 + edx_13
    int32_t ecx_23 = (ebx_9 + eax_20) * 0xffffd4b2
    int32_t var_218_3 = eax_23 + ecx_18 - eax_20 * 0x2406 + ecx_23
    int32_t edx_15 = esi_5 + ebx_9 * 0x2218 + ecx_23 + edx_13
    int32_t eax_47 = (ebx_9 - eax_20) * 0xd23
    int32_t var_228_3 = eax_28 + edx_12 - eax_20 * 0x1886 + eax_47
    int32_t ebx_12 = eax_27 + ebx_9 * 0x6485 + ecx_22 + eax_47
    *(var_20c - 0x20) = (eax_15 + esi_8) s>> 0xb
    *(var_20c + 0x1c0) = (eax_15 - esi_8) s>> 0xb
    *var_20c = (eax_16 + var_21c_3) s>> 0xb
    *(var_20c + 0x1a0) = (eax_16 - var_21c_3) s>> 0xb
    *(var_20c + 0x20) = (eax_17 + var_218_3) s>> 0xb
    *(var_20c + 0x180) = (eax_17 - var_218_3) s>> 0xb
    var_234 = &var_234[1]
    *(var_20c + 0x160) = (eax_18 - edx_15) s>> 0xb
    *(var_20c + 0x40) = (eax_18 + edx_15) s>> 0xb
    *(var_20c + 0x140) = (ecx_11 - ebx_12) s>> 0xb
    *(var_20c + 0x60) = (ecx_11 + ebx_12) s>> 0xb
    edi_1 = &var_210[1]
    *(var_20c + 0x120) = (ecx_9 - var_228_3) s>> 0xb
    *(var_20c + 0x80) = (ecx_9 + var_228_3) s>> 0xb
    var_210 = edi_1
    *(var_20c + 0x100) = (ecx_7 - var_214_3) s>> 0xb
    *(var_20c + 0xa0) = (ecx_7 + var_214_3) s>> 0xb
    *(var_20c + 0xc0) = (edi_5 + ecx_17) s>> 0xb
    *(var_20c + 0xe0) = (edi_5 - ecx_17) s>> 0xb
    i = i_2
    i_2 -= 1
    var_20c += 4
    esi_1 = var_234
while (i != 1)
int32_t i_1 = 0
void var_1f0
void* result = &var_1f0
int32_t i_3 = 0

do
    int32_t esi_17 = *result
    int32_t ebx_14 = *(result - 0x18) + 0x10
    char* ecx_41 = *(arg4 + (i_1 << 2)) + arg5
    int32_t edx_23 = *(result - 0x10)
    int32_t edi_13 = (esi_17 + edx_23) * 0x1151
    int32_t edx_25 = edx_23 * 0x187e + edi_13
    int32_t edi_14 = edi_13 - esi_17 * 0x3b21
    int32_t ecx_44 = *(result - 8)
    int32_t esi_19 = (ecx_44 + ebx_14) << 0xd
    int32_t ebx_16 = (ebx_14 - ecx_44) << 0xd
    int32_t ecx_45 = edx_25 + esi_19
    int32_t esi_20 = esi_19 - edx_25
    int32_t ecx_46 = edi_14 + ebx_16
    int32_t ebx_17 = ebx_16 - edi_14
    int32_t edi_15 = *(result + 4)
    int32_t edx_27 = *(result - 0xc) + edi_15
    int32_t ebx_18 = *(result - 0x14)
    int32_t esi_22 = *(result - 4) + ebx_18
    int32_t ecx_48 = (esi_22 + edx_27) * 0x25a1
    int32_t edx_29 = ecx_48 - edx_27 * 0x3ec5
    int32_t esi_24 = ecx_48 - esi_22 * 0xc7c
    int32_t ecx_52 = (ebx_18 + edi_15) * 0xffffe333
    int32_t ebx_19 = *(result - 0xc)
    int32_t edi_18 = edi_15 * 0x98e + edx_29 + ecx_52
    int32_t edi_19 = *(result - 4)
    int32_t edx_32 = ebx_18 * 0x300b + esi_24 + ecx_52
    int32_t ecx_54 = (ebx_19 + edi_19) * 0xffffadfd
    int32_t edi_22 = edi_19 * 0x41b3 + esi_24 + ecx_54
    int32_t esi_27 = ebx_19 * 0x6254 + edx_29 + ecx_54
    *ecx_41 = ((edx_32 + ecx_45) s>> 0x12 & 0x3ff)[eax_6]
    ecx_41[7] = ((ecx_45 - edx_32) s>> 0x12 & 0x3ff)[eax_6]
    result += 0x20
    ecx_41[1] = ((ecx_46 + esi_27) s>> 0x12 & 0x3ff)[eax_6]
    ecx_41[6] = ((ecx_46 - esi_27) s>> 0x12 & 0x3ff)[eax_6]
    ecx_41[2] = ((ebx_17 + edi_22) s>> 0x12 & 0x3ff)[eax_6]
    ecx_41[5] = ((ebx_17 - edi_22) s>> 0x12 & 0x3ff)[eax_6]
    ecx_41[3] = ((esi_20 + edi_18) s>> 0x12 & 0x3ff)[eax_6]
    ecx_41[4] = ((esi_20 - edi_18) s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0x10)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
