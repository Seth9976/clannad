// 函数: sub_739850
// 地址: 0x739850
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t* edx_1 = arg3 + 0x40
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
int16_t* var_194 = edx_1
int32_t i_2 = 8
int32_t* esi_1 = *(arg2 + 0x54) + 0x80
void var_148
void* var_198 = &var_148
int32_t* var_18c = esi_1
int32_t i

do
    int32_t ebx_2 = sx.d(*edx_1) * *esi_1
    int32_t edi_2 = sx.d(edx_1[0x10]) * esi_1[0x10]
    int32_t ecx_2 = sx.d(edx_1[-0x10]) * esi_1[-0x10]
    int32_t eax_11 = ((sx.d(edx_1[-0x20]) * esi_1[-0x20]) << 0xd) + 0x400
    int32_t eax_14 = (ebx_2 - edi_2) * 0x517e
    int32_t esi_2 = edi_2 + ecx_2
    int32_t eax_17 = (ebx_2 - ecx_2) * 0xdc9
    int32_t esi_3 = esi_2 - ebx_2
    int32_t edx_3 = esi_3 * 0x2b6c + eax_11
    int32_t eax_22 = edx_3 - ebx_2 * 0x3a4c + eax_17 + eax_14
    int32_t var_19c_2 = eax_14 + edi_2 * 0x43b5 + edx_3
    int32_t var_188_2 = eax_17 + edx_3 - ecx_2 * 0x306f
    int32_t ecx_6 = esi_2 * 0xffffdb05 + edx_3
    int32_t ecx_7 = ecx_6 - edi_2 * 0x193d
    int32_t var_174_3 = ecx_6 + ebx_2 * 0x3e39 - ecx_2 * 0x2c83
    int32_t edx_5 = sx.d(var_194[-0x18]) * var_18c[-0x18]
    int32_t eax_30 = sx.d(var_194[-8]) * var_18c[-8]
    int32_t edi_4 = sx.d(var_194[0x18]) * var_18c[0x18]
    int32_t ebx_4 = sx.d(var_194[8]) * var_18c[8]
    int32_t ecx_11 = eax_30 + edx_5
    int32_t ecx_12 = ecx_11 * 0x1c6a
    int32_t esi_5 = (ecx_11 + edi_4 + ebx_4) * 0xcc0
    int32_t eax_34 = (ebx_4 + edx_5) * 0x1574
    int32_t eax_37 = (edi_4 + edx_5) * 0xbb8 + esi_5
    int32_t edx_9 = eax_37 - edx_5 * 0x1d8a + eax_34 + ecx_12
    var_18c = &var_18c[1]
    int32_t ecx_14 = esi_5 - (eax_30 + ebx_4) * 0x2537
    int32_t var_184_2 = eax_34 + ecx_14 - ebx_4 * 0x2626
    int32_t ecx_16 = (eax_30 + edi_4) * 0xffffc675
    int32_t var_16c_3 = ecx_12 + eax_30 * 0x4258 + ecx_14 + ecx_16
    int32_t var_178_3 = eax_37 + edi_4 * 0x4347 + ecx_16
    int32_t ecx_19 = eax_30 * 0xffffd10d - edi_4 * 0x35ea + ebx_4 * 0x200b + esi_5
    *(var_198 + 0x120) = (var_19c_2 - edx_9) s>> 0xb
    *(var_198 - 0x20) = (var_19c_2 + edx_9) s>> 0xb
    *(var_198 + 0x100) = (eax_22 - var_16c_3) s>> 0xb
    *var_198 = (var_16c_3 + eax_22) s>> 0xb
    *(var_198 + 0xe0) = (ecx_7 - var_184_2) s>> 0xb
    *(var_198 + 0x20) = (var_184_2 + ecx_7) s>> 0xb
    *(var_198 + 0x40) = (var_178_3 + var_188_2) s>> 0xb
    *(var_198 + 0xc0) = (var_188_2 - var_178_3) s>> 0xb
    *(var_198 + 0x60) = (ecx_19 + var_174_3) s>> 0xb
    *(var_198 + 0xa0) = (var_174_3 - ecx_19) s>> 0xb
    edx_1 = &var_194[1]
    *(var_198 + 0x80) = (eax_11 - esi_3 * 0x2d41) s>> 0xb
    i = i_2
    i_2 -= 1
    var_198 += 4
    esi_1 = var_18c
    var_194 = edx_1
