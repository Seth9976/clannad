// 函数: sub_742930
// 地址: 0x742930
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_108
void* ebx = &var_108
int32_t i_3 = 8
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
void* var_10c = &var_108
int16_t* edi = arg3
int32_t* ecx = *(arg2 + 0x54)
int32_t* var_110 = ecx
int32_t i

do
    int16_t eax_8 = edi[8]
    int32_t eax_10
    
    if (eax_8 != 0 || edi[0x10] != eax_8 || edi[0x18] != eax_8 || edi[0x20] != eax_8
            || edi[0x28] != eax_8 || edi[0x30] != eax_8 || edi[0x38] != eax_8)
        int32_t esi_2 = sx.d(*edi) * *ecx
        int32_t edx_2 = sx.d(edi[0x10]) * ecx[0x10]
        int32_t eax_12 = sx.d(edi[0x20]) * ecx[0x20]
        int32_t ecx_2 = sx.d(edi[0x30]) * var_110[0x30]
        int32_t ebx_2 = eax_12 + esi_2
        int32_t esi_3 = esi_2 - eax_12
        int32_t eax_13 = ecx_2 + edx_2
        int32_t edx_4 = eax_13 + ebx_2
        int32_t ebx_3 = ebx_2 - eax_13
        int32_t ecx_5 = (((edx_2 - ecx_2) * 0x16a) s>> 8) - eax_13
        int32_t eax_14 = ecx_5 + esi_3
        int32_t esi_4 = esi_3 - ecx_5
        int32_t ecx_7 = sx.d(edi[0x18]) * var_110[0x18]
        int32_t esi_6 = sx.d(edi[0x28]) * var_110[0x28]
        int32_t ebx_5 = sx.d(edi[8]) * var_110[8]
        int32_t eax_17 = sx.d(edi[0x38]) * var_110[0x38]
        int32_t edx_6 = esi_6 + ecx_7
        int32_t esi_7 = esi_6 - ecx_7
        int32_t ecx_8 = eax_17 + ebx_5
        int32_t ebx_6 = ebx_5 - eax_17
        int32_t edi_1 = ecx_8 + edx_6
        int32_t eax_20 = ((ebx_6 + esi_7) * 0x1d9) s>> 8
        int32_t esi_11 = ((esi_7 * 0xfffffd63) s>> 8) - edi_1 + eax_20
        int32_t ecx_12 = (((ecx_8 - edx_6) * 0x16a) s>> 8) - esi_11
        int32_t edx_10 = ((ebx_6 * 0x115) s>> 8) - eax_20 + ecx_12
        *(var_10c + 0xe0) = edx_4 - edi_1
        *var_10c = edi_1 + edx_4
        *(var_10c + 0x20) = esi_11 + eax_14
        *(var_10c + 0xc0) = eax_14 - esi_11
        ebx = var_10c
        edi = arg3
        *(ebx + 0x40) = ecx_12 + esi_4
        *(ebx + 0xa0) = esi_4 - ecx_12
        eax_10 = edx_10 + ebx_3
        *(ebx + 0x60) = ebx_3 - edx_10
        ecx = var_110
    else
        eax_10 = sx.d(*edi) * *ecx
        *ebx = eax_10
        *(ebx + 0x20) = eax_10
        *(ebx + 0x40) = eax_10
        *(ebx + 0x60) = eax_10
        *(ebx + 0xa0) = eax_10
        *(ebx + 0xc0) = eax_10
        *(ebx + 0xe0) = eax_10
    
    *(ebx + 0x80) = eax_10
    edi = &edi[1]
    ecx = &ecx[1]
    i = i_3 - 1
    var_110 = ecx
    ebx += 4
    arg3 = edi
    var_10c = ebx
    i_3 = i
while (i s> 0)
void* edx_13 = &var_108
int32_t i_1 = 0
void* var_110_1 = &var_108
int32_t i_2 = 0

do
    int32_t ecx_16 = *(edx_13 + 4)
    char* eax_26 = *(arg4 + (i_1 << 2)) + arg5
    char* ecx_19
    
    if (ecx_16 != 0 || *(edx_13 + 8) != ecx_16 || *(edx_13 + 0xc) != ecx_16
            || *(edx_13 + 0x10) != ecx_16 || *(edx_13 + 0x14) != ecx_16
            || *(edx_13 + 0x18) != ecx_16 || *(edx_13 + 0x1c) != ecx_16)
        int32_t ecx_20 = *(edx_13 + 0x10)
        int32_t edi_3 = *edx_13
        int32_t ebx_12 = edi_3 + ecx_20
        int32_t edi_4 = edi_3 - ecx_20
        int32_t ecx_21 = *(edx_13 + 0x18)
        int32_t edx_14 = *(edx_13 + 8)
        int32_t esi_14 = ecx_21 + edx_14
        int32_t edx_16 = esi_14 + ebx_12
        int32_t ebx_13 = ebx_12 - esi_14
        int32_t ecx_24 = (((edx_14 - ecx_21) * 0x16a) s>> 8) - esi_14
        int32_t edx_17 = ecx_24 + edi_4
        int32_t edi_5 = edi_4 - ecx_24
        int32_t ecx_25 = *(var_110_1 + 0xc)
        int32_t esi_15 = *(var_110_1 + 0x14)
        int32_t edi_6 = esi_15 + ecx_25
        int32_t esi_16 = esi_15 - ecx_25
        int32_t ecx_26 = *(var_110_1 + 0x1c)
        int32_t edx_19 = ecx_26 + ecx_16
        int32_t ebx_15 = ecx_16 - ecx_26
        int32_t ebx_16 = edx_19 + edi_6
        int32_t ecx_30 = ((ebx_15 + esi_16) * 0x1d9) s>> 8
        int32_t esi_20 = ((esi_16 * 0xfffffd63) s>> 8) - ebx_16 + ecx_30
        int32_t edx_23 = (((edx_19 - edi_6) * 0x16a) s>> 8) - esi_20
        int32_t edi_10 = ((ebx_15 * 0x115) s>> 8) - ecx_30 + edx_23
        *eax_26 = ((edx_16 + ebx_16) s>> 5 & 0x3ff)[eax_6]
        eax_26[7] = ((edx_16 - ebx_16) s>> 5 & 0x3ff)[eax_6]
        eax_26[1] = ((esi_20 + edx_17) s>> 5 & 0x3ff)[eax_6]
        eax_26[6] = ((edx_17 - esi_20) s>> 5 & 0x3ff)[eax_6]
        eax_26[2] = ((edx_23 + edi_5) s>> 5 & 0x3ff)[eax_6]
        eax_26[5] = ((edi_5 - edx_23) s>> 5 & 0x3ff)[eax_6]
        eax_26[4] = ((edi_10 + ebx_13) s>> 5 & 0x3ff)[eax_6]
        ecx_19 = zx.d(*(((ebx_13 - edi_10) s>> 5 & 0x3ff) + eax_6))
        edx_13 = var_110_1
    else
        ecx_19.b = (*edx_13 s>> 5 & 0x3ff)[eax_6]
        *eax_26 = ecx_19.b
        eax_26[1] = ecx_19.b
        eax_26[2] = ecx_19.b
        eax_26[4] = ecx_19.b
        eax_26[5] = ecx_19.b
        eax_26[6] = ecx_19.b
        eax_26[7] = ecx_19.b
    
    eax_26[3] = ecx_19.b
    edx_13 += 0x20
    i_1 = i_2 + 1
    var_110_1 = edx_13
    i_2 = i_1
while (i_1 s< 8)

sub_745f2b(eax_1 ^ &__saved_ebp)
return i_1
