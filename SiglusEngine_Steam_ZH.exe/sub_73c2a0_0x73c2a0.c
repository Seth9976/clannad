// 函数: sub_73c2a0
// 地址: 0x73c2a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t* ebx = arg3
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
int32_t i_2 = 8
int32_t* edi = *(arg2 + 0x54)
void var_108
void* eax_8 = &var_108
int32_t* var_10c = edi
int32_t i

do
    int16_t ecx_1 = ebx[8]
    int32_t ecx_4
    
    if (ecx_1 != 0 || ebx[0x10] != ecx_1 || ebx[0x18] != ecx_1 || ebx[0x20] != ecx_1
            || ebx[0x28] != ecx_1 || ebx[0x30] != ecx_1 || ebx[0x38] != ecx_1)
        int32_t edx_2 = sx.d(ebx[0x10]) * edi[0x10]
        int32_t esi_2 = sx.d(ebx[0x30]) * edi[0x30]
        int32_t edi_1 = (esi_2 + edx_2) * 0x1151
        int32_t edx_4 = edx_2 * 0x187e + edi_1
        int32_t edi_2 = edi_1 - esi_2 * 0x3b21
        int32_t ecx_9 = (sx.d(ebx[0x20]) * var_10c[0x20]) << 0xd
        int32_t ebx_4 = ((sx.d(*ebx) * *var_10c) << 0xd) + 0x400
        int32_t esi_4 = ecx_9 + ebx_4
        int32_t ebx_5 = ebx_4 - ecx_9
        int32_t ecx_10 = esi_4 + edx_4
        int32_t esi_5 = esi_4 - edx_4
        int32_t ecx_11 = ebx_5 + edi_2
        int32_t ebx_6 = ebx_5 - edi_2
        int32_t ecx_13 = sx.d(arg3[0x38]) * var_10c[0x38]
        int32_t ebx_8 = sx.d(arg3[0x28]) * var_10c[0x28]
        int32_t edx_7 = sx.d(arg3[0x18]) * var_10c[0x18]
        int32_t edi_5 = sx.d(ecx_1) * var_10c[8]
        int32_t edx_8 = edx_7 + ecx_13
        int32_t esi_7 = ebx_8 + edi_5
        int32_t ebx_9 = (esi_7 + edx_8) * 0x25a1
        int32_t edx_10 = ebx_9 - edx_8 * 0x3ec5
        int32_t ebx_10 = ebx_9 - esi_7 * 0xc7c
        int32_t ecx_18 = (ecx_13 + edi_5) * 0xffffe333
        int32_t esi_11 = ecx_13 * 0x98e + ecx_18 + edx_10
        int32_t esi_14 = edi_5 * 0x300b + ecx_18 + ebx_10
        int32_t ecx_21 = (edx_7 + ebx_8) * 0xffffadfd
        int32_t edx_13 = edx_7 * 0x6254 + ecx_21 + edx_10
        int32_t edi_8 = ebx_8 * 0x41b3 + ecx_21 + ebx_10
        *(eax_8 + 0xe0) = (ecx_10 - esi_14) s>> 0xb
        *eax_8 = (ecx_10 + esi_14) s>> 0xb
        *(eax_8 + 0x20) = (ecx_11 + edx_13) s>> 0xb
        *(eax_8 + 0xc0) = (ecx_11 - edx_13) s>> 0xb
        edi = var_10c
        *(eax_8 + 0xa0) = (ebx_6 - edi_8) s>> 0xb
        *(eax_8 + 0x40) = (ebx_6 + edi_8) s>> 0xb
        ecx_4 = (esi_5 + esi_11) s>> 0xb
        *(eax_8 + 0x80) = (esi_5 - esi_11) s>> 0xb
        ebx = arg3
    else
        ecx_4 = (sx.d(*ebx) * *edi) << 2
        *eax_8 = ecx_4
        *(eax_8 + 0x20) = ecx_4
        *(eax_8 + 0x40) = ecx_4
        *(eax_8 + 0x80) = ecx_4
        *(eax_8 + 0xa0) = ecx_4
        *(eax_8 + 0xc0) = ecx_4
        *(eax_8 + 0xe0) = ecx_4
    
    *(eax_8 + 0x60) = ecx_4
    ebx = &ebx[1]
    edi = &edi[1]
    i = i_2 - 1
    var_10c = edi
    eax_8 += 4
    arg3 = ebx
    i_2 = i
while (i s> 0)
int32_t i_1 = 0
void var_100
void* esi_15 = &var_100
int32_t i_3 = 0
void* var_130_2 = &var_100

