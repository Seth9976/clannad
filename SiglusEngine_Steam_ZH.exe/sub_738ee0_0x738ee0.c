// 函数: sub_738ee0
// 地址: 0x738ee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
int32_t i_2 = 8
void var_108
void* var_154 = &var_108
int16_t* eax_9 = arg3 + 0x40
int32_t* ebx_1 = *(arg2 + 0x54) + 0x80
int16_t* var_134 = eax_9
int32_t* var_130 = ebx_1
int32_t i

do
    int32_t edx_2 = sx.d(eax_9[-0x10]) * ebx_1[-0x10]
    int32_t ecx_2 = sx.d(*eax_9) * *ebx_1
    int32_t eax_12 = sx.d(eax_9[0x10]) * ebx_1[0x10] * 0x16a1
    int32_t edi_4 = ((sx.d(eax_9[-0x20]) * ebx_1[-0x20]) << 0xd) + 0x400
    int32_t ebx_2 = eax_12 + edi_4
    int32_t edi_5 = edi_4 - eax_12 * 2
    int32_t eax_16 = (edx_2 - ecx_2) * 0x16a1
    int32_t esi_1 = edi_5 + eax_16
    int32_t eax_19 = (ecx_2 + edx_2) * 0x2a87
    int32_t ecx_3 = ecx_2 * 0x7dc
    int32_t edx_3 = edx_2 * 0x22ab
    int32_t esi_4 = ebx_2 - ecx_3 + eax_19
    int32_t esi_7 = edx_3 - eax_19 + ebx_2
    int32_t ebx_4 = ebx_2 - edx_3 + ecx_3
    int32_t ebx_6 = sx.d(var_134[8]) * var_130[8]
    int32_t ecx_5 = sx.d(var_134[-0x18]) * var_130[-0x18]
    int32_t edi_8 = sx.d(var_134[0x18]) * var_130[0x18]
    int32_t edx_5 = sx.d(var_134[-8]) * var_130[-8] * 0xffffd8cf
    int32_t esi_8 = (ebx_6 + ecx_5) * 0x1d17
    int32_t eax_25 = (edi_8 + ecx_5) * 0xf7a
    int32_t esi_10 = esi_8 - edx_5 + eax_25
    int32_t ecx_6 = (ebx_6 - edi_8) * 0x2c91
    int32_t var_12c_2 = esi_8 + edx_5 - ecx_6
    int32_t edx_7 = eax_25 + ecx_6 + edx_5
    int32_t ecx_7 = (ecx_5 - edi_8 - ebx_6) * 0x2731
    *(var_154 + 0xe0) = (esi_4 - esi_10) s>> 0xb
    *(var_154 - 0x20) = (esi_4 + esi_10) s>> 0xb
    *var_154 = (esi_1 + ecx_7) s>> 0xb
    *(var_154 + 0xc0) = (esi_1 - ecx_7) s>> 0xb
    *(var_154 + 0x20) = (esi_7 + var_12c_2) s>> 0xb
    *(var_154 + 0xa0) = (esi_7 - var_12c_2) s>> 0xb
    ebx_1 = &var_130[1]
    *(var_154 + 0x40) = (ebx_4 + edx_7) s>> 0xb
    *(var_154 + 0x60) = (edi_5 - eax_16 * 2) s>> 0xb
    eax_9 = &var_134[1]
    *(var_154 + 0x80) = (ebx_4 - edx_7) s>> 0xb
    i = i_2
    i_2 -= 1
    var_134 = eax_9
    var_130 = ebx_1
    var_154 += 4
while (i != 1)
int32_t i_1 = 0
void var_118
void* edx_8 = &var_118
int32_t i_3 = 0
void* var_12c_3 = &var_118

do
    int32_t esi_11 = *edx_8
    int32_t ebx_19 = (*(edx_8 - 0x10) + 0x10) << 0xd
    char* eax_46 = *(arg4 + (i_1 << 2)) + arg5
    int32_t eax_47 = *(edx_8 + 8) * 0x16a1
    int32_t ecx_13 = *(edx_8 - 8)
    int32_t edi_11 = eax_47 + ebx_19
    int32_t ebx_20 = ebx_19 - eax_47 * 2
    int32_t eax_51 = (ecx_13 - esi_11) * 0x16a1
    int32_t edx_9 = ebx_20 + eax_51
    int32_t edx_10 = ecx_13 * 0x22ab
    int32_t eax_54 = (esi_11 + ecx_13) * 0x2a87
    int32_t ecx_14 = esi_11 * 0x7dc
    int32_t esi_14 = edi_11 - ecx_14 + eax_54
    int32_t esi_17 = edx_10 - eax_54 + edi_11
    int32_t edi_13 = edi_11 - edx_10 + ecx_14
    int32_t ecx_15 = *(var_12c_3 - 0xc)
    int32_t ebx_22 = *(var_12c_3 + 4)
    int32_t esi_18 = *(var_12c_3 + 0xc)
    int32_t edx_11 = *(var_12c_3 - 4) * 0xffffd8cf
    int32_t edi_14 = (ebx_22 + ecx_15) * 0x1d17
    int32_t eax_58 = (esi_18 + ecx_15) * 0xf7a
    int32_t edi_16 = edi_14 - edx_11 + eax_58
    int32_t ecx_16 = (ebx_22 - esi_18) * 0x2c91
    int32_t var_130_2 = edi_14 + edx_11 - ecx_16
    int32_t var_134_2 = eax_58 + ecx_16 + edx_11
    int32_t ecx_18 = (*(var_12c_3 - 0xc) - esi_18 - ebx_22) * 0x2731
    *eax_46 = ((esi_14 + edi_16) s>> 0x12 & 0x3ff)[eax_6]
    eax_46[8] = ((esi_14 - edi_16) s>> 0x12 & 0x3ff)[eax_6]
    eax_46[1] = ((edx_9 + ecx_18) s>> 0x12 & 0x3ff)[eax_6]
    eax_46[7] = ((edx_9 - ecx_18) s>> 0x12 & 0x3ff)[eax_6]
    eax_46[2] = ((esi_17 + var_130_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_46[6] = ((esi_17 - var_130_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_46[3] = ((edi_13 + var_134_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_46[5] = ((edi_13 - var_134_2) s>> 0x12 & 0x3ff)[eax_6]
    edx_8 = var_12c_3 + 0x20
    var_12c_3 = edx_8
    eax_46[4] = ((ebx_20 - eax_51 * 2) s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 9)

sub_745f2b(eax_1 ^ &__saved_ebp)
return i_1
