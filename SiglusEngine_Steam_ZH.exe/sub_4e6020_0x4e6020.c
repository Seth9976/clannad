// 函数: sub_4e6020
// 地址: 0x4e6020
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* ebx = arg3
int32_t edi
int32_t var_144 = edi
int16_t* edi_1 = *(arg2 + 0x50)
int32_t edx_1 = *(arg1 + 0x148) + 0x80
int32_t var_30 = edx_1
int16_t* var_8 = ebx
arg2 = edi_1
void var_138
void* eax_1 = &var_138
int32_t var_18 = 8
bool cond:2_1

do
    int16_t ecx_1 = ebx[8]
    
    if (ecx_1 != 0 || ebx[0x10] != ecx_1 || ebx[0x18] != ecx_1 || ebx[0x20] != ecx_1
            || ebx[0x28] != ecx_1 || ebx[0x30] != ecx_1 || ebx[0x38] != ecx_1)
        int32_t ecx_6 = sx.d(edi_1[0x10]) * sx.d(ebx[0x10])
        int32_t edx_4 = sx.d(edi_1[0x30]) * sx.d(ebx[0x30])
        void* esi_4 = (edx_4 + ecx_6) * 0x1151
        void* esi_5 = esi_4 - edx_4 * 0x3b21
        arg3 = ecx_6 * 0x187e + esi_4
        int32_t edx_7 = sx.d(*ebx) * sx.d(*edi_1)
        int32_t esi_7 = sx.d(edi_1[0x20]) * sx.d(ebx[0x20])
        void* esi_9 = &arg3[(esi_7 + edx_7) * 0x1000]
        void* ecx_13 = ((esi_7 + edx_7) << 0xd) - arg3
        int32_t edx_9 = (edx_7 - esi_7) << 0xd
        void* esi_10 = edx_9 + esi_5
        void* edx_10 = edx_9 - esi_5
        void* ecx_16 = sx.d(edi_1[0x38]) * sx.d(ebx[0x38])
        int32_t edx_13 = sx.d(edi_1[0x28]) * sx.d(ebx[0x28])
        int32_t esi_13 = sx.d(edi_1[0x18]) * sx.d(ebx[0x18])
        int16_t* edi_3 = sx.d(edi_1[8]) * sx.d(ecx_1)
        void* edi_4 = edi_3 + edx_13
        void* ebx_5 = ecx_16 + esi_13
        int32_t edi_6 = (edi_4 + ebx_5) * 0x25a1
        void* edi_8 = (ecx_16 + edi_3) * 0xffffe333
        int32_t edi_10 = (edx_13 + esi_13) * 0xffffadfd
        int32_t edi_12 = edi_6 - ebx_5 * 0x3ec5
        int32_t ebx_8 = edi_6 - edi_4 * 0xc7c
        void* ecx_19 = ecx_16 * 0x98e + edi_8 + edi_12
        int32_t edx_16 = edx_13 * 0x41b3 + ebx_8 + edi_10
        int32_t esi_16 = esi_13 * 0x6254 + edi_12 + edi_10
        void* edi_19 = edi_3 * 0x300b + ebx_8 + edi_8
        *eax_1 = (esi_9 + edi_19 + 0x400) s>> 0xb
        *(eax_1 + 0xe0) = (esi_9 - edi_19 + 0x400) s>> 0xb
        *(eax_1 + 0xc0) = (esi_10 - esi_16 + 0x400) s>> 0xb
        *(eax_1 + 0xa0) = (edx_10 - edx_16 + 0x400) s>> 0xb
        *(eax_1 + 0x20) = (esi_10 + esi_16 + 0x400) s>> 0xb
        ebx = var_8
        *(eax_1 + 0x40) = (edx_10 + edx_16 + 0x400) s>> 0xb
        edi_1 = arg2
        *(eax_1 + 0x80) = (ecx_13 - ecx_19 + 0x400) s>> 0xb
        edx_1 = var_30
        *(eax_1 + 0x60) = (ecx_13 + ecx_19 + 0x400) s>> 0xb
    else
        int32_t ecx_4 = (sx.d(*ebx) * sx.d(*edi_1)) << 2
        *eax_1 = ecx_4
        *(eax_1 + 0x20) = ecx_4
        *(eax_1 + 0x40) = ecx_4
        *(eax_1 + 0x60) = ecx_4
        *(eax_1 + 0x80) = ecx_4
        *(eax_1 + 0xa0) = ecx_4
        *(eax_1 + 0xc0) = ecx_4
        *(eax_1 + 0xe0) = ecx_4
    
    ebx = &ebx[1]
    edi_1 = &edi_1[1]
    eax_1 += 4
    cond:2_1 = var_18 != 1
    var_8 = ebx
    arg2 = edi_1
    var_18 -= 1
