// 函数: sub_740660
// 地址: 0x740660
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t* edx_1 = arg3 + 0x20
int32_t ebx_1 = *(arg1 + 0x12c) + 0x80
int16_t* var_134 = edx_1
int32_t i_2 = 6
int32_t* esi_1 = *(arg2 + 0x54) + 0x40
void var_110
void* var_168 = &var_110
int32_t* var_13c = esi_1
int32_t i

do
    int32_t edx_3 = sx.d(*edx_1) * *esi_1
    int32_t eax_8 = sx.d(edx_1[0x10]) * esi_1[0x10] * 0x2731
    int32_t edi_4 = ((sx.d(edx_1[-0x10]) * esi_1[-0x10]) << 0xd) + 0x400
    int32_t esi_2 = edx_3 * 0x2bb6
    int32_t ebx_3 = edi_4 - eax_8
    int32_t edx_4 = edx_3 << 0xd
    int32_t ecx_1 = eax_8 + edi_4
    int32_t ecx_4 = (sx.d(var_134[0x20]) * var_13c[0x20]) << 0xd
    int32_t eax_12 = edx_4 - ecx_4
    int32_t var_144_2 = edi_4 - eax_12
    int32_t edi_5 = edi_4 + eax_12
    int32_t eax_13 = ecx_4 + esi_2
    int32_t var_138_2 = ecx_1 - eax_13
    int32_t edi_7 = ecx_1 + eax_13
    int32_t esi_4 = esi_2 - ecx_4 - edx_4
    int32_t eax_14 = esi_4 + ebx_3
    int32_t ebx_4 = ebx_3 - esi_4
    int32_t ecx_6 = sx.d(var_134[8]) * var_13c[8]
    int32_t eax_16 = sx.d(var_134[0x18]) * var_13c[0x18]
    int32_t edi_9 = sx.d(var_134[0x28]) * var_13c[0x28]
    int32_t ebx_6 = sx.d(var_134[-8]) * var_13c[-8]
    int32_t edx_6 = ecx_6 * 0x29cf
    int32_t esi_6 = ecx_6 * 0xffffeeaf
    int32_t ecx_7 = ebx_6 + eax_16
    int32_t eax_18 = (ecx_7 + edi_9) * 0x1b8d
    int32_t eax_20 = ecx_7 * 0x85b + eax_18
    int32_t ebx_9 = ebx_6 * 0x8f7 + eax_20 + edx_6
    int32_t eax_22 = (edi_9 + eax_16) * 0xffffde8b
    int32_t var_158_2 = eax_20 + eax_22 - eax_16 * 0x2f50 + esi_6
    int32_t var_12c_2 = eax_22 + edi_9 * 0x32c6 - edx_6 + eax_18
    int32_t edx_8 = eax_18 + ebx_6 * 0xffffea5c - edi_9 * 0x3f74 + esi_6
    int32_t ecx_16 = ebx_6 - edi_9
    int32_t esi_8 = ecx_6 - eax_16
    int32_t edx_9 = (esi_8 + ecx_16) * 0x1151
    int32_t ecx_18 = ecx_16 * 0x187e + edx_9
    int32_t edx_10 = edx_9 - esi_8 * 0x3b21
    *(var_168 - 0x18) = (edi_7 + ebx_9) s>> 0xb
    *(var_168 + 0xf0) = (edi_7 - ebx_9) s>> 0xb
    *var_168 = (edi_5 + ecx_18) s>> 0xb
    *(var_168 + 0xd8) = (edi_5 - ecx_18) s>> 0xb
    *(var_168 + 0x18) = (eax_14 + var_158_2) s>> 0xb
    *(var_168 + 0xc0) = (eax_14 - var_158_2) s>> 0xb
    *(var_168 + 0x30) = (var_12c_2 + ebx_4) s>> 0xb
    *(var_168 + 0xa8) = (ebx_4 - var_12c_2) s>> 0xb
    esi_1 = &var_13c[1]
    *(var_168 + 0x90) = (var_144_2 - edx_10) s>> 0xb
    *(var_168 + 0x48) = (edx_10 + var_144_2) s>> 0xb
    var_13c = esi_1
    *(var_168 + 0x78) = (var_138_2 - edx_8) s>> 0xb
    edx_1 = &var_134[1]
    *(var_168 + 0x60) = (edx_8 + var_138_2) s>> 0xb
    i = i_2
    i_2 -= 1
    var_134 = edx_1
    var_168 += 4
while (i != 1)
int32_t i_1 = 0
void var_120
void* result = &var_120
int32_t i_3 = 0

do
    result += 0x18
    int32_t edi_12 = *(result - 0x1c)
    char* ecx_26 = *(arg4 + (i_1 << 2)) + arg5
    int32_t ecx_27 = *(result - 0x10) * 0x16a1
    int32_t edx_18 = (*(result - 0x20) + 0x10) << 0xd
    int32_t esi_16 = ecx_27 + edx_18
    int32_t edx_19 = edx_18 - ecx_27 * 2
    int32_t ecx_29 = *(result - 0x18) * 0x2731
    int32_t edx_20 = *(result - 0x14)
    int32_t ebx_16 = esi_16 + ecx_29
    int32_t esi_17 = esi_16 - ecx_29
    int32_t esi_18 = *(result - 0xc)
    int32_t ecx_31 = (edi_12 + esi_18) * 0xbb6
    int32_t var_12c_6 = ((esi_18 - edx_20) << 0xd) + ecx_31
    int32_t edi_15 = ((edi_12 + edx_20) << 0xd) + ecx_31
    int32_t ecx_35 = (*(result - 0x1c) - edx_20 - esi_18) << 0xd
    *ecx_26 = ((ebx_16 + edi_15) s>> 0x12 & 0x3ff)[ebx_1]
    ecx_26[5] = ((ebx_16 - edi_15) s>> 0x12 & 0x3ff)[ebx_1]
    ecx_26[1] = ((edx_19 + ecx_35) s>> 0x12 & 0x3ff)[ebx_1]
    ecx_26[4] = ((edx_19 - ecx_35) s>> 0x12 & 0x3ff)[ebx_1]
    ecx_26[2] = ((esi_17 + var_12c_6) s>> 0x12 & 0x3ff)[ebx_1]
    ecx_26[3] = ((esi_17 - var_12c_6) s>> 0x12 & 0x3ff)[ebx_1]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0xc)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
