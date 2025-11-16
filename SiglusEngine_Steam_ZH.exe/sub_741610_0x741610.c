// 函数: sub_741610
// 地址: 0x741610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t* ebx = arg3
int32_t eax_6 = *(arg1 + 0x12c) + 0x80
int32_t i_1 = 4
int32_t* edi = *(arg2 + 0x54)
int32_t var_88
int32_t* eax_8 = &var_88
int32_t* var_9c = edi
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
        int32_t ecx_9 = (sx.d(ebx[0x20]) * var_9c[0x20]) << 0xd
        int32_t ebx_4 = ((sx.d(*ebx) * *var_9c) << 0xd) + 0x400
        int32_t esi_4 = ecx_9 + ebx_4
        int32_t ebx_5 = ebx_4 - ecx_9
        int32_t ecx_10 = esi_4 + edx_4
        int32_t esi_5 = esi_4 - edx_4
        int32_t ecx_11 = ebx_5 + edi_2
        int32_t ebx_6 = ebx_5 - edi_2
        int32_t ecx_13 = sx.d(arg3[0x38]) * var_9c[0x38]
        int32_t ebx_8 = sx.d(arg3[0x28]) * var_9c[0x28]
        int32_t edx_7 = sx.d(arg3[0x18]) * var_9c[0x18]
        int32_t edi_5 = sx.d(ecx_1) * var_9c[8]
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
        eax_8[0x1c] = (ecx_10 - esi_14) s>> 0xb
        *eax_8 = (ecx_10 + esi_14) s>> 0xb
        eax_8[4] = (ecx_11 + edx_13) s>> 0xb
        eax_8[0x18] = (ecx_11 - edx_13) s>> 0xb
        edi = var_9c
        eax_8[0x14] = (ebx_6 - edi_8) s>> 0xb
        eax_8[8] = (ebx_6 + edi_8) s>> 0xb
        ecx_4 = (esi_5 + esi_11) s>> 0xb
        eax_8[0x10] = (esi_5 - esi_11) s>> 0xb
        ebx = arg3
    else
        ecx_4 = (sx.d(*ebx) * *edi) << 2
        *eax_8 = ecx_4
        eax_8[4] = ecx_4
        eax_8[8] = ecx_4
        eax_8[0x10] = ecx_4
        eax_8[0x14] = ecx_4
        eax_8[0x18] = ecx_4
        eax_8[0x1c] = ecx_4
    
    eax_8[0xc] = ecx_4
    ebx = &ebx[1]
    edi = &edi[1]
    i = i_1 - 1
    var_9c = edi
    eax_8 = &eax_8[1]
    arg3 = ebx
    i_1 = i
