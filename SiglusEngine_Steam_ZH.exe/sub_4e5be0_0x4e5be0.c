// 函数: sub_4e5be0
// 地址: 0x4e5be0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg3
int16_t* ecx_1 = *(arg2 + 0x50)
int32_t esi
int32_t var_130 = esi
int32_t edi
int32_t var_134 = edi
int32_t edi_2 = *(arg1 + 0x148) + 0x80
int32_t var_20 = edi_2
void* var_10 = edx
void var_128
void* eax_1 = &var_128
int32_t var_14 = 8
int16_t var_c_1
int16_t var_8_1
bool cond:0_1

do
    esi.w = *(edx + 0x70)
    var_8_1 = esi.w
    esi.w = *(edx + 0x60)
    arg3.w = esi.w
    esi.w = *(edx + 0x50)
    var_c_1 = esi.w
    esi.w = *(edx + 0x40)
    arg1.w = esi.w
    esi.w = *(edx + 0x30)
    int16_t ebx_1 = *(edx + 0x10)
    arg2.w = esi.w
    int32_t esi_1
    esi_1.w = *(edx + 0x20)
    int16_t var_18_1 = esi_1.w
    
    if ((ebx_1 | esi_1.w | arg2.w | arg1.w | var_c_1 | arg3.w | var_8_1) != 0)
        edx.w = *edx
        edx.w *= *ecx_1
        void* edi_3
        edi_3.w = ecx_1[0x20]
        edi_3.w *= arg1.w
        esi_1.w = ecx_1[0x10]
        esi_1.w *= var_18_1
        void* ebx_10 = edi_3 + edx
        void* edi_4
        edi_4.w = ecx_1[0x30]
        edi_4.w *= arg3.w
        int32_t edx_1 = edx - edi_3
        void* edx_2 = edi_4 + esi_1
        void* edx_7 = (((sx.d(esi_1.w) - sx.d(edi_4.w)) * 0x16a) s>> 8) - edx_2
        int16_t esi_8 = edx_7.w + edx_1.w
        void* esi_9
        esi_9.w = ecx_1[0x18]
        esi_9.w *= arg2.w
        void* ebx_12 = edx_1 - edx_7
        edx_7.w = ecx_1[8]
        edx_7.w *= ebx_1
        int32_t esi_10
        esi_10.w = ecx_1[0x28]
        esi_10.w *= var_c_1
        void* edi_7
        edi_7.w = ecx_1[0x38]
        edi_7.w *= var_8_1
        void* ebx_14 = esi_9 + esi_10
        void* esi_12 = edi_7 + edx_7
        var_c_1.d = esi_12
        void* esi_13 = esi_12 + ebx_14
        int32_t esi_14 = sx.d(edx_7.w - edi_7.w)
        int32_t edx_9 = sx.d(esi_10.w - esi_9.w)
        int32_t edi_11 = ((edx_9 + esi_14) * 0x1d9) s>> 8
        var_8_1.d = ((edx_9 * 0xfffffd63) s>> 8) - esi_13 + edi_11
        int32_t edx_18 = (((sx.d(var_c_1) - sx.d(ebx_14.w)) * 0x16a) s>> 8) - var_8_1.d
        int32_t edi_12 = sx.d(ebx_10.w + edx_2.w)
        int32_t esi_19 = sx.d(esi_13.w)
        int32_t esi_20 = sx.d(var_8_1)
        *(eax_1 + 0xe0) = edi_12 - esi_19
        int32_t edi_14 = sx.d(esi_8)
        *eax_1 = edi_12 + esi_19
        int32_t esi_21 = sx.d(edx_18.w)
        int32_t edx_19 = sx.d(ebx_12.w)
        *(eax_1 + 0xc0) = edi_14 - esi_20
        int32_t esi_22 = sx.d((((esi_14 * 0x115) s>> 8) - edi_11 + edx_18).w)
        *(eax_1 + 0xa0) = edx_19 - esi_21
        int32_t edx_21 = sx.d(ebx_10.w - edx_2.w)
        *(eax_1 + 0x40) = edx_19 + esi_21
        *(eax_1 + 0x80) = esi_22 + edx_21
        edi_2 = var_20
        *(eax_1 + 0x60) = edx_21 - esi_22
        edx = var_10
        *(eax_1 + 0x20) = esi_20 + edi_14
    else
        int32_t esi_3 = sx.d(*edx) * sx.d(*ecx_1)
        *eax_1 = esi_3
        *(eax_1 + 0x20) = esi_3
        *(eax_1 + 0x40) = esi_3
        *(eax_1 + 0x60) = esi_3
        *(eax_1 + 0x80) = esi_3
        *(eax_1 + 0xa0) = esi_3
        *(eax_1 + 0xc0) = esi_3
        *(eax_1 + 0xe0) = esi_3
    
    edx += 2
    ecx_1 = &ecx_1[1]
    eax_1 += 4
    cond:0_1 = var_14 != 1
    var_10 = edx
    var_14 -= 1
