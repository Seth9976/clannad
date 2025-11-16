// 函数: sub_735e00
// 地址: 0x735e00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t* ebx = arg3
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
int32_t i_2 = 8
void var_108
void* edi = &var_108
void* var_110 = &var_108
int32_t* esi = *(arg2 + 0x54)
int32_t* var_10c = esi
int32_t i

do
    int16_t eax_8 = ebx[8]
    int32_t eax_11
    
    if (eax_8 != 0 || ebx[0x10] != eax_8 || ebx[0x18] != eax_8 || ebx[0x20] != eax_8
            || ebx[0x28] != eax_8 || ebx[0x30] != eax_8 || ebx[0x38] != eax_8)
        int32_t ecx_2 = sx.d(ebx[0x10]) * esi[0x10]
        int32_t edx_2 = sx.d(ebx[0x30]) * esi[0x30]
        int32_t esi_1 = (edx_2 + ecx_2) * 0x1151
        int32_t ecx_4 = ecx_2 * 0x187e + esi_1
        int32_t esi_2 = esi_1 - edx_2 * 0x3b21
        int32_t edx_6 = ((sx.d(*ebx) * *var_10c) << 0xd) + 0x400
        int32_t eax_16 = (sx.d(ebx[0x20]) * var_10c[0x20]) << 0xd
        int32_t edi_2 = eax_16 + edx_6
        int32_t edx_7 = edx_6 - eax_16
        int32_t eax_17 = edi_2 + ecx_4
        int32_t edi_3 = edi_2 - ecx_4
        int32_t eax_18 = edx_7 + esi_2
        int32_t edx_8 = edx_7 - esi_2
        int32_t eax_20 = sx.d(ebx[0x38]) * var_10c[0x38]
        int32_t ecx_6 = sx.d(ebx[0x18]) * var_10c[0x18]
        int32_t edx_10 = sx.d(ebx[0x28]) * var_10c[0x28]
        int32_t esi_5 = sx.d(ebx[8]) * var_10c[8]
        int32_t ecx_7 = ecx_6 + eax_20
        int32_t edx_11 = edx_10 + esi_5
        int32_t edi_5 = (edx_11 + ecx_7) * 0x25a1
        int32_t ebx_2 = edi_5 - ecx_7 * 0x3ec5
        int32_t edi_6 = edi_5 - edx_11 * 0xc7c
        int32_t eax_25 = (eax_20 + esi_5) * 0xffffe333
        int32_t edx_14 = esi_5 * 0x300b + eax_25 + edi_6
        int32_t ecx_11 = eax_20 * 0x98e + eax_25 + ebx_2
        int32_t eax_28 = (ecx_6 + edx_10) * 0xffffadfd
        int32_t esi_8 = edx_10 * 0x41b3 + eax_28 + edi_6
        edi = var_110
        int32_t ecx_14 = ecx_6 * 0x6254 + eax_28 + ebx_2
        *edi = (eax_17 + edx_14) s>> 0xb
        *(edi + 0xe0) = (eax_17 - edx_14) s>> 0xb
        *(edi + 0x20) = (eax_18 + ecx_14) s>> 0xb
        ebx = arg3
        *(edi + 0xc0) = (eax_18 - ecx_14) s>> 0xb
        esi = var_10c
        *(edi + 0xa0) = (edx_8 - esi_8) s>> 0xb
        *(edi + 0x40) = (edx_8 + esi_8) s>> 0xb
        eax_11 = (edi_3 + ecx_11) s>> 0xb
        *(edi + 0x80) = (edi_3 - ecx_11) s>> 0xb
    else
        eax_11 = (sx.d(*ebx) * *esi) << 2
        *edi = eax_11
        *(edi + 0x20) = eax_11
        *(edi + 0x40) = eax_11
        *(edi + 0x80) = eax_11
        *(edi + 0xa0) = eax_11
        *(edi + 0xc0) = eax_11
        *(edi + 0xe0) = eax_11
    
    *(edi + 0x60) = eax_11
    ebx = &ebx[1]
    esi = &esi[1]
    i = i_2 - 1
    var_10c = esi
    edi += 4
    arg3 = ebx
    var_110 = edi
    i_2 = i
while (i s> 0)
int32_t edx_21 = eax_6
void* ebx_6 = &var_108
int32_t i_1 = 0
void* var_10c_1 = &var_108
int32_t i_3 = 0

