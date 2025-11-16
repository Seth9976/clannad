// 函数: sub_624b40
// 地址: 0x624b40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
WINDOWPLACEMENT lpwndpl
lpwndpl.length = 0x2c
lpwndpl.rcNormalPosition.right = 0
lpwndpl.rcNormalPosition.bottom = 0
lpwndpl.flags = 0
lpwndpl.showCmd = 0
lpwndpl.ptMinPosition.x = 0
lpwndpl.ptMinPosition.y = 0
lpwndpl.ptMaxPosition.x = 0
lpwndpl.ptMaxPosition.y = 0
lpwndpl.rcNormalPosition.left = 0
lpwndpl.rcNormalPosition.top = 0
GetWindowPlacement(*(data_bac454 + 4), &lpwndpl)
int16_t x87control

if (*(arg1 + 0x4a5f0) != lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
        || *(arg1 + 0x4a5f4) != lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top)
    x87control = sub_616010()

sub_6c1850(data_bac454)
*(arg1 + 0x4a5d8) = *(arg1 + 0x4a5e8)
*(arg1 + 0x4a5dc) = *(arg1 + 0x4a5ec)
int32_t eax_7 = *(arg1 + 0x4a8b0)
*(arg1 + 0x4a5c8) = 0
*(arg1 + 0x4a5cc) = 0
HWND var_5c
float var_48
float var_3c
int32_t ebx_1
int32_t edi_1
int32_t mxcsr
uint128_t xmm0_13

