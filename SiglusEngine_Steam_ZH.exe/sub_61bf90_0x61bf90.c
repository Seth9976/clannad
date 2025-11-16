// 函数: sub_61bf90
// 地址: 0x61bf90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bfa11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3e4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = *data_bac450
int128_t* var_3f8
float var_318
int32_t var_308
int32_t var_1e4
float var_80
int32_t* ecx_9

if (result == 0xc8)
    sub_6efae0(&var_1e4)
    int32_t var_8_1 = 0
    var_1e4 = 2
    sub_611e70(arg1, &var_1e4)
    int32_t eax_4 = data_4ebe2d4
    int32_t* eax_5 = data_4ebe2d8
    
    if (eax_5 != 0)
        eax_5[1]
        eax_5[1] += 1
    
    operator new(&var_1e4, eax_4, eax_5)
    int32_t eax_7 = data_4ebe2ec
    int32_t* eax_8 = data_4ebe2f0
    
    if (eax_8 != 0)
        eax_8[1]
        eax_8[1] += 1
    
    operator new[](&var_1e4, eax_7, eax_8)
    int32_t* ecx_5 = data_bac450
    
    if (*ecx_5 == 0xc8)
        int32_t eax_10
        
        if (arg3 == 0)
            eax_10 = ecx_5[4]
        else
            eax_10 = ecx_5[3]
        
        if (eax_10 == 1)
            ecx_5 = sub_61ce00(arg2, &var_1e4, ecx_5[2], arg3)
        else if (eax_10 == 2)
            ecx_5 = sub_61cf50(arg2, &var_1e4, ecx_5[2], arg3)
    
    int32_t* var_3e8_6 = ecx_5
    int32_t* var_3ec_5 = &var_318
    float ecx_7 = sub_6fd020(data_4ebe2d4, ecx_5, 0)
    int32_t var_3e8_7 = 0
    int32_t var_3ec_6 = 0
    float var_3f0_3 = var_318
    char eax_13 = sub_6f01c0(&var_1e4, 0, ecx_7, 0, var_3f8)
    ecx_9 = data_4ebe2d4
    
    if (eax_13 == 0)
    label_61c636:
        sub_6fd140(ecx_9)
    label_61c641:
        int32_t var_8_5 = 0xffffffff
        sub_6efc80(&var_1e4)
    label_61c64d:
        result.b = 1
    else
        sub_6fd140(ecx_9)
        sub_6f5d30(*(arg1 + 0x1b90))
        sub_6f5e50(*(arg1 + 0x1ba4))
        void* eax_14 = data_bac4a0
        int32_t var_84_1 = 0
        var_80 = 0f
        int32_t var_7c_1 = *(eax_14 + 8)
        int32_t var_78_1 = *(eax_14 + 0xc)
        *(arg1 + 0x1a60) = var_84_1.o
        *(arg1 + 0x1adc) = *(arg1 + 0x1ad8)
        var_308 = &var_1e4
        sub_530ba0(arg1 + 0x1ad8, &var_308)
        
        if (sub_6f6480(arg1 + 0x90) != 0)
            goto label_61c641
        
        int32_t var_8_2 = 0xffffffff
        sub_6efc80(&var_1e4)
        result.b = 0
