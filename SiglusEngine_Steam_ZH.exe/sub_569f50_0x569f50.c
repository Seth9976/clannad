// 函数: sub_569f50
// 地址: 0x569f50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1098
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = *arg6

if (arg4 != arg5)
    int32_t ecx = *arg4
    
    if (ecx == 0xf)
        sub_60ad20(arg3)
    else if (ecx == 0xe)
        sub_677bb0(*(arg3 + 0xa0))
    else if (ecx != 0)
        if (ecx != 1)
            if (ecx != 2)
                if (ecx != 3)
                    if (ecx != 4)
                        if (ecx != 5)
                            if (ecx != 6)
                                if (ecx != 7)
                                    if (ecx != 8)
                                        if (ecx == 0x12)
                                            sub_557e50(&arg4[1], arg2, arg3 + 0xa8, &arg4[1], arg5, 
                                                arg6)
                                        else if (ecx == 0x13)
                                            sub_557e50(&arg4[1], arg2, arg3 + 0xd4, &arg4[1], arg5, 
                                                arg6)
                                        else if (ecx == 0x14)
                                            sub_557e50(&arg4[1], arg2, arg3 + 0x100, &arg4[1], 
                                                arg5, arg6)
                                        else if (ecx == 0x15)
                                            sub_557e50(&arg4[1], arg2, arg3 + 0x12c, &arg4[1], 
                                                arg5, arg6)
                                        else if (ecx == 0x16)
                                            sub_557e50(&arg4[1], arg2, arg3 + 0x158, &arg4[1], 
                                                arg5, arg6)
                                        else if (ecx == 0x17)
                                            sub_557e50(&arg4[1], arg2, arg3 + 0x184, &arg4[1], 
                                                arg5, arg6)
                                        else if (ecx == 0x18)
                                            sub_557e50(&arg4[1], arg2, arg3 + 0x1b0, &arg4[1], 
                                                arg5, arg6)
                                        else if (ecx == 0x19)
                                            sub_557e50(&arg4[1], arg2, arg3 + 0x1dc, &arg4[1], 
                                                arg5, arg6)
                                        else if (ecx == 0x1a)
                                            sub_557e50(&arg4[1], arg2, arg3 + 0x208, &arg4[1], 
                                                arg5, arg6)
                                        else if (ecx != 0xd)
                                            if (ecx == 0xa)
                                                void* eax_22 = arg6[1]
                                                int32_t edx_10 = *(eax_22 + 0x2d0)
                                                int32_t ecx_22 = *(eax_22 + 0x16c)
                                                *(arg3 + 0xac) = *(eax_22 + 8)
                                                *(arg3 + 0xd8) = ecx_22
                                                *(arg3 + 0x104) = edx_10
                                            else
                                                int32_t mxcsr
                                                int16_t x87control
                                                
                                                if (ecx == 9)
                                                    void* eax_23 = arg6[1]
                                                    double xmm2_2 =
                                                        _mm_cvtepi32_pd(zx.q(*(eax_23 + 0x16c)))
                                                    double xmm0_2 =
                                                        _mm_cvtepi32_pd(zx.q(*(eax_23 + 8)))
                                                    double xmm2_4 =
                                                        xmm2_2 / 10.0 * 0.01745329238474369
                                                    double xmm2_8 =
                                                        _mm_cvtepi32_pd(zx.q(*(eax_23 + 0x2d0)))
                                                        / 10.0 * 0.01745329238474369
                                                    int16_t x87control_1
                                                    double xmm0_4
                                                    x87control_1, xmm0_4 = __libm_sse2_cos_precise(
                                                        mxcsr, x87control, xmm2_8)
                                                    int16_t x87control_2
                                                    double xmm0_6
                                                    x87control_2, xmm0_6 = __libm_sse2_sin_precise(
                                                        mxcsr, x87control_1, xmm2_4)
                                                    *(arg3 + 0xac) = int.d(
                                                        _mm_cvtepi32_pd(zx.q(*(arg3 + 0x130)))
                                                        - xmm0_6 * xmm0_2 * xmm0_4)
                                                    int16_t x87control_3
                                                    double xmm0_10
                                                    x87control_3, xmm0_10 = __libm_sse2_sin_precise(
                                                        mxcsr, x87control_2, xmm2_8)
                                                    *(arg3 + 0xd8) = int.d(xmm0_10 * xmm0_2
                                                        + _mm_cvtepi32_pd(zx.q(*(arg3 + 0x15c))))
                                                    double xmm0_15 = __libm_sse2_cos_precise(mxcsr, 
                                                        x87control_3, xmm2_4) * xmm0_2
                                                    *(arg3 + 0x104) = int.d(
                                                        _mm_cvtepi32_pd(zx.q(*(arg3 + 0x188)))
                                                        - xmm0_15 * xmm0_4)
                                                else if (ecx == 0xb)
                                                    void* eax_26 = arg6[1]
                                                    int32_t edx_11 = *(eax_26 + 0x2d0)
                                                    int32_t ecx_23 = *(eax_26 + 0x16c)
                                                    *(arg3 + 0x130) = *(eax_26 + 8)
                                                    *(arg3 + 0x15c) = ecx_23
                                                    *(arg3 + 0x188) = edx_11
                                                else if (ecx == 0x10)
                                                    void* eax_27 = arg6[1]
                                                    double xmm2_10 =
                                                        _mm_cvtepi32_pd(zx.q(*(eax_27 + 0x16c)))
                                                    double xmm0_18 =
                                                        _mm_cvtepi32_pd(zx.q(*(eax_27 + 8)))
                                                    double xmm2_12 =
                                                        xmm2_10 / 10.0 * 0.01745329238474369
                                                    double xmm2_16 =
                                                        _mm_cvtepi32_pd(zx.q(*(eax_27 + 0x2d0)))
                                                        / 10.0 * 0.01745329238474369
                                                    int16_t x87control_4
                                                    double xmm0_20
                                                    x87control_4, xmm0_20 = __libm_sse2_cos_precise(
                                                        mxcsr, x87control, xmm2_16)
                                                    int16_t x87control_5
                                                    double xmm0_22
                                                    x87control_5, xmm0_22 = __libm_sse2_sin_precise(
                                                        mxcsr, x87control_4, xmm2_12)
                                                    *(arg3 + 0x130) = int.d(
                                                        xmm0_22 * xmm0_18 * xmm0_20
                                                        + _mm_cvtepi32_pd(zx.q(*(arg3 + 0xac))))
                                                    int16_t x87control_6
                                                    double xmm0_27
                                                    x87control_6, xmm0_27 = __libm_sse2_sin_precise(
                                                        mxcsr, x87control_5, xmm2_16)
                                                    *(arg3 + 0x15c) = int.d(xmm0_27 * xmm0_18
                                                        + _mm_cvtepi32_pd(zx.q(*(arg3 + 0xd8))))
                                                    *(arg3 + 0x188) = int.d(__libm_sse2_cos_precise(
                                                        mxcsr, x87control_6, xmm2_12) * xmm0_18
                                                        * xmm0_20
                                                        + _mm_cvtepi32_pd(zx.q(*(arg3 + 0x104))))
                                                else if (ecx == 0xc)
                                                    void* eax_30 = arg6[1]
                                                    int32_t edx_12 = *(eax_30 + 0x2d0)
                                                    int32_t ecx_24 = *(eax_30 + 0x16c)
                                                    *(arg3 + 0x1b4) = *(eax_30 + 8)
                                                    *(arg3 + 0x1e0) = ecx_24
                                                    *(arg3 + 0x20c) = edx_12
                                                else if (ecx != 0x11)
                                                    if (ecx == 0x1b)
                                                        void* eax_32 = arg6[1]
                                                        sub_60b670(arg3, *(eax_32 + 8), 
                                                            *(eax_32 + 0x16c), *(eax_32 + 0x2d0), 
                                                            *(eax_32 + 0x434), *(eax_32 + 0x598))
                                                    else if (ecx != 0x1c)
                                                        if (ecx != 0x1d)
                                                            if (ecx != 0x1e)
                                                                if (ecx != 0x1f)
                                                                    int32_t var_1c_1 = 7
                                                                    int32_t var_20_1 = 0
                                                                    int16_t var_30 = 0
                                                                    sub_52e720(&var_30, 0xad91d4, 0x17)
                                                                    int32_t var_8_1 = 0
                                                                    sub_684160(data_bac424, 2, &var_30)
                                                                    sub_52e8a0(&var_30)
                                                                else if (result == 0)
                                                                    sub_677bb0(*(arg3 + 0x25c))
                                                                else if (result == 1)
                                                                    int32_t ecx_34
                                                                    ecx_34.b = arg6[1][2] != 0
                                                                    *(arg3 + 0x25c) = ecx_34
                                                            else if (result == 0)
                                                                sub_677bb0(*(arg3 + 0x258))
                                                            else if (result == 1)
                                                                int32_t ecx_32
                                                                ecx_32.b = arg6[1][2] != 0
                                                                *(arg3 + 0x258) = ecx_32
                                                        else if (result == 0)
                                                            sub_677bb0(*(arg3 + 0x254))
                                                        else if (result == 1)
                                                            int32_t ecx_30
                                                            ecx_30.b = arg6[1][2] != 0
                                                            *(arg3 + 0x254) = ecx_30
                                                    else if (result == 0)
                                                        sub_677bb0(*(arg3 + 0x250))
                                                    else if (result == 1)
                                                        int32_t ecx_28
                                                        ecx_28.b = arg6[1][2] != 0
                                                        *(arg3 + 0x250) = ecx_28
                                                else if (result == 0)
                                                    sub_677bb0(*(arg3 + 0x238))
                                                else if (result == 1)
                                                    result = *(arg6[1] + 8)
                                                    
                                                    if (result s>= 0)
                                                        if (result s> 0xff)
                                                            result = 0xff
                                                        
                                                        *(arg3 + 0x238) = result
                                                    else
                                                        *(arg3 + 0x238) = 0
                                        else if (result == 0)
                                            sub_677bb0(*(arg3 + 0x234))
                                        else if (result == 1)
                                            *(arg3 + 0x234) = *(arg6[1] + 8)
                                    else if (result == 0)
                                        sub_677bb0(*(arg3 + 0x20c))
                                    else if (result == 1)
                                        *(arg3 + 0x20c) = *(arg6[1] + 8)
                                else if (result == 0)
                                    sub_677bb0(*(arg3 + 0x1e0))
                                else if (result == 1)
                                    *(arg3 + 0x1e0) = *(arg6[1] + 8)
                            else if (result == 0)
                                sub_677bb0(*(arg3 + 0x1b4))
                            else if (result == 1)
                                *(arg3 + 0x1b4) = *(arg6[1] + 8)
                        else if (result == 0)
                            sub_677bb0(*(arg3 + 0x188))
                        else if (result == 1)
                            *(arg3 + 0x188) = *(arg6[1] + 8)
                    else if (result == 0)
                        sub_677bb0(*(arg3 + 0x15c))
                    else if (result == 1)
                        *(arg3 + 0x15c) = *(arg6[1] + 8)
                else if (result == 0)
                    sub_677bb0(*(arg3 + 0x130))
                else if (result == 1)
                    *(arg3 + 0x130) = *(arg6[1] + 8)
            else if (result == 0)
                sub_677bb0(*(arg3 + 0x104))
            else if (result == 1)
                *(arg3 + 0x104) = *(arg6[1] + 8)
        else if (result == 0)
            sub_677bb0(*(arg3 + 0xd8))
        else if (result == 1)
            *(arg3 + 0xd8) = *(arg6[1] + 8)
    else if (result == 0)
        sub_677bb0(*(arg3 + 0xac))
    else if (result == 1)
        *(arg3 + 0xac) = *(arg6[1] + 8)
else
    arg6[5] = arg3

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
