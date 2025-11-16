// 函数: sub_5ec798
// 地址: 0x5ec798
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_349 = *(arg4 + 0x2a8)
int32_t ecx_1

if (eax_349 u> 3)
    ecx_1 = 0
else
    ecx_1 = *(data_bac498 + (eax_349 << 3) + 0x34)

if (ecx_1 != *(arg4 + 0x340))
    *arg5 = 0

char* ecx_2 = *(arg4 + 0xa8)

if (ecx_2 s>= 0 && ecx_2 s< *(data_bac510 + 0x2077c) && ecx_2 s< *(arg2 + 0x174) - *(arg2 + 0x170)
        && ecx_2[*(arg2 + 0x170)] == 0)
    *arg5 = 0

if (*(arg4 + 0xa3) != 0)
    void* eax_4
    eax_4.b = *(data_bac498 + 2)
    void* eax_5
    
    if (eax_4.b == 0)
        eax_5.b = *(data_bac484 + 0x138)
    
    if (eax_4.b != 0 || eax_5.b != 0 || *(data_bac458 + 0x37f) != 0)
        *arg5 = 0

int32_t edx_2

if (*arg5 == 0)
    int32_t ecx_4 = *(arg4 + 0x1438) - *(arg4 + 0x1434)
    int32_t eax_7
    int32_t edx
    edx:eax_7 = muls.dp.d(0xba506bb7, ecx_4)
    edx_2 = (edx + ecx_4) s>> 0xc

int32_t result

