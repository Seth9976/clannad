// 函数: sub_739eb0
// 地址: 0x739eb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t* edx_1 = arg3 + 0x20
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
int16_t* var_198 = edx_1
int32_t i_2 = 8
int32_t* esi_1 = *(arg2 + 0x54) + 0x40
void var_168
void* var_1ac = &var_168
int32_t* var_190 = esi_1
int32_t i

do
    int32_t edx_3 = sx.d(*edx_1) * *esi_1
    int32_t eax_10 = sx.d(edx_1[0x10]) * esi_1[0x10] * 0x2731
    int32_t edi_4 = ((sx.d(edx_1[-0x10]) * esi_1[-0x10]) << 0xd) + 0x400
    int32_t esi_2 = edx_3 * 0x2bb6
    int32_t ebx_2 = edi_4 - eax_10
    int32_t edx_4 = edx_3 << 0xd
    int32_t ecx_1 = eax_10 + edi_4
    int32_t ecx_4 = (sx.d(var_198[0x20]) * var_190[0x20]) << 0xd
    int32_t eax_14 = edx_4 - ecx_4
    int32_t var_19c_2 = edi_4 - eax_14
    int32_t edi_5 = edi_4 + eax_14
    int32_t eax_15 = ecx_4 + esi_2
    int32_t var_194_2 = ecx_1 - eax_15
    int32_t edi_7 = ecx_1 + eax_15
    int32_t esi_4 = esi_2 - ecx_4 - edx_4
    int32_t eax_16 = esi_4 + ebx_2
    int32_t ebx_3 = ebx_2 - esi_4
    int32_t ecx_6 = sx.d(var_198[8]) * var_190[8]
    int32_t eax_18 = sx.d(var_198[0x18]) * var_190[0x18]
    int32_t edi_9 = sx.d(var_198[0x28]) * var_190[0x28]
    int32_t ebx_5 = sx.d(var_198[-8]) * var_190[-8]
    int32_t edx_6 = ecx_6 * 0x29cf
    int32_t esi_6 = ecx_6 * 0xffffeeaf
    int32_t ecx_7 = ebx_5 + eax_18
    int32_t eax_20 = (ecx_7 + edi_9) * 0x1b8d
    int32_t eax_22 = ecx_7 * 0x85b + eax_20
    int32_t ebx_8 = ebx_5 * 0x8f7 + eax_22 + edx_6
    int32_t eax_24 = (edi_9 + eax_18) * 0xffffde8b
    int32_t var_1a0_2 = eax_22 + eax_24 - eax_18 * 0x2f50 + esi_6
    int32_t var_18c_2 = eax_24 + edi_9 * 0x32c6 - edx_6 + eax_20
    int32_t edx_8 = eax_20 + ebx_5 * 0xffffea5c - edi_9 * 0x3f74 + esi_6
    int32_t ecx_16 = ebx_5 - edi_9
    int32_t esi_8 = ecx_6 - eax_18
    int32_t edx_9 = (esi_8 + ecx_16) * 0x1151
    int32_t ecx_18 = ecx_16 * 0x187e + edx_9
    int32_t edx_10 = edx_9 - esi_8 * 0x3b21
    *(var_1ac - 0x20) = (edi_7 + ebx_8) s>> 0xb
    *(var_1ac + 0x140) = (edi_7 - ebx_8) s>> 0xb
    *var_1ac = (edi_5 + ecx_18) s>> 0xb
    *(var_1ac + 0x120) = (edi_5 - ecx_18) s>> 0xb
    *(var_1ac + 0x20) = (eax_16 + var_1a0_2) s>> 0xb
    *(var_1ac + 0x100) = (eax_16 - var_1a0_2) s>> 0xb
    *(var_1ac + 0x40) = (var_18c_2 + ebx_3) s>> 0xb
    *(var_1ac + 0xe0) = (ebx_3 - var_18c_2) s>> 0xb
    esi_1 = &var_190[1]
    *(var_1ac + 0xc0) = (var_19c_2 - edx_10) s>> 0xb
    *(var_1ac + 0x60) = (edx_10 + var_19c_2) s>> 0xb
    var_190 = esi_1
    *(var_1ac + 0xa0) = (var_194_2 - edx_8) s>> 0xb
    edx_1 = &var_198[1]
    *(var_1ac + 0x80) = (edx_8 + var_194_2) s>> 0xb
    i = i_2
    i_2 -= 1
    var_198 = edx_1
    var_1ac += 4
