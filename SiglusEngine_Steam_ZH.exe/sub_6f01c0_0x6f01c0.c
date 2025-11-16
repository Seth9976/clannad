// 函数: sub_6f01c0
// 地址: 0x6f01c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* edi = arg1
int128_t* ecx = arg5
void* var_a4 = edi
int128_t* var_c8 = ecx
*(edi + 0xb4) = arg2
*(edi + 0xbc) = arg3
*(edi + 0xb8) = 4
*(edi + 0xc0) = 6
*(edi + 0xc4) = 2
float eax_3

if (arg4 != 0)
    void* eax_4 = *(edi + 0xa4)
    
    if (eax_4 == 0)
        eax_4.b = 0
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_4
    
    int32_t edx_1 = *(eax_4 + 8)
    int32_t eax_5 = *(eax_4 + 0xc)
    int32_t xmm5_1 = (zx.o(0)).d
    int32_t xmm6_1 = (zx.o(0)).d
    float xmm3_1 = 1f
    int32_t* var_90_1 = nullptr
    float var_c0_1 = 0f
    float var_c4_1 = 1f
    int64_t* edx_4 = eax_5 * arg2 + arg4
    float var_e8_1 = 1f
    int64_t* esi_4 = (arg2 + 1) * eax_5 + arg4
    int64_t* esi_7 = (arg2 + 2) * eax_5 + arg4
    int64_t* edx_8 = (arg2 + 3) * eax_5 + arg4
    int64_t* esi_8 = esi_4
    int32_t edx_9 = edx_1
    float var_80_1 = 0f
    float var_f0
    float var_e4
    float var_e0
    float var_dc
    int64_t var_d4
    float var_b0
    
    if (ecx == 0)
        float eax_6 = *(edi + 0x10)
        int64_t xmm0_1 = *(edi + 0x28)
        int32_t ecx_3 = *(edi + 0x18)
        var_b0 = *(edi + 0x14)
        float eax_8 = *(edi + 0x30)
        void* ecx_4
        
        if (ecx_3 s>= 0 && ecx_3 s< 4)
            ecx_4 = *(edi + (ecx_3 << 3) + 0xd8)
        
        float var_8c_1
        float xmm0_6
        float xmm1_3
        float xmm6_3
        
        if (ecx_3 s< 0 || ecx_3 s>= 4 || ecx_4 == 0)
            xmm6_3 = eax_6
            xmm1_3 = xmm0_1:4.d
            var_8c_1 = var_b0
            xmm0_6 = xmm0_1.d
        else
            uint128_t xmm1_1 = zx.o(*(ecx_4 + 0x20))
            int32_t eax_9 = *(ecx_4 + 0x20)
            uint128_t xmm6_2 = zx.o(*(ecx_4 + 4))
            float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(ecx_4 + 8)))
            int32_t var_70_1 = eax_9
            int32_t var_74_1 = *(ecx_4 + 0x1c)
            var_8c_1 = xmm0_3
            xmm1_3 = _mm_cvtepi32_ps(xmm1_1) f+ xmm0_1:4.d
            float xmm0_5 = _mm_cvtepi32_ps(zx.o(*(ecx_4 + 0x1c)))
            xmm6_3 = _mm_cvtepi32_ps(xmm6_2)
            xmm0_6 = xmm0_5 f+ xmm0_1.d
        
        bool cond:5_1 = *(edi + 9) == 0
        float xmm5_2 = 0f - xmm1_3
        float xmm1_5 = var_8c_1 - xmm1_3
        float xmm4_1 = 0f - xmm0_6
        float xmm6_4 = xmm6_3 - xmm0_6
        var_e0 = xmm5_2
        float var_94_1 = xmm1_5
        var_f0 = xmm4_1
        var_dc = xmm6_4
        var_b0 = xmm1_5
        
        if (not(cond:5_1))
            float xmm0_9 = _mm_cvtepi32_ps(zx.o(*(edi + 0x6c)))
            int32_t* eax_11 = &var_e4
            var_e4 = xmm0_9
            
            if (xmm0_9 <= xmm4_1)
                eax_11 = &var_f0
            
            float xmm0_11 = _mm_cvtepi32_ps(zx.o(*(edi + 0x70)))
            xmm4_1 = *eax_11
            float* eax_12 = &var_f0
            var_f0 = xmm0_11
            
            if (xmm0_11 <= xmm5_2)
                eax_12 = &var_e0
            
            xmm5_2 = *eax_12
            float* eax_13 = &var_e0
            float var_80_2 = xmm4_1
            var_80_1 = (xmm4_1 + xmm0_6) / xmm6_3
            float xmm0_13 = _mm_cvtepi32_ps(zx.o(*(edi + 0x74)))
            var_e0 = xmm0_13
            float xmm0_15 = _mm_cvtepi32_ps(zx.o(*(edi + 0x78)))
            
            if (xmm6_4 <= xmm0_13)
                eax_13 = &var_dc
            
            var_c0_1 = (xmm5_2 + xmm1_3) / var_8c_1
            xmm6_4 = *eax_13
            float* eax_14 = &var_dc
            var_dc = xmm0_15
            
            if (xmm1_5 <= xmm0_15)
                eax_14 = &var_b0
            
            float xmm0_16 = *eax_14
            var_94_1 = xmm0_16
            var_c4_1 = (xmm6_4 + xmm0_6) / xmm6_3
            var_e8_1 = (xmm0_16 + xmm1_3) / var_8c_1
        
        double xmm0_20[0x2] = _mm_cvtps_pd(*(edi + 0x48))
        int32_t eax_16 = edx_9 & 0x400e
        int32_t var_70_2 = 0x3f800000
        float var_7c = xmm4_1
        float var_78_1 = xmm5_2
        int128_t var_4c
        int64_t var_3c
        int64_t var_2c
        int64_t var_1c_1
        float xmm0_26[0x4]
        float xmm1_7[0x4]
        float xmm4_4
        float xmm5_4
        int128_t var_114
        float var_d8
        int64_t xmm0_30
        
        if (1.1920929e-07f <= _mm_cvtpd_ps(__andpd_xmmxuq_memxuq(xmm0_20, data_b0dbc0)))
            var_d8 = xmm4_1
            var_d4.d = var_94_1
            float var_b8_1 = var_94_1
            var_b0 = 1f
            float xmm0_31 = 0f - eax_8
            int32_t var_cc_3 = 0x3f800000
            float var_74_7 = xmm0_31
            var_d4:4.d = xmm0_31
            float var_b4_2 = xmm0_31
            int128_t xmm1_9 = var_7c.o
            int32_t var_70_6 = 0x3f800000
            float var_78_5 = xmm5_2
            float var_74_8 = xmm0_31
            var_7c = xmm6_4
            var_3c = (var_7c.o).q
            int64_t xmm5_6 = (var_d8.o).q
            var_4c = xmm1_9
            var_2c = xmm5_6
            var_1c_1 = xmm6_4.q
            
            if (eax_16 != 4)
                goto label_6f07f3
            
            var_114 = xmm1_9
            float var_fc
            var_4c = *sub_6efff0(&var_114, edi + 4, &var_fc, var_114)
            var_114 = var_7c.o
            var_3c = (*sub_6efff0(&var_114, edi + 4, &var_7c, var_114)).q
            var_114 = var_d8.o
            var_2c = (*sub_6efff0(&var_114, edi + 4, &var_7c, var_114)).q
            var_114 = xmm6_4.o
            xmm3_1 = 1f
            edx_9 = edx_1
            xmm0_30 = (*sub_6efff0(&var_114, edi + 4, &var_7c, var_114)).q
            esi_8 = esi_4
        label_6f07ee:
            var_1c_1 = xmm0_30
        label_6f07f3:
            xmm5_4 = var_1c_1:4.d
            xmm1_7 = var_1c_1.d
            xmm4_4 = var_4c:4.d
            xmm0_26 = var_4c.d
        else
            if (eax_16 != 4)
                float xmm1_8 = 0f - eax_8
                float var_74_3 = xmm1_8
                int128_t xmm0_27 = var_7c.o
                int32_t var_70_3 = 0x3f800000
                var_7c = xmm6_4
                float var_78_2 = xmm5_2
                float var_74_4 = xmm1_8
                var_4c = xmm0_27
                int64_t xmm0_28 = (var_7c.o).q
                int32_t var_70_4 = 0x3f800000
                var_7c = xmm4_1
                float var_78_3 = var_94_1
                float var_74_5 = xmm1_8
                var_3c = xmm0_28
                int64_t xmm0_29 = (var_7c.o).q
                int32_t var_70_5 = 0x3f800000
                var_7c = xmm6_4
                var_2c = xmm0_29
                float var_78_4 = var_94_1
                float var_74_6 = xmm1_8
                xmm0_30 = (var_7c.o).q
                goto label_6f07ee
            
            var_d8 = xmm6_4
            float xmm0_22 = 0f - eax_8
            var_d4.d = var_94_1
            int32_t var_cc_2 = 0x3f800000
            float var_74_2 = xmm0_22
            var_d4:4.d = xmm0_22
            var_114 = var_7c.o
            int128_t xmm0_24 = *sub_6efff0(&var_114, edi + 4, &var_7c, var_114)
            var_7c.o = xmm0_24
            var_4c = xmm0_24
            var_114 = var_d8.o
            float* eax_20 = sub_6efff0(&var_114, edi + 4, &var_d8, var_114)
            xmm0_26 = var_7c.o
            edx_9 = edx_1
            xmm3_1 = 1f
            xmm1_7 = *eax_20
            esi_8 = esi_4
            xmm4_4 = _mm_shuffle_ps(xmm0_26, xmm0_26, 0x55)
            xmm5_4 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0x55)
            var_1c_1 = xmm1_7[0].q
            var_3c.d = xmm1_7
            var_3c:4.d = xmm4_4
            var_2c.d = xmm0_26
            var_2c:4.d = xmm5_4
        
        if (eax_16 == 4)
            var_4c:8.d = 0x3f000000
            var_3c:8.d = 0x3f000000
            var_2c:8.d = 0x3f000000
            var_1c_1:8.d = 0x3f000000
            var_4c.d = xmm0_26 f- 0.5f
            var_4c:4.d = xmm4_4 - 0.5f
            var_1c_1.d = xmm1_7 f- 0.5f
            var_1c_1:4.d = xmm5_4 - 0.5f
            var_3c.d = var_3c.d - 0.5f
            var_3c:4.d = var_3c:4.d - 0.5f
            var_2c.d = var_2c.d - 0.5f
            var_2c:4.d = var_2c:4.d - 0.5f
        
        xmm5_1 = var_80_1
        ecx = &var_4c
        xmm6_1 = var_c0_1
        var_4c:0xc.d = 0x3f800000
        var_3c:0xc.d = 0x3f800000
        var_2c:0xc.d = 0x3f800000
        var_1c_1:0xc.d = 0x3f800000
        var_c8 = &var_4c
    
    float eax_30 = edx_9 & 0x400e
    var_e4 = eax_30
    int64_t* edx_18
    
    if (eax_30 == 4)
        int32_t xmm0_48 = *(ecx + 8)
        *edx_4 = _mm_unpacklo_ps(*ecx, *(ecx + 4))
        edx_4[1].d = xmm0_48
        int32_t xmm0_49 = *(ecx + 0x18)
        *esi_8 = _mm_unpacklo_ps(ecx[1].d, *(ecx + 0x14))
        esi_8[1].d = xmm0_49
        int32_t xmm0_50 = *(ecx + 0x28)
        *esi_7 = _mm_unpacklo_ps(ecx[2].d, *(ecx + 0x24))
        esi_7[1].d = xmm0_50
        int32_t xmm0_51 = *(ecx + 0x38)
        *edx_8 = _mm_unpacklo_ps(ecx[3].d, *(ecx + 0x34))
        edx_8[1].d = xmm0_51
        *(edx_4 + 0xc) = *(ecx + 0xc)
        *(esi_8 + 0xc) = *(ecx + 0x1c)
        *(esi_7 + 0xc) = *(ecx + 0x2c)
        edx_18 = 0x10
        edi = var_a4
        var_90_1 = 0x10
        *(edx_8 + 0xc) = *(ecx + 0x3c)
    else if (eax_30 != 2)
        edx_18 = nullptr
    else
        int32_t xmm0_52 = *(ecx + 8)
        *edx_4 = _mm_unpacklo_ps(*ecx, *(ecx + 4))
        edx_4[1].d = xmm0_52
        int32_t xmm0_53 = *(ecx + 0x18)
        *esi_8 = _mm_unpacklo_ps(ecx[1].d, *(ecx + 0x14))
        esi_8[1].d = xmm0_53
        int32_t xmm0_54 = *(ecx + 0x28)
        *esi_7 = _mm_unpacklo_ps(ecx[2].d, *(ecx + 0x24))
        esi_7[1].d = xmm0_54
        edx_18 = 0xc
        int32_t xmm0_55 = *(ecx + 0x38)
        *edx_8 = _mm_unpacklo_ps(ecx[3].d, *(ecx + 0x34))
        edx_8[1].d = xmm0_55
        var_90_1 = 0xc
    
    int32_t ecx_50 = edx_1
    
    if ((ecx_50.b & 0x10) != 0)
        int32_t var_70_15 = 0x3f800000
        *(edx_18 + edx_4) = _mm_unpacklo_ps(zx.o(0), 0)
        *(edx_18 + edx_4 + 8) = var_70_15
        edi = var_a4
        *(edx_18 + esi_8) = _mm_unpacklo_ps(zx.o(0), 0)
        *(edx_18 + esi_8 + 8) = 0x3f800000
        *(edx_18 + esi_7) = _mm_unpacklo_ps(zx.o(0), 0)
        *(edx_18 + esi_7 + 8) = 0x3f800000
        *(edx_18 + edx_8) = _mm_unpacklo_ps(zx.o(0), 0)
        *(edx_18 + edx_8 + 8) = 0x3f800000
        edx_18 += 0xc
        var_90_1 = edx_18
    
    if ((ecx_50.b & 0x40) != 0)
        *(var_90_1 + edx_4) = (
            ((zx.d(*(edi + 0xa3)) * zx.d(*(edi + 0x7c)) s/ 0xff) << 8 | zx.d(*(edi + 0xa2))) << 8
            | zx.d(*(edi + 0xa1))) << 8 | zx.d(*(edi + 0xa0))
        *(var_90_1 + esi_4) = (
            ((zx.d(*(edi + 0xa3)) * zx.d(*(edi + 0x7c)) s/ 0xff) << 8 | zx.d(*(edi + 0xa2))) << 8
            | zx.d(*(edi + 0xa1))) << 8 | zx.d(*(edi + 0xa0))
        *(var_90_1 + esi_7) = (
            ((zx.d(*(edi + 0xa3)) * zx.d(*(edi + 0x7c)) s/ 0xff) << 8 | zx.d(*(edi + 0xa2))) << 8
            | zx.d(*(edi + 0xa1))) << 8 | zx.d(*(edi + 0xa0))
        *(var_90_1 + edx_8) = (
            ((zx.d(*(edi + 0xa3)) * zx.d(*(edi + 0x7c)) s/ 0xff) << 8 | zx.d(*(edi + 0xa2))) << 8
            | zx.d(*(edi + 0xa1))) << 8 | zx.d(*(edi + 0xa0))
        edx_18 = &var_90_1[1]
        ecx_50 = edx_1
    
    int32_t ecx_51 = ecx_50 & 0xf00
    int32_t i_1 = 0
    
    if (ecx_51 == 0x100)
        i_1 = 1
    else if (ecx_51 == 0x200)
        i_1 = 2
    
    eax_3 = var_e4
    
    if (eax_3 == 4 && *(edi + 0xd) != 0)
        i_1 = 1
    
    if (i_1 s> 0)
        void* eax_68 = esi_4 + edx_18
        void* edx_34 = &edx_18[i_1]
        void* var_c0_2 = edi + 0xd8
        var_b0 = edx_4 - esi_4
        var_dc = esi_7 - esi_4
        int32_t* ecx_54 = arg6
        var_e0 = edx_8 - esi_4
        void* edi_11 = var_c0_2
        int32_t i
        
        do
            void* edx_35 = *edi_11
            float var_c4_2
            float var_98_2
            float var_94_2
            float var_8c_2
            float var_88_2
            float var_84_3
            float var_80_3
            float edx_36
            
            if (ecx_54 == 0)
                float xmm0_80 = xmm5_1
                float xmm4_8 = xmm6_1
                float xmm1_22 = var_c4_1
                float xmm2_20 = var_e8_1
                
                if (edx_35 != 0)
                    uint128_t xmm1_23 = zx.o(*(edx_35 + 4))
                    uint128_t xmm2_21 = zx.o(*(edx_35 + 8))
                    float xmm0_82 = _mm_cvtepi32_ps(zx.o(*(edx_35 + 0xc)))
                    float xmm1_25 = _mm_cvtepi32_ps(xmm1_23) / xmm0_82
                    float xmm2_23 =
                        _mm_cvtepi32_ps(xmm2_21) / _mm_cvtepi32_ps(zx.o(*(edx_35 + 0x10)))
                    xmm1_22 = xmm1_25 * var_c4_1
                    xmm0_80 = xmm1_25 f* xmm5_1
                    xmm4_8 = xmm2_23 f* xmm6_1
                    xmm2_20 = xmm2_23 * var_e8_1
                
                var_84_3 = xmm0_80
                var_f0 = xmm4_8
                var_80_3 = var_f0
                var_94_2 = xmm1_22
                var_8c_2 = xmm4_8
                var_d4:4.d = xmm0_80
                var_98_2 = var_d4:4.d
                var_88_2 = xmm2_20
                var_c4_2 = xmm1_22
                edx_36 = xmm2_20
            else
                float var_6c
                float var_68
                float var_64
                float var_60
                float var_5c
                float var_58
                float var_54
                float var_50
                
                if (edx_35 != 0)
                    uint128_t xmm2_17 = zx.o(*(edx_35 + 4))
                    uint128_t xmm1_19 = zx.o(*(edx_35 + 8))
                    float xmm0_61 = _mm_cvtepi32_ps(zx.o(*(edx_35 + 0xc)))
                    float xmm2_19 = _mm_cvtepi32_ps(xmm2_17) / xmm0_61
                    float xmm1_21 =
                        _mm_cvtepi32_ps(xmm1_19) / _mm_cvtepi32_ps(zx.o(*(edx_35 + 0x10)))
                    var_6c = *ecx_54 * xmm2_19
                    var_68 = ecx_54[1] f* xmm1_21
                    var_64 = ecx_54[2] f* xmm2_19
                    var_60 = ecx_54[3] f* xmm1_21
                    var_5c = ecx_54[4] f* xmm2_19
                    var_58 = ecx_54[5] f* xmm1_21
                    var_54 = ecx_54[6] f* xmm2_19
                    var_50 = ecx_54[7] f* xmm1_21
                
                edx_36 = var_50
                var_c4_2 = var_54
                var_88_2 = var_58
                var_98_2 = var_5c
                var_8c_2 = var_60
                var_94_2 = var_64
                var_80_3 = var_68
                var_84_3 = var_6c
            
            float* edi_12 = var_b0
            *(edi_12 + eax_68) = var_84_3
            *(edi_12 + eax_68 + 4) = var_80_3
            float edi_13 = var_dc
            *eax_68 = var_94_2
            *(eax_68 + 4) = var_8c_2
            *(edi_13 i+ eax_68) = var_98_2
            *(edi_13 i+ eax_68 + 4) = var_88_2
            float edi_14 = var_e0
            *(edi_14 i+ eax_68) = var_c4_2
            ecx_54 = arg6
            *(edi_14 i+ eax_68 + 4) = edx_36
            eax_68 += 8
            edi_11 = var_c0_2 + 8
            var_c0_2 = edi_11
            i = i_1
            i_1 -= 1
        while (i != 1)
        xmm3_1 = 1f
        edi = var_a4
        edx_18 = edx_34
        eax_3 = var_e4
    
    if (eax_3 == 4 && *(edi + 0xd) != 0)
        void* ecx_69 = *(edi + 0xe0)
        uint128_t xmm1_26 = zx.o(*(ecx_69 + 0xc))
        int32_t eax_69 = *(ecx_69 + 0x20)
        uint128_t xmm2_24 = zx.o(*(ecx_69 + 0x20))
        uint128_t xmm6_5 = zx.o(*(ecx_69 + 0x10))
        float xmm0_87 = _mm_cvtepi32_ps(zx.o(*(ecx_69 + 0x1c)))
        int32_t var_70_17 = eax_69
        int32_t var_74_10 = *(ecx_69 + 0x1c)
        float xmm1_27 = _mm_cvtepi32_ps(xmm1_26)
        float xmm5_9 = xmm0_87 ^ (data_b0dbe0).d
        float xmm1_28 = xmm1_27 - xmm0_87
        float xmm2_25 = _mm_cvtepi32_ps(xmm2_24)
        xmm5_9 - xmm1_28
        float xmm6_6 = _mm_cvtepi32_ps(xmm6_5)
        int32_t eax_70
        eax_70:1.b = (xmm5_9 == xmm1_28 ? 1 : 0) << 6
            | (is_unordered.d(xmm5_9, xmm1_28) ? 1 : 0) << 2 | (xmm5_9 < xmm1_28 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        float xmm4_10
        
        if (p_2)
            xmm4_10 = (*var_c8 + 0.5f - _mm_cvtepi32_ps(zx.o(*(edi + 0x94))) - xmm5_9)
                / (xmm1_28 - xmm5_9) + 0f
        else
            xmm4_10 = 1f
        
        float xmm6_7 = xmm6_6 - xmm2_25
        float xmm1_30 = xmm2_25 ^ (data_b0dbe0).d
        xmm1_30 - xmm6_7
        eax_70:1.b = (xmm1_30 == xmm6_7 ? 1 : 0) << 6
            | (is_unordered.d(xmm1_30, xmm6_7) ? 1 : 0) << 2 | (xmm1_30 < xmm6_7 ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        float xmm2_26
        
        if (p_4)
            xmm2_26 = (*(var_c8 + 4) + 0.5f - _mm_cvtepi32_ps(zx.o(*(edi + 0x98))) - xmm1_30)
                / (xmm6_7 - xmm1_30) + 0f
        else
            xmm2_26 = 1f
        
        xmm5_9 - xmm1_28
        *(edx_18 + edx_4) = xmm4_10
        var_b0 = xmm2_26
        *(edx_18 + edx_4 + 4) = var_b0
        float eax_72
        eax_72:1.b = (xmm5_9 == xmm1_28 ? 1 : 0) << 6
            | (is_unordered.d(xmm5_9, xmm1_28) ? 1 : 0) << 2 | (xmm5_9 < xmm1_28 ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        float xmm2_32
        
        if (p_6)
            xmm2_32 = (var_c8[1].d f+ 0.5f - _mm_cvtepi32_ps(zx.o(*(edi + 0x94))) - xmm5_9)
                / (xmm1_28 - xmm5_9) + 0f
        else
            xmm2_32 = 1f
        
        xmm1_30 - xmm6_7
        eax_72:1.b = (xmm1_30 == xmm6_7 ? 1 : 0) << 6
            | (is_unordered.d(xmm1_30, xmm6_7) ? 1 : 0) << 2 | (xmm1_30 < xmm6_7 ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        float xmm4_17
        
        if (p_8)
            xmm4_17 = (*(var_c8 + 0x14) + 0.5f - _mm_cvtepi32_ps(zx.o(*(edi + 0x98))) - xmm1_30)
                / (xmm6_7 - xmm1_30) + 0f
        else
            xmm4_17 = 1f
        
        var_b0 = xmm4_17
        xmm5_9 - xmm1_28
        *(edx_18 + esi_4) = xmm2_32
        *(edx_18 + esi_4 + 4) = var_b0
        float eax_74
        eax_74:1.b = (xmm5_9 == xmm1_28 ? 1 : 0) << 6
            | (is_unordered.d(xmm5_9, xmm1_28) ? 1 : 0) << 2 | (xmm5_9 < xmm1_28 ? 1 : 0)
        bool p_10 = unimplemented  {test ah, 0x44}
        float xmm2_38
        
        if (p_10)
            xmm2_38 = (var_c8[2].d f+ 0.5f - _mm_cvtepi32_ps(zx.o(*(edi + 0x94))) - xmm5_9)
                / (xmm1_28 - xmm5_9) + 0f
        else
            xmm2_38 = 1f
        
        xmm1_30 - xmm6_7
        eax_74:1.b = (xmm1_30 == xmm6_7 ? 1 : 0) << 6
            | (is_unordered.d(xmm1_30, xmm6_7) ? 1 : 0) << 2 | (xmm1_30 < xmm6_7 ? 1 : 0)
        bool p_12 = unimplemented  {test ah, 0x44}
        float xmm4_24
        
        if (p_12)
            xmm4_24 = (*(var_c8 + 0x24) + 0.5f - _mm_cvtepi32_ps(zx.o(*(edi + 0x98))) - xmm1_30)
                / (xmm6_7 - xmm1_30) + 0f
        else
            xmm4_24 = 1f
        
        var_b0 = xmm4_24
        xmm5_9 - xmm1_28
        *(edx_18 + esi_7) = xmm2_38
        *(edx_18 + esi_7 + 4) = var_b0
        float eax_76
        eax_76:1.b = (xmm5_9 == xmm1_28 ? 1 : 0) << 6
            | (is_unordered.d(xmm5_9, xmm1_28) ? 1 : 0) << 2 | (xmm5_9 < xmm1_28 ? 1 : 0)
        bool p_14 = unimplemented  {test ah, 0x44}
        float xmm2_44
        
        if (p_14)
            xmm2_44 = (var_c8[3].d f+ 0.5f - _mm_cvtepi32_ps(zx.o(*(edi + 0x94))) - xmm5_9)
                / (xmm1_28 - xmm5_9) + 0f
        else
            xmm2_44 = 1f
        
        xmm1_30 - xmm6_7
        eax_76:1.b = (xmm1_30 == xmm6_7 ? 1 : 0) << 6
            | (is_unordered.d(xmm1_30, xmm6_7) ? 1 : 0) << 2 | (xmm1_30 < xmm6_7 ? 1 : 0)
        bool p_16 = unimplemented  {test ah, 0x44}
        
        if (p_16)
            xmm3_1 = (*(var_c8 + 0x34) + 0.5f - _mm_cvtepi32_ps(zx.o(*(edi + 0x98))) - xmm1_30)
                / (xmm6_7 - xmm1_30) + 0f
        
        var_b0 = xmm3_1
        *(edx_18 + edx_8) = xmm2_44
        *(edx_18 + edx_8 + 4) = var_b0

eax_3.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_3