do
    int32_t ebx_22 = (*(esi_15 - 8) + 0x10) << 0xd
    char* eax_10 = *(arg4 + (i_1 << 2)) + arg5
    int32_t ecx_31 = *(esi_15 + 8) * 0x29cf
    int32_t eax_11 = *(esi_15 + 8) * 0x1151
    int32_t edx_18 = ecx_31 + ebx_22
    int32_t edx_20 = ebx_22 - ecx_31
    int32_t ecx_32 = ebx_22 + eax_11
    int32_t ebx_23 = ebx_22 - eax_11
    int32_t ecx_33 = *esi_15
    int32_t esi_16 = *(esi_15 + 0x10)
    int32_t eax_13 = ecx_33 - esi_16
    int32_t edx_21 = eax_13 * 0x8d4
    int32_t ebx_24 = eax_13 * 0x2c63
    int32_t edi_10 = ecx_33 * 0x1ccd + edx_21
    int32_t edx_23 = esi_16 * 0x5203 + ebx_24
    int32_t ebx_25 = ebx_24 - ecx_33 * 0x133e
    int32_t ecx_35 = edx_21 - esi_16 * 0x1050
    int32_t eax_16 = edx_18 + edx_23
    int32_t esi_18 = edx_18 - edx_23
    int32_t eax_17 = ecx_32 + edi_10
    int32_t edx_25 = ecx_32 - edi_10
    int32_t eax_18 = ebx_23 + ebx_25
    int32_t edx_27 = ebx_23 - ebx_25
    int32_t eax_19 = edx_20 + ecx_35
    int32_t edx_29 = edx_20 - ecx_35
    int32_t edx_30 = *(var_130_2 - 4)
    int32_t esi_19 = *(var_130_2 + 4)
    int32_t ebx_26 = *(var_130_2 + 0xc)
    int32_t edi_11 = *(var_130_2 + 0x14)
    int32_t eax_22 = (edx_30 + esi_19) * 0x2b4e
    int32_t ecx_36 = edx_30 + ebx_26
    int32_t eax_23 = ecx_36 * 0x27e9
    int32_t eax_25 = (edi_11 + edx_30) * 0x22fc
    int32_t eax_28 = (edx_30 - edi_11) * 0x1cb6
    int32_t eax_29 = ecx_36 * 0x1555
    int32_t eax_32 = (edx_30 - esi_19) * 0xd23
    int32_t edi_15 = eax_22 - edx_30 * 0x492a + eax_25 + eax_23
    int32_t ecx_37 = (ebx_26 + esi_19) * 0x470
    int32_t edx_34 = eax_32 - edx_30 * 0x3abe + eax_29 + eax_28
    int32_t edx_35 = (ebx_26 - esi_19) * 0x2d09
    int32_t esi_20 = esi_19 + *(var_130_2 + 0x14)
    int32_t edx_36 = esi_20 * 0xffffeaab
    int32_t ecx_41 = esi_20 * 0xffffd817
    int32_t esi_21 = *(var_130_2 + 0x14)
    int32_t var_128_3 = eax_22 + esi_19 * 0x24d + ecx_37 + edx_36
    int32_t var_10c_4 = eax_32 + esi_19 * 0x3f1a + edx_35 + ecx_41
    int32_t ecx_42 = (esi_21 + ebx_26) * 0xffffd4b2
    int32_t var_120_3 = eax_23 + ecx_37 - ebx_26 * 0x2406 + ecx_42
    int32_t edx_38 = eax_25 + esi_21 * 0x2218 + edx_36 + ecx_42
    int32_t eax_51 = (esi_21 - ebx_26) * 0xd23
    int32_t var_124_3 = eax_28 + esi_21 * 0x6485 + ecx_41 + eax_51
    int32_t var_110_4 = eax_29 + edx_35 - ebx_26 * 0x1886 + eax_51
    *eax_10 = ((eax_16 + edi_15) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xf] = ((eax_16 - edi_15) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[1] = ((eax_17 + var_128_3) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xe] = ((eax_17 - var_128_3) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[2] = ((eax_18 + var_120_3) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xd] = ((eax_18 - var_120_3) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[3] = ((eax_19 + edx_38) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xc] = ((eax_19 - edx_38) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[4] = ((edx_29 + var_124_3) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xb] = ((edx_29 - var_124_3) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[5] = ((edx_27 + var_110_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[0xa] = ((edx_27 - var_110_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[6] = ((edx_25 + var_10c_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[9] = ((edx_25 - var_10c_4) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[7] = ((esi_18 + edx_34) s>> 0x12 & 0x3ff)[eax_6]
    eax_10[8] = ((esi_18 - edx_34) s>> 0x12 & 0x3ff)[eax_6]
    esi_15 = var_130_2 + 0x20
    i_1 = i_3 + 1
    var_130_2 = esi_15
    i_3 = i_1
while (i_1 s< 8)

sub_745f2b(eax_1 ^ &__saved_ebp)
return i_1
