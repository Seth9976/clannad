// 函数: sub_4026e9
// 地址: 0x4026e9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* eax = arg3
float ecx = eax[4]
long double x87_r7 = fconvert.t(*eax)
long double x87_r6 = fconvert.t(eax[1])
float ecx_1 = eax[5]
float ecx_2 = eax[8]
float ecx_3 = eax[9]
float ecx_4 = eax[0xc]
float ecx_5 = eax[0xd]
float ecx_6 = eax[0xe]
float var_10 = fconvert.s(fconvert.t(ecx_1) * x87_r7 - fconvert.t(ecx) * x87_r6)
float ecx_7 = eax[0xf]
float var_c = fconvert.s(fconvert.t(ecx_3) * x87_r7 - fconvert.t(ecx_2) * x87_r6)
float var_30 = fconvert.s(fconvert.t(ecx_5) * x87_r7 - fconvert.t(ecx_4) * x87_r6)
float var_3c =
    fconvert.s(fconvert.t(ecx_3) * fconvert.t(ecx) - fconvert.t(ecx_2) * fconvert.t(ecx_1))
float var_38 =
    fconvert.s(fconvert.t(ecx_5) * fconvert.t(ecx) - fconvert.t(ecx_4) * fconvert.t(ecx_1))
float var_34 =
    fconvert.s(fconvert.t(ecx_5) * fconvert.t(ecx_2) - fconvert.t(ecx_4) * fconvert.t(ecx_3))
long double x87_r7_11 = fconvert.t(eax[2])
long double x87_r6_7 = fconvert.t(eax[3])
long double x87_r5_9 = fconvert.t(eax[6])
float var_2c = fconvert.s(x87_r5_9)
long double x87_r4_6 = fconvert.t(eax[7])
float var_24_1 = fconvert.s(x87_r4_6)
long double x87_r3 = fconvert.t(eax[0xa])
float var_28 = fconvert.s(x87_r3)
long double x87_r2 = fconvert.t(eax[0xb])
float var_8_1 = fconvert.s(x87_r2)
float var_10_1 = fconvert.s(x87_r7_11 * x87_r2 - x87_r5_9 * x87_r6_7)
float var_c_1 = fconvert.s(x87_r7_11 * fconvert.t(var_8_1) - fconvert.t(var_28) * x87_r2)
float ecx_8 = *eax
float ecx_9 = eax[4]
float ecx_10 = eax[8]
long double x87_r6_11 =
    fconvert.t(var_2c) * fconvert.t(var_8_1) - fconvert.t(var_28) * fconvert.t(var_24_1)
float ecx_11 = eax[9]
long double x87_r5_21 =
    fconvert.t(var_2c) * fconvert.t(ecx_7) - fconvert.t(ecx_6) * fconvert.t(var_24_1)
float ecx_12 = eax[0xc]
long double x87_r4_16 =
    fconvert.t(var_28) * fconvert.t(ecx_7) - fconvert.t(ecx_6) * fconvert.t(var_8_1)
long double x87_r3_7 = fconvert.t(eax[1])
long double x87_r2_3 = fconvert.t(eax[5])
float eax_1 = eax[0xd]
float var_14_1 = fconvert.s(fconvert.t(var_c_1) * x87_r2_3
    - fconvert.t(var_10_1) * fconvert.t(ecx_11) - x87_r6_11 * x87_r3_7)
float var_28_1 =
    fconvert.s(x87_r5_21 * x87_r3_7 - x87_r2 * x87_r2_3 + fconvert.t(var_10_1) * fconvert.t(eax_1))
float var_2c_1 = fconvert.s(x87_r2 * fconvert.t(ecx_11) - fconvert.t(var_c_1) * fconvert.t(eax_1)
    - x87_r4_16 * x87_r3_7)
float var_38_1 = fconvert.s(x87_r4_16 * x87_r2_3 - x87_r5_21 * fconvert.t(ecx_11)
    + x87_r6_11 * fconvert.t(eax_1))
long double x87_r7_18 = fconvert.t(var_14_1) * fconvert.t(ecx_12)
    + fconvert.t(var_28_1) * fconvert.t(ecx_10) + fconvert.t(var_2c_1) * fconvert.t(ecx_9)
    + fconvert.t(var_38_1) * fconvert.t(ecx_8)

