// 函数: sub_740ab0
// 地址: 0x740ab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ecx_1 = arg3 + 0x20
int16_t* var_ec = ecx_1
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
int32_t i_1 = 5
int32_t var_bc
int32_t* eax_8 = &var_bc
void* edx_1 = *(arg2 + 0x54) + 0x40
void* var_e8 = edx_1
int32_t i

do
    int32_t ecx_3 = sx.d(*(ecx_1 + 0x20)) * *(edx_1 + 0x40)
    int32_t edx_2 = ecx_3 * 0x249d
    int32_t ecx_4 = ecx_3 * 0xdfc
    int32_t esi_4 = ((sx.d(*(ecx_1 - 0x20)) * *(edx_1 - 0x40)) << 0xd) + 0x400
    int32_t ebx_2 = esi_4 - ecx_4
    int32_t edi_1 = edx_2 + esi_4
    int32_t ebx_6 = (ecx_4 * 2 - edx_2 * 2 + esi_4) s>> 0xb
    int32_t edx_4 = sx.d(*var_ec) * *var_e8
    int32_t esi_6 = sx.d(var_ec[0x20]) * *(var_e8 + 0x80)
    int32_t edi_3 = (edx_4 + esi_6) * 0x1a9a
    int32_t edx_6 = edx_4 * 0x1071 + edi_3
    int32_t edi_4 = edi_3 - esi_6 * 0x45a4
    int32_t ecx_9 = edx_6 + edi_1
    int32_t ebx_8 = edi_1 - edx_6
    int32_t ecx_10 = edi_4 + ebx_2
    int32_t edx_8 = ebx_2 - edi_4
    int32_t ecx_12 = sx.d(var_ec[-8]) * *(var_e8 - 0x20)
    int32_t ebx_10 = sx.d(var_ec[8]) * *(var_e8 + 0x20)
    int32_t edx_10 = sx.d(var_ec[0x18]) * *(var_e8 + 0x60)
    int32_t ecx_14 = sx.d(var_ec[0x28]) * *(var_e8 + 0xa0)
    int32_t esi_8 = ebx_10 + ecx_14
    int32_t ebx_11 = ebx_10 - ecx_14
    int32_t edi_6 = ebx_11 * 0x9e3
    int32_t ecx_16 = edx_10 << 0xd
    int32_t edx_11 = esi_8 * 0x1e6f
    int32_t ecx_17 = ecx_16 + edi_6
    int32_t ebx_14 = ecx_12 * 0x2cb3 + edx_11 + ecx_17
    int32_t edx_12 = esi_8 * 0x12cf
    int32_t ebx_17 = ecx_12 * 0x714 - edx_11 + ecx_17
    int32_t ecx_21 = ecx_16 - (ebx_11 << 0xc) - edi_6
    int32_t ebx_21 = (ecx_12 - ebx_11 - edx_10) << 2
    eax_8 = &eax_8[1]
    int32_t esi_11 = ecx_12 * 0x2853 - edx_12 - ecx_21
    int32_t edi_10 = ecx_12 * 0x148c - edx_12 + ecx_21
    eax_8[-6] = (ecx_9 + ebx_14) s>> 0xb
    eax_8[0x27] = (ecx_9 - ebx_14) s>> 0xb
    eax_8[0x22] = (ecx_10 - esi_11) s>> 0xb
    eax_8[-1] = (ecx_10 + esi_11) s>> 0xb
    eax_8[0x1d] = ebx_6 - ebx_21
    eax_8[4] = ebx_21 + ebx_6
    eax_8[0x18] = (edx_8 - edi_10) s>> 0xb
    eax_8[9] = (edx_8 + edi_10) s>> 0xb
    edx_1 = var_e8 + 4
    eax_8[0xe] = (ebx_17 + ebx_8) s>> 0xb
    ecx_1 = &var_ec[1]
    i = i_1
    i_1 -= 1
    eax_8[0x13] = (ebx_8 - ebx_17) s>> 0xb
    var_ec = ecx_1
    var_e8 = edx_1
