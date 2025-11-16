// 函数: sub_4e6510
// 地址: 0x4e6510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_54 = edi
void* var_48 = arg1
int32_t* var_44 = arg2
int32_t* var_40 = arg3
int32_t var_3c = 8
*arg2
arg2[8]
arg2[0x10]
arg2[0x18]
bool cond:0_1

do
    int32_t eax_1
    eax_1.w = *(var_48 + 0x20)
    int32_t ebx
    ebx.w = var_44[8].w
    int32_t ecx
    ecx.w = *(var_48 + 0x60)
    int32_t edx
    edx.w = var_44[0x18].w
    int32_t eax_4 = (eax_1 << 0x10 s>> 0x10) * (ebx << 0x10 s>> 0x10)
    int32_t ecx_3 = (ecx << 0x10 s>> 0x10) * (edx << 0x10 s>> 0x10)
    int32_t ebx_5 = (eax_4 + ecx_3) * 0x1151
    int32_t edx_2
    edx_2.w = var_44[0x10].w
    int32_t var_38_1 = ecx_3 * 0xffffc4df + ebx_5
    int32_t var_34_1 = eax_4 * 0x187e + ebx_5
    int32_t ecx_5
    ecx_5.w = *(var_48 + 0x40)
    int32_t eax_6
    eax_6.w = *var_48
    ebx_5.w = *var_44
    int32_t ecx_7 = sx.d(ecx_5.w) * sx.d(edx_2.w)
    int32_t eax_8 = sx.d(eax_6.w) * sx.d(ebx_5.w)
    int32_t ecx_9 = (ecx_7 + eax_8) << 0xd
    int32_t eax_10 = (eax_8 - ecx_7) << 0xd
    int32_t var_30_1 = ecx_9 + var_34_1
    int32_t var_2c_1 = eax_10 + var_38_1
    int32_t var_28_1 = ecx_9 - var_34_1
    int32_t eax_11
    eax_11.w = *(var_48 + 0x70)
    int32_t var_24_1 = eax_10 - var_38_1
    int32_t ebx_8
    ebx_8.w = var_44[0x1c].w
    int32_t ecx_10
    ecx_10.w = *(var_48 + 0x30)
    int32_t edx_6
    edx_6.w = var_44[0xc].w
    int32_t ebx_10
    ebx_10.w = *(var_48 + 0x10)
    int32_t ecx_13 = (ecx_10 << 0x10 s>> 0x10) * (edx_6 << 0x10 s>> 0x10)
    int32_t edx_8
    edx_8.w = var_44[4].w
    int32_t ebx_13 = (ebx_10 << 0x10 s>> 0x10) * (edx_8 << 0x10 s>> 0x10)
    int32_t var_20_1 = (eax_11 << 0x10 s>> 0x10) * (ebx_8 << 0x10 s>> 0x10)
    int32_t eax_14
    eax_14.w = *(var_48 + 0x50)
    int32_t edx_10
    edx_10.w = var_44[0x14].w
    int32_t eax_17 = (eax_14 << 0x10 s>> 0x10) * (edx_10 << 0x10 s>> 0x10)
    int32_t ebx_16 = eax_17 + ebx_13
    int32_t ecx_16 = var_20_1 + ecx_13
    int32_t eax_21 = (var_20_1 + ebx_13) * 0xffffe333
    int32_t edx_17 = (eax_17 + ecx_13) * 0xffffadfd
    int32_t esi_4 = (ecx_16 + ebx_16) * 0x25a1
    int32_t ecx_18 = ecx_16 * 0xffffc13b + esi_4
    int32_t ebx_18 = ebx_16 * 0xfffff384 + esi_4
    int32_t eax_23 = eax_21 + ecx_18 + var_20_1 * 0x98e
    int32_t edx_19 = edx_17 + ebx_18 + eax_17 * 0x41b3
    int32_t ecx_20 = ecx_18 + edx_17 + ecx_13 * 0x6254
    int32_t esi_7 = eax_21 + ebx_18 + ebx_13 * 0x300b
    var_40[0x20] = (var_28_1 - eax_23 + 0x400) s>> 0xb
    var_40[0x18] = (eax_23 + var_28_1 + 0x400) s>> 0xb
    var_40[0x28] = (var_24_1 - edx_19 + 0x400) s>> 0xb
    var_40[0x30] = (var_2c_1 - ecx_20 + 0x400) s>> 0xb
    var_40[0x10] = (edx_19 + var_24_1 + 0x400) s>> 0xb
    var_40[8] = (ecx_20 + var_2c_1 + 0x400) s>> 0xb
    var_40[0x38] = (var_30_1 - esi_7 + 0x400) s>> 0xb
    *var_40 = (var_30_1 + esi_7 + 0x400) s>> 0xb
    var_48 += 2
    var_40 = &var_40[1]
    var_44 += 2
    cond:0_1 = var_3c != 1
    var_3c -= 1