if (arg2 != 0)
    *arg2 = fconvert.s(x87_r7_18)

long double x87_r5_23 = fconvert.t(0f)
x87_r5_23 - x87_r7_18
float* eax_2
eax_2.w = (x87_r5_23 < x87_r7_18 ? 1 : 0) << 8
    | (is_unordered.t(x87_r5_23, x87_r7_18) ? 1 : 0) << 0xa
    | (x87_r5_23 == x87_r7_18 ? 1 : 0) << 0xe | 0x3800
bool p = unimplemented  {test ah, 0x44}
float* result

if (p)
    float var_5c_1 = ecx_12
    int16_t var_60_1 = ecx_12.w
    float var_c_2 = fconvert.s(float.t(1) / x87_r7_18)
    result = sub_75ed12((fconvert.d(fconvert.t(var_c_2))).w)
    
    if (result != 0)
        result = arg1
        x87_r7_18 = fconvert.t(var_c_2)
        *result = fconvert.s(fconvert.t(var_38_1) * x87_r7_18)
        result[1] = fconvert.s(fconvert.t(var_2c_1) * x87_r7_18)
        result[2] = fconvert.s(fconvert.t(var_28_1) * x87_r7_18)
        result[3] = fconvert.s(fconvert.t(var_14_1) * x87_r7_18)
        result[4] = fconvert.s(fconvert.t(fconvert.s(x87_r5_21 * fconvert.t(ecx_10)
            - x87_r6_11 * fconvert.t(ecx_12) - x87_r2_3 * fconvert.t(ecx_9))) * x87_r7_18)
        result[5] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(ecx_8) * x87_r2_3
            - x87_r2 * fconvert.t(ecx_10) + fconvert.t(var_c_1) * fconvert.t(ecx_12))) * x87_r7_18)
        result[6] = fconvert.s(fconvert.t(fconvert.s(x87_r2 * fconvert.t(ecx_9)
            - fconvert.t(var_10_1) * fconvert.t(ecx_12) - x87_r5_21 * fconvert.t(ecx_8))) * x87_r7_18)
        result[7] = fconvert.s(fconvert.t(fconvert.s(x87_r6_11 * fconvert.t(ecx_8)
            - fconvert.t(var_c_1) * fconvert.t(ecx_9) + fconvert.t(var_10_1) * fconvert.t(ecx_10)))
            * x87_r7_18)
        result[8] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_34) * x87_r4_6
            - fconvert.t(var_38) * x87_r2 + fconvert.t(var_3c) * fconvert.t(ecx_7))) * x87_r7_18)
        result[9] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_30) * x87_r2
            - fconvert.t(var_c) * fconvert.t(ecx_7) - fconvert.t(var_34) * x87_r6_7)) * x87_r7_18)
        result[0xa] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_38) * x87_r6_7
            - fconvert.t(var_30) * x87_r4_6 + fconvert.t(var_10) * fconvert.t(ecx_7))) * x87_r7_18)
        result[0xb] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_c) * x87_r4_6
            - fconvert.t(var_10) * x87_r2 - fconvert.t(var_3c) * x87_r6_7)) * x87_r7_18)
        result[0xc] = fconvert.s(fconvert.t(fconvert.s(x87_r3 * fconvert.t(var_38)
            - fconvert.t(ecx_6) * fconvert.t(var_3c) - x87_r5_9 * fconvert.t(var_34))) * x87_r7_18)
        result[0xd] = fconvert.s(fconvert.t(fconvert.s(x87_r7_11 * fconvert.t(var_34)
            - x87_r3 * fconvert.t(var_30) + fconvert.t(ecx_6) * fconvert.t(var_c))) * x87_r7_18)
        result[0xe] = fconvert.s(fconvert.t(fconvert.s(x87_r5_9 * fconvert.t(var_30)
            - fconvert.t(ecx_6) * fconvert.t(var_10) - x87_r7_11 * fconvert.t(var_38))) * x87_r7_18)
        result[0xf] = fconvert.s(fconvert.t(fconvert.s(x87_r7_11 * fconvert.t(var_3c)
            - x87_r5_9 * fconvert.t(var_c) + x87_r3 * fconvert.t(var_10))) * x87_r7_18)
else
    result = nullptr

return result
