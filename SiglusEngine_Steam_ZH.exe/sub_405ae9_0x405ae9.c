// 函数: sub_405ae9
// 地址: 0x405ae9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_ac = edi
float var_84 = *arg4
float var_80
int32_t* edi_1 = &var_80
void* esi_1 = &arg4[1]
*edi_1 = *esi_1
void* edi_2 = &edi_1[1]
void* esi_2 = esi_1 + 4
*edi_2 = *esi_2
*(edi_2 + 4) = *(esi_2 + 4)
float var_54 = *arg5
float var_50
int32_t* edi_5 = &var_50
void* esi_6 = &arg5[1]
*edi_5 = *esi_6
void* edi_6 = &edi_5[1]
void* esi_7 = esi_6 + 4
*edi_6 = *esi_7
*(edi_6 + 4) = *(esi_7 + 4)
long double x87_r7_1 = fconvert.t(var_54) + fconvert.t(var_84)
long double x87_r6_1 = fconvert.t(var_50) + fconvert.t(var_80)
float var_24 = *arg6
float var_20
float* edi_9 = &var_20
void* esi_11 = &arg6[1]
float var_7c
float var_4c
long double x87_r5_1 = fconvert.t(var_4c) + fconvert.t(var_7c)
float var_78
float var_48
long double x87_r4_1 = fconvert.t(var_48) + fconvert.t(var_78)
long double x87_r3 = fconvert.t(var_84)
*edi_9 = *esi_11
void* edi_10 = &edi_9[1]
void* esi_12 = esi_11 + 4
long double x87_r3_1 = x87_r3 - fconvert.t(var_54)
long double x87_r2_1 = fconvert.t(var_80) - fconvert.t(var_50)
*edi_10 = *esi_12
float var_10 = fconvert.s(x87_r2_1)
*(edi_10 + 4) = *(esi_12 + 4)
float var_c = fconvert.s(fconvert.t(var_7c) - fconvert.t(var_4c))
long double x87_r2_5 = fconvert.t(var_78) - fconvert.t(var_48)
float var_74 = *arg7
float var_70
int32_t* edi_13 = &var_70
void* esi_16 = &arg7[1]
float var_8 = fconvert.s(x87_r2_5)
*edi_13 = *esi_16
void* edi_14 = &edi_13[1]
void* esi_17 = esi_16 + 4
*edi_14 = *esi_17
*(edi_14 + 4) = *(esi_17 + 4)
long double x87_r2_10 =
    x87_r4_1 * x87_r4_1 + x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1
long double x87_r1_10 = fconvert.t(var_8) * fconvert.t(var_8)
    + fconvert.t(var_c) * fconvert.t(var_c) + fconvert.t(var_10) * fconvert.t(var_10)
    + x87_r3_1 * x87_r3_1
x87_r1_10 - x87_r2_10
float var_34
float var_30
float var_28
bool c1

