// 函数: sub_5ec75d
// 地址: 0x5ec75d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *(arg4 + 0x2a8)
int32_t ecx_3

if (eax_1 u> 3)
    ecx_3.b = false
else
    int32_t eax
    eax.b = *(*(arg4 + 0x2a8) + data_bac498 + 0x18 + (eax_1 << 1) + 0xc)
    ecx_3.b = eax.b != 0

if (ecx_3 != *(arg4 + 0x340))
    *arg5 = 0

char* ecx_4 = *(arg4 + 0xa8)

if (ecx_4 s>= 0 && ecx_4 s< *(data_bac510 + 0x2077c) && ecx_4 s< *(arg2 + 0x174) - *(arg2 + 0x170)
        && ecx_4[*(arg2 + 0x170)] == 0)
    *arg5 = 0

if (*(arg4 + 0xa3) != 0)
    void* eax_6
    eax_6.b = *(data_bac498 + 2)
    void* eax_7
    
    if (eax_6.b == 0)
        eax_7.b = *(data_bac484 + 0x138)
    
    if (eax_6.b != 0 || eax_7.b != 0 || *(data_bac458 + 0x37f) != 0)
        *arg5 = 0

int32_t edx_2

if (*arg5 == 0)
    int32_t ecx_6 = *(arg4 + 0x1438) - *(arg4 + 0x1434)
    int32_t eax_9
    int32_t edx
    edx:eax_9 = muls.dp.d(0xba506bb7, ecx_6)
    edx_2 = (edx + ecx_6) s>> 0xc

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
        void* eax_17 = arg3[-0xf]
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
        
        if (eax_17 == 0)
        label_5eca13:
            int32_t eax_19 = sub_5f3680(arg4)
            xmm1_3 = arg3[-0x1f]
            arg3[-0xf] = eax_19
        else
            int32_t eax_18 = *(eax_17 + 0xbc)
            
            if (eax_18 != 3)
                if (eax_18 != 4)
                    goto label_5eca13
                
                arg3[-0xf] = eax_18
            else
                arg3[-0xf] = eax_18
        
        int32_t eax_20 = *(arg4 + 0x2ac)
        float xmm3_3 = xmm1_3
        arg3[-0x18] = xmm3_3
        int32_t xmm4_1 = xmm1_3
        arg3[-0x14] = xmm4_1
        
        if (eax_20 s>= 0)
            int32_t* eax_21 = data_bac4c4
            int32_t eax_22
            int32_t edx_7
            edx_7:eax_22 = muls.dp.d(0x66666667, eax_21[1] - *eax_21)
            int32_t ecx_16 = *(arg4 + 0x2ac)
            int32_t edx_8 = edx_7 s>> 5
            
            if ((edx_8 u>> 0x1f) + edx_8 s> ecx_16)
                int32_t eax_28 = ecx_16 * 0x50 + *data_bac4c4
                int32_t ecx_18 = arg3[-0xf]
                
                if (ecx_18 u<= 4)
                    int32_t ecx_19 = ecx_18 << 4
                    int32_t* ecx_20 = ecx_19 + eax_28
                    arg3[-0xf] = ecx_20
                    
                    if (ecx_19 != neg.d(eax_28))
                        int32_t xmm3_4[0x4] = zx.o(ecx_20[1])
                        uint128_t xmm4_2 = zx.o(ecx_20[2])
                        *(arg4 + 0x12d4) += *ecx_20
                        float xmm0_8 = _mm_cvtepi32_ps(zx.o(ecx_20[1]))
                        xmm3_3 = _mm_cvtepi32_ps(xmm3_4)
                        float xmm0_9 = xmm0_8 f+ *(arg4 + 0x12e4)
                        xmm4_1 = _mm_cvtepi32_ps(xmm4_2)
                        *(arg4 + 0x12e4) = xmm0_9
                        float xmm0_11 = _mm_cvtepi32_ps(zx.o(ecx_20[2]))
                        arg3[-0x18] = xmm3_3
                        float xmm0_12 = xmm0_11 f+ *(arg4 + 0x12e8)
                        arg3[-0x14] = xmm4_1
                        *(arg4 + 0x12e8) = xmm0_12
                        int32_t ecx_22 = zx.d(ecx_20[3].b) * *(arg4 + 0x1348)
                        int32_t eax_33 = ecx_22 s/ 0xff
                        
                        if (ecx_22 s/ 0xff s< 0)
                            eax_33 = 0
                        else if (eax_33 s> 0xff)
                            eax_33 = 0xff
                        
                        *(arg4 + 0x1348) = eax_33
                        void* eax_34 = arg3[-0xf]
                        uint32_t ecx_23 = zx.d(*(eax_34 + 0xd))
                        int32_t ecx_24 = ecx_23 + *(arg4 + 0x1354)
                        
                        if (ecx_23 + *(arg4 + 0x1354) s< 0)
                            ecx_24 = 0
                        else if (ecx_24 s> 0xff)
                            ecx_24 = 0xff
                        
                        *(arg4 + 0x1354) = ecx_24
                        uint32_t eax_35 = zx.d(*(eax_34 + 0xe))
                        int32_t eax_36 = eax_35 + *(arg4 + 0x1358)
                        
                        if (eax_35 + *(arg4 + 0x1358) s< 0)
                            eax_36 = 0
                        else if (eax_36 s> 0xff)
                            eax_36 = 0xff
                        
                        *(arg4 + 0x1358) = eax_36
        
        result = *(arg4 + 0x12e0)
        
        if (result != 0 && *(result + 0xa4) == 0)
            float xmm2_3 = *(arg4 + 0x12ec)
            int32_t ecx_25 = *(result + 0xec)
            float xmm0_14 = _mm_cvtepi32_ps(zx.o(*(result + 0x118)))
            arg3[-0xa] = ecx_25
            float xmm2_4[0x2] = xmm2_3 - xmm0_14
            
            if (xmm2_4 f<= xmm1_3)
                *arg5 = 0
            else
                double xmm0_15 = _mm_cvtps_pd(xmm2_4)
                void* ecx_26 = data_bac4a0
                double xmm2_6 = 1000.0 / xmm0_15
                int32_t eax_38
                int32_t edx_12
                edx_12:eax_38 = sx.q(*(ecx_26 + 8))
                float xmm1_5[0x2] = *(arg4 + 0x12e4) - _mm_cvtepi32_ps(zx.o(*(result + 0xc0)))
                double xmm0_19 = _mm_cvtepi32_pd(zx.q((eax_38 - edx_12) s>> 1))
                int32_t xmm0_20 = _mm_cvtpd_ps(_mm_cvtps_pd(xmm1_5) * xmm2_6 + xmm0_19)
                float xmm1_9 = *(arg4 + 0x12e8)
                *(arg4 + 0x12e4) = xmm0_20
                int32_t eax_42
                int32_t edx_13
                edx_13:eax_42 = sx.q(*(ecx_26 + 0xc))
                float xmm1_10[0x2] = xmm1_9 - _mm_cvtepi32_ps(zx.o(arg3[-0xa]))
                double xmm0_24 = _mm_cvtepi32_pd(zx.q((eax_42 - edx_13) s>> 1))
                *(arg4 + 0x12e8) = _mm_cvtpd_ps(_mm_cvtps_pd(xmm1_10) * xmm2_6 + xmm0_24)
                *(arg4 + 0x1308) = _mm_cvtpd_ps(_mm_cvtps_pd(*(arg4 + 0x1308)) * xmm2_6)
                *(arg4 + 0x130c) = _mm_cvtpd_ps(_mm_cvtps_pd(*(arg4 + 0x130c)) * xmm2_6)
                arg3[-0x18] = _mm_cvtpd_ps(fconvert.d(xmm3_3) * xmm2_6)
                arg3[-0x14] = _mm_cvtpd_ps(fconvert.d(xmm4_1) * xmm2_6)
        
        if (*arg5 != 0 && *(arg4 + 0x1348) != 0)
            int32_t eax_44 = *(arg4 + 0x1ac)
            
            if (eax_44 != 0)
                if (eax_44 == 1 || eax_44 == 2 || eax_44 == 8 || eax_44 == 0xb || eax_44 == 0xa
                        || eax_44 == 9 || eax_44 == 0xc)
                    **(arg4 + 0x1580) = 2
                else if (eax_44 == 3 || eax_44 == 5 || eax_44 == 4)
                    int32_t eax_47
                    int32_t edx_14
                    edx_14:eax_47 = muls.dp.d(0x6bca1af3, *(arg4 + 0x158c) - *(arg4 + 0x1588))
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
                else if (eax_44 == 6)
                    **(arg4 + 0x1580) = 3
                    sub_54d950(&var_8, arg4 + 0x1570)
                    _com_util::ConvertBSTRToString(*(arg4 + 0x1580), var_8, var_4)
            
            int32_t* ecx_51
            int32_t* edx_25
            void* edx_26
            
            switch (*(arg4 + 0x1ac))
                case 0
                    int32_t ecx_35 = *(arg4 + 0x1438) - *(arg4 + 0x1434)
                    int32_t eax_50
                    int32_t edx_17
                    edx_17:eax_50 = muls.dp.d(0xba506bb7, ecx_35)
                    int32_t edx_19 = (edx_17 + ecx_35) s>> 0xc
                    
                    if (edx_19 u>> 0x1f != neg.d(edx_19))
                        edx_26 = *(arg4 + 0x1580)
                        sub_628eb0(edx_26 + 4, edx_26 + 0x120, arg4 + 0x12d0, edx_26 + 4)
                case 1
                    void* edx_20 = *(arg4 + 0x1580)
                    sub_628eb0(edx_20 + 4, edx_20 + 0x120, arg4 + 0x12d0, edx_20 + 4)
                    void* eax_55 = *(arg4 + 0x1580)
                    float xmm0_41 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1bc)))
                    *(eax_55 + 0x28) = *(eax_55 + 0x28) - xmm0_41
                    void* eax_56 = *(arg4 + 0x1580)
                    float xmm0_43 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1c0)))
                    *(eax_56 + 0x2c) = *(eax_56 + 0x2c) - xmm0_43
                    *(*(arg4 + 0x1580) + 0x10) =
                        _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1c4) - *(arg4 + 0x1bc)))
                    *(*(arg4 + 0x1580) + 0x14) =
                        _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1c8) - *(arg4 + 0x1c0)))
                    *(*(arg4 + 0x1580) + 0xa0) = *(arg4 + 0x1cc)
                case 2
                    void* edx_22 = *(arg4 + 0x1580)
                    sub_628eb0(edx_22 + 4, edx_22 + 0x120, arg4 + 0x12d0, edx_22 + 4)
                    int32_t* ecx_41 = *(arg4 + 0x1568)
                    
                    if (ecx_41 != 0 && ((ecx_41[1] - *ecx_41) & 0xfffffff8) s> 0)
                        int32_t edx_24 = *(arg4 + 0x12d4)
                        
                        if (edx_24 s>= 0 && edx_24 s< (ecx_41[1] - *ecx_41) s>> 3)
                            var_8 = &arg3[-0x21]
                            sub_54d980(ecx_41, var_8, edx_24)
                            void* ecx_42 = *(arg4 + 0x1580)
                            arg3[-1] = 4
                            sub_5b17d0(ecx_42 + 0xd8, &arg3[-0x21])
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
                                    ecx_51 = arg3[-0xa]
                                label_5ed10b:
                                    bool cond:19_1 = ecx_51[2] != 1
                                    ecx_51[2]
                                    ecx_51[2] -= 1
                                    
                                    if (not(cond:19_1))
                                        (*(*ecx_51 + 8))()
                                    
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
                    int32_t* ecx_57 = *(arg4 + 0x1568)
                    
                    if (ecx_57 != 0 && ((ecx_57[1] - *ecx_57) & 0xfffffff8) s> 0)
                        int32_t var_4_9 = 0
                        var_8 = &arg3[-0x1b]
                        sub_54d980(ecx_57, var_8, var_4_9)
                        void* eax_82 = *(arg4 + 0x1580)
                        arg3[-0xa] = eax_82
                        arg3[-1] = 5
                        void* ecx_58 = arg3[-0x1a]
                        int32_t edx_33 = arg3[-0x1b]
                        arg3[-0xd] = ecx_58
                        
                        if (ecx_58 != 0)
                            *(ecx_58 + 4) += 1
                            eax_82 = arg3[-0xa]
                            ecx_58 = arg3[-0xd]
                        
                        *(eax_82 + 0xd8) = edx_33
                        int32_t* edx_34 = *(eax_82 + 0xdc)
                        arg3[-0xa] = edx_34
                        *(eax_82 + 0xdc) = ecx_58
                        
                        if (edx_34 != 0)
                            bool cond:6_1 = edx_34[1] != 1
                            edx_34[1]
                            edx_34[1] -= 1
                            
                            if (not(cond:6_1))
                                (*(*edx_34 + 4))()
                                int32_t* ecx_61 = arg3[-0xa]
                                bool cond:9_1 = ecx_61[2] != 1
                                ecx_61[2]
                                ecx_61[2] -= 1
                                
                                if (not(cond:9_1))
                                    (*(*ecx_61 + 8))()
                        
                        arg3[-1] = 0xffffffff
                        edx_25 = arg3[-0x1a]
                        goto label_5ed0ea
                case 9
                    sub_5f43b0(arg4)
                case 0xc
                    void* edx_28 = *(arg4 + 0x1580)
                    sub_628eb0(edx_28 + 4, edx_28 + 0x120, arg4 + 0x12d0, edx_28 + 4)
                    arg3[-0xb] = *(arg4 + 0x15ec)
                    void* eax_73 = *(arg4 + 0x15f0)
                    arg3[-7] = eax_73
                    arg3[-0xa] = eax_73
                    
                    if (eax_73 != 0)
                        *(eax_73 + 4)
                        *(eax_73 + 4) += 1
                    
                    void* ecx_47 = *(arg4 + 0x1580)
                    arg3[-1] = 6
                    sub_5b17d0(ecx_47 + 0xd8, &arg3[-0xb])
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
                            ecx_51 = arg3[-7]
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
                    void* eax_93 = data_bac470
                    arg3[-7] = 0
                    arg3[-0x12] = 0
                    int32_t ecx_67 = *(arg4 + 0x1378)
                    int32_t ecx_69
                    int32_t edx_41
                    
                    if (ecx_67 s< 0 || ecx_67 s>= (*(eax_93 + 0xa8) - *(eax_93 + 0xa4)) s/ 0x118)
                        ecx_69 = 0
                        edx_41 = 0
                    else
                        void* eax_99 = ecx_67 * 0x118 + *(data_bac470 + 0xa4)
                        ecx_69 = *(eax_99 + 0xd0)
                        edx_41 = *(eax_99 + 0xfc)
                        arg3[-7] = ecx_69
                        arg3[-0x12] = edx_41
                    
                    int32_t eax_100 = *(arg4 + 0x1ac)
                    
                    if (eax_100 == 0)
                        edx_44 = arg3[-0xd]
                    else if (eax_100 == 1 || eax_100 == 2 || eax_100 == 8 || eax_100 == 0xb
                            || eax_100 == 9 || eax_100 == 0xc)
                        *(*(arg4 + 0x1580) + 0xd) = 1
                        *(*(arg4 + 0x1580) + 0x94) = ecx_69
                        *(*(arg4 + 0x1580) + 0x98) = edx_41
                        edx_44 = arg3[-0xd]
                        arg3[-0x17] = arg3[-0xe]
                        arg3[-0x16] = edx_44
                        
                        if (edx_44 != 0)
                            edx_44[1]
                            edx_44[1] += 1
                        
                        void* ecx_85 = *(arg4 + 0x1580)
                        arg3[-0xa] = ecx_85
                        arg3[-1].b = 8
                        
                        if (edx_44 != 0)
                            edx_44[1] += 1
                            ecx_85 = arg3[-0xa]
                        
                        *(ecx_85 + 0xe0) = arg3[-0xe]
                        void* eax_129 = *(ecx_85 + 0xe4)
                        arg3[-7] = eax_129
                        *(ecx_85 + 0xe4) = edx_44
                        
                        if (eax_129 != 0)
                            bool cond:16_1 = *(eax_129 + 4) != 1
                            *(eax_129 + 4)
                            *(eax_129 + 4) -= 1
                            
                            if (not(cond:16_1))
                                (*(*arg3[-7] + 4))()
                                int32_t* ecx_88 = arg3[-7]
                                bool cond:18_1 = ecx_88[2] != 1
                                ecx_88[2]
                                ecx_88[2] -= 1
                                
                                if (not(cond:18_1))
                                    (*(*ecx_88 + 8))()
                                
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
                    else if (eax_100 == 3 || eax_100 == 5 || eax_100 == 4)
                        int32_t eax_101
                        int32_t edx_42
                        edx_42:eax_101 = muls.dp.d(0x6bca1af3, *(arg4 + 0x158c) - *(arg4 + 0x1588))
                        int32_t edx_43 = edx_42 s>> 7
                        int32_t eax_104 = (edx_43 u>> 0x1f) + edx_43
                        edx_44 = arg3[-0xd]
                        arg3[-0x10] = eax_104
                        
                        if (eax_104 s> 0)
                            int32_t ecx_72 = 0
                            arg3[-0xb] = arg3[-0xe]
                            arg3[-0xa] = edx_44
                            arg3[-6] = 0
                            int32_t i_2
                            
                            do
                                int32_t edx_45 = arg3[-7]
                                *(ecx_72 + *(arg4 + 0x1588) + 0xd) = 1
                                *(ecx_72 + *(arg4 + 0x1588) + 0x94) = edx_45
                                *(ecx_72 + *(arg4 + 0x1588) + 0x98) = arg3[-0x12]
                                int32_t* edx_47 = arg3[-0xd]
                                
                                if (edx_47 != 0)
                                    edx_47[1] += 1
                                    ecx_72 = arg3[-6]
                                
                                void* eax_111 = *(arg4 + 0x1588) + ecx_72
                                arg3[-0x13] = eax_111
                                arg3[-1].b = 9
                                
                                if (edx_47 != 0)
                                    edx_47[1]
                                    edx_47[1] += 1
                                    eax_111 = arg3[-0x13]
                                
                                *(eax_111 + 0xe0) = arg3[-0xe]
                                void* ecx_75 = arg3[-0x13]
                                void* eax_113 = *(eax_111 + 0xe4)
                                arg3[-0x1d] = eax_113
                                *(ecx_75 + 0xe4) = edx_47
                                
                                if (eax_113 != 0)
                                    bool cond:52_1 = *(eax_113 + 4) != 1
                                    *(eax_113 + 4)
                                    *(eax_113 + 4) -= 1
                                    
                                    if (not(cond:52_1))
                                        (*(*arg3[-0x1d] + 4))()
                                        int32_t* ecx_78 = arg3[-0x1d]
                                        bool cond:61_1 = ecx_78[2] != 1
                                        ecx_78[2]
                                        ecx_78[2] -= 1
                                        
                                        if (not(cond:61_1))
                                            (*(*ecx_78 + 8))()
                                        
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
                                
                                ecx_72 = arg3[-6] + 0x130
                                i_2 = arg3[-0x10]
                                arg3[-0x10] -= 1
                                arg3[-6] = ecx_72
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
                        int32_t* ecx_95 = arg3[-0xd]
                        bool cond:4_1 = ecx_95[2] != 1
                        ecx_95[2]
                        ecx_95[2] -= 1
                        
                        if (not(cond:4_1))
                            (*(*ecx_95 + 8))()
            
            int32_t ecx_96 = *(arg4 + 0x137c)
            arg3[-0xd] = ecx_96
            
            if (ecx_96 != 0xffffffff)
                int32_t* edx_52
                
                if (ecx_96 s>= 0)
                    edx_52 = data_bac488
                
                if (ecx_96 s< 0 || ecx_96 s>= (edx_52[1] - *edx_52) s>> 3
                        || *(*edx_52 + (ecx_96 << 3) + 4) == 0)
                    *(arg4 + 0x137c) = 0xffffffff
                else
                    int32_t eax_150
                    
                    if (ecx_96 s< 0 || (edx_52[1] - *edx_52) s>> 3 s<= ecx_96)
                        eax_150 = 0
                    else
                        eax_150 = *(*edx_52 + (ecx_96 << 3))
                    
                    if (eax_150 s< 0xffffff9c)
                        eax_150 = 0xffffff9c
                    else if (eax_150 s> 0)
                        eax_150 = 0
                    
                    int32_t eax_156 = *(arg4 + 0x1ac)
                    arg3[-0xa] = 0xff - (eax_150 + 0x64) * 0xff s/ 0x64
                    
                    if (eax_156 != 0)
                        if (eax_156 == 1 || eax_156 == 2 || eax_156 == 8 || eax_156 == 0xb
                                || eax_156 == 0xa || eax_156 == 9 || eax_156 == 0xc)
                            *(*(arg4 + 0x1580) + 0x88) = arg3[-0xd]
                            *(*(arg4 + 0x1580) + 0x8c) = (0xff - (eax_150 + 0x64) * 0xff s/ 0x64).b
                            sub_6a63c0(&arg3[-0x17])
                            void* eax_172 = *(arg4 + 0x1580)
                            arg3[-0xa] = eax_172
                            arg3[-1] = 0xa
                            void* ecx_109 = arg3[-0x16]
                            int32_t edx_62 = arg3[-0x17]
                            arg3[-0xd] = ecx_109
                            
                            if (ecx_109 != 0)
                                *(ecx_109 + 4) += 1
                                eax_172 = arg3[-0xa]
                                ecx_109 = arg3[-0xd]
                            
                            *(eax_172 + 0xe8) = edx_62
                            int32_t* edx_63 = *(eax_172 + 0xec)
                            arg3[-0xa] = edx_63
                            *(eax_172 + 0xec) = ecx_109
                            
                            if (edx_63 != 0)
                                bool cond:24_1 = edx_63[1] != 1
                                edx_63[1]
                                edx_63[1] -= 1
                                
                                if (not(cond:24_1))
                                    (*(*edx_63 + 4))()
                                    int32_t* ecx_112 = arg3[-0xa]
                                    bool cond:31_1 = ecx_112[2] != 1
                                    ecx_112[2]
                                    ecx_112[2] -= 1
                                    
                                    if (not(cond:31_1))
                                        (*(*ecx_112 + 8))()
                            
                            arg3[-1] = 0xffffffff
                            int32_t* edx_65 = arg3[-0x16]
                            arg3[-0xa] = edx_65
                            
                            if (edx_65 != 0)
                                bool cond:30_1 = edx_65[1] != 1
                                edx_65[1]
                                edx_65[1] -= 1
                                
                                if (not(cond:30_1))
                                    (*(*edx_65 + 4))()
                                    int32_t* ecx_115 = arg3[-0xa]
                                    bool cond:36_1 = ecx_115[2] != 1
                                    ecx_115[2]
                                    ecx_115[2] -= 1
                                    
                                    if (not(cond:36_1))
                                        (*(*ecx_115 + 8))()
                        else if (eax_156 == 3 || eax_156 == 5 || eax_156 == 4)
                            int32_t eax_157
                            int32_t edx_56
                            edx_56:eax_157 =
                                muls.dp.d(0x6bca1af3, *(arg4 + 0x158c) - *(arg4 + 0x1588))
                            int32_t edx_57 = edx_56 s>> 7
                            int32_t eax_160 = (edx_57 u>> 0x1f) + edx_57
                            arg3[-7] = eax_160
                            
                            if (eax_160 s> 0)
                                int32_t edx_58 = 0
                                arg3[-6] = 0
                                int32_t i_3
                                
                                do
                                    *(edx_58 + *(arg4 + 0x1588) + 0x88) = *(arg4 + 0x137c)
                                    *(edx_58 + *(arg4 + 0x1588) + 0x8c) = (arg3[-0xa]).b
                                    sub_6a63c0(&arg3[-0x17])
                                    int32_t* ecx_104 = *(arg4 + 0x1588) + 0xe8 + arg3[-6]
                                    arg3[-1] = 0xb
                                    sub_5b17d0(ecx_104, &arg3[-0x17])
                                    arg3[-1] = 0xffffffff
                                    int32_t* edx_59 = arg3[-0x16]
                                    arg3[-0xd] = edx_59
                                    
                                    if (edx_59 != 0)
                                        bool cond:66_1 = edx_59[1] != 1
                                        edx_59[1]
                                        edx_59[1] -= 1
                                        
                                        if (not(cond:66_1))
                                            (*(*edx_59 + 4))()
                                            int32_t* ecx_107 = arg3[-0xd]
                                            bool cond:70_1 = ecx_107[2] != 1
                                            ecx_107[2]
                                            ecx_107[2] -= 1
                                            
                                            if (not(cond:70_1))
                                                (*(*ecx_107 + 8))()
                                    
                                    edx_58 = arg3[-6] + 0x130
                                    i_3 = arg3[-7]
                                    arg3[-7] -= 1
                                    arg3[-6] = edx_58
                                while (i_3 != 1)
            
            void* eax_182 = *(arg4 + 0x12e0)
            int32_t* eax_186
            
            if (eax_182 == 0 || *(eax_182 + 0xa4) == 0)
                int32_t eax_220 = *(arg4 + 0x1ac)
                
                if (eax_220 != 0)
                    if (eax_220 != 1)
                        if (eax_220 == 2 || eax_220 == 8 || eax_220 == 0xb || eax_220 == 0xa
                                || eax_220 == 9 || eax_220 == 0xc)
                            bool cond:5_1 = *(arg4 + 0x1378) != 0xffffffff
                            *(*(arg4 + 0x1580) + 5) = 1
                            
                            if (cond:5_1)
                                var_8 = data_4ebe2c4
                                eax_186 = data_4ebe2c8
                            else
                                var_8 = data_4ebe2bc
                                eax_186 = data_4ebe2c0
                            
                            goto label_5edba9
                        
                        if (eax_220 == 3 || eax_220 == 5 || eax_220 == 4)
                            int32_t eax_223
                            int32_t edx_75
                            edx_75:eax_223 =
                                muls.dp.d(0x6bca1af3, *(arg4 + 0x158c) - *(arg4 + 0x1588))
                            int32_t edx_76 = edx_75 s>> 7
                            int32_t eax_226 = (edx_76 u>> 0x1f) + edx_76
                            bool cond:27_1 = *(arg4 + 0x1378) != 0xffffffff
                            arg3[-7] = eax_226
                            
                            if (cond:27_1)
                                if (eax_226 s> 0)
                                    int32_t edx_79 = 0
                                    arg3[-6] = 0
                                    int32_t i_4
                                    
                                    do
                                        *(edx_79 + *(arg4 + 0x1588) + 5) = 1
                                        var_8 = data_4ebe2c4
                                        int32_t* eax_236 = data_4ebe2c8
                                        
                                        if (eax_236 != 0)
                                            eax_236[1]
                                            eax_236[1] += 1
                                        
                                        operator new(*(arg4 + 0x1588) + edx_79, var_8, eax_236)
                                        var_8 = data_4ebe2ec
                                        void* eax_239 = data_4ebe2f0
                                        void* var_4_22 = eax_239
                                        
                                        if (eax_239 != 0)
                                            *(eax_239 + 4)
                                            *(eax_239 + 4) += 1
                                        
                                        operator new[](*(arg4 + 0x1588) + arg3[-6])
                                        edx_79 = arg3[-6] + 0x130
                                        i_4 = arg3[-7]
                                        arg3[-7] -= 1
                                        arg3[-6] = edx_79
                                    while (i_4 != 1)
                            else if (eax_226 s> 0)
                                int32_t edx_77 = 0
                                arg3[-6] = 0
                                int32_t i_5
                                
                                do
                                    *(edx_77 + *(arg4 + 0x1588) + 5) = 1
                                    var_8 = data_4ebe2bc
                                    int32_t* eax_229 = data_4ebe2c0
                                    
                                    if (eax_229 != 0)
                                        eax_229[1]
                                        eax_229[1] += 1
                                    
                                    operator new(*(arg4 + 0x1588) + edx_77, var_8, eax_229)
                                    var_8 = data_4ebe2ec
                                    void* eax_232 = data_4ebe2f0
                                    void* var_4_20 = eax_232
                                    
                                    if (eax_232 != 0)
                                        *(eax_232 + 4)
                                        *(eax_232 + 4) += 1
                                    
                                    operator new[](*(arg4 + 0x1588) + arg3[-6])
                                    edx_77 = arg3[-6] + 0x130
                                    i_5 = arg3[-7]
                                    arg3[-7] -= 1
                                    arg3[-6] = edx_77
                                while (i_5 != 1)
                    else
                        *(*(arg4 + 0x1580) + 5) = 1
                        var_8 = data_4ebe2ac
                        eax_186 = data_4ebe2b0
                    label_5edba9:
                        
                        if (eax_186 != 0)
                            eax_186[1]
                            eax_186[1] += 1
                        
                        operator new(*(arg4 + 0x1580), var_8, eax_186)
                        var_8 = data_4ebe2ec
                        void* eax_246 = data_4ebe2f0
                        void* var_4_24 = eax_246
                        
                        if (eax_246 != 0)
                            *(eax_246 + 4)
                            *(eax_246 + 4) += 1
                        
                        operator new[](*(arg4 + 0x1580))
            else
                int32_t eax_183 = *(arg4 + 0x1ac)
                
                if (eax_183 != 0)
                    if (eax_183 == 1)
                        *(*(arg4 + 0x1580) + 6) = 1
                        var_8 = data_4ebe2b4
                        eax_186 = data_4ebe2b8
                        goto label_5edba9
                    
                    if (eax_183 == 2 || eax_183 == 8 || eax_183 == 0xb || eax_183 == 0xa
                            || eax_183 == 9 || eax_183 == 0xc)
                        *(*(arg4 + 0x1580) + 6) = 1
                        var_8 = data_4ebe2cc
                        int32_t* eax_203 = data_4ebe2d0
                        
                        if (eax_203 != 0)
                            eax_203[1]
                            eax_203[1] += 1
                        
                        operator new(*(arg4 + 0x1580), var_8, eax_203)
                        var_8 = data_4ebe2ec
                        void* eax_206 = data_4ebe2f0
                        void* var_4_16 = eax_206
                        
                        if (eax_206 != 0)
                            *(eax_206 + 4)
                            *(eax_206 + 4) += 1
                        
                        operator new[](*(arg4 + 0x1580))
                        *(*(arg4 + 0x1580) + 0x90) = *(arg4 + 0x9b0)
                        
                        if (*(arg4 + 0x9b4) != 0)
                            *(*(arg4 + 0x1580) + 0xe) = 1
                            sub_621b10(&arg3[-0xe])
                            arg3[-1] = 0xc
                            int32_t* ecx_132 = arg3[-0xe]
                            
                            if (ecx_132 != 0)
                                int32_t var_4_17 = 0
                                var_8 = &arg3[-0x1b]
                                sub_54d980(ecx_132, var_8, var_4_17)
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
                                        int32_t* ecx_137 = arg3[-0xa]
                                        bool cond:35_1 = ecx_137[2] != 1
                                        ecx_137[2]
                                        ecx_137[2] -= 1
                                        
                                        if (not(cond:35_1))
                                            (*(*ecx_137 + 8))()
                            
                            arg3[-1] = 0xffffffff
                            int32_t* edx_73 = arg3[-0xd]
                            
                            if (edx_73 != 0)
                                bool cond:28_1 = edx_73[1] != 1
                                edx_73[1]
                                edx_73[1] -= 1
                                
                                if (not(cond:28_1))
                                    (*(*edx_73 + 4))()
                                    int32_t* ecx_140 = arg3[-0xd]
                                    bool cond:34_1 = ecx_140[2] != 1
                                    ecx_140[2]
                                    ecx_140[2] -= 1
                                    
                                    if (not(cond:34_1))
                                        (*(*ecx_140 + 8))()
                    else if (eax_183 == 3 || eax_183 == 5 || eax_183 == 4)
                        int32_t eax_190
                        int32_t edx_67
                        edx_67:eax_190 = muls.dp.d(0x6bca1af3, *(arg4 + 0x158c) - *(arg4 + 0x1588))
                        int32_t edx_68 = edx_67 s>> 7
                        int32_t eax_193 = (edx_68 u>> 0x1f) + edx_68
                        arg3[-7] = eax_193
                        
                        if (eax_193 s> 0)
                            int32_t edx_69 = 0
                            arg3[-6] = 0
                            int32_t i_6
                            
                            do
                                *(edx_69 + *(arg4 + 0x1588) + 6) = 1
                                var_8 = data_4ebe2cc
                                int32_t* eax_196 = data_4ebe2d0
                                
                                if (eax_196 != 0)
                                    eax_196[1]
                                    eax_196[1] += 1
                                
                                operator new(*(arg4 + 0x1588) + edx_69, var_8, eax_196)
                                var_8 = data_4ebe2ec
                                void* eax_199 = data_4ebe2f0
                                void* var_4_14 = eax_199
                                
                                if (eax_199 != 0)
                                    *(eax_199 + 4)
                                    *(eax_199 + 4) += 1
                                
                                operator new[](*(arg4 + 0x1588) + arg3[-6])
                                edx_69 = arg3[-6] + 0x130
                                i_6 = arg3[-7]
                                arg3[-7] -= 1
                                arg3[-6] = edx_69
                            while (i_6 != 1)
                    else if (eax_183 == 6)
                        *(*(arg4 + 0x1580) + 0xc) = 0
                        *(*(arg4 + 0x1580) + 0x90) = *(arg4 + 0x9b0)
                        
                        if (*(arg4 + 0x9b4) != 0)
                            *(*(arg4 + 0x1580) + 0xe) = 1
            result = *(arg4 + 0x1ac)
            
            if (result != 0)
                int32_t ecx_162
                int32_t edx_85
                
                if (result == 1)
                    void* ecx_160 = *(arg4 + 0x1580)
                    
                    if (*(ecx_160 + 4) != 0)
                        bool cond:8_1 = *(arg4 + 0x1334) == 0
                        float xmm6_2 = *(ecx_160 + 0x10) f- *(ecx_160 + 0x28)
                        float xmm7_2 = *(ecx_160 + 0x14) f- *(ecx_160 + 0x2c)
                        float xmm4_4 = *(ecx_160 + 0x28) ^ (data_b0dbe0).d
                        float xmm5_2 = *(ecx_160 + 0x2c) ^ (data_b0dbe0).d
                        arg3[-0x20] = *(ecx_160 + 0x1c) f- arg3[-0x18]
                        float xmm0_51 = *(ecx_160 + 0x20) f- arg3[-0x14]
                        arg3[-0xa] = xmm4_4
                        arg3[-0xd] = xmm5_2
                        arg3[-0x1a] = xmm6_2
                        arg3[-0x16] = xmm7_2
                        arg3[-0x1e] = xmm0_51
                        
                        if (not(cond:8_1))
                            float xmm0_53 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1338)))
                            void* eax_248 = &arg3[-0x11]
                            arg3[-0x11] = xmm0_53
                            
                            if (xmm0_53 <= xmm4_4)
                                eax_248 = &arg3[-0xa]
                            
                            float xmm0_55 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x133c)))
                            xmm4_4 = *eax_248
                            void* eax_249 = &arg3[-0x11]
                            arg3[-0x11] = xmm0_55
                            
                            if (xmm0_55 <= xmm5_2)
                                eax_249 = &arg3[-0xd]
                            
                            float xmm0_57 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1340)))
                            xmm5_2 = *eax_249
                            void* eax_250 = &arg3[-0x11]
                            arg3[-0x11] = xmm0_57
                            float xmm0_59 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1344)))
                            
                            if (xmm6_2 <= xmm0_57)
                                eax_250 = &arg3[-0x1a]
                            
                            xmm6_2 = *eax_250
                            void* eax_251 = &arg3[-0x11]
                            arg3[-0x11] = xmm0_59
                            
                            if (xmm7_2 <= xmm0_59)
                                eax_251 = &arg3[-0x16]
                            
                            xmm7_2 = *eax_251
                        
                        float xmm3_5 = *(ecx_160 + 0x34)
                        float xmm2_7 = *(ecx_160 + 0x38)
                        int32_t ecx_161 = *(arg4 + 0x12dc)
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
                        *(arg4 + 0x15d0) = ecx_161
                        float xmm0_65 = *(arg4 + 0x131c) / 3.14159274f
                        bool cond:11_1 = *(arg4 + 0x338) != 0
                        void* edi = *(arg4 + 0x1580)
                        *(arg4 + 0x15c4) = edx_85
                        ecx_162 = int.d(xmm4_5)
                        *(arg4 + 0x15c0) = ecx_162
                        *(arg4 + 0x15c8) = int.d(xmm0_65 * 1800f)
                        result.b = cond:11_1
                        *(arg4 + 0x15d5) = result.b
                        result.b = *(edi + 8)
                        
                        if (result.b == 0)
                            *(arg4 + 0x1594) = ecx_162
                            *(arg4 + 0x1598) = edx_85
                        else
                            int128_t xmm0_67 = *(edi + 0x5c)
                            *(arg4 + 0x15d4) = result.b
                            *(arg4 + 0x15b0) = xmm0_67
                            *(arg4 + 0x1594) = ecx_162
                            *(arg4 + 0x1598) = edx_85
                else if (result == 2 || result == 8 || result == 0xb || result == 0xa || result == 9
                        || result == 0xc)
                    void* ecx_190 = *(arg4 + 0x1580)
                    char ecx_191
                    
                    if (*(ecx_190 + 4) == 0)
                        ecx_191 = (arg3[-8]).b
                        *(arg3 - 0x2d) = 0
                    else
                        int32_t var_4_28 = 0
                        var_8 = &arg3[-0x23]
                        ecx_191 = 1
                        
                        if (*sub_6f12f0(ecx_190, var_8, var_4_28) == 0)
                            *(arg3 - 0x2d) = 0
                        else
                            *(arg3 - 0x2d) = 1
                    
                    if ((ecx_191 & 1) != 0)
                        int32_t* edx_98 = arg3[-0x22]
                        arg3[-8] = edx_98
                        
                        if (edx_98 != 0)
                            bool cond:20_1 = edx_98[1] != 1
                            edx_98[1]
                            edx_98[1] -= 1
                            
                            if (not(cond:20_1))
                                (*(*edx_98 + 4))()
                                int32_t* ecx_194 = arg3[-8]
                                bool cond:23_1 = ecx_194[2] != 1
                                ecx_194[2]
                                ecx_194[2] -= 1
                                
                                if (not(cond:23_1))
                                    (*(*ecx_194 + 8))()
                    
                    if (*(arg3 - 0x2d) != 0)
                        void* ecx_195 = *(arg4 + 0x1580)
                        int32_t var_4_29 = 0
                        var_8 = &arg3[-0x23]
                        arg3[-0x12] = *(ecx_195 + 0x1c) f- arg3[-0x18]
                        arg3[-0x13] = *(ecx_195 + 0x20) f- arg3[-0x14]
                        void* eax_298 = *sub_6f12f0(ecx_195, var_8, var_4_29)
                        float xmm1_36 = *(*(arg4 + 0x1580) + 0x28) ^ (data_b0dbe0).d
                        int32_t edx_100 = *(eax_298 + 0x1c)
                        arg3[-0x29] = *(eax_298 + 0x20)
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
                                int32_t* ecx_199 = arg3[-8]
                                bool cond:26_1 = ecx_199[2] != 1
                                ecx_199[2]
                                ecx_199[2] -= 1
                                
                                if (not(cond:26_1))
                                    (*(*ecx_199 + 8))()
                        
                        int32_t ecx_200 = *(arg4 + 0x1580)
                        int32_t var_4_30 = 0
                        var_8 = &arg3[-0x23]
                        void* ecx_201 = *sub_6f12f0(ecx_200, var_8, var_4_30)
                        float xmm1_39 = *(*(arg4 + 0x1580) + 0x2c) ^ (data_b0dbe0).d
                        int32_t* edx_104 = arg3[-0x22]
                        uint128_t xmm0_106 = zx.o(*(ecx_201 + 0x20))
                        arg3[-0x2a] = *(ecx_201 + 0x1c)
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
                                int32_t* ecx_204 = arg3[-8]
                                bool cond:33_1 = ecx_204[2] != 1
                                ecx_204[2]
                                ecx_204[2] -= 1
                                
                                if (not(cond:33_1))
                                    (*(*ecx_204 + 8))()
                        
                        int32_t ecx_205 = *(arg4 + 0x1580)
                        int32_t var_4_31 = 0
                        var_8 = &arg3[-0x2a]
                        int32_t* eax_312 = sub_6f12f0(ecx_205, var_8, var_4_31)
                        int32_t var_4_32 = 0
                        arg3[-1] = 0xe
                        int32_t ecx_206 = *(arg4 + 0x1580)
                        var_8 = &arg3[-0x23]
                        int32_t* eax_314 = sub_6f12f0(ecx_206, var_8, var_4_32)
                        void* ecx_207 = *eax_312
                        void* esi = *(arg4 + 0x1580)
                        int32_t* edi_3 = arg3[-0x22]
                        void* eax_315 = *eax_314
                        int32_t edx_106 = *(ecx_207 + 0x1c)
                        arg3[-0x2b] = *(ecx_207 + 0x20)
                        uint128_t xmm1_41 = zx.o(*(eax_315 + 4))
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
                        int32_t* eax_325 = sub_6f12f0(*(esi_1 + 0x1580), var_8, var_4_33)
                        int32_t var_4_34 = 0
                        arg3[-1] = 0xf
                        int32_t ecx_216 = *(esi_1 + 0x1580)
                        var_8 = &arg3[-0x23]
                        int32_t* eax_327 = sub_6f12f0(ecx_216, var_8, var_4_34)
                        void* edx_109 = *eax_325
                        void* esi_2 = *(esi_1 + 0x1580)
                        int32_t* edi_6 = arg3[-0x22]
                        void* eax_328 = *eax_327
                        int32_t ecx_217 = *(edx_109 + 0x1c)
                        float xmm0_112 = _mm_cvtepi32_ps(zx.o(*(edx_109 + 0x20)))
                        arg3[-0x2c] = ecx_217
                        float xmm1_46 =
                            _mm_cvtepi32_ps(zx.o(*(eax_328 + 8))) - (xmm0_112 f+ *(esi_2 + 0x2c))
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
                            void* eax_337 = &arg3[-8]
                            bool cond:53_1 = xmm0_115 f<= arg3[-0xd]
                            arg3[-8] = xmm0_115
                            
                            if (cond:53_1)
                                eax_337 = &arg3[-0x20]
                            
                            float xmm0_117 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x133c)))
                            xmm2_16 = *eax_337
                            void* eax_338 = &arg3[-8]
                            bool cond:54_1 = xmm0_117 f<= arg3[-0xa]
                            arg3[-8] = xmm0_117
                            
                            if (cond:54_1)
                                eax_338 = &arg3[-0x1e]
                            
                            float xmm0_119 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1340)))
                            xmm4_7 = *eax_338
                            void* eax_339 = &arg3[-8]
                            arg3[-8] = xmm0_119
                            float xmm0_121 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1344)))
                            
                            if (xmm6_5 <= xmm0_119)
                                eax_339 = &arg3[-0x1c]
                            
                            xmm6_5 = *eax_339
                            void* eax_340 = &arg3[-8]
                            arg3[-8] = xmm0_121
                            
                            if (xmm5_5 <= xmm0_121)
                                eax_340 = &arg3[-7]
                            
                            xmm5_5 = *eax_340
                        
                        void* eax_341 = *(arg4 + 0x1580)
                        float xmm7_5 = arg3[-0x12]
                        int32_t ecx_228 = *(arg4 + 0x12dc)
                        int32_t edx_111 = int.d(xmm7_5)
                        float xmm3_12 = *(eax_341 + 0x34)
                        arg3[-8] = edx_111
                        float xmm2_17 = *(eax_341 + 0x38)
                        float xmm4_8 = arg3[-0x13]
                        arg3[-0x25] = int.d(xmm3_12 * xmm2_16 + xmm7_5)
                        arg3[-0x24] = int.d(xmm2_17 * xmm4_7 + xmm4_8)
                        arg3[-0x23] = int.d(xmm3_12 * xmm6_5 + xmm7_5)
                        arg3[-0x22] = int.d(xmm2_17 * xmm5_5 + xmm4_8)
                        int128_t xmm0_125 = *(arg3 - 0x94)
                        *(arg4 + 0x15cc) = *(arg4 + 0x12d8)
                        *(arg4 + 0x15a0) = xmm0_125
                        *(arg4 + 0x15d0) = ecx_228
                        float xmm0_127 = *(arg4 + 0x131c) / 3.14159274f
                        bool cond:62_1 = *(arg4 + 0x338) != 0
                        *(arg4 + 0x15c0) = edx_111
                        int32_t eax_347 = int.d(xmm4_8)
                        arg3[-0x11] = eax_347
                        *(arg4 + 0x15c4) = eax_347
                        *(arg4 + 0x15c8) = int.d(xmm0_127 * 1800f)
                        struct _EXCEPTION_REGISTRATION_RECORD** eax_348
                        eax_348.b = cond:62_1
                        bool cond:63_1 = *(arg4 + 0x358) == 0
                        *(arg4 + 0x15d5) = eax_348.b
                        
                        if (not(cond:63_1))
                            sub_6f12f0(*(arg4 + 0x1580), &var_8, 0)
                            Concurrency::_Receive_impl<uint32_t>::_Blocking_recipient::~_Blocking_recipient::~~_Blocking_recipient(
                                arg4 + 0x159c, var_8)
                            edx_111 = arg3[-8]
                        
                        void* ecx_231 = *(arg4 + 0x1580)
                        eax_348.b = *(ecx_231 + 8)
                        
                        if (eax_348.b != 0)
                            int128_t xmm0_129 = *(ecx_231 + 0x5c)
                            *(arg4 + 0x15d4) = eax_348.b
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
                    int32_t eax_257
                    int32_t edx_86
                    edx_86:eax_257 = muls.dp.d(0x6bca1af3, *(arg4 + 0x158c) - *(arg4 + 0x1588))
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
                        int32_t eax_261 = 0
                        arg3[-0xf] = 0
                        
                        while (true)
                            int32_t var_4_25 = 0
                            var_8 = &arg3[-0x2c]
                            int32_t* eax_262 =
                                sub_6f12f0(*(arg4 + 0x1588) + eax_261, var_8, var_4_25)
                            int32_t* edx_88 = arg3[-0x2b]
                            arg3[-0x16] = edx_88
                            *(arg3 - 0x61) = *eax_262 != 0
                            
                            if (edx_88 != 0)
                                bool cond:48_1 = edx_88[1] != 1
                                edx_88[1]
                                edx_88[1] -= 1
                                
                                if (not(cond:48_1))
                                    (*(*edx_88 + 4))()
                                    int32_t* ecx_170 = arg3[-0x16]
                                    bool cond:58_1 = ecx_170[2] != 1
                                    ecx_170[2]
                                    ecx_170[2] -= 1
                                    
                                    if (not(cond:58_1))
                                        (*(*ecx_170 + 8))()
                                    
                                    xmm3_8 = arg3[-0x18]
                                    xmm7_4 = arg3[-6]
                                    xmm1_22 = arg3[-0x10]
                            
                            if (*(arg3 - 0x61) != 0)
                                void* ecx_172 = arg3[-0xf] + *(arg4 + 0x1588)
                                int32_t var_4_26 = 0
                                var_8 = &arg3[-0x2a]
                                arg3[-0x1e] =
                                    *(ecx_172 + 0x1c) f- *(ecx_172 + 0x28) - xmm7_4 - xmm3_8
                                arg3[-0x20] =
                                    *(ecx_172 + 0x20) f- *(ecx_172 + 0x2c) - xmm1_22 f- arg3[-0x14]
                                void** eax_268 = sub_6f12f0(ecx_172, var_8, var_4_26)
                                int32_t edx_90 = arg3[-0xf]
                                int32_t ecx_173 = *(arg4 + 0x1588)
                                float xmm1_24 =
                                    *(edx_90 + ecx_173 + 0x1c) f- *(edx_90 + ecx_173 + 0x28)
                                int32_t xmm0_76[0x4] = zx.o(*(*eax_268 + 0x14))
                                int32_t* edx_91 = arg3[-0x29]
                                arg3[-0x1c] = edx_91
                                arg3[-0x16] = xmm1_24 + _mm_cvtepi32_ps(xmm0_76) - xmm7_4 - xmm3_8
                                
                                if (edx_91 != 0)
                                    bool cond:64_1 = edx_91[1] != 1
                                    edx_91[1]
                                    edx_91[1] -= 1
                                    
                                    if (not(cond:64_1))
                                        (*(*edx_91 + 4))()
                                        int32_t* ecx_176 = arg3[-0x1c]
                                        bool cond:69_1 = ecx_176[2] != 1
                                        ecx_176[2]
                                        ecx_176[2] -= 1
                                        
                                        if (not(cond:69_1))
                                            (*(*ecx_176 + 8))()
                                
                                int32_t ecx_178 = *(arg4 + 0x1588) + arg3[-0xf]
                                int32_t var_4_27 = 0
                                var_8 = &arg3[-0x23]
                                int32_t* eax_275 = sub_6f12f0(ecx_178, var_8, var_4_27)
                                int32_t edx_93 = arg3[-0xf]
                                int32_t ecx_179 = *(arg4 + 0x1588)
                                float xmm1_29 =
                                    *(edx_93 + ecx_179 + 0x20) f- *(edx_93 + ecx_179 + 0x2c)
                                int32_t xmm0_78[0x4] = zx.o((*eax_275)[6])
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
                                        int32_t* ecx_182 = arg3[-8]
                                        bool cond:71_1 = ecx_182[2] != 1
                                        ecx_182[2]
                                        ecx_182[2] -= 1
                                        
                                        if (not(cond:71_1))
                                            (*(*ecx_182 + 8))()
                                        
                                        xmm1_31 = arg3[-0x1c]
                                
                                int32_t* eax_276
                                eax_276.b = *(arg3 - 0x2d)
                                int32_t xmm0_80 = arg3[-0x1e]
                                
                                if (eax_276.b != 0 || not(arg3[-0x1f] f< xmm0_80))
                                    arg3[-0x1f] = xmm0_80
                                    arg3[-0x1a] = xmm0_80
                                
                                int32_t xmm0_81
                                int32_t xmm0_82
                                
                                if ((eax_276.b != 0 || not(arg3[-0x1f] f< xmm0_80))
                                        && eax_276.b != 0)
                                    xmm0_81 = arg3[-0x20]
                                label_5ee0aa:
                                    arg3[-7] = xmm0_81
                                    arg3[-0xd] = xmm0_81
                                    
                                    if (eax_276.b == 0)
                                        goto label_5ee0b8
                                    
                                    xmm0_82 = arg3[-0x16]
                                label_5ee0ca:
                                    arg3[-0x12] = xmm0_82
                                    arg3[-0xa] = xmm0_82
                                    
                                    if (eax_276.b != 0 || not(xmm1_31 f< arg3[-0x13]))
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
                            
                            int32_t ecx_184 = *(arg4 + 0x158c) - *(arg4 + 0x1588)
                            arg3[-0x1d] += 1
                            arg3[-0xf] += 0x130
                            xmm7_4 = arg3[-6]
                            xmm3_8 = arg3[-0x18]
                            eax_261 = arg3[-0xf]
                            
                            if (arg3[-0x1d] s>= ecx_184 s/ 0x130)
                                break
                            
                            xmm1_22 = arg3[-0x10]
                        
                        xmm4_6 = arg3[-0x13]
                        xmm5_4 = arg3[-0x12]
                        xmm6_3 = arg3[-7]
                        xmm2_10 = arg3[-0x1f]
                    
                    if (*(arg4 + 0x1334) != 0)
                        float xmm0_85 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1338)))
                        void* eax_283 = &arg3[-8]
                        arg3[-8] = xmm0_85
                        
                        if (xmm0_85 <= xmm2_10)
                            eax_283 = &arg3[-0x1a]
                        
                        float xmm0_87 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x133c)))
                        xmm2_10 = *eax_283
                        void* eax_284 = &arg3[-8]
                        arg3[-8] = xmm0_87
                        
                        if (xmm0_87 <= xmm6_3)
                            eax_284 = &arg3[-0xd]
                        
                        float xmm0_89 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1340)))
                        xmm6_3 = *eax_284
                        void* eax_285 = &arg3[-8]
                        arg3[-8] = xmm0_89
                        float xmm0_91 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1344)))
                        
                        if (xmm5_4 <= xmm0_89)
                            eax_285 = &arg3[-0xa]
                        
                        xmm5_4 = *eax_285
                        void* eax_286 = &arg3[-8]
                        arg3[-8] = xmm0_91
                        
                        if (xmm4_6 <= xmm0_91)
                            eax_286 = &arg3[-0x11]
                        
                        xmm4_6 = *eax_286
                    
                    void* eax_287 = *(arg4 + 0x1580)
                    int32_t ecx_189 = *(arg4 + 0x12dc)
                    float xmm3_9 = *(eax_287 + 0x34)
                    float xmm2_13 = *(eax_287 + 0x38)
                    float xmm6_4 = arg3[-0x10]
                    edx_85 = int.d(xmm6_4)
                    arg3[-0x25] = int.d(xmm3_9 * xmm2_10 + xmm7_4)
                    arg3[-0x24] = int.d(xmm2_13 * xmm6_3 + xmm6_4)
                    arg3[-0x23] = int.d(xmm3_9 * xmm5_4 + xmm7_4)
                    arg3[-0x22] = int.d(xmm2_13 * xmm4_6 + xmm6_4)
                    int128_t xmm0_95 = *(arg3 - 0x94)
                    *(arg4 + 0x15cc) = *(arg4 + 0x12d8)
                    *(arg4 + 0x15a0) = xmm0_95
                    *(arg4 + 0x15d0) = ecx_189
                    float xmm0_97 = *(arg4 + 0x131c) / 3.14159274f
                    bool cond:41_1 = *(arg4 + 0x338) != 0
                    void* edi_1 = *(arg4 + 0x1580)
                    *(arg4 + 0x15c4) = edx_85
                    ecx_162 = int.d(xmm7_4)
                    *(arg4 + 0x15c0) = ecx_162
                    *(arg4 + 0x15c8) = int.d(xmm0_97 * 1800f)
                    result.b = cond:41_1
                    *(arg4 + 0x15d5) = result.b
                    result.b = *(edi_1 + 8)
                    
                    if (result.b != 0)
                        int128_t xmm0_99 = *(edi_1 + 0x5c)
                        *(arg4 + 0x15d4) = result.b
                        *(arg4 + 0x15b0) = xmm0_99
                    
                    *(arg4 + 0x1594) = ecx_162
                    *(arg4 + 0x1598) = edx_85
            
            if (*(arg4 + 0x1ac) == 9)
                void* ecx_232 = *(arg4 + 0x1580)
                
                if (*(ecx_232 + 0x7c) == 0xff && (*(ecx_232 + 0xb) != 0 || *(ecx_232 + 0xc) != 0))
                    result = *(arg4 + 0x15e0)
                    
                    if (result != 0)
                        void* eax_349 = *result
                        int32_t xmm1_50 = (*(eax_349 + 0xc4)).d
                        int64_t xmm0_130 = *(eax_349 + 0xd4)
                        arg3[-0x22] = *(eax_349 + 0xdc)
                        *(arg3 - 0x90) = xmm0_130
                        
                        if (xmm1_50 == 0)
                            *(ecx_232 + 0xb) = xmm1_50.b
                            *(*(arg4 + 0x1580) + 0xc) = 0

result.b = 1
TEB* fsbase
fsbase->NtTib.ExceptionList = arg3[-3]
sub_745f2b(arg3[-5] ^ arg3)
*arg3
return result