do
    int32_t ecx_20 = *(ebx_6 + 4)
    char* eax_38 = *(arg4 + (i_1 << 2)) + arg5
    char* ecx_24
    
    if (ecx_20 != 0 || *(ebx_6 + 8) != ecx_20 || *(ebx_6 + 0xc) != ecx_20
            || *(ebx_6 + 0x10) != ecx_20 || *(ebx_6 + 0x14) != ecx_20 || *(ebx_6 + 0x18) != ecx_20
            || *(ebx_6 + 0x1c) != ecx_20)
        int32_t esi_9 = *(ebx_6 + 0x18)
        int32_t edx_22 = *(ebx_6 + 8)
        int32_t ebx_8 = *ebx_6 + 0x10
        int32_t edi_7 = (esi_9 + edx_22) * 0x1151
        int32_t edx_24 = edx_22 * 0x187e + edi_7
        int32_t edi_8 = edi_7 - esi_9 * 0x3b21
        int32_t ecx_28 = *(var_10c_1 + 0x10)
        int32_t esi_11 = (ecx_28 + ebx_8) << 0xd
        int32_t ebx_10 = (ebx_8 - ecx_28) << 0xd
        int32_t ecx_29 = esi_11 + edx_24
        int32_t esi_12 = esi_11 - edx_24
        int32_t ecx_30 = ebx_10 + edi_8
        int32_t ebx_11 = ebx_10 - edi_8
        int32_t edi_9 = *(var_10c_1 + 0x1c)
        int32_t edx_27 = *(var_10c_1 + 0xc) + edi_9
        int32_t esi_14 = ecx_20 + *(var_10c_1 + 0x14)
        int32_t ebx_12 = (esi_14 + edx_27) * 0x25a1
        int32_t edx_29 = ebx_12 - edx_27 * 0x3ec5
        int32_t ebx_13 = ebx_12 - esi_14 * 0xc7c
        int32_t ecx_37 = (ecx_20 + edi_9) * 0xffffe333
        int32_t esi_17 = edi_9 * 0x98e + ecx_37 + edx_29
        int32_t edx_32 = ecx_20 * 0x300b + ecx_37 + ebx_13
        int32_t edi_10 = *(var_10c_1 + 0xc)
        int32_t esi_18 = *(var_10c_1 + 0x14)
        int32_t ecx_40 = (esi_18 + edi_10) * 0xffffadfd
        int32_t esi_21 = esi_18 * 0x41b3 + ecx_40 + ebx_13
        int32_t esi_24 = edi_10 * 0x6254 + ecx_40 + edx_29
        *eax_38 = ((ecx_29 + edx_32) s>> 0x12 & 0x3ff)[eax_6]
        eax_38[7] = ((ecx_29 - edx_32) s>> 0x12 & 0x3ff)[eax_6]
        eax_38[1] = ((ecx_30 + esi_24) s>> 0x12 & 0x3ff)[eax_6]
        eax_38[6] = ((ecx_30 - esi_24) s>> 0x12 & 0x3ff)[eax_6]
        eax_38[2] = ((ebx_11 + esi_21) s>> 0x12 & 0x3ff)[eax_6]
        eax_38[5] = ((ebx_11 - esi_21) s>> 0x12 & 0x3ff)[eax_6]
        edx_21 = eax_6
        eax_38[3] = ((esi_12 + esi_17) s>> 0x12 & 0x3ff)[eax_6]
        ecx_24 = zx.d(*(((esi_12 - esi_17) s>> 0x12 & 0x3ff) + eax_6))
        ebx_6 = var_10c_1
    else
        ecx_24.b = ((*ebx_6 + 0x10) s>> 5 & 0x3ff)[edx_21]
        *eax_38 = ecx_24.b
        eax_38[1] = ecx_24.b
        eax_38[2] = ecx_24.b
        eax_38[3] = ecx_24.b
        eax_38[5] = ecx_24.b
        eax_38[6] = ecx_24.b
        eax_38[7] = ecx_24.b
    
    eax_38[4] = ecx_24.b
    ebx_6 += 0x20
    i_1 = i_3 + 1
    var_10c_1 = ebx_6
    i_3 = i_1
while (i_1 s< 8)

sub_745f2b(eax_1 ^ &__saved_ebp)
return i_1
