// 函数: sub_58e290
// 地址: 0x58e290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(zx.o(arg15), 0)
uint32_t xmm0_3[0x4] = _mm_shuffle_epi32(zx.o(arg14), 0)
int32_t* var_ec = arg44
int32_t* var_e8 = arg45
int32_t* var_f0 = arg46

if (arg44 != 0 && arg45 != 0 && arg46 != 0 && arg47 != 0)
    *arg44 = 0xffffffff
    *arg45 = 0xffffffff
    *arg46 = 0xffffffff
    *arg47 = 0xffffffff

char ecx_1 = arg24

if (arg24 u> 8)
    ecx_1 = 8

int32_t result_1 = arg25
uint32_t ecx_2 = zx.d(ecx_1)
int32_t result = 0xffffff01 << ecx_2.b

if (result_1 s>= result)
    if (result_1 s> 0xff)
        result_1 = 0xff
    
    arg25 = result_1
else
    result_1 = result
    arg25 = result

if ((arg23 == 0 || result_1 != result) && arg3 != 0 && arg2 != 0 && arg4 != 0 && arg11 != 0
        && arg12 != 0 && arg13 != 0 && arg41 != 0)
    result = arg21
    
    if (result != 0)
        int32_t esi_1 = arg22
        
        if (esi_1 != 0)
            if (result s> 0x9c40)
                result = 0x9c40
            else if (result s< 0xffff63c0)
                result = 0xffff63c0
            
            if (esi_1 s> 0x9c40)
                esi_1 = 0x9c40
            else if (esi_1 s< 0xffff63c0)
                esi_1 = 0xffff63c0
            
            bool cond:1_1 = data_1c0551f != 0
            uint128_t xmm1_3 = _mm_cvtepi32_pd(zx.q(result)) / 1000.0
            uint128_t xmm5_3 = _mm_cvtepi32_pd(zx.q(esi_1)) / 1000.0
            int64_t var_20_1 = xmm1_3.q
            int16_t x87control
            
            if (not(cond:1_1))
                x87control = sub_58c840()
                xmm1_3 = zx.o(var_20_1)
                xmm5_3 = zx.o(xmm5_3.q)
            
            int64_t* var_bc_1
            int64_t* ecx_4
            
            if (arg20 s< 0)
                int64_t* temp1_1 = mods.dp.d(sx.q((1 - arg20 s/ 0xe10) * 0xe10 + arg20), 0xe10)
                ecx_4 = temp1_1
                var_bc_1 = temp1_1
            else
                int32_t eax_5
                int32_t edx_1
                edx_1:eax_5 = muls.dp.d(0x6e5d4c3b, arg20)
                int32_t edx_3 = (edx_1 - arg20) s>> 0xb
                ecx_4 = arg20 + ((edx_3 u>> 0x1f) + edx_3) * 0xe10
                var_bc_1 = ecx_4
            
            int64_t* var_d4_1
            
            if (ecx_4 != 0)
                var_d4_1 = 0xe10 - ecx_4
            else
                var_d4_1 = ecx_4
            
            int32_t edx_9 = arg16
            int32_t ecx_8 = arg17
            int32_t eax_18
            
            if (edx_9 != 0xffffffff || ecx_8 != edx_9 || arg18 != edx_9)
                if (edx_9 s> arg18)
                    int32_t eax_19 = edx_9
                    edx_9 = arg18
                    arg18 = eax_19
                
                eax_18 = arg19
            label_58e536:
                
                if (ecx_8 s> eax_18)
                    eax_18 = ecx_8
                    ecx_8 = arg19
                    arg19 = eax_18
                
                if (edx_9 s< 0)
                    edx_9 = 0
                
                arg16 = edx_9
                
                if (ecx_8 s< 0)
                    ecx_8 = 0
                
                arg17 = ecx_8
                
                if (arg18 s>= arg12)
                    arg18 = arg12 - 1
                
                if (eax_18 s>= arg13)
                    arg19 = arg13 - 1
            else
                eax_18 = arg19
                
                if (eax_18 != edx_9)
                    goto label_58e536
                
                arg16 = 0
                arg17 = 0
                arg18 = arg12 - 1
                arg19 = arg13 - 1
            void* eax_21 = arg5
            void* ecx_13 = arg7
            int32_t edi_2
            
            if (eax_21 != 0xffffffff || arg6 != eax_21 || ecx_13 != eax_21)
                edi_2 = arg8
                
                if (eax_21 s> ecx_13)
                    arg5 = ecx_13
                    ecx_13 = eax_21
                
                goto label_58e5b8
            
            edi_2 = arg8
            void* edx_11
            
            if (edi_2 != eax_21)
            label_58e5b8:
                
                if (arg6 s> edi_2)
                    int32_t eax_22 = arg6
                    arg6 = edi_2
                    edi_2 = eax_22
                
                edx_11 = arg5
                result = arg6
            else
                edx_11 = nullptr
                result = 0
                ecx_13 = arg2 - 1
                arg5 = nullptr
                arg6 = 0
                edi_2 = arg4 - 1
            
            if (ecx_13 != 0xffffffff && edi_2 != 0xffffffff)
                uint64_t xmm4_1[0x2] = -0x8000000000000000
                double xmm0_5 = _mm_cvtepi32_pd(zx.q(ecx_13 + 1))
                double xmm1_4
                double xmm3_4
                
                if (xmm1_3 f< 0.0)
                    xmm1_4 = 1.0
                    xmm3_4 =
                        _mm_xor_pd((_mm_xor_pd(xmm1_3, xmm4_1) * xmm0_5 - xmm1_4) / xmm0_5, xmm4_1)
                else
                    xmm1_4 = 1.0
                    xmm3_4 = (xmm0_5 f* xmm1_3 - xmm1_4) / xmm0_5
                
                double xmm6_1[0x2] = xmm3_4
                double xmm6_2[0x2] = _mm_unpacklo_pd(xmm6_1, xmm6_1)
                double xmm0_7 = _mm_cvtepi32_pd(zx.q(edi_2 + 1))
                double xmm2_4
                
                if (xmm5_3 f< 0.0)
                    xmm2_4 =
                        _mm_xor_pd((_mm_xor_pd(xmm5_3, xmm4_1) * xmm0_7 - xmm1_4) / xmm0_7, xmm4_1)
                else
                    xmm2_4 = (xmm0_7 f* xmm5_3 - xmm1_4) / xmm0_7
                
                void* edx_12 = edx_11 - arg9
                double xmm7_1[0x2] = xmm2_4
                int32_t eax_23 = result - arg10
                void* ecx_16 = ecx_13 + 1 - arg9
                int32_t edi_5 = edi_2 + 1 - arg10
                double xmm7_2[0x2] = _mm_unpacklo_pd(xmm7_1, xmm7_1)
                void* var_38 = edx_12
                int32_t var_28 = eax_23
                void* var_34_1 = ecx_16
                int32_t var_24_1 = eax_23
                void* var_30_1 = ecx_16
                var_20_1.d = edi_5
                void* var_2c_1 = edx_12
                var_20_1:4.d = edi_5
                double var_70
                double var_50
                double xmm4_4
                double xmm5_6
                int64_t var_60_2
                
                if (var_bc_1 == 0)
                    double xmm0_26 = _mm_cvtepi32_pd(zx.q(edx_12))
                    double xmm1_17 = _mm_cvtepi32_pd(zx.q(eax_23)) * xmm2_4
                    double xmm6_4 = _mm_cvtepi32_pd(zx.q(arg14))
                    double xmm7_4 = _mm_cvtepi32_pd(zx.q(arg15))
                    double xmm4_6 = xmm6_4 + xmm0_26 * xmm3_4
                    xmm5_6 = xmm7_4 + xmm1_17
                    double xmm0_30 = _mm_cvtepi32_pd(zx.q(ecx_16)) * xmm3_4
                    var_30_1.q = xmm5_6
                    double xmm1_20 = _mm_cvtepi32_pd(zx.q(eax_23)) * xmm2_4
                    xmm0_3[2].q = xmm6_4 + xmm0_30
                    double xmm0_32 = xmm7_4 + xmm1_20
                    double xmm1_23 = _mm_cvtepi32_pd(zx.q(edi_5)) * xmm2_4
                    double xmm4_10 = xmm6_4 + _mm_cvtepi32_pd(zx.q(ecx_16)) * xmm3_4
                    double xmm1_25 = _mm_cvtepi32_pd(zx.q(edi_5))
                    xmm4_4 = xmm4_6
                    xmm0_1[2].q = xmm7_4 + xmm1_23
                    double xmm7_5 = xmm7_4 + xmm1_25 * xmm2_4
                    double xmm6_5 = xmm6_4 + _mm_cvtepi32_pd(zx.q(edx_12)) * xmm3_4
                    
                    if (esi_1 s< 0)
                        xmm4_4 = xmm6_5
                        var_50 = xmm4_10
                        xmm5_6 = xmm7_5
                        var_70 = xmm0_1[2].q
                        int64_t var_48_3 = xmm0_3[2].q
                        double var_68_3 = xmm0_32
                        double var_40_3 = xmm4_6
                        var_60_2 = var_30_1.q
                    else
                        var_50 = xmm0_3[2].q
                        var_70 = xmm0_32
                        double var_48_2 = xmm4_10
                        int64_t var_68_2 = xmm0_1[2].q
                        double var_40_2 = xmm6_5
                        double var_60_1 = xmm7_5
                else
                    uint128_t xmm4_2 = zx.o(*((var_bc_1 << 3) + &data_1ccd2a0))
                    uint128_t xmm5_4 = zx.o(*((var_bc_1 << 3) + &data_1c459a0))
                    int32_t eax_25 = 0
                    double xmm4_3[0x2] = _mm_unpacklo_pd(xmm4_2, xmm4_2)
                    double xmm5_5[0x2] = _mm_unpacklo_pd(xmm5_4, xmm5_4)
                    int64_t var_b8[0x4]
                    double var_98
                    
                    for (int32_t i = 0; i s< 0x10; )
                        double xmm3_10[0x2] = _mm_cvtepi32_pd(*(&var_38 + i))
                        int32_t xmm0_9[0x2] = *(&var_28 + i)
                        i += 8
                        double xmm2_10[0x2] = _mm_cvtepi32_pd(xmm0_9)
                        double xmm3_11[0x2] = _mm_mul_pd(xmm3_10, xmm6_2)
                        double xmm2_11[0x2] = _mm_mul_pd(xmm2_10, xmm7_2)
                        *(&var_b8 + eax_25) =
                            _mm_sub_pd(_mm_mul_pd(xmm4_3, xmm3_11), _mm_mul_pd(xmm5_5, xmm2_11))
                        double xmm0_13[0x2] = _mm_mul_pd(xmm5_5, xmm3_11)
                        double xmm1_9[0x2] = _mm_mul_pd(xmm4_3, xmm2_11)
                        int32_t xmm2_12[0x2] = xmm0_1[0].q
                        double xmm1_10[0x2] = _mm_add_pd(xmm1_9, xmm0_13)
                        double xmm0_14[0x2] = *(&var_b8 + eax_25)
                        *(&var_98 + eax_25) = xmm1_10
                        double xmm0_15[0x2] =
                            _mm_add_pd(xmm0_14, __cvtdq2pd_xmmpd_memq(xmm0_3[0].q))
                        double xmm1_12[0x2] = _mm_cvtepi32_pd(xmm2_12)
                        *(&var_b8 + eax_25) = xmm0_15
                        *(&var_98 + eax_25) = _mm_add_pd(*(&var_98 + eax_25), xmm1_12)
                        eax_25 += 0x10
                    
                    double xmm0_18 = var_98
                    int32_t eax_26 = 0
                    double var_90
                    
                    if (not(xmm0_18 <= var_90))
                        xmm0_18 = var_90
                        eax_26 = 1
                    
                    double var_88
                    
                    if (not(xmm0_18 <= var_88))
                        xmm0_18 = var_88
                        eax_26 = 2
                    
                    double var_80
                    
                    if (xmm0_18 > var_80)
                        eax_26 = 3
                    
                    xmm4_4 = var_b8[eax_26]
                    xmm5_6 = (&var_98)[eax_26]
                    int32_t eax_28 = (eax_26 + 1) & 3
                    var_50 = var_b8[eax_28]
                    int32_t eax_30 = (eax_28 + 1) & 3
                    var_70 = (&var_98)[eax_28]
                    int64_t var_48_1 = var_b8[eax_30]
                    int32_t eax_32 = (eax_30 + 1) & 3
                    int64_t var_68_1 = (&var_98)[eax_30]
                    int64_t var_40_1 = var_b8[eax_32]
                    var_60_2 = (&var_98)[eax_32]
                double xmm3_12 = xmm4_4
                double var_58 = xmm4_4
                double xmm2_13 = xmm5_6
                double var_78 = xmm5_6
                double var_20_3 = xmm3_12
                int32_t i_1 = 0
                double var_d0_3 = xmm2_13
                
                do
                    double xmm0_50 = *(&var_50 + i_1)
                    
                    if (not(xmm4_4 <= xmm0_50))
                        xmm4_4 = xmm0_50
                    
                    double xmm1_27 = *(&var_70 + i_1)
                    
                    if (not(xmm5_6 <= xmm1_27))
                        xmm5_6 = xmm1_27
                    
                    if (not(xmm0_50 <= xmm3_12))
                        xmm3_12 = xmm0_50
                    
                    if (not(xmm1_27 <= xmm2_13))
                        xmm2_13 = xmm1_27
                    
                    i_1 += 8
                while (i_1 s< 0x18)
                
                int32_t esi_2 = int.d(xmm4_4)
                int32_t edi_6 = int.d(xmm5_6)
                int32_t mxcsr
                int16_t x87control_1
                long double st0_1
                st0_1, x87control_1 = sub_5f2940(mxcsr, x87control, fconvert.d(fconvert.t(xmm3_12)))
                double var_20_5 = fconvert.d(st0_1)
                int80_t st0_2 = sub_5f2940(mxcsr, x87control_1, fconvert.d(fconvert.t(xmm2_13)))
                result = int.d(fconvert.t(var_20_5))
                int32_t edx_13 = arg17
                
                if (esi_2 s< arg16)
                    esi_2 = arg16
                
                if (edi_6 s< edx_13)
                    edi_6 = edx_13
                
                var_30_1.q = fconvert.d(st0_2)
                int32_t ecx_17 = int.d(fconvert.t(var_30_1.q))
                
                if (result s> arg18)
                    result = arg18
                
                if (ecx_17 s> arg19)
                    ecx_17 = arg19
                
                if (var_ec != 0 && var_e8 != 0 && var_f0 != 0 && arg47 != 0)
                    *var_ec = esi_2
                    *var_e8 = edi_6
                    *var_f0 = result
                    *arg47 = ecx_17
                    edx_13 = arg17
                
                if (arg48 == 0 && esi_2 s<= arg18 && edi_6 s<= arg19 && result s>= arg16
                        && ecx_17 s>= edx_13)
                    uint32_t ecx_18 = zx.d(arg32)
                    int32_t edx_18 = data_1cd4328
                    data_1cd43c4 = ecx_18
                    data_1cd43c8 = *(edx_18 + ((0xff - ecx_18) << 2))
                    data_1cd43c0 = (0xff - zx.d(arg31)) << 2
                    int32_t ecx_20
                    ecx_20.b = arg36
                    
                    if (ecx_20.b != 0)
                        data_1cd43bc = zx.d(arg33)
                        data_1cd43b8 = zx.d(arg34)
                        data_1cd43b4 = zx.d(arg35)
                        data_1cd43b0 = *(edx_18 + ((0xff - zx.d(ecx_20.b)) << 2))
                    
                    uint32_t ecx_22 = zx.d(arg41)
                    data_1cd43ac = ecx_22 << 2
                    data_1cd43a8 = 0xff - ecx_22
                    int32_t edx_19 = arg40
                    data_1cd43a4 = *(edx_18 + (ecx_22 << 2))
                    
                    if (edx_19 s< 0xffffff01)
                        edx_19 = 0xffffff01
                    else if (edx_19 s> 0xff)
                        edx_19 = 0xff
                    
                    double* eax_47 = arg37
                    
                    if (eax_47 s< 0xffffff01)
                        eax_47 = 0xffffff01
                    else if (eax_47 s> 0xff)
                        eax_47 = 0xff
                    
                    int32_t edi_7 = arg38
                    arg37 = eax_47
                    
                    if (edi_7 s< 0xffffff01)
                        edi_7 = 0xffffff01
                    else if (edi_7 s> 0xff)
                        edi_7 = 0xff
                    
                    int32_t esi_3 = arg39
                    
                    if (esi_3 s< 0xffffff01)
                        esi_3 = 0xffffff01
                    else if (esi_3 s> 0xff)
                        esi_3 = 0xff
                    
                    int32_t ecx_30
                    
                    if (edx_19 s< 0)
                        arg37 += (eax_47 + 0xff) * edx_19 s/ 0xff
                        edi_7 += (edi_7 + 0xff) * edx_19 s/ 0xff
                        ecx_30 = esi_3 + 0xff
                    label_58ec79:
                        esi_3 += ecx_30 * edx_19 s/ 0xff
                    else if (edx_19 s> 0)
                        arg37 += (0xff - eax_47) * edx_19 s/ 0xff
                        edi_7 += (0xff - edi_7) * edx_19 s/ 0xff
                        ecx_30 = 0xff - esi_3
                        goto label_58ec79
                    double* ecx_36 = arg37
                    
                    if (arg42 == 2)
                        ecx_36 = neg.d(ecx_36)
                        edi_7 = neg.d(edi_7)
                        esi_3 = neg.d(esi_3)
                    
                    int32_t edx_35 = data_1cd4328
                    data_1cd43a0 = ecx_36
                    data_1cd439c = edi_7
                    data_1cd4398 = esi_3
                    int32_t eax_66
                    
                    if (ecx_36 s< 0)
                        eax_66 = *(edx_35 + (ecx_36 << 2) + 0x3fc)
                        data_1cd4390 = 0
                    else
                        eax_66 = *(edx_35 + ((0xff - ecx_36) << 2))
                        data_1cd4390 = 0xff
                    
                    data_1cd4394 = eax_66
                    int32_t eax_68
                    
                    if (edi_7 s< 0)
                        eax_68 = *(edx_35 + (edi_7 << 2) + 0x3fc)
                        data_1cd4388 = 0
                    else
                        eax_68 = *(edx_35 + ((0xff - edi_7) << 2))
                        data_1cd4388 = 0xff
                    
                    data_1cd438c = eax_68
                    int32_t eax_70
                    
                    if (esi_3 s< 0)
                        eax_70 = *(edx_35 + (esi_3 << 2) + 0x3fc)
                        data_1cd4380 = 0
                    else
                        eax_70 = *(edx_35 + ((0xff - esi_3) << 2))
                        data_1cd4380 = 0xff
                    
                    data_1cd4384 = eax_70
                    int32_t eax_71 = arg23
                    
                    if (eax_71 != 0)
                        data_1cd437c = eax_71
                        data_1cd4378 = ecx_2
                        data_1cd4370 = arg26
                        data_1cd436c = arg27
                        data_1cd4368 = arg28
                        data_1cd4364 = arg29
                        data_1cd4360 = arg30
                        eax_71 = arg23
                        data_1cd4374 = arg25
                    
                    data_1cd4320 = eax_71
                    eax_71.b = arg32
                    data_1c0551c = eax_71.b
                    eax_71.b = arg41
                    data_1c45540 = arg25
                    int32_t edx_36
                    edx_36:1.b = arg31
                    edx_36.b = arg36
                    data_1ccce88 = eax_71.b
                    data_1c4ce4c = 1
                    data_1c0551e = edx_36:1.b
                    data_1c0551d = edx_36.b
                    data_1c45984 = ecx_36
                    data_1c4554c = edi_7
                    data_1c45548 = esi_3
                    data_1ccce70 = arg42
                    data_1c0529f = 1
                    
                    if (arg41 != 0xff || arg42 != 0 || (arg23 != arg42 && arg25 != 0xff)
                            || edx_36:1.b != 0 || arg32 != edx_36:1.b || edx_36.b != 0
                            || ecx_36 != 0 || edi_7 != 0 || esi_3 != 0)
                        data_1c0529f = 0
                    
                    double* var_158_1 = &var_78
                    int64_t* var_15c_1 = &var_58
                    
                    if (var_bc_1 == 0)
                        result = sub_5edcc0(arg17, arg2, arg3, arg4, arg5, arg6, ecx_13 + 1, 
                            edi_2 + 1, arg9, arg10, arg11, arg12, ecx_36, arg14, arg15, arg16, 
                            arg17, arg18, arg19, ecx_36, var_15c_1.b, var_158_1, xmm3_4)
                    else
                        result = sub_5ed940(arg17, arg2, arg3, arg4, arg5, arg6, ecx_13 + 1, 
                            edi_2 + 1, arg9, arg10, arg11, arg12, var_d4_1, arg14, arg15, arg16, 
                            arg17, arg18, arg19, var_d4_1, var_15c_1, var_158_1, arg43, xmm3_4, 
                            xmm2_4)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
