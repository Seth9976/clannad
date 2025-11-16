// 函数: sub_73b2c0
// 地址: 0x73b2c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t* ebx_1 = arg3 + 0x40
int32_t i_3 = 8
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
int16_t* var_214 = ebx_1
void var_1c8
void* eax_8 = &var_1c8
int32_t* edx_1 = *(arg2 + 0x54) + 0x80
int32_t* var_208 = edx_1
int32_t i

do
    int32_t ecx_2 = sx.d(*ebx_1) * *edx_1
    int32_t esi_2 = sx.d(ebx_1[-0x10]) * edx_1[-0x10]
    int32_t ecx_4 = sx.d(ebx_1[0x10]) * edx_1[0x10]
    int32_t edi_4 = ((sx.d(ebx_1[-0x20]) * edx_1[-0x20]) << 0xd) + 0x400
    int32_t edx_2 = ecx_4 * 0xdfc
    int32_t ecx_5 = ecx_4 * 0x249d
    int32_t ebx_3 = edi_4 - edx_2
    int32_t ebx_4 = ecx_5 + edi_4
    int32_t edi_5 = edi_4 + edx_2 * 2 - ecx_5 * 2
    int32_t edi_7 = esi_2 - ecx_2
    int32_t ecx_8 = ecx_2 + esi_2
    int32_t edx_5 = ecx_8 * 0x2ace
    int32_t ecx_9 = edi_7 * 0x176
    int32_t esi_3 = esi_2 * 0x2e13
    int32_t ebx_6 = ebx_4 + ecx_9 + edx_5
    int32_t edx_8 = ebx_3 - edx_5 + ecx_9 + esi_3
    int32_t ecx_10 = edi_7 * 0xcc7
    int32_t edx_9 = ecx_8 * 0x1182
    int32_t var_1f0_3 = ebx_4 - ecx_10 - edx_9
    int32_t ecx_13 = ebx_3 - ecx_10 - esi_3 + edx_9
    int32_t edx_10 = edi_7 * 0xb50
    int32_t ecx_14 = ecx_8 * 0x194c
    int32_t esi_5 = ebx_3 + edx_10 + ecx_14
    int32_t ecx_15 = edx_10 * 2
    int32_t ebx_12 = ebx_4 - ecx_14 + edx_10
    int32_t edx_11 = ecx_15 + edi_5
    int32_t edi_9 = sx.d(var_214[-0x18]) * var_208[-0x18]
    int32_t esi_9 = sx.d(var_214[-8]) * var_208[-8]
    int32_t ecx_19 = sx.d(var_214[8]) * var_208[8] * 0x2731
    int32_t ebx_15 = sx.d(var_214[0x18]) * var_208[0x18]
    int32_t edx_14 = esi_9 - ebx_15
    int32_t ecx_22 = (edx_14 + edi_9) * 0x1a9a
    int32_t ecx_24 = edi_9 * 0x1071 + ecx_22
    int32_t var_1fc_2 = ecx_22 - edx_14 * 0x45a4
    int32_t ecx_26 = esi_9 * 0xffffe566
    int32_t ecx_27 = esi_9 * 0xffffd4f6
    int32_t esi_11 = edi_9 - ebx_15
    int32_t edx_16 = esi_11 * 0x2d02 + ecx_19
    int32_t edi_12 = ebx_15 * 0x4ea3 - ecx_27 + edx_16
    int32_t esi_13 = esi_11 * 0x2731 - ecx_19
    int32_t var_1f8_3 = ecx_26 - edi_9 * 0x2399 + edx_16
    int32_t edx_17 = (edi_9 + ebx_15) * 0x1268
    int32_t var_21c_2 = ecx_26 + edi_9 * 0xf39 - ecx_19 + edx_17
    int32_t var_218_2 = ecx_27 + ecx_19 - ebx_15 * 0x1bd1 + edx_17
    *(eax_8 + 0x1a0) = (ebx_6 - edi_12) s>> 0xb
    *(eax_8 - 0x20) = (ebx_6 + edi_12) s>> 0xb
    *eax_8 = (esi_5 + ecx_24) s>> 0xb
    *(eax_8 + 0x180) = (esi_5 - ecx_24) s>> 0xb
    *(eax_8 + 0x160) = (edx_11 - esi_13) s>> 0xb
    *(eax_8 + 0x20) = (edx_11 + esi_13) s>> 0xb
    *(eax_8 + 0x140) = (edx_8 - var_21c_2) s>> 0xb
    *(eax_8 + 0x40) = (edx_8 + var_21c_2) s>> 0xb
    *(eax_8 + 0x60) = (var_1fc_2 + ebx_12) s>> 0xb
    eax_8 += 4
    *(eax_8 + 0x11c) = (ebx_12 - var_1fc_2) s>> 0xb
    *(eax_8 + 0xfc) = (var_1f0_3 - var_218_2) s>> 0xb
    *(eax_8 + 0x7c) = (var_218_2 + var_1f0_3) s>> 0xb
    edx_1 = &var_208[1]
    *(eax_8 + 0x9c) = (var_1f8_3 + ecx_13) s>> 0xb
    *(eax_8 + 0xdc) = (ecx_13 - var_1f8_3) s>> 0xb
    ebx_1 = &var_214[1]
    i = i_3
    i_3 -= 1
    *(eax_8 + 0xbc) = (edi_5 - ecx_15 * 2) s>> 0xb
    var_214 = ebx_1
    var_208 = edx_1