while (i != 1)
char* eax_11 = *arg4 + arg5
int32_t var_c8
int32_t var_c0
int32_t esi_12 = (var_c0 + var_c8) * 0x194c
int32_t var_d0
int32_t ebx_27 = (var_d0 + 0x10) << 0xd
int32_t eax_13 = (var_c8 - var_c0) * 0xb50
int32_t ebx_28 = ebx_27 + eax_13
int32_t edi_11 = esi_12 + ebx_28
int32_t ebx_29 = ebx_28 - esi_12
int32_t var_cc
int32_t var_c4
int32_t esi_13 = (var_c4 + var_cc) * 0x1a9a
int32_t ecx_39 = var_cc * 0x1071 + esi_13
int32_t esi_14 = esi_13 - var_c4 * 0x45a4
*eax_11 = ((ecx_39 + edi_11) s>> 0x12 & 0x3ff)[eax_6]
eax_11[4] = ((edi_11 - ecx_39) s>> 0x12 & 0x3ff)[eax_6]
eax_11[1] = ((esi_14 + ebx_29) s>> 0x12 & 0x3ff)[eax_6]
eax_11[3] = ((ebx_29 - esi_14) s>> 0x12 & 0x3ff)[eax_6]
int32_t ebx_35 = (var_bc + 0x10) << 0xd
eax_11[2] = ((ebx_27 - (eax_13 << 2)) s>> 0x12 & 0x3ff)[eax_6]
char* eax_33 = arg4[1] + arg5
int32_t var_b4
int32_t var_ac
int32_t esi_15 = (var_ac + var_b4) * 0x194c
int32_t eax_35 = (var_b4 - var_ac) * 0xb50
int32_t ebx_36 = ebx_35 + eax_35
int32_t edi_15 = esi_15 + ebx_36
int32_t ebx_37 = ebx_36 - esi_15
int32_t var_b8
int32_t var_b0
int32_t esi_16 = (var_b0 + var_b8) * 0x1a9a
int32_t ecx_44 = var_b8 * 0x1071 + esi_16
int32_t esi_17 = esi_16 - var_b0 * 0x45a4
*eax_33 = ((ecx_44 + edi_15) s>> 0x12 & 0x3ff)[eax_6]
eax_33[4] = ((edi_15 - ecx_44) s>> 0x12 & 0x3ff)[eax_6]
eax_33[1] = ((esi_17 + ebx_37) s>> 0x12 & 0x3ff)[eax_6]
eax_33[3] = ((ebx_37 - esi_17) s>> 0x12 & 0x3ff)[eax_6]
eax_33[2] = ((ebx_35 - (eax_35 << 2)) s>> 0x12 & 0x3ff)[eax_6]
int32_t var_a8
int32_t ebx_43 = (var_a8 + 0x10) << 0xd
char* eax_55 = arg4[2] + arg5
int32_t var_a0
int32_t var_98
int32_t esi_18 = (var_98 + var_a0) * 0x194c
int32_t eax_57 = (var_a0 - var_98) * 0xb50
int32_t ebx_44 = ebx_43 + eax_57
int32_t edi_19 = esi_18 + ebx_44
int32_t ebx_45 = ebx_44 - esi_18
int32_t var_a4
int32_t var_9c
int32_t esi_19 = (var_9c + var_a4) * 0x1a9a
int32_t ecx_49 = var_a4 * 0x1071 + esi_19
int32_t esi_20 = esi_19 - var_9c * 0x45a4
*eax_55 = ((ecx_49 + edi_19) s>> 0x12 & 0x3ff)[eax_6]
eax_55[4] = ((edi_19 - ecx_49) s>> 0x12 & 0x3ff)[eax_6]
eax_55[1] = ((esi_20 + ebx_45) s>> 0x12 & 0x3ff)[eax_6]
eax_55[3] = ((ebx_45 - esi_20) s>> 0x12 & 0x3ff)[eax_6]
eax_55[2] = ((ebx_43 - (eax_57 << 2)) s>> 0x12 & 0x3ff)[eax_6]
int32_t var_94
int32_t ebx_51 = (var_94 + 0x10) << 0xd
char* eax_77 = arg4[3] + arg5
int32_t var_8c
int32_t var_84
int32_t esi_21 = (var_84 + var_8c) * 0x194c
int32_t eax_79 = (var_8c - var_84) * 0xb50
int32_t ebx_52 = ebx_51 + eax_79
int32_t edi_23 = esi_21 + ebx_52
int32_t ebx_53 = ebx_52 - esi_21
int32_t var_90
int32_t var_88
int32_t esi_22 = (var_88 + var_90) * 0x1a9a
int32_t ecx_54 = var_90 * 0x1071 + esi_22
int32_t esi_23 = esi_22 - var_88 * 0x45a4
*eax_77 = ((ecx_54 + edi_23) s>> 0x12 & 0x3ff)[eax_6]
eax_77[4] = ((edi_23 - ecx_54) s>> 0x12 & 0x3ff)[eax_6]
eax_77[1] = ((esi_23 + ebx_53) s>> 0x12 & 0x3ff)[eax_6]
eax_77[3] = ((ebx_53 - esi_23) s>> 0x12 & 0x3ff)[eax_6]
int32_t var_80
int32_t ebx_59 = (var_80 + 0x10) << 0xd
eax_77[2] = ((ebx_51 - (eax_79 << 2)) s>> 0x12 & 0x3ff)[eax_6]
char* eax_99 = arg4[4] + arg5
int32_t var_78
int32_t var_70
int32_t esi_24 = (var_70 + var_78) * 0x194c
int32_t eax_101 = (var_78 - var_70) * 0xb50
int32_t ebx_60 = ebx_59 + eax_101
int32_t edi_27 = esi_24 + ebx_60
int32_t ebx_61 = ebx_60 - esi_24
int32_t var_7c
int32_t var_74
int32_t esi_25 = (var_74 + var_7c) * 0x1a9a
int32_t ecx_59 = var_7c * 0x1071 + esi_25
int32_t esi_26 = esi_25 - var_74 * 0x45a4
*eax_99 = ((ecx_59 + edi_27) s>> 0x12 & 0x3ff)[eax_6]
eax_99[4] = ((edi_27 - ecx_59) s>> 0x12 & 0x3ff)[eax_6]
eax_99[1] = ((esi_26 + ebx_61) s>> 0x12 & 0x3ff)[eax_6]
eax_99[3] = ((ebx_61 - esi_26) s>> 0x12 & 0x3ff)[eax_6]
eax_99[2] = ((ebx_59 - (eax_101 << 2)) s>> 0x12 & 0x3ff)[eax_6]
int32_t var_6c
int32_t ebx_67 = (var_6c + 0x10) << 0xd
char* eax_121 = arg4[5] + arg5
int32_t var_64
int32_t var_5c
int32_t esi_27 = (var_5c + var_64) * 0x194c
int32_t eax_123 = (var_64 - var_5c) * 0xb50
int32_t ebx_68 = ebx_67 + eax_123
int32_t edi_31 = esi_27 + ebx_68
int32_t ebx_69 = ebx_68 - esi_27
int32_t var_68
int32_t var_60
int32_t esi_28 = (var_60 + var_68) * 0x1a9a
int32_t ecx_64 = var_68 * 0x1071 + esi_28
int32_t esi_29 = esi_28 - var_60 * 0x45a4
*eax_121 = ((ecx_64 + edi_31) s>> 0x12 & 0x3ff)[eax_6]
eax_121[4] = ((edi_31 - ecx_64) s>> 0x12 & 0x3ff)[eax_6]
eax_121[1] = ((esi_29 + ebx_69) s>> 0x12 & 0x3ff)[eax_6]
eax_121[3] = ((ebx_69 - esi_29) s>> 0x12 & 0x3ff)[eax_6]
eax_121[2] = ((ebx_67 - (eax_123 << 2)) s>> 0x12 & 0x3ff)[eax_6]
int32_t var_58
int32_t ebx_75 = (var_58 + 0x10) << 0xd
char* eax_143 = arg4[6] + arg5
int32_t var_50
int32_t var_48
int32_t esi_30 = (var_48 + var_50) * 0x194c
int32_t eax_145 = (var_50 - var_48) * 0xb50
int32_t ebx_76 = ebx_75 + eax_145
int32_t edi_35 = esi_30 + ebx_76
int32_t ebx_77 = ebx_76 - esi_30
int32_t var_54
int32_t var_4c
int32_t esi_31 = (var_4c + var_54) * 0x1a9a
int32_t ecx_69 = var_54 * 0x1071 + esi_31
int32_t esi_32 = esi_31 - var_4c * 0x45a4
*eax_143 = ((ecx_69 + edi_35) s>> 0x12 & 0x3ff)[eax_6]
eax_143[4] = ((edi_35 - ecx_69) s>> 0x12 & 0x3ff)[eax_6]
eax_143[1] = ((esi_32 + ebx_77) s>> 0x12 & 0x3ff)[eax_6]
eax_143[3] = ((ebx_77 - esi_32) s>> 0x12 & 0x3ff)[eax_6]
int32_t var_44
int32_t ebx_83 = (var_44 + 0x10) << 0xd
eax_143[2] = ((ebx_75 - (eax_145 << 2)) s>> 0x12 & 0x3ff)[eax_6]
char* eax_165 = arg4[7] + arg5
int32_t var_3c
int32_t var_34
int32_t esi_33 = (var_34 + var_3c) * 0x194c
int32_t eax_167 = (var_3c - var_34) * 0xb50
int32_t ebx_84 = ebx_83 + eax_167
int32_t edi_39 = esi_33 + ebx_84
int32_t ebx_85 = ebx_84 - esi_33
int32_t var_40
int32_t var_38
int32_t esi_34 = (var_38 + var_40) * 0x1a9a
int32_t ecx_74 = var_40 * 0x1071 + esi_34
int32_t esi_35 = esi_34 - var_38 * 0x45a4
*eax_165 = ((ecx_74 + edi_39) s>> 0x12 & 0x3ff)[eax_6]
eax_165[4] = ((edi_39 - ecx_74) s>> 0x12 & 0x3ff)[eax_6]
eax_165[1] = ((esi_35 + ebx_85) s>> 0x12 & 0x3ff)[eax_6]
eax_165[3] = ((ebx_85 - esi_35) s>> 0x12 & 0x3ff)[eax_6]
eax_165[2] = ((ebx_83 - (eax_167 << 2)) s>> 0x12 & 0x3ff)[eax_6]
int32_t var_30
int32_t ebx_91 = (var_30 + 0x10) << 0xd
char* eax_187 = arg4[8] + arg5
int32_t var_28
int32_t var_20
int32_t esi_36 = (var_20 + var_28) * 0x194c
int32_t eax_189 = (var_28 - var_20) * 0xb50
int32_t ebx_92 = ebx_91 + eax_189
int32_t edi_43 = esi_36 + ebx_92
int32_t ebx_93 = ebx_92 - esi_36
int32_t var_2c
int32_t var_24
int32_t esi_37 = (var_24 + var_2c) * 0x1a9a
int32_t ecx_79 = var_2c * 0x1071 + esi_37
int32_t esi_38 = esi_37 - var_24 * 0x45a4
*eax_187 = ((ecx_79 + edi_43) s>> 0x12 & 0x3ff)[eax_6]
eax_187[4] = ((edi_43 - ecx_79) s>> 0x12 & 0x3ff)[eax_6]
eax_187[1] = ((esi_38 + ebx_93) s>> 0x12 & 0x3ff)[eax_6]
eax_187[3] = ((ebx_93 - esi_38) s>> 0x12 & 0x3ff)[eax_6]
eax_187[2] = ((ebx_91 - (eax_189 << 2)) s>> 0x12 & 0x3ff)[eax_6]
int32_t var_1c
int32_t ebx_99 = (var_1c + 0x10) << 0xd
char* eax_209 = arg4[9] + arg5
int32_t var_14
int32_t var_c
int32_t esi_39 = (var_c + var_14) * 0x194c
int32_t eax_211 = (var_14 - var_c) * 0xb50
int32_t ebx_100 = ebx_99 + eax_211
int32_t edi_47 = esi_39 + ebx_100
int32_t ebx_101 = ebx_100 - esi_39
int32_t var_18
int32_t var_10
int32_t esi_40 = (var_10 + var_18) * 0x1a9a
int32_t ecx_84 = var_18 * 0x1071 + esi_40
int32_t esi_41 = esi_40 - var_10 * 0x45a4
*eax_209 = ((ecx_84 + edi_47) s>> 0x12 & 0x3ff)[eax_6]
eax_209[4] = ((edi_47 - ecx_84) s>> 0x12 & 0x3ff)[eax_6]
eax_209[1] = ((esi_41 + ebx_101) s>> 0x12 & 0x3ff)[eax_6]
eax_209[3] = ((ebx_101 - esi_41) s>> 0x12 & 0x3ff)[eax_6]
char result = ((ebx_99 - (eax_211 << 2)) s>> 0x12 & 0x3ff)[eax_6]
eax_209[2] = result
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