while (i != 1)
int32_t i_1 = 0
void var_180
void* edx_15 = &var_180
int32_t i_3 = 0
void* var_18c_3 = &var_180

do
    int32_t edi_14 = (*(edx_15 - 8) + 0x10) << 0xd
    char* eax_45 = *(arg4 + (i_1 << 2)) + arg5
    int32_t eax_46 = *(edx_15 + 8) * 0x2731
    int32_t edx_16 = *edx_15
    int32_t esi_16 = edx_16 * 0x2bb6
    int32_t edx_17 = edx_16 << 0xd
    int32_t ebx_16 = edi_14 - eax_46
    int32_t ecx_26 = eax_46 + edi_14
    int32_t ecx_28 = *(var_18c_3 + 0x10) << 0xd
    int32_t eax_49 = edx_17 - ecx_28
    int32_t var_1a0_4 = edi_14 - eax_49
    int32_t edi_15 = edi_14 + eax_49
    int32_t eax_50 = ecx_28 + esi_16
    int32_t var_194_4 = ecx_26 - eax_50
    int32_t edi_17 = ecx_26 + eax_50
    int32_t esi_18 = esi_16 - ecx_28 - edx_17
    int32_t eax_51 = esi_18 + ebx_16
    int32_t ebx_17 = ebx_16 - esi_18
    int32_t edi_18 = *(var_18c_3 + 0x14)
    int32_t ecx_29 = *(var_18c_3 + 4)
    int32_t esi_19 = ecx_29 * 0xffffeeaf
    int32_t ebx_18 = *(var_18c_3 + 0xc)
    int32_t edx_19 = ecx_29 * 0x29cf
    int32_t ecx_30 = *(var_18c_3 - 4) + ebx_18
    int32_t eax_54 = (ecx_30 + edi_18) * 0x1b8d
    int32_t ecx_32 = ecx_30 * 0x85b + eax_54
    int32_t eax_57 = *(var_18c_3 - 4) * 0x8f7 + ecx_32 + edx_19
    int32_t ecx_34 = (edi_18 + ebx_18) * 0xffffde8b
    int32_t var_190_2 = ecx_32 + ecx_34 - ebx_18 * 0x2f50 + esi_19
    int32_t edx_20 = *(var_18c_3 - 4)
    int32_t var_19c_4 = ecx_34 + edi_18 * 0x32c6 - edx_19 + eax_54
    int32_t edx_21 = edx_20 - edi_18
    int32_t var_198_2 = eax_54 + edx_20 * 0xffffea5c - edi_18 * 0x3f74 + esi_19
    int32_t esi_21 = *(var_18c_3 + 4) - ebx_18
    int32_t edi_19 = (esi_21 + edx_21) * 0x1151
    int32_t ecx_42 = edx_21 * 0x187e + edi_19
    int32_t edi_20 = edi_19 - esi_21 * 0x3b21
    *eax_45 = ((edi_17 + eax_57) s>> 0x12 & 0x3ff)[eax_6]
    eax_45[0xb] = ((edi_17 - eax_57) s>> 0x12 & 0x3ff)[eax_6]
    eax_45[1] = ((edi_15 + ecx_42) s>> 0x12 & 0x3ff)[eax_6]
    eax_45[0xa] = ((edi_15 - ecx_42) s>> 0x12 & 0x3ff)[eax_6]
    eax_45[2] = ((eax_51 + var_190_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_45[9] = ((eax_51 - var_190_2) s>> 0x12 & 0x3ff)[eax_6]
    eax_45[3] = ((var_19c_4 + ebx_17) s>> 0x12 & 0x3ff)[eax_6]
    eax_45[8] = ((ebx_17 - var_19c_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_45[4] = ((edi_20 + var_1a0_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_45[7] = ((var_1a0_4 - edi_20) s>> 0x12 & 0x3ff)[eax_6]
    eax_45[5] = ((var_198_2 + var_194_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_45[6] = ((var_194_4 - var_198_2) s>> 0x12 & 0x3ff)[eax_6]
    edx_15 = var_18c_3 + 0x20
    i_1 = i_3 + 1
    var_18c_3 = edx_15
    i_3 = i_1
while (i_1 s< 0xc)

sub_745f2b(eax_1 ^ &__saved_ebp)
return i_1