if ((((x87_r1_10 < x87_r2_10 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (is_unordered.t(x87_r1_10, x87_r2_10) ? 1 : 0) << 0xa
        | (x87_r1_10 == x87_r2_10 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
    var_34 = fconvert.s(fneg(fconvert.t(var_84)))
    var_30 = fconvert.s(fneg(fconvert.t(var_80)))
    float var_2c_1 = fconvert.s(fneg(fconvert.t(var_7c)))
    var_28 = fconvert.s(fneg(fconvert.t(var_78)))
    var_84 = var_34
    float* edi_17 = &var_80
    float* esi_20 = &var_30
    *edi_17 = *esi_20
    void* edi_18 = &edi_17[1]
    void* esi_21 = &esi_20[1]
    *edi_18 = *esi_21
    *(edi_18 + 4) = *(esi_21 + 4)

long double x87_r7_12 = fconvert.t(var_24) + fconvert.t(var_54)
long double x87_r6_4 = fconvert.t(var_20) + fconvert.t(var_50)
float var_1c
long double x87_r5_4 = fconvert.t(var_1c) + fconvert.t(var_4c)
float var_18
long double x87_r4_4 = fconvert.t(var_18) + fconvert.t(var_48)
long double x87_r3_3 = fconvert.t(var_54) - fconvert.t(var_24)
float var_10_1 = fconvert.s(fconvert.t(var_50) - fconvert.t(var_20))
float var_c_1 = fconvert.s(fconvert.t(var_4c) - fconvert.t(var_1c))
float var_8_1 = fconvert.s(fconvert.t(var_48) - fconvert.t(var_18))
long double x87_r2_21 =
    x87_r4_4 * x87_r4_4 + x87_r5_4 * x87_r5_4 + x87_r6_4 * x87_r6_4 + x87_r7_12 * x87_r7_12
long double x87_r1_21 = fconvert.t(var_8_1) * fconvert.t(var_8_1)
    + fconvert.t(var_c_1) * fconvert.t(var_c_1) + fconvert.t(var_10_1) * fconvert.t(var_10_1)
    + x87_r3_3 * x87_r3_3
x87_r1_21 - x87_r2_21

if ((((x87_r1_21 < x87_r2_21 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (is_unordered.t(x87_r1_21, x87_r2_21) ? 1 : 0) << 0xa
        | (x87_r1_21 == x87_r2_21 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
    var_34 = fconvert.s(fneg(fconvert.t(var_24)))
    var_30 = fconvert.s(fneg(fconvert.t(var_20)))
    float var_2c_2 = fconvert.s(fneg(fconvert.t(var_1c)))
    var_28 = fconvert.s(fneg(fconvert.t(var_18)))
    var_24 = var_34
    float* edi_21 = &var_20
    float* esi_24 = &var_30
    *edi_21 = *esi_24
    void* edi_22 = &edi_21[1]
    void* esi_25 = &esi_24[1]
    *edi_22 = *esi_25
    *(edi_22 + 4) = *(esi_25 + 4)

long double x87_r7_23 = fconvert.t(var_74) + fconvert.t(var_24)
long double x87_r6_7 = fconvert.t(var_70) + fconvert.t(var_20)
float var_6c
long double x87_r5_7 = fconvert.t(var_6c) + fconvert.t(var_1c)
float var_68
long double x87_r4_7 = fconvert.t(var_68) + fconvert.t(var_18)
long double x87_r3_5 = fconvert.t(var_24) - fconvert.t(var_74)
float var_10_2 = fconvert.s(fconvert.t(var_20) - fconvert.t(var_70))
float var_c_2 = fconvert.s(fconvert.t(var_1c) - fconvert.t(var_6c))
float var_8_2 = fconvert.s(fconvert.t(var_18) - fconvert.t(var_68))
long double x87_r2_32 =
    x87_r4_7 * x87_r4_7 + x87_r5_7 * x87_r5_7 + x87_r6_7 * x87_r6_7 + x87_r7_23 * x87_r7_23
long double x87_r1_32 = fconvert.t(var_8_2) * fconvert.t(var_8_2)
    + fconvert.t(var_c_2) * fconvert.t(var_c_2) + fconvert.t(var_10_2) * fconvert.t(var_10_2)
    + x87_r3_5 * x87_r3_5
x87_r1_32 - x87_r2_32

if ((((x87_r1_32 < x87_r2_32 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (is_unordered.t(x87_r1_32, x87_r2_32) ? 1 : 0) << 0xa
        | (x87_r1_32 == x87_r2_32 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
    var_34 = fconvert.s(fneg(fconvert.t(var_74)))
    var_30 = fconvert.s(fneg(fconvert.t(var_70)))
    float var_2c_3 = fconvert.s(fneg(fconvert.t(var_6c)))
    var_28 = fconvert.s(fneg(fconvert.t(var_68)))
    var_74 = var_34
    float* edi_25 = &var_70
    float* esi_28 = &var_30
    *edi_25 = *esi_28
    void* edi_26 = &edi_25[1]
    void* esi_29 = &esi_28[1]
    *edi_26 = *esi_29
    *(edi_26 + 4) = *(esi_29 + 4)

j_sub_403e68(&var_34, &var_54)
float var_44
j_sub_403da4(&var_44, &var_34, &var_84)
float var_64 = var_44
float var_60
int32_t* edi_29 = &var_60
float var_40
float* esi_32 = &var_40
*edi_29 = *esi_32
void* edi_30 = &edi_29[1]
void* esi_33 = &esi_32[1]
*edi_30 = *esi_33
*(edi_30 + 4) = *(esi_33 + 4)
float var_94
j_sub_403f34(&var_94, &var_64)
j_sub_403da4(&var_44, &var_34, &var_24)
var_64 = var_44
int32_t* edi_33 = &var_60
float* esi_36 = &var_40
*edi_33 = *esi_36
void* edi_34 = &edi_33[1]
void* esi_37 = &esi_36[1]
*edi_34 = *esi_37
*(edi_34 + 4) = *(esi_37 + 4)
float var_14
j_sub_403f34(&var_14, &var_64)
long double x87_r7_34 = fconvert.t(var_94) + fconvert.t(var_14)
float var_90
var_40 = fconvert.s(fconvert.t(var_90) + fconvert.t(var_10_2))
float var_8c
float var_3c = fconvert.s(fconvert.t(var_8c) + fconvert.t(var_c_2))
float var_88
long double x87_r6_14 = fconvert.t(var_88) + fconvert.t(var_8_2)
long double x87_r5_9 = fconvert.t(-0.25f)
var_64 = fconvert.s(x87_r7_34 * x87_r5_9)
var_60 = fconvert.s(fconvert.t(var_40) * x87_r5_9)
float var_5c = fconvert.s(fconvert.t(var_3c) * x87_r5_9)
float var_58 = fconvert.s(x87_r6_14 * x87_r5_9)
void var_a4
j_sub_403fca(&var_a4, &var_64)
j_sub_403da4(&var_44, &var_54, &var_a4)
*arg1 = var_44
void* edi_38 = &arg1[1]
float* esi_40 = &var_40
*edi_38 = *esi_40
void* edi_39 = edi_38 + 4
void* esi_41 = &esi_40[1]
*edi_39 = *esi_41
*(edi_39 + 4) = *(esi_41 + 4)
j_sub_403e68(&var_34, &var_24)
j_sub_403da4(&var_44, &var_34, &var_54)
var_64 = var_44
float* edi_42 = &var_60
float* esi_44 = &var_40
*edi_42 = *esi_44
void* edi_43 = &edi_42[1]
void* esi_45 = &esi_44[1]
*edi_43 = *esi_45
*(edi_43 + 4) = *(esi_45 + 4)
j_sub_403f34(&var_94, &var_64)
j_sub_403da4(&var_44, &var_34, &var_74)
var_64 = var_44
float* edi_46 = &var_60
float* esi_48 = &var_40
*edi_46 = *esi_48
void* edi_47 = &edi_46[1]
void* esi_49 = &esi_48[1]
*edi_47 = *esi_49
*(edi_47 + 4) = *(esi_49 + 4)
j_sub_403f34(&var_14, &var_64)
long double x87_r7_37 = fconvert.t(var_94) + fconvert.t(var_14)
var_40 = fconvert.s(fconvert.t(var_90) + fconvert.t(var_10_2))
float var_3c_1 = fconvert.s(fconvert.t(var_8c) + fconvert.t(var_c_2))
long double x87_r6_21 = fconvert.t(var_88) + fconvert.t(var_8_2)
long double x87_r5_10 = fconvert.t(-0.25f)
var_64 = fconvert.s(x87_r7_37 * x87_r5_10)
var_60 = fconvert.s(fconvert.t(var_40) * x87_r5_10)
float var_5c_1 = fconvert.s(fconvert.t(var_3c_1) * x87_r5_10)
var_58 = fconvert.s(x87_r6_21 * x87_r5_10)
j_sub_403fca(&var_a4, &var_64)
int32_t result = j_sub_403da4(&var_44, &var_24, &var_a4)
*arg2 = var_44
void* edi_51 = &arg2[1]
float* esi_52 = &var_40
*edi_51 = *esi_52
void* edi_52 = edi_51 + 4
void* esi_53 = &esi_52[1]
*edi_52 = *esi_53
*(edi_52 + 4) = *(esi_53 + 4)
*arg3 = var_24
void* edi_56 = &arg3[1]
float* esi_56 = &var_20
*edi_56 = *esi_56
void* edi_57 = edi_56 + 4
void* esi_57 = &esi_56[1]
*edi_57 = *esi_57
*(edi_57 + 4) = *(esi_57 + 4)
return result
