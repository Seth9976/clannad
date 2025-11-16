// 函数: sub_739330
// 地址: 0x739330
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t i_2 = 8
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
void var_128
void* var_168 = &var_128
void* eax_9 = arg3 + 0x20
void* ecx_1 = *(arg2 + 0x54) + 0x40
int16_t* var_14c = eax_9
void* var_170 = ecx_1
int32_t i

do
    int32_t eax_11 = sx.d(*(eax_9 + 0x20)) * *(ecx_1 + 0x40)
    int32_t ecx_2 = eax_11 * 0x249d
    int32_t eax_12 = eax_11 * 0xdfc
    int32_t edx_4 = ((sx.d(*(eax_9 - 0x20)) * *(ecx_1 - 0x40)) << 0xd) + 0x400
    int32_t edi_2 = edx_4 - eax_12
    int32_t esi_1 = ecx_2 + edx_4
    int32_t ebx_4 = (eax_12 * 2 - ecx_2 * 2 + edx_4) s>> 0xb
    int32_t ecx_4 = sx.d(*var_14c) * *var_170
    int32_t edx_6 = sx.d(var_14c[0x20]) * *(var_170 + 0x80)
    int32_t esi_3 = (ecx_4 + edx_6) * 0x1a9a
    int32_t ecx_6 = ecx_4 * 0x1071 + esi_3
    int32_t esi_4 = esi_3 - edx_6 * 0x45a4
    int32_t eax_17 = ecx_6 + esi_1
    int32_t edx_8 = esi_1 - ecx_6
    int32_t eax_18 = esi_4 + edi_2
    int32_t edi_3 = edi_2 - esi_4
    int32_t eax_20 = sx.d(var_14c[-8]) * *(var_170 - 0x20)
    int32_t ebx_6 = sx.d(var_14c[8]) * *(var_170 + 0x20)
    int32_t ecx_8 = sx.d(var_14c[0x18]) * *(var_170 + 0x60)
    int32_t eax_22 = sx.d(var_14c[0x28]) * *(var_170 + 0xa0)
    int32_t edi_5 = ecx_8 << 0xd
    int32_t edx_10 = ebx_6 + eax_22
    int32_t ebx_7 = ebx_6 - eax_22
    int32_t esi_6 = ebx_7 * 0x9e3
    int32_t ecx_9 = edx_10 * 0x1e6f
    int32_t ebx_10 = eax_20 * 0x2cb3 + ecx_9 + edi_5 + esi_6
    int32_t ecx_10 = edx_10 * 0x12cf
    int32_t var_16c_2 = eax_20 * 0x714 - ecx_9 + edi_5 + esi_6
    int32_t edi_7 = edi_5 - (ebx_7 << 0xc) - esi_6
    int32_t edi_11 = (eax_20 - ebx_7 - ecx_8) << 2
    int32_t edx_14 = eax_20 * 0x2853 - ecx_10 - edi_7
    int32_t esi_10 = eax_20 * 0x148c - ecx_10 + edi_7
    *(var_168 - 0x20) = (eax_17 + ebx_10) s>> 0xb
    *(var_168 + 0x100) = (eax_17 - ebx_10) s>> 0xb
    *(var_168 + 0xe0) = (eax_18 - edx_14) s>> 0xb
    *var_168 = (eax_18 + edx_14) s>> 0xb
    *(var_168 + 0xc0) = ebx_4 - edi_11
    *(var_168 + 0x20) = edi_11 + ebx_4
    *(var_168 + 0xa0) = (edi_3 - esi_10) s>> 0xb
    *(var_168 + 0x40) = (edi_3 + esi_10) s>> 0xb
    ecx_1 = var_170 + 4
    *(var_168 + 0x60) = (var_16c_2 + edx_8) s>> 0xb
    eax_9 = &var_14c[1]
    *(var_168 + 0x80) = (edx_8 - var_16c_2) s>> 0xb
    i = i_2
    i_2 -= 1
    var_14c = eax_9
    var_170 = ecx_1
    var_168 += 4
while (i != 1)
int32_t i_1 = 0
void var_140
void* ecx_24 = &var_140
int32_t i_3 = 0
void* var_14c_1 = &var_140

do
    char* eax_40 = *(arg4 + (i_1 << 2)) + arg5
    int32_t eax_41 = *(ecx_24 + 8)
    int32_t ecx_25 = eax_41 * 0x249d
    int32_t eax_42 = eax_41 * 0xdfc
    int32_t edx_21 = (*(ecx_24 - 8) + 0x10) << 0xd
    int32_t edi_15 = edx_21 - eax_42
    int32_t ebx_13 = ecx_25 + edx_21
    int32_t esi_13 = eax_42 * 2 - ecx_25 * 2 + edx_21
    int32_t ecx_26 = *var_14c_1
    int32_t edx_22 = *(var_14c_1 + 0x10)
    int32_t esi_14 = (ecx_26 + edx_22) * 0x1a9a
    int32_t ecx_28 = ecx_26 * 0x1071 + esi_14
    int32_t esi_15 = esi_14 - edx_22 * 0x45a4
    int32_t eax_47 = ecx_28 + ebx_13
    int32_t ebx_14 = ebx_13 - ecx_28
    int32_t eax_48 = esi_15 + edi_15
    int32_t edi_16 = edi_15 - esi_15
    int32_t eax_49 = *(var_14c_1 + 0x14)
    int32_t edi_17 = *(var_14c_1 + 4)
    int32_t ebx_16 = *(var_14c_1 + 0xc) << 0xd
    int32_t edx_23 = edi_17 + eax_49
    int32_t edi_18 = edi_17 - eax_49
    int32_t esi_16 = edi_18 * 0x9e3
    int32_t ecx_30 = edx_23 * 0x1e6f
    int32_t edx_24 = edx_23 * 0x12cf
    int32_t eax_50 = esi_16 + ebx_16
    int32_t edi_21 = *(var_14c_1 - 4) * 0x2cb3 + ecx_30 + eax_50
    int32_t edi_24 = *(var_14c_1 - 4) * 0x714 - ecx_30 + eax_50
    int32_t ecx_33 = ebx_16 - (edi_18 << 0xc) - esi_16
    int32_t eax_56 = ((*(var_14c_1 - 4) - edi_18) << 0xd) - ebx_16
    int32_t eax_57 = *(var_14c_1 - 4)
    int32_t esi_20 = eax_57 * 0x2853 - edx_24 - ecx_33
    int32_t edi_27 = eax_57 * 0x148c - edx_24 + ecx_33
    *eax_40 = ((eax_47 + edi_21) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[9] = ((eax_47 - edi_21) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[1] = ((eax_48 + esi_20) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[8] = ((eax_48 - esi_20) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[2] = ((eax_56 + esi_13) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[7] = ((esi_13 - eax_56) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[3] = ((edi_16 + edi_27) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[6] = ((edi_16 - edi_27) s>> 0x12 & 0x3ff)[eax_6]
    ecx_24 = var_14c_1 + 0x20
    var_14c_1 = ecx_24
    eax_40[4] = ((edi_24 + ebx_14) s>> 0x12 & 0x3ff)[eax_6]
    eax_40[5] = ((ebx_14 - edi_24) s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0xa)

sub_745f2b(eax_1 ^ &__saved_ebp)
return i_1