while (i != 1)
int32_t i_1 = 0
void var_158
void* edx_17 = &var_158
int32_t i_3 = 0
void* var_16c_4 = &var_158

do
    int32_t ebx_17 = *edx_17
    int32_t edi_5 = *(edx_17 + 8)
    char* eax_65 = *(arg4 + (i_1 << 2)) + arg5
    int32_t ecx_21 = *(edx_17 - 8)
    int32_t eax_68 = (*(edx_17 - 0x10) + 0x10) << 0xd
    int32_t eax_71 = (ebx_17 - edi_5) * 0x517e
    int32_t esi_8 = edi_5 + ecx_21
    int32_t eax_74 = (ebx_17 - ecx_21) * 0xdc9
    int32_t esi_9 = esi_8 - ebx_17
    int32_t edx_19 = esi_9 * 0x2b6c + eax_68
    int32_t eax_79 = edx_19 - ebx_17 * 0x3a4c + eax_74 + eax_71
    int32_t var_18c_2 = eax_71 + edi_5 * 0x43b5 + edx_19
    int32_t var_178_5 = eax_74 + edx_19 - ecx_21 * 0x306f
    int32_t ecx_25 = esi_8 * 0xffffdb05 + edx_19
    int32_t ecx_26 = ecx_25 - edi_5 * 0x193d
    int32_t edx_20 = *(var_16c_4 - 0xc)
    int32_t ebx_18 = *(var_16c_4 - 4)
    int32_t var_17c_4 = ecx_25 + ebx_17 * 0x3e39 - *(var_16c_4 - 8) * 0x2c83
    int32_t ecx_29 = ebx_18 + edx_20
    int32_t edi_7 = *(var_16c_4 + 0xc)
    int32_t esi_11 = (ecx_29 + edi_7 + *(var_16c_4 + 4)) * 0xcc0
    int32_t eax_88 = ecx_29 * 0x1c6a
    int32_t ecx_30 = *(var_16c_4 + 4)
    int32_t eax_91 = (ecx_30 + edx_20) * 0x1574
    int32_t eax_94 = (edi_7 + edx_20) * 0xbb8 + esi_11
    int32_t edx_24 = eax_94 - edx_20 * 0x1d8a + eax_91 + eax_88
    int32_t ecx_32 = esi_11 - (ecx_30 + ebx_18) * 0x2537
    int32_t var_180_4 = eax_91 + ecx_32 - *(var_16c_4 + 4) * 0x2626
    int32_t ecx_34 = (edi_7 + ebx_18) * 0xffffc675
    int32_t var_170_6 = eax_88 + ebx_18 * 0x4258 + ecx_32 + ecx_34
    int32_t var_188_4 = eax_94 + edi_7 * 0x4347 + ecx_34
    int32_t ecx_37 = ebx_18 * 0xffffd10d - edi_7 * 0x35ea + *(var_16c_4 + 4) * 0x200b + esi_11
    *eax_65 = ((var_18c_2 + edx_24) s>> 0x12 & 0x3ff)[eax_6]
    eax_65[0xa] = ((var_18c_2 - edx_24) s>> 0x12 & 0x3ff)[eax_6]
    eax_65[1] = ((var_170_6 + eax_79) s>> 0x12 & 0x3ff)[eax_6]
    eax_65[9] = ((eax_79 - var_170_6) s>> 0x12 & 0x3ff)[eax_6]
    eax_65[2] = ((var_180_4 + ecx_26) s>> 0x12 & 0x3ff)[eax_6]
    eax_65[8] = ((ecx_26 - var_180_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_65[3] = ((var_188_4 + var_178_5) s>> 0x12 & 0x3ff)[eax_6]
    eax_65[7] = ((var_178_5 - var_188_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_65[4] = ((ecx_37 + var_17c_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_65[6] = ((var_17c_4 - ecx_37) s>> 0x12 & 0x3ff)[eax_6]
    edx_17 = var_16c_4 + 0x20
    var_16c_4 = edx_17
    eax_65[5] = ((eax_68 - esi_9 * 0x2d41) s>> 0x12 & 0x3ff)[eax_6]
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0xb)

sub_745f2b(eax_1 ^ &__saved_ebp)
return i_1
