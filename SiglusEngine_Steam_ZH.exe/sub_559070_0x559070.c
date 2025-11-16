// 函数: sub_559070
// 地址: 0x559070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b27bd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_d0
int32_t eax_2 = __security_cookie ^ &var_d0
int32_t __saved_edi
int32_t var_dc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *arg2
char* result = *arg3
void var_c4
void* esi_8
int32_t mxcsr
int16_t x87control
uint64_t xmm5[0x2]
int64_t xmm6

if (edx u> 0x17)
    int32_t var_98_1 = 7
    int32_t var_9c_1 = 0
    int16_t var_ac = 0
    sub_52e720(&var_ac, 0xad8cf8, 0x16)
    int32_t var_c_8 = 0xa
    sub_684160(data_bac424, 2, &var_ac)
    
    if (var_98_1 u>= 8)
        j__free(var_ac.d)
else
    switch (edx)
        case 0
            void* eax_16 = arg3[1]
            int32_t edi_1 = *(eax_16 + 8)
            int32_t esi_1 = *(eax_16 + 0x16c)
            
            if (edi_1 s> esi_1)
                edi_1 = esi_1
            
            sub_677bb0(edi_1 + mods.dp.d(sx.q(sub_746b2c()), esi_1 - edi_1 + 1))
        case 1
            if (result == 0)
                int32_t* var_e0_1 = arg3
                *(arg3[1] + 8)
                void var_94
                int16_t* eax_42 = sub_6ad9b0(&var_94)
                int32_t var_c_1 = 0
                sub_60c680(data_bac49c + 0xc, eax_42)
                sub_52e8a0(&var_94)
            else if (result == 1)
                void* edx_19 = arg3[1]
                sub_558ae0(result, *(edx_19 + 8), &var_c4, *(edx_19 + 0x16c), 0x20)
                int32_t var_c_2 = 1
                sub_60c680(data_bac49c + 0xc, &var_c4)
                sub_52e8a0(&var_c4)
        case 2
            void* eax_40 = arg3[1]
            int32_t edx_16 = arg3[2]
            uint64_t xmm2_1 = zx.q(*(eax_40 + 8))
            uint64_t xmm0_67 = zx.q(*(eax_40 + 0x16c))
            void* eax_41 = eax_40 + 0x42c
            double xmm5_2 = _mm_cvtepi32_pd(zx.q(*(eax_40 + 0x2d0)))
            double xmm1_26 = xmm5_2
            double xmm2_3 = _mm_cvtepi32_pd(xmm2_1) - _mm_cvtepi32_pd(xmm0_67)
            
            while (eax_41 u< edx_16)
                bool cond:6_1 = *(eax_41 + 0x15c) s< 4
                void* ecx_29 = *(eax_41 + 0x148)
                uint64_t xmm3_1 = zx.q(*(ecx_29 + 0x16c))
                uint64_t xmm4_1 = zx.q(*(ecx_29 + 0x2d0))
                double xmm0_70 = _mm_cvtepi32_pd(zx.q(*(ecx_29 + 8)))
                double xmm3_2 = _mm_cvtepi32_pd(xmm3_1)
                double xmm4_2 = _mm_cvtepi32_pd(xmm4_1)
                int32_t ecx_30
                
                if (cond:6_1)
                    ecx_30 = 0
                else
                    ecx_30 = *(ecx_29 + 0x434)
                
                if (xmm0_70 > xmm2_3)
                    xmm1_26 = xmm5_2
                    break
                
                if (xmm2_3 < xmm3_2)
                    if (ecx_30 == 0)
                        xmm1_26 =
                            (xmm4_2 - xmm5_2) * (xmm2_3 - xmm0_70) / (xmm3_2 - xmm0_70) + xmm5_2
                    else if (ecx_30 == 1)
                        double xmm2_5 = xmm2_3 - xmm0_70
                        double xmm3_4 = xmm3_2 - xmm0_70
                        xmm1_26 = (xmm4_2 - xmm5_2) * xmm2_5 * xmm2_5 / xmm3_4 / xmm3_4 + xmm5_2
                    else if (ecx_30 == 2)
                        double xmm2_6 = xmm2_3 - xmm3_2
                        double xmm3_5 = xmm3_2 - xmm0_70
                        xmm1_26 = xmm4_2 - (xmm4_2 - xmm5_2) * xmm2_6 * xmm2_6 / xmm3_5 / xmm3_5
                    
                    break
                
                eax_41 += 0x164
                xmm1_26 = xmm4_2
                xmm5_2 = xmm4_2
            
            if (xmm1_26 < 0.0)
                sub_677bb0(int.d(xmm1_26 - 0.5))
            else
                sub_677bb0(int.d(xmm1_26 + 0.5))
        case 3
            void* eax_5 = arg3[1]
            int32_t* ecx_1 = eax_5 + 8
            
            if (*ecx_1 s< *(eax_5 + 0x16c))
                ecx_1 = eax_5 + 0x16c
            
            sub_677bb0(*ecx_1)
        case 4
            void* eax_7 = arg3[1]
            int32_t* ecx_2 = eax_7 + 8
            
            if (*(eax_7 + 0x16c) s< *ecx_2)
                ecx_2 = eax_7 + 0x16c
            
            sub_677bb0(*ecx_2)
        case 5
            int32_t eax_13
            int32_t edx_5
            edx_5:eax_13 = sx.q(*(arg3[1] + 8))
            sub_677bb0((eax_13 ^ edx_5) - edx_5)
        case 6
            esi_8 = arg3[1]
            sub_677bb0(int.d(fconvert.s(__libm_sse2_sin_precise(mxcsr, x87control, 
                _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(esi_8 + 8))) * 0.0174532924f / 10f)))
                * _mm_cvtepi32_ps(zx.o(*(esi_8 + 0x16c)))))
        case 7
            esi_8 = arg3[1]
            sub_677bb0(int.d(fconvert.s(__libm_sse2_cos_precise(mxcsr, x87control, 
                _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(esi_8 + 8))) * 0.0174532924f / 10f)))
                * _mm_cvtepi32_ps(zx.o(*(esi_8 + 0x16c)))))
        case 8
            esi_8 = arg3[1]
            sub_677bb0(int.d(fconvert.s(__libm_sse2_tan_precise(mxcsr, x87control, 
                _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(esi_8 + 8))) * 0.0174532924f / 10f)))
                * _mm_cvtepi32_ps(zx.o(*(esi_8 + 0x16c)))))
        case 9
            void* eax_37 = arg3[1]
            int32_t esi_9 = *(eax_37 + 0x16c)
            int32_t edx_14 = *(eax_37 + 0x434)
            int32_t ecx_27 = *(eax_37 + 0x2d0)
            
            if (esi_9 == edx_14)
                sub_677bb0(ecx_27)
            else
                sub_677bb0(int.d(_mm_cvtepi32_pd(zx.q(*(eax_37 + 0x598) - ecx_27))
                    * _mm_cvtepi32_pd(zx.q(*(eax_37 + 8) - esi_9))
                    / _mm_cvtepi32_pd(zx.q(edx_14 - esi_9)) + _mm_cvtepi32_pd(zx.q(ecx_27))))
        case 0xa
            void* edx_3 = arg3[1]
            int32_t eax_9 = *(edx_3 + 8)
            int32_t ecx_4 = *(edx_3 + 0x2d0)
            int32_t edx_4 = *(edx_3 + 0x16c)
            
            if (eax_9 s>= ecx_4)
                if (edx_4 s>= ecx_4)
                    ecx_4 = edx_4
                    
                    if (edx_4 s> eax_9)
                        ecx_4 = eax_9
                
                sub_677bb0(ecx_4)
            else if (edx_4 s< eax_9)
                sub_677bb0(eax_9)
            else
                int32_t eax_10 = edx_4
                
                if (edx_4 s> ecx_4)
                    eax_10 = ecx_4
                
                sub_677bb0(eax_10)
        case 0xb
            void* edx_21 = arg3[1]
            sub_558ae0(result, *(edx_21 + 8), &var_c4, *(edx_21 + 0x16c), 0x30)
            int32_t var_c_3 = 2
            sub_60c680(data_bac49c + 0xc, &var_c4)
            sub_52e8a0(&var_c4)
        case 0xc
            if (result == 0)
                int32_t* var_e0_4 = arg3
                *(arg3[1] + 8)
                int32_t var_c_4 = 3
                void var_7c
                void var_4c
                int16_t* eax_44 = sub_6ae690(&var_4c, sub_6ad9b0(&var_7c))
                var_c_4.b = 4
                sub_60c680(data_bac49c + 0xc, eax_44)
                sub_52e8a0(&var_4c)
                sub_52e8a0(&var_7c)
            else if (result == 1)
                void* edx_26 = arg3[1]
                sub_558ae0(result, *(edx_26 + 8), &var_c4, *(edx_26 + 0x16c), 0x20)
                int32_t var_c_5 = 5
                void var_64
                int16_t* eax_45 = sub_6ae690(&var_64, &var_c4)
                var_c_5.b = 6
                sub_60c680(data_bac49c + 0xc, eax_45)
                sub_52e8a0(&var_64)
                sub_52e8a0(&var_c4)
        case 0xd
            void* edx_29 = arg3[1]
            sub_558ae0(result, *(edx_29 + 8), &var_c4, *(edx_29 + 0x16c), 0x30)
            int32_t var_c_6 = 7
            void var_34
            int16_t* eax_46 = sub_6ae690(&var_34, &var_c4)
            var_c_6.b = 8
            sub_60c680(data_bac49c + 0xc, eax_46)
            sub_52e8a0(&var_34)
            sub_52e8a0(&var_c4)
        case 0xe
            void* esi_4 = arg3[1]
            int32_t* ecx_8 = &var_d0
            bool cond:0_1 = *(esi_4 + 8) s>= 0
            var_d0 = 0
            
            if (cond:0_1)
                ecx_8 = esi_4 + 8
            
            sub_677bb0(int.d(
                __libm_sse2_sqrt_precise(mxcsr, x87control, _mm_cvtepi32_pd(zx.q(*ecx_8)))
                * _mm_cvtepi32_pd(zx.q(*(esi_4 + 0x16c)))))
        case 0xf
            void* eax_28 = arg3[1]
            int32_t edx_9 = *(eax_28 + 0x2d0) - *(eax_28 + 8)
            int32_t ecx_22 = *(eax_28 + 0x434) - *(eax_28 + 0x16c)
            sub_677bb0(int.d(__libm_sse2_sqrt_precise(mxcsr, x87control, 
                _mm_cvtepi32_pd(zx.q(edx_9 * edx_9 + ecx_22 * ecx_22)))))
        case 0x10
            void* eax_25 = arg3[1]
            int32_t ecx_17 = *(eax_25 + 0x16c)
            
            if (ecx_17 != 0)
                uint64_t xmm1_13 = zx.q(*(eax_25 + 8))
                double xmm0_40 = _mm_cvtepi32_pd(zx.q(ecx_17))
                double xmm1_15 = _mm_cvtepi32_pd(xmm1_13) / xmm0_40
                double xmm0_41 = -1.0
                
                if (not(xmm0_41 > xmm1_15))
                    xmm0_41 = 1.0
                    
                    if (not(xmm1_15 > xmm0_41))
                        xmm0_41 = xmm1_15
                
                sub_677bb0(sub_559040(
                    __libm_sse2_asin_precise(mxcsr, x87control, xmm0_41, xmm5, xmm6)
                    * 57.2957763671875 * 10.0))
            else
                sub_677bb0(0)
        case 0x11
            void* eax_26 = arg3[1]
            int32_t ecx_19 = *(eax_26 + 0x16c)
            
            if (ecx_19 == 0)
                sub_677bb0(0)
            else
                uint64_t xmm1_16 = zx.q(*(eax_26 + 8))
                double xmm0_45 = _mm_cvtepi32_pd(zx.q(ecx_19))
                double xmm1_18 = _mm_cvtepi32_pd(xmm1_16) / xmm0_45
                double xmm0_46 = -1.0
                
                if (not(xmm0_46 > xmm1_18))
                    xmm0_46 = 1.0
                    
                    if (not(xmm1_18 > xmm0_46))
                        xmm0_46 = xmm1_18
                
                sub_677bb0(sub_559040(
                    __libm_sse2_acos_precise(mxcsr, x87control, xmm0_46, xmm5, xmm6)
                    * 57.2957763671875 * 10.0))
        case 0x12
            void* eax_27 = arg3[1]
            int32_t ecx_20 = *(eax_27 + 0x16c)
            
            if (ecx_20 == 0)
                sub_677bb0(0)
            else
                sub_677bb0(sub_559040(__libm_sse2_atan_precise(mxcsr, x87control, 
                    _mm_cvtepi32_pd(zx.q(*(eax_27 + 8))) / _mm_cvtepi32_pd(zx.q(ecx_20)))
                    * 57.2957763671875 * 10.0))
        case 0x13
            void* esi_5 = arg3[1]
            int32_t* ecx_10 = &var_d0
            bool cond:1_1 = *(esi_5 + 8) s>= 1
            var_d0 = 1
            
            if (cond:1_1)
                ecx_10 = esi_5 + 8
            
            sub_677bb0(int.d(
                __libm_sse2_log_precise(mxcsr, x87control, _mm_cvtepi32_pd(zx.q(*ecx_10)))
                * _mm_cvtepi32_pd(zx.q(*(esi_5 + 0x16c)))))
        case 0x14
            void* esi_6 = arg3[1]
            int32_t* ecx_12 = &var_d0
            bool cond:2_1 = *(esi_6 + 8) s>= 1
            var_d0 = 1
            
            if (cond:2_1)
                ecx_12 = esi_6 + 8
            
            int16_t x87control_1
            int64_t xmm0_11
            x87control_1, xmm0_11 =
                __libm_sse2_log_precise(mxcsr, x87control, _mm_cvtepi32_pd(zx.q(*ecx_12)))
            var_d0.q = xmm0_11
            float xmm1_5[0x2] =
                fconvert.s(__libm_sse2_log_precise(mxcsr, x87control_1, 0x4000000000000000))
            sub_677bb0(int.d(var_d0.q / _mm_cvtps_pd(xmm1_5)
                * _mm_cvtepi32_pd(zx.q(*(esi_6 + 0x16c)))))
        case 0x15
            void* esi_7 = arg3[1]
            int32_t* ecx_14 = &var_d0
            bool cond:3_1 = *(esi_7 + 8) s>= 1
            var_d0 = 1
            
            if (cond:3_1)
                ecx_14 = esi_7 + 8
            
            sub_677bb0(int.d(
                __libm_sse2_log10_precise(mxcsr, x87control, _mm_cvtepi32_pd(zx.q(*ecx_14)))
                * _mm_cvtepi32_pd(zx.q(*(esi_7 + 0x16c)))))
        case 0x16
            void* ecx_25 = arg3[1]
            int32_t eax_32 = *(ecx_25 + 0x2d0) - *(ecx_25 + 8)
            var_d0.q = _mm_cvtepi32_pd(zx.q(*(ecx_25 + 0x434) - *(ecx_25 + 0x16c)))
            var_d0.q = _mm_cvtepi32_pd(zx.q(eax_32))
            long double x87_r6_1 = fconvert.t(var_d0.q)
            sub_9ab18a()
            var_d0.q = fconvert.d(x87_r6_1)
            sub_677bb0(mods.dp.d(sx.q(sub_559040(var_d0.q * 57.2957763671875 * 10.0) + 0xe10), 
                0xe10))
        case 0x17
            edx.w = *(arg3[1] + 8)
            sub_6adc10(&var_c4, edx.w)
            int32_t var_c_7 = 9
            sub_60c680(data_bac49c + 0xc, &var_c4)
            sub_52e8a0(&var_c4)
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_d0)
return result