if (*arg5 != 0 || edx_2 u>> 0x1f != neg.d(edx_2))
    sub_5ee880(arg4)
    *(arg4 + 0x12d8) += arg3[3]
    int32_t* edx_3 = arg3[-0xf]
    
    if (edx_3 != 0)
        sub_6289b0(arg5, edx_3)
    
    result = (*(arg4 + 0x1438) - *(arg4 + 0x1434)) s/ 0x15fc
    arg3[-0x12] = result
    int32_t* var_8
    int32_t* var_4
    
    if (result s> 0)
        arg3[-7] = 0
        int32_t i
        
        do
            var_4 = arg3[-0xd]
            *(arg4 + 0x1434)
            var_8 = nullptr
            std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put(
                arg5, var_8, var_4)
            result = arg3[-7] + 0x15fc
            i = arg3[-0x12]
            arg3[-0x12] -= 1
            arg3[-7] = result
        while (i != 1)
    
    if (*arg5 != 0 && *(arg4 + 0x1348) != 0)
        float xmm3_1 = *(arg4 + 0x12fc)
        float xmm2_1 = *(arg4 + 0x1300)
        float xmm0_2 = xmm3_1 f+ *(arg4 + 0x12e4)
        float xmm1_1 = *(arg4 + 0x1304)
        float xmm3_2 = xmm3_1 f+ *(arg4 + 0x12f0)
        void* eax_15 = arg3[-0xf]
        *(arg4 + 0x12fc) = 0
        *(arg4 + 0x12e4) = xmm0_2
        *(arg4 + 0x1300) = 0
        *(arg4 + 0x12f0) = xmm3_2
        *(arg4 + 0x1304) = 0
        float xmm2_2 = xmm2_1 f+ *(arg4 + 0x12f4)
        *(arg4 + 0x12e8) = xmm2_1 f+ *(arg4 + 0x12e8)
        *(arg4 + 0x12f4) = xmm2_2
        float xmm0_6 = xmm1_1 f+ *(arg4 + 0x12ec)
        *(arg4 + 0x12f8) = xmm1_1 f+ *(arg4 + 0x12f8)
        int32_t xmm1_3 = (zx.o(0)).d
        *(arg4 + 0x12ec) = xmm0_6
        arg3[-0x1f] = 0
        
        if (eax_15 == 0)
        label_5eca13:
            int32_t eax_17 = sub_5f3680(arg4)
            xmm1_3 = arg3[-0x1f]
            arg3[-0xf] = eax_17
        else
            int32_t eax_16 = *(eax_15 + 0xbc)
            
            if (eax_16 != 3)
                if (eax_16 != 4)
                    goto label_5eca13
                
                arg3[-0xf] = eax_16
            else
                arg3[-0xf] = eax_16
        
        int32_t eax_18 = *(arg4 + 0x2ac)
        float xmm3_3 = xmm1_3
        arg3[-0x18] = xmm3_3
        int32_t xmm4_1 = xmm1_3
        arg3[-0x14] = xmm4_1
        
        if (eax_18 s>= 0)
            int32_t* eax_19 = data_bac4c4
            int32_t eax_20
            int32_t edx_7
            edx_7:eax_20 = muls.dp.d(0x66666667, eax_19[1] - *eax_19)
            int32_t ecx_14 = *(arg4 + 0x2ac)
            int32_t edx_8 = edx_7 s>> 5
            
            if ((edx_8 u>> 0x1f) + edx_8 s> ecx_14)
                int32_t eax_26 = ecx_14 * 0x50 + *data_bac4c4
                int32_t ecx_16 = arg3[-0xf]
                
                if (ecx_16 u<= 4)
                    int32_t ecx_17 = ecx_16 << 4
                    int32_t* ecx_18 = ecx_17 + eax_26
                    arg3[-0xf] = ecx_18
                    
                    if (ecx_17 != neg.d(eax_26))
                        int32_t xmm3_4[0x4] = zx.o(ecx_18[1])
                        uint128_t xmm4_2 = zx.o(ecx_18[2])
                        *(arg4 + 0x12d4) += *ecx_18
                        float xmm0_8 = _mm_cvtepi32_ps(zx.o(ecx_18[1]))
                        xmm3_3 = _mm_cvtepi32_ps(xmm3_4)
                        float xmm0_9 = xmm0_8 f+ *(arg4 + 0x12e4)
                        xmm4_1 = _mm_cvtepi32_ps(xmm4_2)
                        *(arg4 + 0x12e4) = xmm0_9
                        float xmm0_11 = _mm_cvtepi32_ps(zx.o(ecx_18[2]))
                        arg3[-0x18] = xmm3_3
                        float xmm0_12 = xmm0_11 f+ *(arg4 + 0x12e8)
                        arg3[-0x14] = xmm4_1
                        *(arg4 + 0x12e8) = xmm0_12
                        int32_t ecx_20 = zx.d(ecx_18[3].b) * *(arg4 + 0x1348)
                        int32_t eax_31 = ecx_20 s/ 0xff
                        
                        if (ecx_20 s/ 0xff s< 0)
                            eax_31 = 0
                        else if (eax_31 s> 0xff)
                            eax_31 = 0xff
                        
                        *(arg4 + 0x1348) = eax_31
                        void* eax_32 = arg3[-0xf]
                        uint32_t ecx_21 = zx.d(*(eax_32 + 0xd))
                        int32_t ecx_22 = ecx_21 + *(arg4 + 0x1354)
                        
                        if (ecx_21 + *(arg4 + 0x1354) s< 0)
                            ecx_22 = 0
                        else if (ecx_22 s> 0xff)
                            ecx_22 = 0xff
                        
                        *(arg4 + 0x1354) = ecx_22
                        uint32_t eax_33 = zx.d(*(eax_32 + 0xe))
                        int32_t eax_34 = eax_33 + *(arg4 + 0x1358)
                        
                        if (eax_33 + *(arg4 + 0x1358) s< 0)
                            eax_34 = 0
                        else if (eax_34 s> 0xff)
                            eax_34 = 0xff
                        
                        *(arg4 + 0x1358) = eax_34
        
        result = *(arg4 + 0x12e0)
        
        if (result != 0 && *(result + 0xa4) == 0)
            float xmm2_3 = *(arg4 + 0x12ec)
            int32_t ecx_23 = *(result + 0xec)
            float xmm0_14 = _mm_cvtepi32_ps(zx.o(*(result + 0x118)))
            arg3[-0xa] = ecx_23
            float xmm2_4[0x2] = xmm2_3 - xmm0_14
            
            if (xmm2_4 f<= xmm1_3)
                *arg5 = 0
            else
                double xmm0_15 = _mm_cvtps_pd(xmm2_4)
                void* ecx_24 = data_bac4a0
                double xmm2_6 = 1000.0 / xmm0_15
                int32_t eax_36
                int32_t edx_12
                edx_12:eax_36 = sx.q(*(ecx_24 + 8))
                float xmm1_5[0x2] = *(arg4 + 0x12e4) - _mm_cvtepi32_ps(zx.o(*(result + 0xc0)))
                double xmm0_19 = _mm_cvtepi32_pd(zx.q((eax_36 - edx_12) s>> 1))
                int32_t xmm0_20 = _mm_cvtpd_ps(_mm_cvtps_pd(xmm1_5) * xmm2_6 + xmm0_19)
                float xmm1_9 = *(arg4 + 0x12e8)
                *(arg4 + 0x12e4) = xmm0_20
                int32_t eax_40
                int32_t edx_13
                edx_13:eax_40 = sx.q(*(ecx_24 + 0xc))
                float xmm1_10[0x2] = xmm1_9 - _mm_cvtepi32_ps(zx.o(arg3[-0xa]))
                double xmm0_24 = _mm_cvtepi32_pd(zx.q((eax_40 - edx_13) s>> 1))
                *(arg4 + 0x12e8) = _mm_cvtpd_ps(_mm_cvtps_pd(xmm1_10) * xmm2_6 + xmm0_24)
                *(arg4 + 0x1308) = _mm_cvtpd_ps(_mm_cvtps_pd(*(arg4 + 0x1308)) * xmm2_6)
                *(arg4 + 0x130c) = _mm_cvtpd_ps(_mm_cvtps_pd(*(arg4 + 0x130c)) * xmm2_6)
                arg3[-0x18] = _mm_cvtpd_ps(fconvert.d(xmm3_3) * xmm2_6)
                arg3[-0x14] = _mm_cvtpd_ps(fconvert.d(xmm4_1) * xmm2_6)
        
        if (*arg5 != 0 && *(arg4 + 0x1348) != 0)
            int32_t eax_42 = *(arg4 + 0x1ac)
            
            if (eax_42 != 0)
                if (eax_42 == 1 || eax_42 == 2 || eax_42 == 8 || eax_42 == 0xb || eax_42 == 0xa
                        || eax_42 == 9 || eax_42 == 0xc)
                    **(arg4 + 0x1580) = 2
                else if (eax_42 == 3 || eax_42 == 5 || eax_42 == 4)
                    int32_t eax_45
                    int32_t edx_14
                    edx_14:eax_45 = muls.dp.d(0x6bca1af3, *(arg4 + 0x158c) - *(arg4 + 0x1588))
                    int32_t edx_15 = edx_14 s>> 7
                    int32_t i_7 = (edx_15 u>> 0x1f) + edx_15
                    
                    if (i_7 s> 0)
                        int32_t edx_16 = 0
                        int32_t i_1
                        
                        do
                            edx_16 += 0x130
                            *(*(arg4 + 0x1588) + edx_16 - 0x130) = 2
                            i_1 = i_7
                            i_7 -= 1
                        while (i_1 != 1)
                else if (eax_42 == 6)
                    **(arg4 + 0x1580) = 3
                    sub_54d950(&var_8, arg4 + 0x1570)
                    _com_util::ConvertBSTRToString(*(arg4 + 0x1580), var_8, var_4)
            
            int32_t* ecx_49
            int32_t* edx_25
            void* edx_26
            
            switch (*(arg4 + 0x1ac))
                case 0
                    int32_t ecx_33 = *(arg4 + 0x1438) - *(arg4 + 0x1434)
                    int32_t eax_48
                    int32_t edx_17
                    edx_17:eax_48 = muls.dp.d(0xba506bb7, ecx_33)
                    int32_t edx_19 = (edx_17 + ecx_33) s>> 0xc
                    
                    if (edx_19 u>> 0x1f != neg.d(edx_19))
                        edx_26 = *(arg4 + 0x1580)
                        sub_628eb0(edx_26 + 4, edx_26 + 0x120, arg4 + 0x12d0, edx_26 + 4)
                case 1
                    void* edx_20 = *(arg4 + 0x1580)
                    sub_628eb0(edx_20 + 4, edx_20 + 0x120, arg4 + 0x12d0, edx_20 + 4)
                    void* eax_53 = *(arg4 + 0x1580)
                    float xmm0_41 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1bc)))
                    *(eax_53 + 0x28) = *(eax_53 + 0x28) - xmm0_41
                    void* eax_54 = *(arg4 + 0x1580)
                    float xmm0_43 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1c0)))
                    *(eax_54 + 0x2c) = *(eax_54 + 0x2c) - xmm0_43
                    *(*(arg4 + 0x1580) + 0x10) =
                        _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1c4) - *(arg4 + 0x1bc)))
                    *(*(arg4 + 0x1580) + 0x14) =
                        _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1c8) - *(arg4 + 0x1c0)))
                    *(*(arg4 + 0x1580) + 0xa0) = *(arg4 + 0x1cc)
                case 2
                    void* edx_22 = *(arg4 + 0x1580)
                    sub_628eb0(edx_22 + 4, edx_22 + 0x120, arg4 + 0x12d0, edx_22 + 4)
                    int32_t* ecx_39 = *(arg4 + 0x1568)
                    
                    if (ecx_39 != 0 && ((ecx_39[1] - *ecx_39) & 0xfffffff8) s> 0)
                        int32_t edx_24 = *(arg4 + 0x12d4)
                        
                        if (edx_24 s>= 0 && edx_24 s< (ecx_39[1] - *ecx_39) s>> 3)
                            var_8 = &arg3[-0x21]
                            sub_54d980(ecx_39, var_8, edx_24)
                            void* ecx_40 = *(arg4 + 0x1580)
                            arg3[-1] = 4
                            sub_5b17d0(ecx_40 + 0xd8, &arg3[-0x21])
                            arg3[-1] = 0xffffffff
                            edx_25 = arg3[-0x20]
                        label_5ed0ea:
                            arg3[-0xa] = edx_25
                            
                            if (edx_25 == 0)
                                *(*(arg4 + 0x1580) + 0x18) = 0
                            else
                                bool cond:7_1 = edx_25[1] != 1
                                edx_25[1]
                                edx_25[1] -= 1
                                
                                if (cond:7_1)
                                    *(*(arg4 + 0x1580) + 0x18) = 0
                                else
                                    (*(*edx_25 + 4))()
                                    ecx_49 = arg3[-0xa]
                                label_5ed10b:
                                    bool cond:19_1 = ecx_49[2] != 1
                                    ecx_49[2]
                                    ecx_49[2] -= 1
                                    
                                    if (not(cond:19_1))
                                        (*(*ecx_49 + 8))()
                                    
                                    *(*(arg4 + 0x1580) + 0x18) = 0
                case 3
                    sub_5f5ee0(arg4)
                case 4
                    sub_5f7300(arg4)
                case 5
                    sub_5f4bb0(arg4)
                case 6
                    edx_26 = *(arg4 + 0x1580)
                    sub_628eb0(edx_26 + 4, edx_26 + 0x120, arg4 + 0x12d0, edx_26 + 4)
                case 8, 0xa, 0xb
                    void* edx_31 = *(arg4 + 0x1580)
                    sub_628eb0(edx_31 + 4, edx_31 + 0x120, arg4 + 0x12d0, edx_31 + 4)
                    int32_t* ecx_55 = *(arg4 + 0x1568)
                    
                    if (ecx_55 != 0 && ((ecx_55[1] - *ecx_55) & 0xfffffff8) s> 0)
                        int32_t var_4_9 = 0
                        var_8 = &arg3[-0x1b]
                        sub_54d980(ecx_55, var_8, var_4_9)
                        void* eax_80 = *(arg4 + 0x1580)
                        arg3[-0xa] = eax_80
                        arg3[-1] = 5
                        void* ecx_56 = arg3[-0x1a]
                        int32_t edx_33 = arg3[-0x1b]
                        arg3[-0xd] = ecx_56
                        
                        if (ecx_56 != 0)
                            *(ecx_56 + 4) += 1
                            eax_80 = arg3[-0xa]
                            ecx_56 = arg3[-0xd]
                        
                        *(eax_80 + 0xd8) = edx_33
                        int32_t* edx_34 = *(eax_80 + 0xdc)
                        arg3[-0xa] = edx_34
                        *(eax_80 + 0xdc) = ecx_56
                        
                        if (edx_34 != 0)
                            bool cond:6_1 = edx_34[1] != 1
                            edx_34[1]
                            edx_34[1] -= 1
                            
                            if (not(cond:6_1))
                                (*(*edx_34 + 4))()
                                int32_t* ecx_59 = arg3[-0xa]
                                bool cond:9_1 = ecx_59[2] != 1
                                ecx_59[2]
                                ecx_59[2] -= 1
                                
                                if (not(cond:9_1))
                                    (*(*ecx_59 + 8))()
                        
                        arg3[-1] = 0xffffffff
                        edx_25 = arg3[-0x1a]
                        goto label_5ed0ea
                case 9
                    sub_5f43b0(arg4)
                case 0xc
                    void* edx_28 = *(arg4 + 0x1580)
                    sub_628eb0(edx_28 + 4, edx_28 + 0x120, arg4 + 0x12d0, edx_28 + 4)
                    arg3[-0xb] = *(arg4 + 0x15ec)
                    void* eax_71 = *(arg4 + 0x15f0)
                    arg3[-7] = eax_71
                    arg3[-0xa] = eax_71
                    
                    if (eax_71 != 0)
                        *(eax_71 + 4)
                        *(eax_71 + 4) += 1
                    
                    void* ecx_45 = *(arg4 + 0x1580)
                    arg3[-1] = 6
                    sub_5b17d0(ecx_45 + 0xd8, &arg3[-0xb])
                    arg3[-1] = 0xffffffff
                    int32_t* edx_30 = arg3[-7]
                    
                    if (edx_30 == 0)
                        *(*(arg4 + 0x1580) + 0x18) = 0
                    else
                        bool cond:10_1 = edx_30[1] != 1
                        edx_30[1]
                        edx_30[1] -= 1
                        
                        if (not(cond:10_1))
                            (*(*edx_30 + 4))()
                            ecx_49 = arg3[-7]
                            goto label_5ed10b
                        
                        *(*(arg4 + 0x1580) + 0x18) = 0
            
            int32_t edx_37 = *(arg4 + 0x1378)
            
            if (edx_37 != 0xffffffff)
                sub_643010(&arg3[-0xe], edx_37)
                arg3[-1] = 7
                int32_t* edx_44
                
                if (arg3[-0xe] == 0)
                    *(arg4 + 0x1378) = 0xffffffff
                    edx_44 = arg3[-0xd]
                else
                    void* eax_91 = data_bac470
                    arg3[-7] = 0
                    arg3[-0x12] = 0
                    int32_t ecx_65 = *(arg4 + 0x1378)
                    int32_t ecx_67
                    int32_t edx_41
                    
                    if (ecx_65 s< 0 || ecx_65 s>= (*(eax_91 + 0xa8) - *(eax_91 + 0xa4)) s/ 0x118)
                        ecx_67 = 0
                        edx_41 = 0
                    else
                        void* eax_97 = ecx_65 * 0x118 + *(data_bac470 + 0xa4)
                        ecx_67 = *(eax_97 + 0xd0)
                        edx_41 = *(eax_97 + 0xfc)
                        arg3[-7] = ecx_67
                        arg3[-0x12] = edx_41
                    
                    int32_t eax_98 = *(arg4 + 0x1ac)
                    
                    if (eax_98 == 0)
                        edx_44 = arg3[-0xd]
                    else if (eax_98 == 1 || eax_98 == 2 || eax_98 == 8 || eax_98 == 0xb
                            || eax_98 == 9 || eax_98 == 0xc)
                        *(*(arg4 + 0x1580) + 0xd) = 1
                        *(*(arg4 + 0x1580) + 0x94) = ecx_67
                        *(*(arg4 + 0x1580) + 0x98) = edx_41
                        edx_44 = arg3[-0xd]
                        arg3[-0x17] = arg3[-0xe]
                        arg3[-0x16] = edx_44
                        
                        if (edx_44 != 0)
                            edx_44[1]
                            edx_44[1] += 1
                        
                        void* ecx_83 = *(arg4 + 0x1580)
                        arg3[-0xa] = ecx_83
                        arg3[-1].b = 8
                        
                        if (edx_44 != 0)
                            edx_44[1] += 1
                            ecx_83 = arg3[-0xa]
                        
                        *(ecx_83 + 0xe0) = arg3[-0xe]
                        void* eax_127 = *(ecx_83 + 0xe4)
                        arg3[-7] = eax_127
                        *(ecx_83 + 0xe4) = edx_44
                        
                        if (eax_127 != 0)
                            bool cond:16_1 = *(eax_127 + 4) != 1
                            *(eax_127 + 4)
                            *(eax_127 + 4) -= 1
                            
                            if (not(cond:16_1))
                                (*(*arg3[-7] + 4))()
                                int32_t* ecx_86 = arg3[-7]
                                bool cond:18_1 = ecx_86[2] != 1
                                ecx_86[2]
                                ecx_86[2] -= 1
                                
                                if (not(cond:18_1))
                                    (*(*ecx_86 + 8))()
                                
                                edx_44 = arg3[-0xd]
                        
                        arg3[-1].b = 7
                        
                        if (edx_44 != 0)
                            bool cond:17_1 = edx_44[1] != 1
                            edx_44[1]
                            edx_44[1] -= 1
                            
                            if (not(cond:17_1))
                                (*(*edx_44 + 4))()
                                edx_44 = arg3[-0xd]
                                bool cond:21_1 = edx_44[2] != 1
                                edx_44[2]
                                edx_44[2] -= 1
                                
                                if (not(cond:21_1))
                                    (*(*edx_44 + 8))()
                                    edx_44 = arg3[-0xd]
                    else if (eax_98 == 3 || eax_98 == 5 || eax_98 == 4)
                        int32_t eax_99
                        int32_t edx_42
                        edx_42:eax_99 = muls.dp.d(0x6bca1af3, *(arg4 + 0x158c) - *(arg4 + 0x1588))
                        int32_t edx_43 = edx_42 s>> 7
                        int32_t eax_102 = (edx_43 u>> 0x1f) + edx_43
                        edx_44 = arg3[-0xd]
                        arg3[-0x10] = eax_102
                        
                        if (eax_102 s> 0)
                            int32_t ecx_70 = 0
                            arg3[-0xb] = arg3[-0xe]
                            arg3[-0xa] = edx_44
                            arg3[-6] = 0
                            int32_t i_2
                            
                            do
                                int32_t edx_45 = arg3[-7]
                                *(ecx_70 + *(arg4 + 0x1588) + 0xd) = 1
                                *(ecx_70 + *(arg4 + 0x1588) + 0x94) = edx_45
                                *(ecx_70 + *(arg4 + 0x1588) + 0x98) = arg3[-0x12]
                                int32_t* edx_47 = arg3[-0xd]
                                
                                if (edx_47 != 0)
                                    edx_47[1] += 1
                                    ecx_70 = arg3[-6]
                                
                                void* eax_109 = *(arg4 + 0x1588) + ecx_70
                                arg3[-0x13] = eax_109
                                arg3[-1].b = 9
                                
                                if (edx_47 != 0)
                                    edx_47[1]
                                    edx_47[1] += 1
                                    eax_109 = arg3[-0x13]
                                
                                *(eax_109 + 0xe0) = arg3[-0xe]
                                void* ecx_73 = arg3[-0x13]
                                void* eax_111 = *(eax_109 + 0xe4)
                                arg3[-0x1d] = eax_111
                                *(ecx_73 + 0xe4) = edx_47
                                
                                if (eax_111 != 0)
                                    bool cond:52_1 = *(eax_111 + 4) != 1
                                    *(eax_111 + 4)
                                    *(eax_111 + 4) -= 1
                                    
                                    if (not(cond:52_1))
                                        (*(*arg3[-0x1d] + 4))()
                                        int32_t* ecx_76 = arg3[-0x1d]
                                        bool cond:61_1 = ecx_76[2] != 1
                                        ecx_76[2]
                                        ecx_76[2] -= 1
                                        
                                        if (not(cond:61_1))
                                            (*(*ecx_76 + 8))()
                                        
                                        edx_47 = arg3[-0xd]
                                
                                arg3[-1].b = 7
                                
                                if (edx_47 != 0)
                                    bool cond:60_1 = edx_47[1] != 1
                                    edx_47[1]
                                    edx_47[1] -= 1
                                    
                                    if (not(cond:60_1))
                                        (*(*edx_47 + 4))()
                                        int32_t* edx_49 = arg3[-0xd]
                                        bool cond:67_1 = edx_49[2] != 1
                                        edx_49[2]
                                        edx_49[2] -= 1
                                        
                                        if (not(cond:67_1))
                                            (*(*edx_49 + 8))()
                                
                                ecx_70 = arg3[-6] + 0x130
                                i_2 = arg3[-0x10]
                                arg3[-0x10] -= 1
                                arg3[-6] = ecx_70
                            while (i_2 != 1)
                            edx_44 = arg3[-0xd]
                    else
                        edx_44 = arg3[-0xd]
                
                arg3[-1] = 0xffffffff
                
                if (edx_44 != 0)
                    bool cond:3_1 = edx_44[1] != 1
                    edx_44[1]
                    edx_44[1] -= 1
                    
                    if (not(cond:3_1))
                        (*(*edx_44 + 4))()
                        int32_t* ecx_93 = arg3[-0xd]
                        bool cond:4_1 = ecx_93[2] != 1
                        ecx_93[2]
                        ecx_93[2] -= 1
                        
                        if (not(cond:4_1))
                            (*(*ecx_93 + 8))()
            
            int32_t ecx_94 = *(arg4 + 0x137c)
            arg3[-0xd] = ecx_94
            
            if (ecx_94 != 0xffffffff)
                int32_t* edx_52
                
                if (ecx_94 s>= 0)
                    edx_52 = data_bac488
                
                if (ecx_94 s< 0 || ecx_94 s>= (edx_52[1] - *edx_52) s>> 3
                        || *(*edx_52 + (ecx_94 << 3) + 4) == 0)
                    *(arg4 + 0x137c) = 0xffffffff
                else
                    int32_t eax_148
                    
                    if (ecx_94 s< 0 || (edx_52[1] - *edx_52) s>> 3 s<= ecx_94)
                        eax_148 = 0
                    else
                        eax_148 = *(*edx_52 + (ecx_94 << 3))
                    
                    if (eax_148 s< 0xffffff9c)
                        eax_148 = 0xffffff9c
                    else if (eax_148 s> 0)
                        eax_148 = 0
                    
                    int32_t eax_154 = *(arg4 + 0x1ac)
                    arg3[-0xa] = 0xff - (eax_148 + 0x64) * 0xff s/ 0x64
                    
                    if (eax_154 != 0)
                        if (eax_154 == 1 || eax_154 == 2 || eax_154 == 8 || eax_154 == 0xb
                                || eax_154 == 0xa || eax_154 == 9 || eax_154 == 0xc)
                            *(*(arg4 + 0x1580) + 0x88) = arg3[-0xd]
                            *(*(arg4 + 0x1580) + 0x8c) = (0xff - (eax_148 + 0x64) * 0xff s/ 0x64).b
                            sub_6a63c0(&arg3[-0x17])
                            void* eax_170 = *(arg4 + 0x1580)
                            arg3[-0xa] = eax_170
                            arg3[-1] = 0xa
                            void* ecx_107 = arg3[-0x16]
                            int32_t edx_62 = arg3[-0x17]
                            arg3[-0xd] = ecx_107
                            
                            if (ecx_107 != 0)
                                *(ecx_107 + 4) += 1
                                eax_170 = arg3[-0xa]
                                ecx_107 = arg3[-0xd]
                            
                            *(eax_170 + 0xe8) = edx_62
                            int32_t* edx_63 = *(eax_170 + 0xec)
                            arg3[-0xa] = edx_63
                            *(eax_170 + 0xec) = ecx_107
                            
                            if (edx_63 != 0)
                                bool cond:24_1 = edx_63[1] != 1
                                edx_63[1]
                                edx_63[1] -= 1
                                
                                if (not(cond:24_1))
                                    (*(*edx_63 + 4))()
                                    int32_t* ecx_110 = arg3[-0xa]
                                    bool cond:31_1 = ecx_110[2] != 1
                                    ecx_110[2]
                                    ecx_110[2] -= 1
                                    
                                    if (not(cond:31_1))
                                        (*(*ecx_110 + 8))()
                            
                            arg3[-1] = 0xffffffff
                            int32_t* edx_65 = arg3[-0x16]
                            arg3[-0xa] = edx_65
                            
                            if (edx_65 != 0)
                                bool cond:30_1 = edx_65[1] != 1
                                edx_65[1]
                                edx_65[1] -= 1
                                
                                if (not(cond:30_1))
                                    (*(*edx_65 + 4))()
                                    int32_t* ecx_113 = arg3[-0xa]
                                    bool cond:36_1 = ecx_113[2] != 1
                                    ecx_113[2]
                                    ecx_113[2] -= 1
                                    
                                    if (not(cond:36_1))
                                        (*(*ecx_113 + 8))()
                        else if (eax_154 == 3 || eax_154 == 5 || eax_154 == 4)
                            int32_t eax_155
                            int32_t edx_56
                            edx_56:eax_155 =
                                muls.dp.d(0x6bca1af3, *(arg4 + 0x158c) - *(arg4 + 0x1588))
                            int32_t edx_57 = edx_56 s>> 7
                            int32_t eax_158 = (edx_57 u>> 0x1f) + edx_57
                            arg3[-7] = eax_158
                            
                            if (eax_158 s> 0)
                                int32_t edx_58 = 0
                                arg3[-6] = 0
                                int32_t i_3
                                
                                do
                                    *(edx_58 + *(arg4 + 0x1588) + 0x88) = *(arg4 + 0x137c)
                                    *(edx_58 + *(arg4 + 0x1588) + 0x8c) = (arg3[-0xa]).b
                                    sub_6a63c0(&arg3[-0x17])
                                    int32_t* ecx_102 = *(arg4 + 0x1588) + 0xe8 + arg3[-6]
                                    arg3[-1] = 0xb
                                    sub_5b17d0(ecx_102, &arg3[-0x17])
                                    arg3[-1] = 0xffffffff
                                    int32_t* edx_59 = arg3[-0x16]
                                    arg3[-0xd] = edx_59
                                    
                                    if (edx_59 != 0)
                                        bool cond:66_1 = edx_59[1] != 1
                                        edx_59[1]
                                        edx_59[1] -= 1
                                        
                                        if (not(cond:66_1))
                                            (*(*edx_59 + 4))()
                                            int32_t* ecx_105 = arg3[-0xd]
                                            bool cond:70_1 = ecx_105[2] != 1
                                            ecx_105[2]
                                            ecx_105[2] -= 1
                                            
                                            if (not(cond:70_1))
                                                (*(*ecx_105 + 8))()
                                    
                                    edx_58 = arg3[-6] + 0x130
                                    i_3 = arg3[-7]
                                    arg3[-7] -= 1
                                    arg3[-6] = edx_58
                                while (i_3 != 1)
            
            void* eax_180 = *(arg4 + 0x12e0)
            int32_t* eax_184
            
            if (eax_180 == 0 || *(eax_180 + 0xa4) == 0)
                int32_t eax_218 = *(arg4 + 0x1ac)
                
                if (eax_218 != 0)
                    if (eax_218 != 1)
                        if (eax_218 == 2 || eax_218 == 8 || eax_218 == 0xb || eax_218 == 0xa
                                || eax_218 == 9 || eax_218 == 0xc)
                            bool cond:5_1 = *(arg4 + 0x1378) != 0xffffffff
                            *(*(arg4 + 0x1580) + 5) = 1
                            
                            if (cond:5_1)
                                var_8 = data_4ebe2c4
                                eax_184 = data_4ebe2c8
                            else
                                var_8 = data_4ebe2bc
                                eax_184 = data_4ebe2c0
                            
                            goto label_5edba9
                        
                        if (eax_218 == 3 || eax_218 == 5 || eax_218 == 4)
                            int32_t eax_221
                            int32_t edx_75
                            edx_75:eax_221 =
                                muls.dp.d(0x6bca1af3, *(arg4 + 0x158c) - *(arg4 + 0x1588))
                            int32_t edx_76 = edx_75 s>> 7
                            int32_t eax_224 = (edx_76 u>> 0x1f) + edx_76
                            bool cond:27_1 = *(arg4 + 0x1378) != 0xffffffff
                            arg3[-7] = eax_224
                            
                            if (cond:27_1)
                                if (eax_224 s> 0)
                                    int32_t edx_79 = 0
                                    arg3[-6] = 0
                                    int32_t i_4
                                    
                                    do
                                        *(edx_79 + *(arg4 + 0x1588) + 5) = 1
                                        var_8 = data_4ebe2c4
                                        int32_t* eax_234 = data_4ebe2c8
                                        
                                        if (eax_234 != 0)
                                            eax_234[1]
                                            eax_234[1] += 1
                                        
                                        operator new(*(arg4 + 0x1588) + edx_79, var_8, eax_234)
                                        var_8 = data_4ebe2ec
                                        void* eax_237 = data_4ebe2f0
                                        void* var_4_22 = eax_237
                                        
                                        if (eax_237 != 0)
                                            *(eax_237 + 4)
                                            *(eax_237 + 4) += 1
                                        
                                        operator new[](*(arg4 + 0x1588) + arg3[-6])
                                        edx_79 = arg3[-6] + 0x130
                                        i_4 = arg3[-7]
                                        arg3[-7] -= 1
                                        arg3[-6] = edx_79
                                    while (i_4 != 1)
                            else if (eax_224 s> 0)
                                int32_t edx_77 = 0
                                arg3[-6] = 0
                                int32_t i_5
                                
                                do
                                    *(edx_77 + *(arg4 + 0x1588) + 5) = 1
                                    var_8 = data_4ebe2bc
                                    int32_t* eax_227 = data_4ebe2c0
                                    
                                    if (eax_227 != 0)
                                        eax_227[1]
                                        eax_227[1] += 1
                                    
                                    operator new(*(arg4 + 0x1588) + edx_77, var_8, eax_227)
                                    var_8 = data_4ebe2ec
                                    void* eax_230 = data_4ebe2f0
                                    void* var_4_20 = eax_230
                                    
                                    if (eax_230 != 0)
                                        *(eax_230 + 4)
                                        *(eax_230 + 4) += 1
                                    
                                    operator new[](*(arg4 + 0x1588) + arg3[-6])
                                    edx_77 = arg3[-6] + 0x130
                                    i_5 = arg3[-7]
                                    arg3[-7] -= 1
                                    arg3[-6] = edx_77
                                while (i_5 != 1)
                    else
                        *(*(arg4 + 0x1580) + 5) = 1
                        var_8 = data_4ebe2ac
                        eax_184 = data_4ebe2b0
                    label_5edba9:
                        
                        if (eax_184 != 0)
                            eax_184[1]
                            eax_184[1] += 1
                        
                        operator new(*(arg4 + 0x1580), var_8, eax_184)
                        var_8 = data_4ebe2ec
                        void* eax_244 = data_4ebe2f0
                        void* var_4_24 = eax_244
                        
                        if (eax_244 != 0)
                            *(eax_244 + 4)
                            *(eax_244 + 4) += 1
                        
                        operator new[](*(arg4 + 0x1580))
            else
                int32_t eax_181 = *(arg4 + 0x1ac)
                
                if (eax_181 != 0)
                    if (eax_181 == 1)
                        *(*(arg4 + 0x1580) + 6) = 1
                        var_8 = data_4ebe2b4
                        eax_184 = data_4ebe2b8
                        goto label_5edba9
                    
                    if (eax_181 == 2 || eax_181 == 8 || eax_181 == 0xb || eax_181 == 0xa
                            || eax_181 == 9 || eax_181 == 0xc)
                        *(*(arg4 + 0x1580) + 6) = 1
                        var_8 = data_4ebe2cc
                        int32_t* eax_201 = data_4ebe2d0
                        
                        if (eax_201 != 0)
                            eax_201[1]
                            eax_201[1] += 1
                        
                        operator new(*(arg4 + 0x1580), var_8, eax_201)
                        var_8 = data_4ebe2ec
                        void* eax_204 = data_4ebe2f0
                        void* var_4_16 = eax_204
                        
                        if (eax_204 != 0)
                            *(eax_204 + 4)
                            *(eax_204 + 4) += 1
                        
                        operator new[](*(arg4 + 0x1580))
                        *(*(arg4 + 0x1580) + 0x90) = *(arg4 + 0x9b0)
                        
                        if (*(arg4 + 0x9b4) != 0)
                            *(*(arg4 + 0x1580) + 0xe) = 1
                            sub_621b10(&arg3[-0xe])
                            arg3[-1] = 0xc
                            int32_t* ecx_130 = arg3[-0xe]
                            
                            if (ecx_130 != 0)
                                int32_t var_4_17 = 0
                                var_8 = &arg3[-0x1b]
                                sub_54d980(ecx_130, var_8, var_4_17)
                                arg3[-1].b = 0xd
                                sub_5b17d0(*(arg4 + 0x1580) + 0xf0, &arg3[-0x1b])
                                arg3[-1].b = 0xc
                                int32_t* edx_71 = arg3[-0x1a]
                                arg3[-0xa] = edx_71
                                
                                if (edx_71 != 0)
                                    bool cond:29_1 = edx_71[1] != 1
                                    edx_71[1]
                                    edx_71[1] -= 1
                                    
                                    if (not(cond:29_1))
                                        (*(*edx_71 + 4))()
                                        int32_t* ecx_135 = arg3[-0xa]
                                        bool cond:35_1 = ecx_135[2] != 1
                                        ecx_135[2]
                                        ecx_135[2] -= 1
                                        
                                        if (not(cond:35_1))
                                            (*(*ecx_135 + 8))()
                            
                            arg3[-1] = 0xffffffff
                            int32_t* edx_73 = arg3[-0xd]
                            
                            if (edx_73 != 0)
                                bool cond:28_1 = edx_73[1] != 1
                                edx_73[1]
                                edx_73[1] -= 1
                                
                                if (not(cond:28_1))
                                    (*(*edx_73 + 4))()
                                    int32_t* ecx_138 = arg3[-0xd]
                                    bool cond:34_1 = ecx_138[2] != 1
                                    ecx_138[2]
                                    ecx_138[2] -= 1
                                    
                                    if (not(cond:34_1))
                                        (*(*ecx_138 + 8))()
                    else if (eax_181 == 3 || eax_181 == 5 || eax_181 == 4)
                        int32_t eax_188
                        int32_t edx_67
                        edx_67:eax_188 = muls.dp.d(0x6bca1af3, *(arg4 + 0x158c) - *(arg4 + 0x1588))
                        int32_t edx_68 = edx_67 s>> 7
                        int32_t eax_191 = (edx_68 u>> 0x1f) + edx_68
                        arg3[-7] = eax_191
                        
                        if (eax_191 s> 0)
                            int32_t edx_69 = 0
                            arg3[-6] = 0
                            int32_t i_6
                            
                            do
                                *(edx_69 + *(arg4 + 0x1588) + 6) = 1
                                var_8 = data_4ebe2cc
                                int32_t* eax_194 = data_4ebe2d0
                                
                                if (eax_194 != 0)
                                    eax_194[1]
                                    eax_194[1] += 1
                                
                                operator new(*(arg4 + 0x1588) + edx_69, var_8, eax_194)
                                var_8 = data_4ebe2ec
                                void* eax_197 = data_4ebe2f0
                                void* var_4_14 = eax_197
                                
                                if (eax_197 != 0)
                                    *(eax_197 + 4)
                                    *(eax_197 + 4) += 1
                                
                                operator new[](*(arg4 + 0x1588) + arg3[-6])
                                edx_69 = arg3[-6] + 0x130
                                i_6 = arg3[-7]
                                arg3[-7] -= 1
                                arg3[-6] = edx_69
                            while (i_6 != 1)
                    else if (eax_181 == 6)
                        *(*(arg4 + 0x1580) + 0xc) = 0
                        *(*(arg4 + 0x1580) + 0x90) = *(arg4 + 0x9b0)
                        
                        if (*(arg4 + 0x9b4) != 0)
                            *(*(arg4 + 0x1580) + 0xe) = 1
            result = *(arg4 + 0x1ac)
            
            if (result != 0)
                int32_t ecx_160
                int32_t edx_85
                
                if (result == 1)
                    void* ecx_158 = *(arg4 + 0x1580)
                    
                    if (*(ecx_158 + 4) != 0)
                        bool cond:8_1 = *(arg4 + 0x1334) == 0
                        float xmm6_2 = *(ecx_158 + 0x10) f- *(ecx_158 + 0x28)
                        float xmm7_2 = *(ecx_158 + 0x14) f- *(ecx_158 + 0x2c)
                        float xmm4_4 = *(ecx_158 + 0x28) ^ (data_b0dbe0).d
                        float xmm5_2 = *(ecx_158 + 0x2c) ^ (data_b0dbe0).d
                        arg3[-0x20] = *(ecx_158 + 0x1c) f- arg3[-0x18]
                        float xmm0_51 = *(ecx_158 + 0x20) f- arg3[-0x14]
                        arg3[-0xa] = xmm4_4
                        arg3[-0xd] = xmm5_2
                        arg3[-0x1a] = xmm6_2
                        arg3[-0x16] = xmm7_2
                        arg3[-0x1e] = xmm0_51
                        
                        if (not(cond:8_1))
                            float xmm0_53 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1338)))
                            void* eax_246 = &arg3[-0x11]
                            arg3[-0x11] = xmm0_53
                            
                            if (xmm0_53 <= xmm4_4)
                                eax_246 = &arg3[-0xa]
                            
                            float xmm0_55 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x133c)))
                            xmm4_4 = *eax_246
                            void* eax_247 = &arg3[-0x11]
                            arg3[-0x11] = xmm0_55
                            
                            if (xmm0_55 <= xmm5_2)
                                eax_247 = &arg3[-0xd]
                            
                            float xmm0_57 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1340)))
                            xmm5_2 = *eax_247
                            void* eax_248 = &arg3[-0x11]
                            arg3[-0x11] = xmm0_57
                            float xmm0_59 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1344)))
                            
                            if (xmm6_2 <= xmm0_57)
                                eax_248 = &arg3[-0x1a]
                            
                            xmm6_2 = *eax_248
                            void* eax_249 = &arg3[-0x11]
                            arg3[-0x11] = xmm0_59
                            
                            if (xmm7_2 <= xmm0_59)
                                eax_249 = &arg3[-0x16]
                            
                            xmm7_2 = *eax_249
                        
                        float xmm3_5 = *(ecx_158 + 0x34)
                        float xmm2_7 = *(ecx_158 + 0x38)
                        int32_t ecx_159 = *(arg4 + 0x12dc)
                        float xmm4_5 = arg3[-0x20]
                        float xmm5_3 = arg3[-0x1e]
                        arg3[-0x25] = int.d(xmm3_5 * xmm4_4 + xmm4_5)
                        edx_85 = int.d(xmm5_3)
                        arg3[-0x24] = int.d(xmm2_7 * xmm5_2 + xmm5_3)
                        arg3[-0x23] = int.d(xmm3_5 * xmm6_2 + xmm4_5)
                        arg3[-0x22] = int.d(xmm2_7 * xmm7_2 + xmm5_3)
                        int128_t xmm0_63 = *(arg3 - 0x94)
                        *(arg4 + 0x15cc) = *(arg4 + 0x12d8)
                        *(arg4 + 0x15a0) = xmm0_63
                        *(arg4 + 0x15d0) = ecx_159
                        float xmm0_65 = *(arg4 + 0x131c) / 3.14159274f
                        bool cond:11_1 = *(arg4 + 0x338) != 0
                        void* edi = *(arg4 + 0x1580)
                        *(arg4 + 0x15c4) = edx_85
                        ecx_160 = int.d(xmm4_5)
                        *(arg4 + 0x15c0) = ecx_160
                        *(arg4 + 0x15c8) = int.d(xmm0_65 * 1800f)
                        result.b = cond:11_1
                        *(arg4 + 0x15d5) = result.b
                        result.b = *(edi + 8)
                        
                        if (result.b == 0)
                            *(arg4 + 0x1594) = ecx_160
                            *(arg4 + 0x1598) = edx_85
                        else
                            int128_t xmm0_67 = *(edi + 0x5c)
                            *(arg4 + 0x15d4) = result.b
                            *(arg4 + 0x15b0) = xmm0_67
                            *(arg4 + 0x1594) = ecx_160
                            *(arg4 + 0x1598) = edx_85
                else if (result == 2 || result == 8 || result == 0xb || result == 0xa || result == 9
                        || result == 0xc)
                    void* ecx_188 = *(arg4 + 0x1580)
                    char ecx_189
                    
                    if (*(ecx_188 + 4) == 0)
                        ecx_189 = (arg3[-8]).b
                        *(arg3 - 0x2d) = 0
                    else
                        int32_t var_4_28 = 0
                        var_8 = &arg3[-0x23]
                        ecx_189 = 1
                        
                        if (*sub_6f12f0(ecx_188, var_8, var_4_28) == 0)
                            *(arg3 - 0x2d) = 0
                        else
                            *(arg3 - 0x2d) = 1
                    
                    if ((ecx_189 & 1) != 0)
                        int32_t* edx_98 = arg3[-0x22]
                        arg3[-8] = edx_98
                        
                        if (edx_98 != 0)
                            bool cond:20_1 = edx_98[1] != 1
                            edx_98[1]
                            edx_98[1] -= 1
                            
                            if (not(cond:20_1))
                                (*(*edx_98 + 4))()
                                int32_t* ecx_192 = arg3[-8]
                                bool cond:23_1 = ecx_192[2] != 1
                                ecx_192[2]
                                ecx_192[2] -= 1
                                
                                if (not(cond:23_1))
                                    (*(*ecx_192 + 8))()
                    
                    if (*(arg3 - 0x2d) != 0)
                        void* ecx_193 = *(arg4 + 0x1580)
                        int32_t var_4_29 = 0
                        var_8 = &arg3[-0x23]
                        arg3[-0x12] = *(ecx_193 + 0x1c) f- arg3[-0x18]
                        arg3[-0x13] = *(ecx_193 + 0x20) f- arg3[-0x14]
                        void* eax_296 = *sub_6f12f0(ecx_193, var_8, var_4_29)
                        float xmm1_36 = *(*(arg4 + 0x1580) + 0x28) ^ (data_b0dbe0).d
                        int32_t edx_100 = *(eax_296 + 0x1c)
                        arg3[-0x29] = *(eax_296 + 0x20)
                        int32_t* edx_101 = arg3[-0x22]
                        arg3[-8] = edx_101
                        float xmm1_37 = xmm1_36 - _mm_cvtepi32_ps(zx.o(edx_100))
                        arg3[-0xd] = xmm1_37
                        arg3[-0x20] = xmm1_37
                        
                        if (edx_101 != 0)
                            bool cond:22_1 = edx_101[1] != 1
                            edx_101[1]
                            edx_101[1] -= 1
                            
                            if (not(cond:22_1))
                                (*(*edx_101 + 4))()
                                int32_t* ecx_197 = arg3[-8]
                                bool cond:26_1 = ecx_197[2] != 1
                                ecx_197[2]
                                ecx_197[2] -= 1
                                
                                if (not(cond:26_1))
                                    (*(*ecx_197 + 8))()
                        
                        int32_t ecx_198 = *(arg4 + 0x1580)
                        int32_t var_4_30 = 0
                        var_8 = &arg3[-0x23]
                        void* ecx_199 = *sub_6f12f0(ecx_198, var_8, var_4_30)
                        float xmm1_39 = *(*(arg4 + 0x1580) + 0x2c) ^ (data_b0dbe0).d
                        int32_t* edx_104 = arg3[-0x22]
                        uint128_t xmm0_106 = zx.o(*(ecx_199 + 0x20))
                        arg3[-0x2a] = *(ecx_199 + 0x1c)
                        arg3[-8] = edx_104
                        float xmm1_40 = xmm1_39 - _mm_cvtepi32_ps(xmm0_106)
                        arg3[-0xa] = xmm1_40
                        arg3[-0x1e] = xmm1_40
                        
                        if (edx_104 != 0)
                            bool cond:25_1 = edx_104[1] != 1
                            edx_104[1]
                            edx_104[1] -= 1
                            
                            if (not(cond:25_1))
                                (*(*edx_104 + 4))()
                                int32_t* ecx_202 = arg3[-8]
                                bool cond:33_1 = ecx_202[2] != 1
                                ecx_202[2]
                                ecx_202[2] -= 1
                                
                                if (not(cond:33_1))
                                    (*(*ecx_202 + 8))()
                        
                        int32_t ecx_203 = *(arg4 + 0x1580)
                        int32_t var_4_31 = 0
                        var_8 = &arg3[-0x2a]
                        int32_t* eax_310 = sub_6f12f0(ecx_203, var_8, var_4_31)
                        int32_t var_4_32 = 0
                        arg3[-1] = 0xe
                        int32_t ecx_204 = *(arg4 + 0x1580)
                        var_8 = &arg3[-0x23]
                        int32_t* eax_312 = sub_6f12f0(ecx_204, var_8, var_4_32)
                        void* ecx_205 = *eax_310
                        void* esi = *(arg4 + 0x1580)
                        int32_t* edi_3 = arg3[-0x22]
                        void* eax_313 = *eax_312
                        int32_t edx_106 = *(ecx_205 + 0x1c)
                        arg3[-0x2b] = *(ecx_205 + 0x20)
                        uint128_t xmm1_41 = zx.o(*(eax_313 + 4))
                        float xmm0_109 = _mm_cvtepi32_ps(zx.o(edx_106))
                        float xmm1_43 = _mm_cvtepi32_ps(xmm1_41) - (xmm0_109 f+ *(esi + 0x28))
                        arg3[-0x16] = xmm1_43
                        arg3[-0x1c] = xmm1_43
                        
                        if (edi_3 != 0)
                            bool cond:32_1 = edi_3[1] != 1
                            edi_3[1]
                            edi_3[1] -= 1
                            
                            if (not(cond:32_1))
                                (*(*edi_3 + 4))()
                                bool cond:38_1 = edi_3[2] != 1
                                edi_3[2]
                                edi_3[2] -= 1
                                
                                if (not(cond:38_1))
                                    (*(*edi_3 + 8))()
                        
                        arg3[-1] = 0xffffffff
                        int32_t* edi_4 = arg3[-0x29]
                        
                        if (edi_4 != 0)
                            bool cond:37_1 = edi_4[1] != 1
                            edi_4[1]
                            edi_4[1] -= 1
                            
                            if (not(cond:37_1))
                                (*(*edi_4 + 4))()
                                bool cond:40_1 = edi_4[2] != 1
                                edi_4[2]
                                edi_4[2] -= 1
                                
                                if (not(cond:40_1))
                                    (*(*edi_4 + 8))()
                        
                        void* esi_1 = arg3[-0x11]
                        int32_t var_4_33 = 0
                        var_8 = &arg3[-0x2a]
                        int32_t* eax_323 = sub_6f12f0(*(esi_1 + 0x1580), var_8, var_4_33)
                        int32_t var_4_34 = 0
                        arg3[-1] = 0xf
                        int32_t ecx_214 = *(esi_1 + 0x1580)
                        var_8 = &arg3[-0x23]
                        int32_t* eax_325 = sub_6f12f0(ecx_214, var_8, var_4_34)
                        void* edx_109 = *eax_323
                        void* esi_2 = *(esi_1 + 0x1580)
                        int32_t* edi_6 = arg3[-0x22]
                        void* eax_326 = *eax_325
                        int32_t ecx_215 = *(edx_109 + 0x1c)
                        float xmm0_112 = _mm_cvtepi32_ps(zx.o(*(edx_109 + 0x20)))
                        arg3[-0x2c] = ecx_215
                        float xmm1_46 =
                            _mm_cvtepi32_ps(zx.o(*(eax_326 + 8))) - (xmm0_112 f+ *(esi_2 + 0x2c))
                        arg3[-0x1a] = xmm1_46
                        arg3[-7] = xmm1_46
                        
                        if (edi_6 != 0)
                            bool cond:39_1 = edi_6[1] != 1
                            edi_6[1]
                            edi_6[1] -= 1
                            
                            if (not(cond:39_1))
                                (*(*edi_6 + 4))()
                                bool cond:47_1 = edi_6[2] != 1
                                edi_6[2]
                                edi_6[2] -= 1
                                
                                if (not(cond:47_1))
                                    (*(*edi_6 + 8))()
                        
                        arg3[-1] = 0xffffffff
                        int32_t* edi_7 = arg3[-0x29]
                        
                        if (edi_7 != 0)
                            bool cond:46_1 = edi_7[1] != 1
                            edi_7[1]
                            edi_7[1] -= 1
                            
                            if (not(cond:46_1))
                                (*(*edi_7 + 4))()
                                int32_t esi_3 = edi_7[2]
                                edi_7[2] -= 1
                                
                                if (esi_3 == 1)
                                    (*(*edi_7 + 8))()
                        
                        arg4 = arg3[-0x11]
                        float xmm6_5 = arg3[-0x16]
                        float xmm5_5 = arg3[-0x1a]
                        float xmm2_16
                        float xmm4_7
                        
                        if (*(arg4 + 0x1334) == 0)
                            xmm4_7 = arg3[-0xa]
                            xmm2_16 = arg3[-0xd]
                        else
                            float xmm0_115 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1338)))
                            void* eax_335 = &arg3[-8]
                            bool cond:53_1 = xmm0_115 f<= arg3[-0xd]
                            arg3[-8] = xmm0_115
                            
                            if (cond:53_1)
                                eax_335 = &arg3[-0x20]
                            
                            float xmm0_117 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x133c)))
                            xmm2_16 = *eax_335
                            void* eax_336 = &arg3[-8]
                            bool cond:54_1 = xmm0_117 f<= arg3[-0xa]
                            arg3[-8] = xmm0_117
                            
                            if (cond:54_1)
                                eax_336 = &arg3[-0x1e]
                            
                            float xmm0_119 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1340)))
                            xmm4_7 = *eax_336
                            void* eax_337 = &arg3[-8]
                            arg3[-8] = xmm0_119
                            float xmm0_121 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1344)))
                            
                            if (xmm6_5 <= xmm0_119)
                                eax_337 = &arg3[-0x1c]
                            
                            xmm6_5 = *eax_337
                            void* eax_338 = &arg3[-8]
                            arg3[-8] = xmm0_121
                            
                            if (xmm5_5 <= xmm0_121)
                                eax_338 = &arg3[-7]
                            
                            xmm5_5 = *eax_338
                        
                        void* eax_339 = *(arg4 + 0x1580)
                        float xmm7_5 = arg3[-0x12]
                        int32_t ecx_226 = *(arg4 + 0x12dc)
                        int32_t edx_111 = int.d(xmm7_5)
                        float xmm3_12 = *(eax_339 + 0x34)
                        arg3[-8] = edx_111
                        float xmm2_17 = *(eax_339 + 0x38)
                        float xmm4_8 = arg3[-0x13]
                        arg3[-0x25] = int.d(xmm3_12 * xmm2_16 + xmm7_5)
                        arg3[-0x24] = int.d(xmm2_17 * xmm4_7 + xmm4_8)
                        arg3[-0x23] = int.d(xmm3_12 * xmm6_5 + xmm7_5)
                        arg3[-0x22] = int.d(xmm2_17 * xmm5_5 + xmm4_8)
                        int128_t xmm0_125 = *(arg3 - 0x94)
                        *(arg4 + 0x15cc) = *(arg4 + 0x12d8)
                        *(arg4 + 0x15a0) = xmm0_125
                        *(arg4 + 0x15d0) = ecx_226
                        float xmm0_127 = *(arg4 + 0x131c) / 3.14159274f
                        bool cond:62_1 = *(arg4 + 0x338) != 0
                        *(arg4 + 0x15c0) = edx_111
                        int32_t eax_345 = int.d(xmm4_8)
                        arg3[-0x11] = eax_345
                        *(arg4 + 0x15c4) = eax_345
                        *(arg4 + 0x15c8) = int.d(xmm0_127 * 1800f)
                        struct _EXCEPTION_REGISTRATION_RECORD** eax_346
                        eax_346.b = cond:62_1
                        bool cond:63_1 = *(arg4 + 0x358) == 0
                        *(arg4 + 0x15d5) = eax_346.b
                        
                        if (not(cond:63_1))
                            sub_6f12f0(*(arg4 + 0x1580), &var_8, 0)
                            Concurrency::_Receive_impl<uint32_t>::_Blocking_recipient::~_Blocking_recipient::~~_Blocking_recipient(
                                arg4 + 0x159c, var_8)
                            edx_111 = arg3[-8]
                        
                        void* ecx_229 = *(arg4 + 0x1580)
                        eax_346.b = *(ecx_229 + 8)
                        
                        if (eax_346.b != 0)
                            int128_t xmm0_129 = *(ecx_229 + 0x5c)
                            *(arg4 + 0x15d4) = eax_346.b
                            *(arg4 + 0x15b0) = xmm0_129
                        
                        result = arg3[-0x11]
                        *(arg4 + 0x1594) = edx_111
                        *(arg4 + 0x1598) = result
                else if (result == 3 || result == 5)
                    float xmm3_8 = arg3[-0x18]
                    float xmm7_4 = *(arg4 + 0x12e4) - xmm3_8
                    float xmm2_10 = arg3[-0x1f]
                    float xmm1_22 = *(arg4 + 0x12e8) f- arg3[-0x14]
                    arg3[-0x1d] = 0
                    float xmm6_3 = xmm2_10
                    float xmm5_4 = xmm2_10
                    float xmm4_6 = xmm2_10
                    int32_t eax_255
                    int32_t edx_86
                    edx_86:eax_255 = muls.dp.d(0x6bca1af3, *(arg4 + 0x158c) - *(arg4 + 0x1588))
                    arg3[-6] = xmm7_4
                    arg3[-0x10] = xmm1_22
                    arg3[-0x1a] = xmm2_10
                    arg3[-7] = xmm6_3
                    arg3[-0xd] = xmm6_3
                    int32_t edx_87 = edx_86 s>> 7
                    arg3[-0x12] = xmm5_4
                    arg3[-0xa] = xmm5_4
                    arg3[-0x13] = xmm4_6
                    arg3[-0x11] = xmm4_6
                    *(arg3 - 0x2d) = 1
                    
                    if ((edx_87 u>> 0x1f) + edx_87 s> 0)
                        int32_t eax_259 = 0
                        arg3[-0xf] = 0
                        
                        while (true)
                            int32_t var_4_25 = 0
                            var_8 = &arg3[-0x2c]
                            int32_t* eax_260 =
                                sub_6f12f0(*(arg4 + 0x1588) + eax_259, var_8, var_4_25)
                            int32_t* edx_88 = arg3[-0x2b]
                            arg3[-0x16] = edx_88
                            *(arg3 - 0x61) = *eax_260 != 0
                            
                            if (edx_88 != 0)
                                bool cond:48_1 = edx_88[1] != 1
                                edx_88[1]
                                edx_88[1] -= 1
                                
                                if (not(cond:48_1))
                                    (*(*edx_88 + 4))()
                                    int32_t* ecx_168 = arg3[-0x16]
                                    bool cond:58_1 = ecx_168[2] != 1
                                    ecx_168[2]
                                    ecx_168[2] -= 1
                                    
                                    if (not(cond:58_1))
                                        (*(*ecx_168 + 8))()
                                    
                                    xmm3_8 = arg3[-0x18]
                                    xmm7_4 = arg3[-6]
                                    xmm1_22 = arg3[-0x10]
                            
                            if (*(arg3 - 0x61) != 0)
                                void* ecx_170 = arg3[-0xf] + *(arg4 + 0x1588)
                                int32_t var_4_26 = 0
                                var_8 = &arg3[-0x2a]
                                arg3[-0x1e] =
                                    *(ecx_170 + 0x1c) f- *(ecx_170 + 0x28) - xmm7_4 - xmm3_8
                                arg3[-0x20] =
                                    *(ecx_170 + 0x20) f- *(ecx_170 + 0x2c) - xmm1_22 f- arg3[-0x14]
                                void** eax_266 = sub_6f12f0(ecx_170, var_8, var_4_26)
                                int32_t edx_90 = arg3[-0xf]
                                int32_t ecx_171 = *(arg4 + 0x1588)
                                float xmm1_24 =
                                    *(edx_90 + ecx_171 + 0x1c) f- *(edx_90 + ecx_171 + 0x28)
                                int32_t xmm0_76[0x4] = zx.o(*(*eax_266 + 0x14))
                                int32_t* edx_91 = arg3[-0x29]
                                arg3[-0x1c] = edx_91
                                arg3[-0x16] = xmm1_24 + _mm_cvtepi32_ps(xmm0_76) - xmm7_4 - xmm3_8
                                
                                if (edx_91 != 0)
                                    bool cond:64_1 = edx_91[1] != 1
                                    edx_91[1]
                                    edx_91[1] -= 1
                                    
                                    if (not(cond:64_1))
                                        (*(*edx_91 + 4))()
                                        int32_t* ecx_174 = arg3[-0x1c]
                                        bool cond:69_1 = ecx_174[2] != 1
                                        ecx_174[2]
                                        ecx_174[2] -= 1
                                        
                                        if (not(cond:69_1))
                                            (*(*ecx_174 + 8))()
                                
                                int32_t ecx_176 = *(arg4 + 0x1588) + arg3[-0xf]
                                int32_t var_4_27 = 0
                                var_8 = &arg3[-0x23]
                                int32_t* eax_273 = sub_6f12f0(ecx_176, var_8, var_4_27)
                                int32_t edx_93 = arg3[-0xf]
                                int32_t ecx_177 = *(arg4 + 0x1588)
                                float xmm1_29 =
                                    *(edx_93 + ecx_177 + 0x20) f- *(edx_93 + ecx_177 + 0x2c)
                                int32_t xmm0_78[0x4] = zx.o((*eax_273)[6])
                                int32_t* edx_94 = arg3[-0x22]
                                arg3[-8] = edx_94
                                float xmm1_31 = xmm1_29 + _mm_cvtepi32_ps(xmm0_78) f- arg3[-0x10]
                                arg3[-0x1c] = xmm1_31
                                
                                if (edx_94 != 0)
                                    bool cond:68_1 = edx_94[1] != 1
                                    edx_94[1]
                                    edx_94[1] -= 1
                                    
                                    if (not(cond:68_1))
                                        (*(*edx_94 + 4))()
                                        int32_t* ecx_180 = arg3[-8]
                                        bool cond:71_1 = ecx_180[2] != 1
                                        ecx_180[2]
                                        ecx_180[2] -= 1
                                        
                                        if (not(cond:71_1))
                                            (*(*ecx_180 + 8))()
                                        
                                        xmm1_31 = arg3[-0x1c]
                                
                                int32_t* eax_274
                                eax_274.b = *(arg3 - 0x2d)
                                int32_t xmm0_80 = arg3[-0x1e]
                                
                                if (eax_274.b != 0 || not(arg3[-0x1f] f< xmm0_80))
                                    arg3[-0x1f] = xmm0_80
                                    arg3[-0x1a] = xmm0_80
                                
                                int32_t xmm0_81
                                int32_t xmm0_82
                                
                                if ((eax_274.b != 0 || not(arg3[-0x1f] f< xmm0_80))
                                        && eax_274.b != 0)
                                    xmm0_81 = arg3[-0x20]
                                label_5ee0aa:
                                    arg3[-7] = xmm0_81
                                    arg3[-0xd] = xmm0_81
                                    
                                    if (eax_274.b == 0)
                                        goto label_5ee0b8
                                    
                                    xmm0_82 = arg3[-0x16]
                                label_5ee0ca:
                                    arg3[-0x12] = xmm0_82
                                    arg3[-0xa] = xmm0_82
                                    
                                    if (eax_274.b != 0 || not(xmm1_31 f< arg3[-0x13]))
                                        arg3[-0x13] = xmm1_31
                                        arg3[-0x11] = xmm1_31
                                else
                                    xmm0_81 = arg3[-0x20]
                                    
                                    if (not(arg3[-7] f< xmm0_81))
                                        goto label_5ee0aa
                                    
                                label_5ee0b8:
                                    xmm0_82 = arg3[-0x16]
                                    
                                    if (not(xmm0_82 f< arg3[-0x12]))
                                        goto label_5ee0ca
                                    
                                    if (not(xmm1_31 f< arg3[-0x13]))
                                        arg3[-0x13] = xmm1_31
                                        arg3[-0x11] = xmm1_31
                                *(arg3 - 0x2d) = 0
                            
                            int32_t ecx_182 = *(arg4 + 0x158c) - *(arg4 + 0x1588)
                            arg3[-0x1d] += 1
                            arg3[-0xf] += 0x130
                            xmm7_4 = arg3[-6]
                            xmm3_8 = arg3[-0x18]
                            eax_259 = arg3[-0xf]
                            
                            if (arg3[-0x1d] s>= ecx_182 s/ 0x130)
                                break
                            
                            xmm1_22 = arg3[-0x10]
                        
                        xmm4_6 = arg3[-0x13]
                        xmm5_4 = arg3[-0x12]
                        xmm6_3 = arg3[-7]
                        xmm2_10 = arg3[-0x1f]
                    
                    if (*(arg4 + 0x1334) != 0)
                        float xmm0_85 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1338)))
                        void* eax_281 = &arg3[-8]
                        arg3[-8] = xmm0_85
                        
                        if (xmm0_85 <= xmm2_10)
                            eax_281 = &arg3[-0x1a]
                        
                        float xmm0_87 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x133c)))
                        xmm2_10 = *eax_281
                        void* eax_282 = &arg3[-8]
                        arg3[-8] = xmm0_87
                        
                        if (xmm0_87 <= xmm6_3)
                            eax_282 = &arg3[-0xd]
                        
                        float xmm0_89 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1340)))
                        xmm6_3 = *eax_282
                        void* eax_283 = &arg3[-8]
                        arg3[-8] = xmm0_89
                        float xmm0_91 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1344)))
                        
                        if (xmm5_4 <= xmm0_89)
                            eax_283 = &arg3[-0xa]
                        
                        xmm5_4 = *eax_283
                        void* eax_284 = &arg3[-8]
                        arg3[-8] = xmm0_91
                        
                        if (xmm4_6 <= xmm0_91)
                            eax_284 = &arg3[-0x11]
                        
                        xmm4_6 = *eax_284
                    
                    void* eax_285 = *(arg4 + 0x1580)
                    int32_t ecx_187 = *(arg4 + 0x12dc)
                    float xmm3_9 = *(eax_285 + 0x34)
                    float xmm2_13 = *(eax_285 + 0x38)
                    float xmm6_4 = arg3[-0x10]
                    edx_85 = int.d(xmm6_4)
                    arg3[-0x25] = int.d(xmm3_9 * xmm2_10 + xmm7_4)
                    arg3[-0x24] = int.d(xmm2_13 * xmm6_3 + xmm6_4)
                    arg3[-0x23] = int.d(xmm3_9 * xmm5_4 + xmm7_4)
                    arg3[-0x22] = int.d(xmm2_13 * xmm4_6 + xmm6_4)
                    int128_t xmm0_95 = *(arg3 - 0x94)
                    *(arg4 + 0x15cc) = *(arg4 + 0x12d8)
                    *(arg4 + 0x15a0) = xmm0_95
                    *(arg4 + 0x15d0) = ecx_187
                    float xmm0_97 = *(arg4 + 0x131c) / 3.14159274f
                    bool cond:41_1 = *(arg4 + 0x338) != 0
                    void* edi_1 = *(arg4 + 0x1580)
                    *(arg4 + 0x15c4) = edx_85
                    ecx_160 = int.d(xmm7_4)
                    *(arg4 + 0x15c0) = ecx_160
                    *(arg4 + 0x15c8) = int.d(xmm0_97 * 1800f)
                    result.b = cond:41_1
                    *(arg4 + 0x15d5) = result.b
                    result.b = *(edi_1 + 8)
                    
                    if (result.b != 0)
                        int128_t xmm0_99 = *(edi_1 + 0x5c)
                        *(arg4 + 0x15d4) = result.b
                        *(arg4 + 0x15b0) = xmm0_99
                    
                    *(arg4 + 0x1594) = ecx_160
                    *(arg4 + 0x1598) = edx_85
            
            if (*(arg4 + 0x1ac) == 9)
                void* ecx_230 = *(arg4 + 0x1580)
                
                if (*(ecx_230 + 0x7c) == 0xff && (*(ecx_230 + 0xb) != 0 || *(ecx_230 + 0xc) != 0))
                    result = *(arg4 + 0x15e0)
                    
                    if (result != 0)
                        void* eax_347 = *result
                        int32_t xmm1_50 = (*(eax_347 + 0xc4)).d
                        int64_t xmm0_130 = *(eax_347 + 0xd4)
                        arg3[-0x22] = *(eax_347 + 0xdc)
                        *(arg3 - 0x90) = xmm0_130
                        
                        if (xmm1_50 == 0)
                            *(ecx_230 + 0xb) = xmm1_50.b
                            *(*(arg4 + 0x1580) + 0xc) = 0

result.b = 1
TEB* fsbase
fsbase->NtTib.ExceptionList = arg3[-3]
sub_745f2b(arg3[-5] ^ arg3)
*arg3
return result