while (cond:2_1)
int32_t i = 0
void* ecx_22 = &var_138
int32_t i_1 = 0
char* result

do
    result = *(arg4 + (i << 2)) + arg5
    void* esi_24 = *(ecx_22 + 4)
    
    if (esi_24 != 0 || *(ecx_22 + 8) != 0 || *(ecx_22 + 0xc) != 0 || *(ecx_22 + 0x10) != 0
            || *(ecx_22 + 0x14) != 0 || *(ecx_22 + 0x18) != 0 || *(ecx_22 + 0x1c) != 0)
        int32_t edx_21 = *(ecx_22 + 8)
        int32_t esi_35 = *(ecx_22 + 0x18)
        int32_t edi_31 = (esi_35 + edx_21) * 0x1151
        int16_t* edx_23 = edx_21 * 0x187e + edi_31
        int32_t edx_24 = *(ecx_22 + 0x10)
        int32_t ebx_15 = edi_31 - esi_35 * 0x3b21
        int32_t esi_37 = *ecx_22
        arg2 = (esi_37 - edx_24) << 0xd
        void* esi_40 = &edx_23[(edx_24 + esi_37) * 0x1000]
        void* edi_34 = ((edx_24 + esi_37) << 0xd) - edx_23
        void* edx_27 = arg2 + ebx_15
        void* edx_29 = arg2 - ebx_15
        int16_t* ebx_16 = *(ecx_22 + 0x14)
        int32_t ebx_17 = *(ecx_22 + 0xc)
        void* edx_30 = *(ecx_22 + 0x1c)
        void* ebx_22 = edx_30 + ebx_17
        void* ebx_24 = esi_24 + ebx_16
        int32_t ebx_26 = (ebx_24 + ebx_22) * 0x25a1
        void* ebx_28 = (edx_30 + esi_24) * 0xffffe333
        int32_t ebx_30 = (ebx_16 + ebx_17) * 0xffffadfd
        int32_t ebx_32 = ebx_26 - ebx_22 * 0x3ec5
        int32_t ebx_34 = ebx_26 - ebx_24 * 0xc7c
        void* edx_41 = edx_30 * 0x98e + ebx_28 + ebx_32
        int16_t* edx_45 = ebx_16 * 0x41b3 + ebx_34 + ebx_30
        int32_t edx_49 = ebx_17 * 0x6254 + ebx_32 + ebx_30
        void* edx_53 = esi_24 * 0x300b + ebx_34 + ebx_28
        edx_1 = var_30
        char* ebx_39
        ebx_39.b = ((esi_40 + edx_53 + 0x20000) s>> 0x12 & 0x3ff)[edx_1]
        *result = ebx_39.b
        ebx_39.b = ((esi_40 - edx_53 + 0x20000) s>> 0x12 & 0x3ff)[edx_1]
        result[7] = ebx_39.b
        char* ebx_43
        ebx_43.b = ((edx_27 + edx_49 + 0x20000) s>> 0x12 & 0x3ff)[edx_1]
        result[1] = ebx_43.b
        ebx_43.b = ((edx_27 - edx_49 + 0x20000) s>> 0x12 & 0x3ff)[edx_1]
        result[6] = ebx_43.b
        char* ebx_47
        ebx_47.b = ((edx_29 + edx_45 + 0x20000) s>> 0x12 & 0x3ff)[edx_1]
        result[2] = ebx_47.b
        ebx_47.b = ((edx_29 - edx_45 + 0x20000) s>> 0x12 & 0x3ff)[edx_1]
        result[5] = ebx_47.b
        ebx.b = *(((edi_34 + edx_41 + 0x20000) s>> 0x12 & 0x3ff) + edx_1)
        result[3] = ebx.b
        ebx.b = ((edi_34 - edx_41 + 0x20000) s>> 0x12 & 0x3ff)[edx_1]
        i = i_1
    else
        ebx.b = ((*ecx_22 + 0x10) s>> 5 & 0x3ff)[edx_1]
        *result = ebx.b
        result[1] = ebx.b
        result[2] = ebx.b
        result[3] = ebx.b
        result[5] = ebx.b
        result[6] = ebx.b
        result[7] = ebx.b
    
    ecx_22 += 0x20
    i += 1
    result[4] = ebx.b
    i_1 = i
while (i s< 8)

return result
