// 函数: sub_6a6b30
// 地址: 0x6a6b30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_134
int32_t eax_1 = __security_cookie ^ &var_134
void* ebx = arg1
uint32_t edi = arg2
void* var_ec = ebx
int32_t ecx
int16_t x87control
ecx, x87control = sub_6b2940(edi, arg3, arg4)

if (edi u> 0x112)
    if (edi == 0x214)
        float ecx_18 = *(arg4 + 8)
        int32_t eax_24 = *arg4
        float edx = *(arg4 + 0xc)
        float var_f8 = ecx_18
        int32_t ecx_20 = ecx_18 i- *(ebx + 0x1c90) - eax_24
        RECT rect_3
        rect_3.left = eax_24
        int32_t eax_25 = *(arg4 + 4)
        float var_100 = edx
        int32_t edx_2 = edx i- eax_25 - *(ebx + 0x1c94)
        RECT rect_2
        rect_2.left = eax_25
        RECT rect
        RECT rect_1
        WPARAM var_148
        float var_104
        int32_t eax_63
        int32_t* ecx_29
        int32_t mxcsr
        
        if (arg3 - 1 u<= 7)
            switch (arg3)
                case 1
                    void* edi_4 = data_bac510
                    float xmm0_41 = _mm_cvtepi32_ps(zx.o(ecx_20))
                    rect.left = 0x10
                    float xmm1_11 = _mm_cvtepi32_ps(zx.o(*(edi_4 + 0x7c)))
                    float xmm0_42 = xmm0_41 / xmm1_11
                    var_104 = xmm0_42
                    int64_t xmm0_44 = _mm_cvtps_pd(xmm0_42 * xmm1_11)
                    rect_1.left = xmm0_44.d
                    rect_1.top = xmm0_44:4.d
                    var_148.q = fconvert.d(fconvert.t(rect_1.left.q))
                    int16_t x87control_4
                    int80_t st0_7
                    st0_7, x87control_4 = sub_762040(mxcsr, x87control, var_148)
                    rect_1.left.q = fconvert.d(st0_7)
                    RECT* ecx_28 = &rect
                    int32_t eax_54 = int.d(_mm_cvtpd_ps(zx.o(rect_1.left.q)))
                    float xmm0_48 = _mm_cvtepi32_ps(zx.o(*(edi_4 + 0x80)))
                    rect_1.left = eax_54
                    
                    if (eax_54 s>= 0x10)
                        ecx_28 = &rect_1
                    
                    int32_t left_2 = ecx_28->left
                    rect.left = 0x10
                    int64_t xmm0_50 = _mm_cvtps_pd(xmm0_48 * var_104)
                    rect_1.left = xmm0_50.d
                    rect_1.top = xmm0_50:4.d
                    var_148.q = fconvert.d(fconvert.t(rect_1.left.q))
                    rect_1.left.q = fconvert.d(sub_762040(mxcsr, x87control_4, var_148))
                    ecx_29 = &rect
                    int32_t eax_55 = int.d(_mm_cvtpd_ps(zx.o(rect_1.left.q)))
                    rect_1.left = eax_55
                    
                    if (eax_55 s>= 0x10)
                        ecx_29 = &rect_1
                    
                    *arg4 = rect_3.left - left_2 + ecx_20
                    *(arg4 + 0xc) = var_100 i- edx_2 + *ecx_29
                case 2
                    void* edi_5 = data_bac510
                    float xmm0_54 = _mm_cvtepi32_ps(zx.o(ecx_20))
                    rect.left = 0x10
                    float xmm1_13 = _mm_cvtepi32_ps(zx.o(*(edi_5 + 0x7c)))
                    float xmm0_55 = xmm0_54 / xmm1_13
                    var_104 = xmm0_55
                    int64_t xmm0_57 = _mm_cvtps_pd(xmm0_55 * xmm1_13)
                    rect_1.left = xmm0_57.d
                    rect_1.top = xmm0_57:4.d
                    var_148.q = fconvert.d(fconvert.t(rect_1.left.q))
                    int16_t x87control_5
                    int80_t st0_9
                    st0_9, x87control_5 = sub_762040(mxcsr, x87control, var_148)
                    rect_1.left.q = fconvert.d(st0_9)
                    RECT* ecx_30 = &rect
                    int32_t eax_59 = int.d(_mm_cvtpd_ps(zx.o(rect_1.left.q)))
                    float xmm0_61 = _mm_cvtepi32_ps(zx.o(*(edi_5 + 0x80)))
                    rect_1.left = eax_59
                    
                    if (eax_59 s>= 0x10)
                        ecx_30 = &rect_1
                    
                    int32_t left_3 = ecx_30->left
                    rect.left = 0x10
                    int64_t xmm0_63 = _mm_cvtps_pd(xmm0_61 * var_104)
                    rect_1.left = xmm0_63.d
                    rect_1.top = xmm0_63:4.d
                    var_148.q = fconvert.d(fconvert.t(rect_1.left.q))
                    rect_1.left.q = fconvert.d(sub_762040(mxcsr, x87control_5, var_148))
                    ecx_29 = &rect
                    int32_t eax_60 = int.d(_mm_cvtpd_ps(zx.o(rect_1.left.q)))
                    rect_1.left = eax_60
                    
                    if (eax_60 s>= 0x10)
                        ecx_29 = &rect_1
                    
                    eax_63 = var_f8 i- ecx_20 + left_3
                label_6a7555:
                    *(arg4 + 8) = eax_63
                    *(arg4 + 0xc) = var_100 i- edx_2 + *ecx_29
                case 3
                    void* esi_2 = data_bac510
                    float xmm1_5 = _mm_cvtepi32_ps(zx.o(edx_2))
                    rect_1.left = 0x10
                    float xmm1_6 = xmm1_5 / _mm_cvtepi32_ps(zx.o(*(esi_2 + 0x80)))
                    float xmm0_16 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0x7c)))
                    var_100 = xmm1_6
                    int64_t xmm0_18 = _mm_cvtps_pd(xmm0_16 * xmm1_6)
                    rect.left = xmm0_18.d
                    rect.top = xmm0_18:4.d
                    var_148.q = fconvert.d(fconvert.t(rect.left.q))
                    int16_t x87control_2
                    int80_t st0_3
                    st0_3, x87control_2 = sub_762040(mxcsr, x87control, var_148)
                    rect.left.q = fconvert.d(st0_3)
                    RECT* ecx_23 = &rect_1
                    int32_t eax_36 = int.d(_mm_cvtpd_ps(zx.o(rect.left.q)))
                    float xmm0_22 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0x80)))
                    var_104 = eax_36
                    
                    if (eax_36 s>= 0x10)
                        ecx_23 = &var_104
                    
                    int32_t left_5 = ecx_23->left
                    rect_1.left = 0x10
                    int64_t xmm0_24 = _mm_cvtps_pd(xmm0_22 * var_100)
                    rect.left = xmm0_24.d
                    rect.top = xmm0_24:4.d
                    var_148.q = fconvert.d(fconvert.t(rect.left.q))
                    rect.left.q = fconvert.d(sub_762040(mxcsr, x87control_2, var_148))
                    int32_t left_1 = rect_3.left
                    float* edx_4 = &rect_1
                    int32_t ecx_24 = int.d(_mm_cvtpd_ps(zx.o(rect.left.q)))
                    var_104 = ecx_24
                    
                    if (ecx_24 s>= 0x10)
                        edx_4 = &var_104
                    
                    float ecx_25 = *edx_4
                    int32_t eax_38
                    int32_t edx_5
                    edx_5:eax_38 = sx.q(left_5 - ecx_20)
                    int32_t eax_40 = (eax_38 - edx_5) s>> 1
                    *(arg4 + 8) = eax_40 i+ var_f8
                    int32_t eax_43 = rect_2.left i- ecx_25
                    *arg4 = left_1 - eax_40
                    *(arg4 + 4) = eax_43 + edx_2
                case 4
                    void* edi_1 = data_bac510
                    float* esi_1 = &var_100
                    float xmm0_2 = _mm_cvtepi32_ps(zx.o(edx_2))
                    var_104 = 2.24207754e-44f
                    uint128_t xmm3_1 = zx.o(*(edi_1 + 0x80))
                    float xmm2_2 = _mm_cvtepi32_ps(zx.o(*(edi_1 + 0x7c)))
                    float xmm1_3 = _mm_cvtepi32_ps(zx.o(ecx_20)) / xmm2_2
                    float xmm0_3 = xmm0_2 / _mm_cvtepi32_ps(xmm3_1)
                    var_f8 = xmm1_3
                    var_100 = xmm0_3
                    
                    if (xmm0_3 <= xmm1_3)
                        esi_1 = &var_f8
                    
                    int64_t xmm0_4 = _mm_cvtps_pd(xmm2_2 * *esi_1)
                    rect.left = xmm0_4.d
                    rect.top = xmm0_4:4.d
                    var_148.q = fconvert.d(fconvert.t(rect.left.q))
                    int16_t x87control_1
                    int80_t st0_1
                    st0_1, x87control_1 = sub_762040(mxcsr, x87control, var_148)
                    rect.left.q = fconvert.d(st0_1)
                    float* ecx_21 = &var_104
                    int32_t eax_28 = int.d(_mm_cvtpd_ps(zx.o(rect.left.q)))
                    float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(edi_1 + 0x80)))
                    rect_1.left = eax_28
                    
                    if (eax_28 s>= 0x10)
                        ecx_21 = &rect_1
                    
                    float ebx_1 = *ecx_21
                    rect_1.left = 0x10
                    int64_t xmm0_10 = _mm_cvtps_pd(xmm0_8 * *esi_1)
                    rect.left = xmm0_10.d
                    rect.top = xmm0_10:4.d
                    var_148.q = fconvert.d(fconvert.t(rect.left.q))
                    rect.left.q = fconvert.d(sub_762040(mxcsr, x87control_1, var_148))
                    float* ecx_22 = &rect_1
                    float eax_29 = int.d(_mm_cvtpd_ps(zx.o(rect.left.q)))
                    var_104 = eax_29
                    
                    if (eax_29 s>= 0x10)
                        ecx_22 = &var_104
                    
                    ebx = var_ec
                    *arg4 = rect_3.left i- ebx_1 + ecx_20
                    *(arg4 + 4) = rect_2.left i- *ecx_22 + edx_2
                case 5
                    void* eax_45 = data_bac510
                    RECT* esi_4 = &rect_1
                    float xmm0_28 = _mm_cvtepi32_ps(zx.o(edx_2))
                    var_100 = 2.24207754e-44f
                    uint128_t xmm3_3 = zx.o(*(eax_45 + 0x80))
                    float xmm2_5 = _mm_cvtepi32_ps(zx.o(*(eax_45 + 0x7c)))
                    float xmm3_4 = _mm_cvtepi32_ps(xmm3_3)
                    float xmm0_29 = xmm0_28 / xmm3_4
                    float xmm1_9 = _mm_cvtepi32_ps(zx.o(ecx_20)) / xmm2_5
                    rect_1.left = xmm0_29
                    var_104 = xmm1_9
                    rect.left = xmm3_4
                    
                    if (xmm0_29 <= xmm1_9)
                        esi_4 = &var_104
                    
                    int64_t xmm0_32 = _mm_cvtps_pd(esi_4->left * xmm2_5)
                    rect_3.left = xmm0_32.d
                    rect_3.top = xmm0_32:4.d
                    var_148.q = fconvert.d(fconvert.t(rect_3.left.q))
                    int16_t x87control_3
                    int80_t st0_5
                    st0_5, x87control_3 = sub_762040(mxcsr, x87control, var_148)
                    rect_3.left.q = fconvert.d(st0_5)
                    float* ecx_26 = &var_100
                    int32_t eax_46 = int.d(_mm_cvtpd_ps(zx.o(rect_3.left.q)))
                    rect_3.left = eax_46
                    
                    if (eax_46 s>= 0x10)
                        ecx_26 = &rect_3
                    
                    int64_t xmm0_37 = _mm_cvtps_pd(esi_4->left f* rect.left)
                    float edi_3 = *ecx_26
                    var_100 = 2.24207754e-44f
                    rect.left = xmm0_37.d
                    rect.top = xmm0_37:4.d
                    var_148.q = fconvert.d(fconvert.t(rect.left.q))
                    rect.left.q = fconvert.d(sub_762040(mxcsr, x87control_3, var_148))
                    float* ecx_27 = &var_100
                    int32_t eax_47 = int.d(_mm_cvtpd_ps(zx.o(rect.left.q)))
                    rect.left = eax_47
                    
                    if (eax_47 s>= 0x10)
                        ecx_27 = &rect
                    
                    *(arg4 + 8) = var_f8 i- ecx_20 i+ edi_3
                    *(arg4 + 4) = rect_2.left i- *ecx_27 + edx_2
                case 6
                    void* esi_6 = data_bac510
                    float xmm1_18 = _mm_cvtepi32_ps(zx.o(edx_2))
                    rect.left = 0x10
                    float xmm1_19 = xmm1_18 / _mm_cvtepi32_ps(zx.o(*(esi_6 + 0x80)))
                    float xmm0_82 = _mm_cvtepi32_ps(zx.o(*(esi_6 + 0x7c)))
                    var_104 = xmm1_19
                    int64_t xmm0_84 = _mm_cvtps_pd(xmm0_82 * xmm1_19)
                    rect_1.left = xmm0_84.d
                    rect_1.top = xmm0_84:4.d
                    var_148.q = fconvert.d(fconvert.t(rect_1.left.q))
                    int16_t x87control_7
                    int80_t st0_13
                    st0_13, x87control_7 = sub_762040(mxcsr, x87control, var_148)
                    rect_1.left.q = fconvert.d(st0_13)
                    RECT* ecx_32 = &rect
                    int32_t eax_70 = int.d(_mm_cvtpd_ps(zx.o(rect_1.left.q)))
                    float xmm0_88 = _mm_cvtepi32_ps(zx.o(*(esi_6 + 0x80)))
                    rect_1.left = eax_70
                    
                    if (eax_70 s>= 0x10)
                        ecx_32 = &rect_1
                    
                    int32_t left_6 = ecx_32->left
                    rect.left = 0x10
                    int64_t xmm0_90 = _mm_cvtps_pd(xmm0_88 * var_104)
                    rect_1.left = xmm0_90.d
                    rect_1.top = xmm0_90:4.d
                    var_148.q = fconvert.d(fconvert.t(rect_1.left.q))
                    rect_1.left.q = fconvert.d(sub_762040(mxcsr, x87control_7, var_148))
                    int32_t left_4 = rect_3.left
                    RECT* edx_9 = &rect
                    int32_t ecx_33 = int.d(_mm_cvtpd_ps(zx.o(rect_1.left.q)))
                    rect_1.left = ecx_33
                    
                    if (ecx_33 s>= 0x10)
                        edx_9 = &rect_1
                    
                    int32_t left = edx_9->left
                    int32_t eax_72
                    int32_t edx_10
                    edx_10:eax_72 = sx.q(left_6 - ecx_20)
                    int32_t eax_74 = (eax_72 - edx_10) s>> 1
                    *(arg4 + 8) = eax_74 i+ var_f8
                    int32_t eax_77 = var_100 i- edx_2
                    *arg4 = left_4 - eax_74
                    *(arg4 + 0xc) = eax_77 + left
                case 7
                    void* eax_64 = data_bac510
                    RECT* esi_5 = &rect
                    float xmm0_67 = _mm_cvtepi32_ps(zx.o(edx_2))
                    var_104 = 2.24207754e-44f
                    uint128_t xmm3_5 = zx.o(*(eax_64 + 0x80))
                    float xmm2_7 = _mm_cvtepi32_ps(zx.o(*(eax_64 + 0x7c)))
                    float xmm3_6 = _mm_cvtepi32_ps(xmm3_5)
                    float xmm0_68 = xmm0_67 / xmm3_6
                    float xmm1_16 = _mm_cvtepi32_ps(zx.o(ecx_20)) / xmm2_7
                    rect.left = xmm0_68
                    rect_1.left = xmm1_16
                    var_f8 = xmm3_6
                    
                    if (xmm0_68 <= xmm1_16)
                        esi_5 = &rect_1
                    
                    int64_t xmm0_71 = _mm_cvtps_pd(esi_5->left * xmm2_7)
                    rect_2.left = xmm0_71.d
                    rect_2.top = xmm0_71:4.d
                    var_148.q = fconvert.d(fconvert.t(rect_2.left.q))
                    int16_t x87control_6
                    int80_t st0_11
                    st0_11, x87control_6 = sub_762040(mxcsr, x87control, var_148)
                    rect_2.left.q = fconvert.d(st0_11)
                    float* ecx_31 = &var_104
                    int32_t eax_65 = int.d(_mm_cvtpd_ps(zx.o(rect_2.left.q)))
                    rect_2.left = eax_65
                    
                    if (eax_65 s>= 0x10)
                        ecx_31 = &rect_2
                    
                    int64_t xmm0_76 = _mm_cvtps_pd(esi_5->left f* var_f8)
                    float edi_6 = *ecx_31
                    var_104 = 2.24207754e-44f
                    rect.left = xmm0_76.d
                    rect.top = xmm0_76:4.d
                    var_148.q = fconvert.d(fconvert.t(rect.left.q))
                    rect.left.q = fconvert.d(sub_762040(mxcsr, x87control_6, var_148))
                    ecx_29 = &var_104
                    int32_t eax_66 = int.d(_mm_cvtpd_ps(zx.o(rect.left.q)))
                    rect.left = eax_66
                    
                    if (eax_66 s>= 0x10)
                        ecx_29 = &rect
                    
                    *arg4 = rect_3.left i- edi_6 + ecx_20
                    *(arg4 + 0xc) = var_100 i- edx_2 + *ecx_29
                case 8
                    void* eax_79 = data_bac510
                    RECT* esi_8 = &rect
                    float xmm0_94 = _mm_cvtepi32_ps(zx.o(edx_2))
                    var_104 = 2.24207754e-44f
                    uint128_t xmm3_7 = zx.o(*(eax_79 + 0x80))
                    float xmm2_9 = _mm_cvtepi32_ps(zx.o(*(eax_79 + 0x7c)))
                    float xmm3_8 = _mm_cvtepi32_ps(xmm3_7)
                    float xmm0_95 = xmm0_94 / xmm3_8
                    float xmm1_22 = _mm_cvtepi32_ps(zx.o(ecx_20)) / xmm2_9
                    rect.left = xmm0_95
                    rect_1.left = xmm1_22
                    rect_3.left = xmm3_8
                    
                    if (xmm0_95 <= xmm1_22)
                        esi_8 = &rect_1
                    
                    int64_t xmm0_98 = _mm_cvtps_pd(esi_8->left * xmm2_9)
                    rect_2.left = xmm0_98.d
                    rect_2.top = xmm0_98:4.d
                    var_148.q = fconvert.d(fconvert.t(rect_2.left.q))
                    int16_t x87control_8
                    int80_t st0_15
                    st0_15, x87control_8 = sub_762040(mxcsr, x87control, var_148)
                    rect_2.left.q = fconvert.d(st0_15)
                    int32_t* ecx_34 = &var_104
                    int32_t eax_80 = int.d(_mm_cvtpd_ps(zx.o(rect_2.left.q)))
                    rect_2.left = eax_80
                    
                    if (eax_80 s>= 0x10)
                        ecx_34 = &rect_2
                    
                    int64_t xmm0_103 = _mm_cvtps_pd(esi_8->left f* rect_3.left)
                    int32_t edi_8 = *ecx_34
                    var_104 = 2.24207754e-44f
                    rect.left = xmm0_103.d
                    rect.top = xmm0_103:4.d
                    var_148.q = fconvert.d(fconvert.t(rect.left.q))
                    rect.left.q = fconvert.d(sub_762040(mxcsr, x87control_8, var_148))
                    ecx_29 = &var_104
                    int32_t eax_81 = int.d(_mm_cvtpd_ps(zx.o(rect.left.q)))
                    rect.left = eax_81
                    
                    if (eax_81 s>= 0x10)
                        ecx_29 = &rect
                    
                    eax_63 = var_f8 i- ecx_20 + edi_8
                    goto label_6a7555
        HWND hWnd = *(ebx + 4)
        __builtin_memset(&rect, 0, 0x10)
        GetWindowRect(hWnd, &rect)
        int32_t esi_10 = rect.right - rect.left
        __builtin_memset(&rect_1, 0, 0x10)
        GetClientRect(*(var_ec + 4), &rect_1)
        int32_t eax_89 = rect_1.left - rect_1.right + esi_10
        __builtin_memset(&rect_2, 0, 0x10)
        *(var_ec + 0x1c90) = eax_89
        GetWindowRect(*(var_ec + 4), &rect_2)
        int32_t esi_12 = rect_2.bottom - rect_2.top
        HWND hWnd_1 = *(var_ec + 4)
        __builtin_memset(&rect_3, 0, 0x10)
        GetClientRect(hWnd_1, &rect_3)
        *(var_ec + 0x1c94) = rect_3.top - rect_3.bottom + esi_12
        sub_745f2b(eax_1 ^ &var_134)
        return 1
    
    if (edi == 0x116)
        if (arg3 == *(ebx + 0x1af0))
            sub_6abed0(ebx + 0x1af0)
    else if (edi == 0x211)
        void* eax_22 = data_bac4a0
        
        if (*(eax_22 + 0xcf) == 0)
            *(eax_22 + 0xcf) = 1
    
    if (edi == 0x231)
        void var_64
        int32_t* eax_99 = sub_6c12d0(ebx, &var_64)
        int32_t esi_16 = eax_99[2] - *eax_99
        void var_94
        int32_t* eax_100 = sub_6c1310(ebx, &var_94)
        *(ebx + 0x1c90) = esi_16 - eax_100[2] + *eax_100
        void var_74
        int32_t* eax_101 = sub_6c12d0(ebx, &var_74)
        int32_t esi_20 = eax_101[3] - eax_101[1]
        void var_54
        int32_t* eax_102 = sub_6c1310(ebx, &var_54)
        *(ebx + 0x1c94) = eax_102[1] - eax_102[3] + esi_20
    else if (edi == 0x232)
        void var_84
        int32_t* eax_97 = sub_6c1310(ebx, &var_84)
        int32_t edi_10 = eax_97[2] - *eax_97
        int32_t esi_14 = eax_97[3] - eax_97[1]
        void var_a4
        int32_t* eax_98 = sub_6c12d0(ebx, &var_a4)
        int32_t var_144_8 = esi_14
        int32_t var_148_4 = edi_10
        sub_616200(*eax_98, eax_98[1])
        edi = arg2