else
    int32_t var_310
    int128_t var_74
    int32_t mxcsr
    int16_t x87control
    
    if (result == 0x12c)
        void* eax_18 = data_bac4a0
        uint128_t xmm1_1 = zx.o(*(eax_18 + 0xc))
        float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(eax_18 + 8)))
        float xmm1_2 = _mm_cvtepi32_ps(xmm1_1)
        var_318 = xmm0_3
        sub_6efae0(&var_1e4)
        int32_t var_8_3 = 1
        var_1e4 = 2
        sub_611e70(arg1, &var_1e4)
        int32_t eax_19 = data_4ebe2dc
        char var_1df_1 = 0
        int16_t var_1da_1 = 0x101
        char var_1d8_1 = 1
        int32_t* eax_20 = data_4ebe2e0
        
        if (eax_20 != 0)
            eax_20[1]
            eax_20[1] += 1
        
        operator new(&var_1e4, eax_19, eax_20)
        int32_t eax_22 = data_4ebe2ec
        int32_t* eax_23 = data_4ebe2f0
        
        if (eax_23 != 0)
            eax_23[1]
            eax_23[1] += 1
        
        operator new[](&var_1e4, eax_22, eax_23)
        void* eax_25 = data_bac450
        int32_t xmm1_3 = (zx.o(0)).d
        int32_t eax_26 = *(eax_25 + 0x10)
        int32_t ecx_19
        ecx_19.b = *(eax_25 + 8) != 0
        float xmm3_1
        
        if (arg3 == 0)
            xmm3_1 = (zx.o(0)).d
            
            xmm1_3 = ecx_19.b == 0 ? 0x40490fdb : 0xc0490fdb
        else
            xmm3_1 = 3.14159274f
            
            if (ecx_19.b == 0)
                xmm1_3 = 0x40c90fdb
        
        var_310 = 0x3f000000
        float xmm2_3 = (xmm1_3 f+ xmm3_1) * 0.5f
        float var_1a0_2
        
        if (eax_26 == 1)
            int32_t eax_29 = arg2
            
            if (eax_29 s>= 0)
                ecx_19 = 0x10000
                
                if (eax_29 s> 0x10000)
                    eax_29 = 0x10000
            else
                eax_29 = 0
            
            var_1a0_2 =
                (xmm1_3 f- xmm2_3) * _mm_cvtepi32_ps(zx.o(eax_29)) * 1.52587891e-05f + xmm2_3
        else
            int32_t eax_28 = arg2
            
            if (eax_26 == 2)
                if (eax_28 s>= 0)
                    ecx_19 = 0x10000
                    
                    if (eax_28 s> 0x10000)
                        eax_28 = 0x10000
                else
                    eax_28 = 0
                
                float var_1a0_1 =
                    (xmm2_3 - xmm3_1) * _mm_cvtepi32_ps(zx.o(eax_28)) * 1.52587891e-05f + xmm3_1
            else
                if (eax_28 s>= 0)
                    ecx_19 = 0x10000
                    
                    if (eax_28 s> 0x10000)
                        eax_28 = 0x10000
                else
                    eax_28 = 0
                
                var_1a0_2 =
                    (xmm1_3 f- xmm3_1) * _mm_cvtepi32_ps(zx.o(eax_28)) * 1.52587891e-05f + xmm3_1
        float xmm3_2 = var_318
        float xmm5_2 = xmm1_2 * 0.5f
        int32_t var_7c_2 = 0
        int32_t var_78_2 = 0x3f800000
        int32_t var_3e8_14 = ecx_19
        float xmm1_12 = xmm5_2 + 0.5f
        float xmm2_10 = xmm3_2 * -0.5f - 0.5f
        float xmm3_4 = xmm3_2 * 0.5f - 0.5f
        int32_t* var_3ec_9 = &var_308
        var_80 = xmm1_12
        int32_t var_7c_3 = 0
        var_80 = xmm1_12
        float xmm1_13 = 0.5f - xmm5_2
        var_74 = xmm2_10.o
        int32_t var_78_3 = 0x3f800000
        int32_t var_7c_4 = 0
        var_80 = xmm1_13
        int128_t var_64_1 = xmm3_4.o
        int32_t var_78_4 = 0x3f800000
        int32_t var_7c_5 = 0
        int128_t var_54_1 = xmm2_10.o
        int32_t var_78_5 = 0x3f800000
        var_80 = xmm1_13
        int128_t var_44_1 = xmm3_4.o
        float ecx_21 = sub_6fd020(data_4ebe2dc, ecx_19, 0)
        int32_t var_3e8_15 = 0
        int128_t* var_3ec_10 = &var_74
        int32_t var_3f0_4 = var_308
        char eax_30 = sub_6f01c0(&var_1e4, 0, ecx_21, 0, var_3f8)
        ecx_9 = data_4ebe2dc
        
        if (eax_30 == 0)
            goto label_61c636
        
        sub_6fd140(ecx_9)
        sub_6f5d30(*(arg1 + 0x1b90))
        sub_6f5e50(*(arg1 + 0x1ba4))
        float xmm0_15 = _mm_cvtepi32_ps(zx.o(*(data_bac450 + 0xc)))
        float var_9c = 0f
        int32_t var_98_1 = 0
        float xmm0_16 = xmm0_15 / 10f
        double xmm0_19 = __libm_sse2_tan_precise(mxcsr, x87control, 
            _mm_cvtps_pd((90f - xmm0_16 f* var_310) * 0.0174532924f))
        void* eax_32 = data_bac4a0
        float var_90 = 0f
        int32_t var_8c_1 = 0
        int32_t var_88_1 = 0
        float var_a8 = 0f
        int32_t var_a4_1 = 0x3f800000
        int32_t var_a0_1 = 0
        int32_t var_94_1 = (fconvert.s(xmm0_19) * xmm5_2) ^ (data_b0dbe0).d
        uint128_t xmm1_16 = zx.o(*(eax_32 + 8))
        float xmm0_24 = _mm_cvtepi32_ps(zx.o(*(eax_32 + 0xc)))
        var_310 = _mm_cvtepi32_ps(xmm1_16) / xmm0_24
        sub_403864(arg1 + 0x90, &var_9c, &var_90, &var_a8)
        sub_4039bc(arg1 + 0xd0, xmm0_16 * 0.0174532924f, var_310, 1f, 10000f)
        void* eax_34 = data_bac4a0
        int32_t var_84_6 = 0
        var_80 = 0f
        int32_t var_7c_6 = *(eax_34 + 8)
        int32_t var_78_6 = *(eax_34 + 0xc)
        int32_t var_154_1 = 0xffffffff
        *(arg1 + 0x1a60) = var_84_6.o
        *(arg1 + 0x1adc) = *(arg1 + 0x1ad8)
        var_310 = &var_1e4
        sub_530ba0(arg1 + 0x1ad8, &var_310)
        
        if (sub_6f6480(arg1 + 0x90) != 0)
            goto label_61c641
        
        int32_t var_8_4 = 0xffffffff
        sub_6efc80(&var_1e4)
        result.b = 0
    else if (result != 0x12d)
    label_61c64d_1:
        result.b = 1
    else
        float esi_6 = 0f
        var_318 = 0f
        
        while (true)
            void* eax_38 = data_bac4a0
            uint128_t xmm1_19 = zx.o(*(eax_38 + 0xc))
            int32_t xmm0_31 = _mm_cvtepi32_ps(zx.o(*(eax_38 + 8)))
            float xmm1_20 = _mm_cvtepi32_ps(xmm1_19)
            var_308 = xmm0_31
            int32_t var_304
            sub_6efae0(&var_304)
            int32_t var_8_6 = 2
            var_304 = 2
            sub_611e70(arg1, &var_304)
            int32_t eax_39 = data_4ebe2dc
            char var_2ff_1 = 0
            int16_t var_2fa_1 = 0x101
            char var_2f8_1 = 1
            int32_t* eax_40 = data_4ebe2e0
            
            if (eax_40 != 0)
                eax_40[1]
                eax_40[1] += 1
            
            operator new(&var_304, eax_39, eax_40)
            int32_t eax_42 = data_4ebe2ec
            int32_t* eax_43 = data_4ebe2f0
            
            if (eax_43 != 0)
                eax_43[1]
                eax_43[1] += 1
            
            operator new[](&var_304, eax_42, eax_43)
            void* eax_45 = data_bac450
            int32_t eax_46 = *(eax_45 + 0x10)
            int32_t ecx_37
            ecx_37.b = *(eax_45 + 8) != 0
            int32_t xmm1_21
            int32_t xmm3_5
            int32_t xmm4_1
            
            if (esi_6 != 0)
                if (arg3 != 0)
                    if (ecx_37.b == 0)
                        goto label_61c7b1
                    
                    xmm3_5 = 0x40490fdb
                    xmm1_21 = (zx.o(0)).d
                    xmm4_1 = 0xbf800000
                else if (ecx_37.b == 0)
                    xmm3_5 = (zx.o(0)).d
                    xmm1_21 = 0x40490fdb
                    xmm4_1 = 0xbf800000
                else
                label_61c7b1:
                    xmm3_5 = (zx.o(0)).d
                    xmm1_21 = (zx.o(0)).d
                    xmm4_1 = (zx.o(0)).d
            else if (arg3 == 0)
                if (ecx_37.b == 0)
                    goto label_61c7b1
                
                xmm3_5 = 0x40c90fdb
                xmm1_21 = 0x40490fdb
                xmm4_1 = 0xbf800000
            else if (ecx_37.b == 0)
                xmm3_5 = 0x40490fdb
                xmm1_21 = 0x40c90fdb
                xmm4_1 = 0xbf800000
            else
                xmm3_5 = (zx.o(0)).d
                xmm1_21 = (zx.o(0)).d
                xmm4_1 = (zx.o(0)).d
            
            float xmm2_13 = (xmm1_21 f+ xmm3_5) * 0.5f
            float var_2c0_2
            
            if (eax_46 == 1)
                int32_t eax_51
                
                if (arg2 s>= 0)
                    eax_51 = arg2
                    ecx_37 = 0x10000
                    
                    if (arg2 s> 0x10000)
                        eax_51 = 0x10000
                else
                    eax_51 = 0
                
                var_2c0_2 =
                    (xmm1_21 f- xmm2_13) * _mm_cvtepi32_ps(zx.o(eax_51)) * 1.52587891e-05f + xmm2_13
            else if (eax_46 == 2)
                int32_t eax_50
                
                if (arg2 s>= 0)
                    eax_50 = arg2
                    ecx_37 = 0x10000
                    
                    if (arg2 s> 0x10000)
                        eax_50 = 0x10000
                else
                    eax_50 = 0
                
                float var_2c0_1 =
                    (xmm2_13 f- xmm3_5) * _mm_cvtepi32_ps(zx.o(eax_50)) * 1.52587891e-05f f+ xmm3_5
            else
                int32_t eax_49
                
                if (arg2 s>= 0)
                    eax_49 = arg2
                    ecx_37 = 0x10000
                    
                    if (arg2 s> 0x10000)
                        eax_49 = 0x10000
                else
                    eax_49 = 0
                
                var_2c0_2 =
                    (xmm1_21 f- xmm3_5) * _mm_cvtepi32_ps(zx.o(eax_49)) * 1.52587891e-05f f+ xmm3_5
            int32_t xmm2_18 = var_308
            float xmm3_7 = xmm1_20 * 0.5f
            float xmm1_30 = xmm3_7 + 0.5f
            float var_34
            int128_t xmm0_41
            
            if (esi_6 != 0)
                float var_3d0_1 = xmm1_30
                float var_3a0_1 = xmm1_30
                float xmm2_22 = xmm2_18 f* 0.5f - 0.5f
                int32_t var_3cc_1 = xmm4_1
                int32_t var_3c8_1 = 0x3f800000
                float xmm1_32 = 0.5f - xmm3_7
                var_34 = 0.5f
                var_74 = 0xbf000000.o
                int32_t var_30_2 = 0
                int32_t var_39c_1 = xmm4_1
                int32_t var_398_1 = 0x3f800000
                int32_t var_2c_2 = 0x3f800000
                int32_t var_28_2 = 0
                int128_t var_64_3 = xmm2_22.o
                int32_t var_24_2 = 0x3f000000
                float var_380_1 = xmm1_32
                int32_t var_37c_1 = xmm4_1
                int32_t var_378_1 = 0x3f800000
                int32_t var_20_2 = 0x3f800000
                int128_t var_54_3 = 0xbf000000.o
                int32_t var_3b8_1 = 0x3f800000
                float var_3c0_1 = xmm1_32
                int32_t var_3bc_1 = xmm4_1
                xmm0_41 = xmm2_22.o
                int32_t var_1c_2 = 0x3f800000
            else
                int32_t var_368_1 = 0x3f800000
                float var_370_1 = xmm1_30
                float var_350_1 = xmm1_30
                float xmm2_20 = xmm2_18 f* -0.5f - 0.5f
                int32_t var_36c_1 = xmm4_1
                var_34 = esi_6
                float xmm1_31 = 0.5f - xmm3_7
                float var_30_1 = esi_6
                int32_t var_34c_1 = xmm4_1
                int32_t var_348_1 = 0x3f800000
                var_74 = xmm2_20.o
                int32_t var_2c_1 = 0x3f000000
                float var_28_1 = esi_6
                float var_24_1 = esi_6
                int128_t var_64_2 = 0xbf000000.o
                int32_t var_388_1 = 0x3f800000
                float var_390_1 = xmm1_31
                int32_t var_38c_1 = xmm4_1
                int32_t var_20_1 = 0x3f800000
                int128_t var_54_2 = xmm2_20.o
                float var_3b0_1 = xmm1_31
                int32_t var_3ac_1 = xmm4_1
                int32_t var_3a8_1 = 0x3f800000
                xmm0_41 = 0xbf000000.o
                int32_t var_1c_1 = 0x3f000000
                float var_334_1 = esi_6
                float var_330_1 = esi_6
                float var_31c_1 = esi_6
                float var_344_1 = esi_6
            
            int32_t var_3e8_23 = ecx_37
            int32_t var_18_1 = 0x3f800000
            int32_t* var_3ec_14 = &var_310
            int128_t var_44_2 = xmm0_41
            float ecx_39 = sub_6fd020(data_4ebe2dc, ecx_37, 0)
            float* var_3e8_24 = &var_34
            int128_t* var_3ec_15 = &var_74
            int32_t var_3f0_7 = var_310
            char eax_54 = sub_6f01c0(&var_304, 0, ecx_39, 0, var_3f8)
            int32_t* ecx_41 = data_4ebe2dc
            
            if (eax_54 == 0)
                sub_6fd140(ecx_41)
            else
                sub_6fd140(ecx_41)
                sub_6f5d30(*(arg1 + 0x1b90))
                sub_6f5e50(*(arg1 + 0x1ba4))
                float xmm0_46 = _mm_cvtepi32_ps(zx.o(*(data_bac450 + 0xc)))
                var_80 = 0f
                int32_t var_7c_7 = 0
                float xmm0_47 = xmm0_46 / 10f
                var_308 = xmm0_47
                double xmm0_50
                x87control, xmm0_50 = __libm_sse2_tan_precise(mxcsr, x87control, 
                    _mm_cvtps_pd((90f - xmm0_47 * 0.5f) * 0.0174532924f))
                void* eax_56 = data_bac4a0
                float var_c0 = 0f
                int32_t var_bc_1 = 0
                int32_t var_b8_1 = 0
                float var_b4 = 0f
                int32_t var_b0_1 = 0x3f800000
                int32_t var_ac_1 = 0
                int32_t var_78_7 = (fconvert.s(xmm0_50) * xmm3_7) ^ (data_b0dbe0).d
                uint128_t xmm1_35 = zx.o(*(eax_56 + 8))
                float xmm0_55 = _mm_cvtepi32_ps(zx.o(*(eax_56 + 0xc)))
                float xmm1_37 = _mm_cvtepi32_ps(xmm1_35) / xmm0_55
                var_308 = var_308 f* 0.0174532924f
                sub_403864(arg1 + 0x90, &var_80, &var_c0, &var_b4)
                var_3f8 = arg1 + 0xd0
                sub_4039bc(var_3f8, var_308, xmm1_37, 1f, 10000f)
                void* eax_59 = data_bac4a0
                int32_t var_360_1 = 0
                int32_t var_35c_1 = *(eax_59 + 8)
                int32_t var_358_1 = *(eax_59 + 0xc)
                int32_t var_274_1 = 0xffffffff
                *(arg1 + 0x1a60) = 0.o
                *(arg1 + 0x1adc) = *(arg1 + 0x1ad8)
                var_308 = &var_304
                sub_530ba0(arg1 + 0x1ad8, &var_308)
                
                if (sub_6f6480(arg1 + 0x90) == 0)
                    int32_t var_8_8 = 0xffffffff
                    sub_6efc80(&var_304)
                    result.b = 0
                    break
                
                esi_6 = var_318
            
            int32_t var_8_7 = 0xffffffff
            sub_6efc80(&var_304)
            esi_6 += 1
            var_318 = esi_6
            
            if (esi_6 s>= 2)
                goto label_61c64d_1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
