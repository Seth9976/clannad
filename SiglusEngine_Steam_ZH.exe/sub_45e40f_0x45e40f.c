// 函数: sub_45e40f
// 地址: 0x45e40f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi
float var_14
float var_8_4
long double x87_r7_7
long double x87_r7_15

if (arg1 == 0)
    var_14 = fconvert.s(float.t(0))
label_45e7af:
    x87_r7_7 = float.t(0)
label_45e7b1:
    float var_10_13 = fconvert.s(x87_r7_7)
label_45e7b4:
    x87_r7_15 = float.t(0)
label_45e7b6:
    float var_c_10 = fconvert.s(x87_r7_15)
    var_8_4 = fconvert.s(float.t(1))
else
    int32_t ecx
    int32_t* eax_1 = sub_45e3ec(ecx, arg1, arg2)
    float var_10_9
    float var_8_2
    uint32_t esi
    long double x87_r7_1
    long double x87_r7_11
    
    switch (zx.d(*(arg1 + 4)))
        case 0
            var_14 = *eax_1
            goto label_45e7af
        case 1
            var_14 = *eax_1
            int32_t var_10_1 = eax_1[1]
            goto label_45e7b4
        case 2
            var_14 = *eax_1
            int32_t var_10_2 = eax_1[1]
            int32_t var_c_1 = eax_1[2]
            var_8_4 = fconvert.s(float.t(1))
        case 3
            var_14 = *eax_1
            int32_t var_10_3 = eax_1[1]
            int32_t var_c_2 = eax_1[2]
            int32_t var_8_1 = eax_1[3]
        case 4
            x87_r7_1 = fconvert.t(0.00392156886f)
            var_14 = fconvert.s(float.t(zx.d(*(eax_1 + 2))) * x87_r7_1)
            float var_10_4 = fconvert.s(float.t(zx.d((*eax_1 u>> 8).b)) * x87_r7_1)
            float var_c_3 = fconvert.s(float.t(zx.d(*eax_1)) * x87_r7_1)
            var_8_2 = fconvert.s(float.t(zx.d(*(eax_1 + 3))) * x87_r7_1)
        case 5
            var_14 = fconvert.s(float.t(zx.d(*eax_1)))
            float var_10_5 = fconvert.s(float.t(zx.d(*(eax_1 + 1))))
            float var_c_4 = fconvert.s(float.t(zx.d(*(eax_1 + 2))))
            var_8_4 = fconvert.s(float.t(zx.d(*(eax_1 + 3))))
        case 6
            var_14 = fconvert.s(float.t(sx.d(*eax_1)))
            x87_r7_7 = float.t(sx.d(*(eax_1 + 2)))
            goto label_45e7b1
        case 7
            var_14 = fconvert.s(float.t(sx.d(*eax_1)))
            float var_10_6 = fconvert.s(float.t(sx.d(*(eax_1 + 2))))
            float var_c_5 = fconvert.s(float.t(sx.d(eax_1[1].w)))
            var_8_4 = fconvert.s(float.t(sx.d(*(eax_1 + 6))))
        case 8
            x87_r7_1 = fconvert.t(0.00392156886f)
            var_14 = fconvert.s(float.t(zx.d(*eax_1)) * x87_r7_1)
            float var_10_7 = fconvert.s(float.t(zx.d(*(eax_1 + 1))) * x87_r7_1)
            float var_c_6 = fconvert.s(float.t(zx.d(*(eax_1 + 2))) * x87_r7_1)
            var_8_2 = fconvert.s(float.t(zx.d(*(eax_1 + 3))) * x87_r7_1)
        case 9
            esi.w = *(eax_1 + 2)
            x87_r7_11 = fconvert.t(3.05185094e-05f)
            int16_t edx_1 = *eax_1
            int16_t eax_11
            eax_11.b = edx_1 == 0x8000
            int16_t eax_14
            eax_14.b = esi.w == 0x8000
            var_14 = fconvert.s(float.t(sx.d(eax_11 + edx_1)) * x87_r7_11)
            var_10_9 = fconvert.s(float.t(sx.d(eax_14 + esi.w)) * x87_r7_11)
            goto label_45e7b4
        case 0xa
            esi.w = *(eax_1 + 2)
            long double x87_r7_12 = fconvert.t(3.05185094e-05f)
            int16_t edx_2 = *eax_1
            int32_t edi_1
            edi_1.w = eax_1[1].w
            int16_t ebx_1
            ebx_1.b = edx_2 == 0x8000
            eax_1.w = *(eax_1 + 6)
            int16_t edx_4
            edx_4.b = esi.w == 0x8000
            var_14 = fconvert.s(float.t(sx.d(ebx_1 + edx_2)) * x87_r7_12)
            int16_t edx_7
            edx_7.b = edi_1.w == 0x8000
            float var_10_8 = fconvert.s(float.t(sx.d(edx_4 + esi.w)) * x87_r7_12)
            int16_t edx_10
            edx_10.b = eax_1.w == 0x8000
            float var_c_7 = fconvert.s(float.t(sx.d(edx_7 + edi_1.w)) * x87_r7_12)
            float var_8_3 = fconvert.s(float.t(sx.d(edx_10 + eax_1.w)) * x87_r7_12)
        case 0xb
            x87_r7_11 = fconvert.t(1.52590219e-05f)
            var_14 = fconvert.s(float.t(zx.d(*eax_1)) * x87_r7_11)
            var_10_9 = fconvert.s(float.t(zx.d(*(eax_1 + 2))) * x87_r7_11)
            goto label_45e7b4
        case 0xc
            x87_r7_1 = fconvert.t(1.52590219e-05f)
            var_14 = fconvert.s(float.t(zx.d(*eax_1)) * x87_r7_1)
            float var_10_10 = fconvert.s(float.t(zx.d(*(eax_1 + 2))) * x87_r7_1)
            float var_c_8 = fconvert.s(float.t(zx.d(eax_1[1].w)) * x87_r7_1)
            var_8_2 = fconvert.s(float.t(zx.d(*(eax_1 + 6))) * x87_r7_1)
        case 0xd
            uint32_t edx_13 = *eax_1 & 0x3ff
            long double x87_r7_13 = float.t(edx_13)
            
            if (edx_13 s< 0)
                x87_r7_13 = x87_r7_13 + fconvert.t(4.2949673e+09f)
            
            var_14 = fconvert.s(x87_r7_13)
            uint32_t edx_16 = *eax_1 u>> 0xa & 0x3ff
            long double x87_r7_14 = float.t(edx_16)
            
            if (edx_16 s< 0)
                x87_r7_14 = x87_r7_14 + fconvert.t(4.2949673e+09f)
            
            float var_10_11 = fconvert.s(x87_r7_14)
            uint32_t eax_22 = *eax_1 u>> 0x14 & 0x3ff
            x87_r7_15 = float.t(eax_22)
            
            if (eax_22 s< 0)
                x87_r7_15 = x87_r7_15 + fconvert.t(4.2949673e+09f)
            
            goto label_45e7b6
        case 0xe
            int32_t eax_23 = *eax_1
            long double x87_r7_16 = fconvert.t(0.00195694715f)
            int32_t esi_3 = eax_23 << 0x16 s>> 0x16
            int32_t edi_4 = eax_23 << 0xc s>> 0x16
            int32_t ecx_29 = eax_23 << 2 s>> 0x16
            int32_t edx_17
            edx_17.b = esi_3 == 0xfffffe00
            int32_t edx_19
            edx_19.b = edi_4 == 0xfffffe00
            var_14 = fconvert.s(float.t(edx_17 + esi_3) * x87_r7_16)
            int32_t edx_21
            edx_21.b = ecx_29 == 0xfffffe00
            float var_10_12 = fconvert.s(float.t(edx_19 + edi_4) * x87_r7_16)
            float var_c_9 = fconvert.s(float.t(edx_21 + ecx_29) * x87_r7_16)
            var_8_4 = fconvert.s(float.t(1))
        case 0xf
            j_sub_4010ef(&var_14, eax_1, 2)
            goto label_45e7b4
        case 0x10
            j_sub_4010ef(&var_14, eax_1, 4)
int32_t ecx_30 = arg4

if (ecx_30 u> 4)
    ecx_30 = 4

if (ecx_30 u> 0)
    __builtin_memcpy(arg3, &var_14, ecx_30 << 2)