else if (edi == 0x112)
    void* eax_18 = data_bac4a0
    
    if (*(eax_18 + 0xcf) == 0)
        *(eax_18 + 0xcf) = 1
    
    if (arg3 == 0xf140)
        char eax_19 = sub_620a70()
        char eax_20
        
        if (eax_19 == 0)
            eax_20 = sub_620b70()
        
        if (eax_19 != 0 || eax_20 != 0)
            sub_745f2b(eax_1 ^ &var_134)
            return 1
else if (edi u> 0x20)
    if (edi == 0x104)
        if (arg3 == 0x79)
            sub_745f2b(eax_1 ^ &var_134)
            return 0
    else if (edi == 0x111)
        int32_t var_144_1 = ecx
        
        if (sub_6a79a0(ebx, arg3) == 0)
            sub_745f2b(eax_1 ^ &var_134)
            return 0
else if (edi != 0x20)
    if (edi == 1)
        if (sub_6a7760(ebx) == 0)
            sub_745f2b(eax_1 ^ &var_134)
            return 0
    else if (edi == 0xf)
        if (sub_6a7900(ebx) == 0)
            sub_745f2b(eax_1 ^ &var_134)
            return 0
    else if (edi == 0x10 && sub_6a77e0(ebx) == 0)
        sub_745f2b(eax_1 ^ &var_134)
        return 0

if (edi == 2)
    void* lpClassName_1 = ebx + 0x78
    void* lpClassName
    
    if (*(ebx + 0x8c) u< 8)
        lpClassName = lpClassName_1
    else
        lpClassName = *lpClassName_1
    
    UnregisterClassW(lpClassName, data_4ebe3a8)
    bool cond:24_1 = *(lpClassName_1 + 0x14) u< 8
    *(lpClassName_1 + 0x10) = 0
    
    if (not(cond:24_1))
        lpClassName_1 = *lpClassName_1
    
    *lpClassName_1 = 0

LRESULT result = sub_6c0020(ebx, edi, arg3, arg4)
sub_745f2b(eax_1 ^ &var_134)
return result