while (cond:0_1)
int32_t result_1 = 8
int32_t var_8 = 0
int32_t* var_40_1 = arg3
int32_t result
bool cond:1_1

do
    void* edi_6 = *(arg4 + var_8)
    var_8 += 4
    int32_t* edi_7 = edi_6 + arg5
    int32_t eax_36 = var_40_1[2]
    int32_t ecx_23 = var_40_1[6]
    int32_t ebx_32 = (eax_36 + ecx_23) * 0x1151
    int32_t ecx_25 = ecx_23 * 0xffffc4df + ebx_32
    int32_t eax_38 = eax_36 * 0x187e + ebx_32
    int32_t ecx_26 = var_40_1[4]
    int32_t eax_39 = *var_40_1
    int32_t ecx_28 = (ecx_26 + eax_39) << 0xd
    int32_t eax_41 = (eax_39 - ecx_26) << 0xd
    int32_t ecx_29 = ecx_28 + eax_38
    int32_t eax_42 = eax_41 + ecx_25
    int32_t ebx_34 = ecx_28 - eax_38
    int32_t edx_24 = eax_41 - ecx_25
    int32_t eax_43 = var_40_1[7]
    int32_t ecx_30 = var_40_1[3]
    int32_t ebx_35 = var_40_1[1]
    int32_t eax_44 = var_40_1[5]
    int32_t ebx_38 = eax_44 + ebx_35
    int32_t ecx_33 = eax_43 + ecx_30
    int32_t eax_48 = (eax_43 + ebx_35) * 0xffffe333
    int32_t edx_29 = (eax_44 + ecx_30) * 0xffffadfd
    int32_t esi_12 = (ecx_33 + ebx_38) * 0x25a1
    int32_t ecx_35 = ecx_33 * 0xffffc13b + esi_12
    int32_t ebx_40 = ebx_38 * 0xfffff384 + esi_12
    int32_t ecx_37 = ecx_35 + edx_29 + ecx_30 * 0x6254
    int32_t esi_15 = eax_48 + ebx_40 + ebx_35 * 0x300b
    int32_t var_20_3 = eax_48 + ecx_35 + eax_43 * 0x98e
    int32_t var_1c_3 = edx_29 + ebx_40 + eax_44 * 0x41b3
    int32_t eax_50
    eax_50.b = arg6[(ebx_34 + var_20_3 + 0x20000) s>> 0x12 & 0x3ff]
    int32_t edx_31
    edx_31.b = arg6[(ecx_29 - esi_15 + 0x20000) s>> 0x12 & 0x3ff]
    int32_t eax_51
    eax_51.b = arg6[(edx_24 + var_1c_3 + 0x20000) s>> 0x12 & 0x3ff]
    int32_t edx_32
    edx_32.b = arg6[(eax_42 - ecx_37 + 0x20000) s>> 0x12 & 0x3ff]
    int32_t eax_52
    eax_52.b = arg6[(eax_42 + ecx_37 + 0x20000) s>> 0x12 & 0x3ff]
    int32_t edx_33
    edx_33.b = arg6[(edx_24 - var_1c_3 + 0x20000) s>> 0x12 & 0x3ff]
    int32_t eax_53
    eax_53.b = arg6[(ecx_29 + esi_15 + 0x20000) s>> 0x12 & 0x3ff]
    int32_t edx_34
    edx_34.b = arg6[(ebx_34 - var_20_3 + 0x20000) s>> 0x12 & 0x3ff]
    *edi_7 = eax_53
    edi_7[1] = edx_34
    var_40_1 = &var_40_1[8]
    result = result_1 - 1
    cond:1_1 = result_1 != 1
    result_1 = result
while (cond:1_1)
return result