while (i != 1)
int32_t i_1 = 0
void var_1d8
void* ecx_51 = &var_1d8
int32_t i_2 = 0
void* var_218_3 = &var_1d8

do
    int32_t ebx_35 = *ecx_51
    int32_t esi_16 = (*(ecx_51 - 0x10) + 0x10) << 0xd
    char* eax_10 = *(arg4 + (i_1 << 2)) + arg5
    int32_t edx_31 = *(ecx_51 - 8)
    int32_t eax_11 = *(ecx_51 + 8)
    int32_t ecx_52 = eax_11 * 0xdfc
    int32_t eax_12 = eax_11 * 0x249d
    int32_t edi_17 = esi_16 - ecx_52
    int32_t edi_18 = eax_12 + esi_16
    int32_t esi_17 = esi_16 + ecx_52 * 2 - eax_12 * 2
    int32_t esi_19 = edx_31 - ebx_35
    int32_t ebx_36 = ebx_35 + edx_31
    int32_t eax_14 = esi_19 * 0x176
    int32_t ecx_55 = ebx_36 * 0x2ace
    int32_t edx_32 = edx_31 * 0x2e13
    int32_t edi_20 = edi_18 + eax_14 + ecx_55
    int32_t ecx_58 = edi_17 - ecx_55 + eax_14 + edx_32
    int32_t eax_15 = esi_19 * 0xcc7
    int32_t ecx_59 = ebx_36 * 0x1182
    int32_t var_1f0_6 = edi_18 - eax_15 - ecx_59
    int32_t eax_18 = edi_17 - eax_15 - edx_32 + ecx_59
    int32_t ecx_60 = esi_19 * 0xb50
    int32_t eax_19 = ebx_36 * 0x194c
    int32_t esi_20 = *(var_218_3 + 4) * 0x2731
    int32_t edi_24 = *(var_218_3 - 0xc)
    int32_t edx_34 = edi_17 + ecx_60 + eax_19
    int32_t edx_37 = edi_18 - eax_19 + ecx_60
    int32_t eax_20 = ecx_60 * 2
    int32_t ecx_61 = eax_20 + esi_17
    int32_t edx_40 = *(var_218_3 - 4)
    int32_t ebx_38 = *(var_218_3 + 0xc)
    int32_t ecx_63 = edx_40 - ebx_38
    int32_t eax_23 = (ecx_63 + edi_24) * 0x1a9a
    int32_t eax_25 = edi_24 * 0x1071 + eax_23
    int32_t var_204_4 = eax_23 - ecx_63 * 0x45a4
    int32_t eax_27 = edx_40 * 0xffffe566
    int32_t eax_28 = edx_40 * 0xffffd4f6
    int32_t edx_42 = edi_24 - ebx_38
    int32_t ecx_65 = edx_42 * 0x2d02 + esi_20
    int32_t edx_44 = edx_42 * 0x2731 - esi_20
    int32_t esi_23 = ebx_38 * 0x4ea3 - eax_28 + ecx_65
    int32_t var_210_4 = eax_27 - edi_24 * 0x2399 + ecx_65
    int32_t ecx_66 = (ebx_38 + edi_24) * 0x1268
    int32_t var_208_2 = eax_27 + edi_24 * 0xf39 - esi_20 + ecx_66
    int32_t var_214_2 = eax_28 + esi_20 - ebx_38 * 0x1bd1 + ecx_66
    *eax_10 = ((edi_20 + esi_23) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xe] = ((edi_20 - esi_23) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[1] = ((edx_34 + eax_25) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xd] = ((edx_34 - eax_25) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[2] = ((ecx_61 + edx_44) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xc] = ((ecx_61 - edx_44) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[3] = ((ecx_58 + var_208_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xb] = ((ecx_58 - var_208_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[4] = ((var_204_4 + edx_37) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xa] = ((edx_37 - var_204_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[5] = ((var_214_2 + var_1f0_6) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[9] = ((var_1f0_6 - var_214_2) s>> 0x12 & 0x3ff)[eax_6]
    ecx_51 = var_218_3 + 0x20
    var_218_3 = ecx_51
    eax_10[6] = ((var_210_4 + eax_18) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[8] = ((eax_18 - var_210_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[7] = ((esi_17 - eax_20 * 2) s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_2 + 1
    i_2 = i_1
while (i_1 s< 0xf)

sub_745f2b(eax_1 ^ &__saved_ebp)
return i_1