while (i s> 0)
char* eax_11 = *arg4 + arg5
int32_t var_80
int32_t edi_10 = (var_80 + var_88 + 0x10) << 0xd
int32_t var_84
int32_t var_7c
int32_t esi_15 = (var_7c + var_84) * 0x1151
int32_t ebx_23 = (var_88 + 0x10 - var_80) << 0xd
int32_t ecx_32 = var_84 * 0x187e + esi_15
int32_t esi_16 = esi_15 - var_7c * 0x3b21
*eax_11 = ((edi_10 + ecx_32) s>> 0x12 & 0x3ff)[eax_6]
eax_11[3] = ((edi_10 - ecx_32) s>> 0x12 & 0x3ff)[eax_6]
eax_11[1] = ((ebx_23 + esi_16) s>> 0x12 & 0x3ff)[eax_6]
eax_11[2] = ((ebx_23 - esi_16) s>> 0x12 & 0x3ff)[eax_6]
char* eax_27 = arg4[1] + arg5
int32_t var_78
int32_t var_70
int32_t edi_15 = (var_70 + var_78 + 0x10) << 0xd
int32_t var_74
int32_t var_6c
int32_t esi_17 = (var_6c + var_74) * 0x1151
int32_t ebx_30 = (var_78 + 0x10 - var_70) << 0xd
int32_t ecx_36 = var_74 * 0x187e + esi_17
int32_t esi_18 = esi_17 - var_6c * 0x3b21
*eax_27 = ((edi_15 + ecx_36) s>> 0x12 & 0x3ff)[eax_6]
eax_27[3] = ((edi_15 - ecx_36) s>> 0x12 & 0x3ff)[eax_6]
eax_27[1] = ((ebx_30 + esi_18) s>> 0x12 & 0x3ff)[eax_6]
eax_27[2] = ((ebx_30 - esi_18) s>> 0x12 & 0x3ff)[eax_6]
char* eax_43 = arg4[2] + arg5
int32_t var_68
int32_t var_60
int32_t edi_20 = (var_60 + var_68 + 0x10) << 0xd
int32_t var_64
int32_t var_5c
int32_t esi_19 = (var_5c + var_64) * 0x1151
int32_t ebx_37 = (var_68 + 0x10 - var_60) << 0xd
int32_t ecx_40 = var_64 * 0x187e + esi_19
int32_t esi_20 = esi_19 - var_5c * 0x3b21
*eax_43 = ((edi_20 + ecx_40) s>> 0x12 & 0x3ff)[eax_6]
eax_43[3] = ((edi_20 - ecx_40) s>> 0x12 & 0x3ff)[eax_6]
eax_43[1] = ((ebx_37 + esi_20) s>> 0x12 & 0x3ff)[eax_6]
eax_43[2] = ((ebx_37 - esi_20) s>> 0x12 & 0x3ff)[eax_6]
char* eax_59 = arg4[3] + arg5
int32_t var_58
int32_t var_50
int32_t edi_25 = (var_50 + var_58 + 0x10) << 0xd
int32_t var_54
int32_t var_4c
int32_t esi_21 = (var_4c + var_54) * 0x1151
int32_t ebx_44 = (var_58 + 0x10 - var_50) << 0xd
int32_t ecx_44 = var_54 * 0x187e + esi_21
int32_t esi_22 = esi_21 - var_4c * 0x3b21
*eax_59 = ((edi_25 + ecx_44) s>> 0x12 & 0x3ff)[eax_6]
eax_59[3] = ((edi_25 - ecx_44) s>> 0x12 & 0x3ff)[eax_6]
eax_59[1] = ((ebx_44 + esi_22) s>> 0x12 & 0x3ff)[eax_6]
eax_59[2] = ((ebx_44 - esi_22) s>> 0x12 & 0x3ff)[eax_6]
char* eax_75 = arg4[4] + arg5
int32_t var_48
int32_t var_40
int32_t edi_30 = (var_40 + var_48 + 0x10) << 0xd
int32_t var_44
int32_t var_3c
int32_t esi_23 = (var_3c + var_44) * 0x1151
int32_t ebx_51 = (var_48 + 0x10 - var_40) << 0xd
int32_t ecx_48 = var_44 * 0x187e + esi_23
int32_t esi_24 = esi_23 - var_3c * 0x3b21
*eax_75 = ((edi_30 + ecx_48) s>> 0x12 & 0x3ff)[eax_6]
eax_75[3] = ((edi_30 - ecx_48) s>> 0x12 & 0x3ff)[eax_6]
eax_75[1] = ((ebx_51 + esi_24) s>> 0x12 & 0x3ff)[eax_6]
eax_75[2] = ((ebx_51 - esi_24) s>> 0x12 & 0x3ff)[eax_6]
char* eax_91 = arg4[5] + arg5
int32_t var_38
int32_t var_30
int32_t edi_35 = (var_30 + var_38 + 0x10) << 0xd
int32_t var_34
int32_t var_2c
int32_t esi_25 = (var_2c + var_34) * 0x1151
int32_t ebx_58 = (var_38 + 0x10 - var_30) << 0xd
int32_t ecx_52 = var_34 * 0x187e + esi_25
int32_t esi_26 = esi_25 - var_2c * 0x3b21
*eax_91 = ((edi_35 + ecx_52) s>> 0x12 & 0x3ff)[eax_6]
eax_91[3] = ((edi_35 - ecx_52) s>> 0x12 & 0x3ff)[eax_6]
eax_91[1] = ((ebx_58 + esi_26) s>> 0x12 & 0x3ff)[eax_6]
eax_91[2] = ((ebx_58 - esi_26) s>> 0x12 & 0x3ff)[eax_6]
char* eax_107 = arg4[6] + arg5
int32_t var_28
int32_t var_20
int32_t edi_40 = (var_20 + var_28 + 0x10) << 0xd
int32_t var_24
int32_t var_1c
int32_t esi_27 = (var_1c + var_24) * 0x1151
int32_t ebx_65 = (var_28 + 0x10 - var_20) << 0xd
int32_t ecx_56 = var_24 * 0x187e + esi_27
int32_t esi_28 = esi_27 - var_1c * 0x3b21
*eax_107 = ((edi_40 + ecx_56) s>> 0x12 & 0x3ff)[eax_6]
eax_107[3] = ((edi_40 - ecx_56) s>> 0x12 & 0x3ff)[eax_6]
eax_107[1] = ((ebx_65 + esi_28) s>> 0x12 & 0x3ff)[eax_6]
eax_107[2] = ((ebx_65 - esi_28) s>> 0x12 & 0x3ff)[eax_6]
char* eax_123 = arg4[7] + arg5
int32_t var_18
int32_t var_10
int32_t edi_45 = (var_10 + var_18 + 0x10) << 0xd
int32_t var_14
int32_t var_c
int32_t esi_29 = (var_c + var_14) * 0x1151
int32_t ebx_72 = (var_18 + 0x10 - var_10) << 0xd
int32_t ecx_60 = var_14 * 0x187e + esi_29
int32_t esi_30 = esi_29 - var_c * 0x3b21
*eax_123 = ((edi_45 + ecx_60) s>> 0x12 & 0x3ff)[eax_6]
eax_123[3] = ((edi_45 - ecx_60) s>> 0x12 & 0x3ff)[eax_6]
eax_123[1] = ((ebx_72 + esi_30) s>> 0x12 & 0x3ff)[eax_6]
char result = ((ebx_72 - esi_30) s>> 0x12 & 0x3ff)[eax_6]
eax_123[2] = result
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