while (cond:0_1)
int32_t i = 0
void* result = &var_128
int32_t i_1 = 0

do
    void* ecx_4 = *(arg4 + (i << 2)) + arg5
    int32_t edx_30 = *(result + 0x18) | *(result + 0x1c) | *(result + 0x14) | *(result + 0x10)
        | *(result + 0xc) | *(result + 8) | *(result + 4)
    int32_t edx_33
    
    if (edx_30 != 0)
        int32_t ebx_22
        ebx_22.w = *(result + 0x10)
        int32_t edx_34
        edx_34.w = *result
        int16_t esi_24 = edx_34.w + ebx_22.w
        void* edx_35 = edx_34 - ebx_22
        int32_t ebx_23
        ebx_23.w = *(result + 0x18)
        void* edx_36
        edx_36.w = *(result + 8)
        void* edx_37 = edx_36 + ebx_23
        void* edx_42 = (((sx.d(*(result + 8)) - sx.d(ebx_23.w)) * 0x16a) s>> 8) - edx_37
        void* esi_28
        esi_28.w = *(result + 0xc)
        int32_t edx_43
        edx_43.w = *(result + 0x14)
        void* ebx_28 = esi_28 + edx_43
        int32_t esi_29
        esi_29.w = *(result + 0x1c)
        void* edx_45
        edx_45.w = *(result + 4)
        void* ebx_29 = edx_45 + esi_29
        var_c_1.d = ebx_29
        void* ebx_30 = ebx_29 + ebx_28
        int32_t esi_31 = sx.d(edx_43.w - esi_28.w)
        int32_t edx_47 = sx.d(edx_45.w - esi_29.w)
        int32_t ebx_33 = ((esi_31 + edx_47) * 0x1d9) s>> 8
        var_8_1.d = ((esi_31 * 0xfffffd63) s>> 8) - ebx_30 + ebx_33
        int32_t esi_40 = (((sx.d(var_c_1) - sx.d(ebx_28.w)) * 0x16a) s>> 8) - var_8_1.d
        int32_t ebx_38 = sx.d(ebx_30.w)
        int32_t edx_52 = sx.d(edx_37.w + esi_24)
        char* ebx_41
        ebx_41.b = ((ebx_38 + edx_52) s>> 5 & 0x3ff)[edi_2]
        *ecx_4 = ebx_41.b
        int32_t ebx_42 = sx.d(var_8_1)
        char* edx_55
        edx_55.b = ((edx_52 - ebx_38) s>> 5 & 0x3ff)[edi_2]
        *(ecx_4 + 7) = edx_55.b
        int32_t edx_56 = sx.d(edx_42.w + edx_35.w)
        char* ebx_45
        ebx_45.b = ((ebx_42 + edx_56) s>> 5 & 0x3ff)[edi_2]
        *(ecx_4 + 1) = ebx_45.b
        char* edx_59
        edx_59.b = ((edx_56 - ebx_42) s>> 5 & 0x3ff)[edi_2]
        *(ecx_4 + 6) = edx_59.b
        int32_t edx_60 = sx.d(esi_40.w)
        int32_t esi_41 = sx.d((edx_35 - edx_42).w)
        int32_t ebx_46 = esi_41 + edx_60
        edx_60.b = ((esi_41 - edx_60) s>> 5 & 0x3ff)[edi_2]
        int32_t esi_45 = sx.d(esi_24 - edx_37.w)
        char* ebx_48
        ebx_48.b = (ebx_46 s>> 5 & 0x3ff)[edi_2]
        *(ecx_4 + 5) = edx_60.b
        edx_33 = sx.d((((edx_47 * 0x115) s>> 8) - ebx_33 + esi_40).w)
        *(ecx_4 + 2) = ebx_48.b
        char* ebx_51
        ebx_51.b = ((edx_33 + esi_45) s>> 5 & 0x3ff)[edi_2]
        edx_33.b = ((esi_45 - edx_33) s>> 5 & 0x3ff)[edi_2]
        i = i_1
        *(ecx_4 + 4) = ebx_51.b
    else
        edx_33.b = *((*result s>> 5 & 0x3ff) + edi_2)
        *ecx_4 = edx_33.b
        *(ecx_4 + 1) = edx_33.b
        *(ecx_4 + 2) = edx_33.b
        *(ecx_4 + 4) = edx_33.b
        *(ecx_4 + 5) = edx_33.b
        *(ecx_4 + 6) = edx_33.b
        *(ecx_4 + 7) = edx_33.b
    
    result += 0x20
    i += 1
    *(ecx_4 + 3) = edx_33.b
    i_1 = i
while (i s< 8)

return result