if (eax_7 != 0)
    if (eax_7 == 2)
        ebx_1 = *(arg1 + 0x4a5ec)
        uint128_t xmm1_5 = zx.o(*(arg1 + 0x4a5e8))
        float* esi_2 = &var_3c
        uint128_t xmm2_5 = zx.o(*(arg1 + 0x4a5c0))
        uint128_t xmm3_3 = zx.o(*(arg1 + 0x4a5c4))
        float xmm0_15 = _mm_cvtepi32_ps(zx.o(ebx_1))
        float xmm1_6 = _mm_cvtepi32_ps(xmm1_5)
        float xmm2_6 = _mm_cvtepi32_ps(xmm2_5)
        float xmm0_17 = xmm0_15 * 1000f / _mm_cvtepi32_ps(xmm3_3)
        float xmm1_8 = xmm1_6 * 1000f / xmm2_6
        var_3c = xmm0_17
        var_48 = xmm1_8
        
        if (xmm1_8 <= xmm0_17)
            esi_2 = &var_48
        
        var_5c.q = fconvert.d(fconvert.t(_mm_cvtps_pd(xmm2_6 * *esi_2 / 1000f)))
        int16_t x87control_2
        long double st0_3
        st0_3, x87control_2 = sub_762040(mxcsr, x87control, var_5c)
        edi_1 = int.d(_mm_cvtpd_ps(zx.o(fconvert.d(st0_3))))
        float xmm0_22 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x4a5c4)))
        *(arg1 + 0x4a5d8) = edi_1
        var_5c.q = fconvert.d(fconvert.t(_mm_cvtps_pd(xmm0_22 * *esi_2 / 1000f)))
        xmm0_13 = zx.o(fconvert.d(sub_762040(mxcsr, x87control_2, var_5c)))
        goto label_624d84
    
    int32_t eax_19 = *(arg1 + 0x4a900)
    
    if (eax_19 != 0)
        int32_t eax_40
        int32_t ecx_9
        
        if (eax_19 == 1)
            float* ecx_5 = &var_3c
            int32_t edi_2 = *(arg1 + 0x4a5c0)
            int32_t temp0_1 = divs.dp.d(sx.q(*(arg1 + 0x4a5e8) * 0x3e8), edi_2)
            var_48 = temp0_1
            int32_t ebx_3 = *(arg1 + 0x4a5c4)
            int32_t temp0_2 = divs.dp.d(sx.q(*(arg1 + 0x4a5ec) * 0x3e8), ebx_3)
            var_3c = temp0_2
            
            if (temp0_2 s>= temp0_1)
                ecx_5 = &var_48
            
            float ecx_6 = *ecx_5
            int32_t esi_7 = edi_2 i* ecx_6 s/ 0x3e8
            int32_t eax_39 = *(arg1 + 0x4a5e8)
            *(arg1 + 0x4a5d8) = esi_7
            ecx_9 = ebx_3 i* ecx_6 s/ 0x3e8
            eax_40 = eax_39 - esi_7
            *(arg1 + 0x4a5dc) = ecx_9
            goto label_624fa5
        
        if (eax_19 == 2)
            int32_t ecx_10 = *(arg1 + 0x4a5ec)
            *(arg1 + 0x4a5d8) = *(arg1 + 0x4a5e8)
            *(arg1 + 0x4a5dc) = ecx_10
            *(arg1 + 0x4a5c8) = 0
            *(arg1 + 0x4a5cc) = 0
        else if (eax_19 != 3)
            if (eax_19 == 4)
                int32_t ebx_7 = *(arg1 + 0x4a5e8)
                int32_t ecx_15 = *(arg1 + 0x4a5c0)
                int32_t temp0_4 = divs.dp.d(sx.q(ebx_7 * 0x3e8), ecx_15)
                int32_t edi_9 = ecx_15 * temp0_4 s/ 0x3e8
                int32_t ecx_18 = *(arg1 + 0x4a5c4) * temp0_4
                *(arg1 + 0x4a5d8) = edi_9
                ecx_9 = ecx_18 s/ 0x3e8
                eax_40 = ebx_7 - edi_9
                *(arg1 + 0x4a5dc) = ecx_9
                goto label_624fa5
            
            if (eax_19 == 5)
                int32_t esi_10 = *(arg1 + 0x4a5c0)
                int32_t eax_65
                int32_t edx_29
                edx_29:eax_65 = muls.dp.d(0x51eb851f, *(arg1 + 0x4a904) * esi_10)
                int32_t edx_30 = edx_29 s>> 5
                int32_t ebx_9 = *(arg1 + 0x4a5c4)
                int32_t edi_12 = (edx_30 u>> 0x1f) + edx_30
                int32_t ecx_23 = *(arg1 + 0x4a908)
                *(arg1 + 0x4a5d8) = edi_12
                float eax_70 = ecx_23 * ebx_9 s/ 0x64
                *(arg1 + 0x4a5dc) = eax_70
                int32_t ecx_26 = *(arg1 + 0x4a910)
                var_3c = eax_70
                int32_t eax_74
                int32_t edx_36
                edx_36:eax_74 = sx.q(*(arg1 + 0x4a5e8) - edi_12)
                *(arg1 + 0x4a5c8) = ecx_26 * esi_10 s/ 0x64 + ((eax_74 - edx_36) s>> 1)
                int32_t eax_77
                int32_t edx_37
                edx_37:eax_77 = muls.dp.d(0x51eb851f, *(arg1 + 0x4a914) * ebx_9)
                int32_t edx_38 = edx_37 s>> 5
                int32_t eax_80
                int32_t edx_39
                edx_39:eax_80 = sx.q(*(arg1 + 0x4a5ec) i- var_3c)
                *(arg1 + 0x4a5cc) = (edx_38 u>> 0x1f) + edx_38 + ((eax_80 - edx_39) s>> 1)
        else
            int32_t ebx_5 = *(arg1 + 0x4a5c4)
            int32_t temp0_3 = divs.dp.d(sx.q(*(arg1 + 0x4a5ec) * 0x3e8), ebx_5)
            int32_t eax_47
            int32_t edx_16
            edx_16:eax_47 = muls.dp.d(0x10624dd3, *(arg1 + 0x4a5c0) * temp0_3)
            int32_t edx_17 = edx_16 s>> 6
            int32_t edi_6 = (edx_17 u>> 0x1f) + edx_17
            *(arg1 + 0x4a5d8) = edi_6
            ecx_9 = ebx_5 * temp0_3 s/ 0x3e8
            *(arg1 + 0x4a5dc) = ecx_9
            eax_40 = *(arg1 + 0x4a5e8) - edi_6
        label_624fa5:
            int32_t eax_57
            int32_t edx_27
            edx_27:eax_57 = sx.q(eax_40)
            *(arg1 + 0x4a5c8) = (eax_57 - edx_27) s>> 1
            int32_t eax_62
            int32_t edx_28
            edx_28:eax_62 = sx.q(*(arg1 + 0x4a5ec) - ecx_9)
            *(arg1 + 0x4a5cc) = (eax_62 - edx_28) s>> 1
    else
        int32_t ecx_4 = *(arg1 + 0x4a5c0)
        int32_t esi_3 = *(arg1 + 0x4a5c4)
        int32_t eax_22
        int32_t edx_4
        edx_4:eax_22 = sx.q(*(arg1 + 0x4a5e8) - ecx_4)
        *(arg1 + 0x4a5d8) = ecx_4
        *(arg1 + 0x4a5c8) = (eax_22 - edx_4) s>> 1
        int32_t eax_26 = *(arg1 + 0x4a5ec) - esi_3
        *(arg1 + 0x4a5dc) = esi_3
        int32_t eax_27
        int32_t edx_5
        edx_5:eax_27 = sx.q(eax_26)
        *(arg1 + 0x4a5cc) = (eax_27 - edx_5) s>> 1
else
    ebx_1 = *(arg1 + 0x4a5ec)
    uint128_t xmm1_1 = zx.o(*(arg1 + 0x4a5e8))
    int32_t* esi_1 = &var_48
    uint128_t xmm2_1 = zx.o(*(arg1 + 0x4a5c0))
    uint128_t xmm3_1 = zx.o(*(arg1 + 0x4a5c4))
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(ebx_1))
    float xmm1_2 = _mm_cvtepi32_ps(xmm1_1)
    float xmm2_2 = _mm_cvtepi32_ps(xmm2_1)
    float xmm0_4 = xmm0_2 * 1000f / _mm_cvtepi32_ps(xmm3_1)
    float xmm1_4 = xmm1_2 * 1000f / xmm2_2
    var_48 = xmm0_4
    var_3c = xmm1_4
    
    if (xmm1_4 <= xmm0_4)
        esi_1 = &var_3c
    
    var_5c.q = fconvert.d(fconvert.t(_mm_cvtps_pd(xmm2_2 f* *esi_1 / 1000f)))
    int16_t x87control_1
    long double st0_1
    st0_1, x87control_1 = sub_762040(mxcsr, x87control, var_5c)
    edi_1 = int.d(_mm_cvtpd_ps(zx.o(fconvert.d(st0_1))))
    float xmm0_9 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x4a5c4)))
    *(arg1 + 0x4a5d8) = edi_1
    var_5c.q = fconvert.d(fconvert.t(_mm_cvtps_pd(xmm0_9 f* *esi_1 / 1000f)))
    xmm0_13 = zx.o(fconvert.d(sub_762040(mxcsr, x87control_1, var_5c)))
label_624d84:
    float xmm0_26 = _mm_cvtpd_ps(xmm0_13)
    int32_t eax_11 = *(arg1 + 0x4a5e8) - edi_1
    int32_t ecx_3 = int.d(xmm0_26)
    *(arg1 + 0x4a5dc) = ecx_3
    int32_t eax_12
    int32_t edx_2
    edx_2:eax_12 = sx.q(eax_11)
    *(arg1 + 0x4a5c8) = (eax_12 - edx_2) s>> 1
    int32_t eax_16
    int32_t edx_3
    edx_3:eax_16 = sx.q(ebx_1 - ecx_3)
    *(arg1 + 0x4a5cc) = (eax_16 - edx_3) s>> 1

if (*(arg1 + 0x4a5c8) != *(arg1 + 0x4a5d0) || *(arg1 + 0x4a5cc) != *(arg1 + 0x4a5d4)
        || *(arg1 + 0x4a5d8) != *(arg1 + 0x4a5e0) || *(arg1 + 0x4a5dc) != *(arg1 + 0x4a5e4))
    uint128_t xmm2_9 = zx.o(*(arg1 + 0x4a5dc))
    uint128_t xmm1_9 = zx.o(*(arg1 + 0x4a5d8))
    float xmm0_28 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x4a5c4)))
    float xmm2_10 = _mm_cvtepi32_ps(xmm2_9)
    float xmm1_10 = _mm_cvtepi32_ps(xmm1_9)
    float xmm0_30 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x4a5c0)))
    *(arg1 + 0x62610) = xmm2_10 / xmm0_28
    *(arg1 + 0x6260c) = xmm1_10 / xmm0_30
    *(arg1 + 0x62614) = *(arg1 + 0x4a5c8)
    *(arg1 + 0x62618) = *(arg1 + 0x4a5cc)
    sub_5cb0c0(arg1 + 0x62538)
    int32_t i = 0
    int32_t eax_88
    int32_t edx_40
    edx_40:eax_88 = muls.dp.d(0x30c30c31, *(arg1 + 0x62794) - *(arg1 + 0x62790))
    int32_t edx_41 = edx_40 s>> 6
    
    if ((edx_41 u>> 0x1f) + edx_41 s> 0)
        int32_t esi_11 = 0
        int32_t edx_43
        
        do
            sub_5b99a0(*(arg1 + 0x62790) + esi_11)
            i += 1
            int32_t eax_91
            int32_t edx_42
            edx_42:eax_91 = muls.dp.d(0x30c30c31, *(arg1 + 0x62794) - *(arg1 + 0x62790))
            esi_11 += 0x150
            edx_43 = edx_42 s>> 6
        while (i s< (edx_43 u>> 0x1f) + edx_43)

int32_t result
result.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
