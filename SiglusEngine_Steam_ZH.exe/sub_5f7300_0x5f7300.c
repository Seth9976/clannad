// 函数: sub_5f7300
// 地址: 0x5f7300
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd2b7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_70 = edi
void* eax_3 = data_bac4a0
int32_t ecx = *(eax_3 + 8)
int32_t result = *(eax_3 + 0xc)
int32_t i = 0
int32_t result_1 = result
int32_t i_1 = 0

if (*(edi + 0x1558) s> 0)
    double xmm0_1 = 10.0
    int64_t xmm2_1 = (zx.o(0)).q
    double xmm4_1 = 6.2831854820251465
    double xmm0_2 = 1000.0
    double xmm0_3 = 0.01745329238474369
    int64_t var_84_1 = (zx.o(0)).q
    double var_7c_1 = xmm4_1
    
    do
        int32_t* ebx_2 = i * 0x58 + *(edi + 0x155c)
        
        if (*ebx_2 s> 0)
            result = *(edi + 0x214)
            int32_t esi_1 = 0
            int32_t var_30_1 = 0
            
            if (result != 0)
                if (result == 1)
                    int32_t ecx_1 = *(edi + 0x220)
                    
                    if (ecx_1 s<= 0)
                        goto label_5f7476
                    
                    void* edi_1 = edi + 0x218
                    void* ecx_2 = edi_1
                    
                    if (*(edi + 0x21c) s< *edi_1)
                        ecx_2 = edi + 0x21c
                    
                    if (*edi_1 s< *(edi + 0x21c))
                        edi_1 = edi + 0x21c
                    
                    int32_t ecx_3 = *ecx_2
                    result = divs.dp.d(sx.q((*edi_1 - ecx_3 + 1) * modu.dp.d(0:(ebx_2[9]), ecx_1)), 
                        ecx_1)
                    esi_1 = ecx_3 + result
                label_5f7465:
                    i = i_1
                    edi = var_70
                    goto label_5f746b
                
                if (result == 2)
                    void* esi_3 = edi + 0x218
                    void* ecx_4 = esi_3
                    
                    if (*(edi + 0x21c) s< *(edi + 0x218))
                        ecx_4 = edi + 0x21c
                    
                    if (*esi_3 s< *(edi + 0x21c))
                        esi_3 = edi + 0x21c
                    
                    int32_t edi_2 = *ecx_4
                    int32_t esi_4 = *esi_3
                    int32_t eax_15
                    int32_t edx_6
                    edx_6:eax_15 = sx.q(sub_746b2c())
                    xmm2_1 = var_84_1
                    result = divs.dp.d(edx_6:eax_15, esi_4 - edi_2 + 1)
                    xmm4_1 = var_7c_1
                    esi_1 = edi_2 + mods.dp.d(edx_6:eax_15, esi_4 - edi_2 + 1)
                    goto label_5f7465
                
            label_5f7476:
                int32_t* ecx_5 = *(edi + 0x1568)
                result = (ecx_5[1] - *ecx_5) s>> 3
                
                if (esi_1 s< result)
                    int32_t eax_18 = *ebx_2
                    int32_t var_24_1 = 0xff
                    int32_t ecx_7
                    
                    if (eax_18 == 1)
                        int32_t ecx_9 = ebx_2[2]
                        int32_t eax_25 = ebx_2[1]
                        int32_t eax_26
                        
                        if (ecx_9 != 0)
                            if (ecx_9 s<= 0)
                                if (ecx_9 s< 0)
                                    if (eax_25 s< ecx_9)
                                        eax_25 = ecx_9
                                    else if (eax_25 s> 0)
                                        eax_25 = 0
                            else if (eax_25 s< 0)
                                eax_25 = 0
                            else if (eax_25 s> ecx_9)
                                eax_25 = ecx_9
                            
                            eax_26 = divs.dp.d(sx.q(eax_25 * 0xff), ecx_9)
                        else
                            eax_26 = 0xff
                        
                        ecx_7 = eax_26 * 0xff
                    label_5f753d:
                        var_24_1 = ecx_7 s/ 0xff
                    else if (eax_18 == 3)
                        int32_t ecx_6 = ebx_2[2]
                        int32_t eax_21 = ebx_2[1]
                        
                        if (ecx_6 != 0)
                            if (ecx_6 s<= 0)
                                if (ecx_6 s< 0)
                                    if (eax_21 s< ecx_6)
                                        eax_21 = ecx_6
                                    else if (eax_21 s> 0)
                                        eax_21 = 0
                            else if (eax_21 s< 0)
                                eax_21 = 0
                            else if (eax_21 s> ecx_6)
                                eax_21 = ecx_6
                            
                            ecx_7 = (0xff - divs.dp.d(sx.q(eax_21 * 0xff), ecx_6)) * 0xff
                        else
                            ecx_7 = ecx_6 * 0xff
                        
                        goto label_5f753d
                    result = *(edi + 0x20c)
                    double var_5c
                    double var_54
                    int32_t mxcsr
                    int16_t x87control
                    
                    if (result == 1)
                        int32_t eax_33 = ebx_2[7]
                        int32_t ecx_10 = ebx_2[3]
                        int32_t edx_15 = ebx_2[4]
                        int32_t var_18_1 = ecx_10
                        int32_t var_1c_1 = edx_15
                        
                        if (eax_33 != 0)
                            int32_t eax_34 = ebx_2[9]
                            var_18_1 = ecx_10 + int.d(1000f / _mm_cvtepi32_ps(zx.o(eax_33)) *
                                _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_34)) f+
                                *((eax_34 u>> 0x1f << 3) + &data_b0dbb0)))
                        
                        int32_t eax_37 = ebx_2[8]
                        
                        if (eax_37 != 0)
                            int32_t eax_38 = ebx_2[9]
                            var_1c_1 = edx_15 + int.d(1000f / _mm_cvtepi32_ps(zx.o(eax_37)) *
                                _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_38)) f+
                                *((eax_38 u>> 0x1f << 3) + &data_b0dbb0)))
                        
                        int32_t ecx_12 = ebx_2[0xa]
                        
                        if (ecx_12 s> 0 && ebx_2[0xc] s> 0)
                            uint32_t temp1_6 = modu.dp.d(0:(ebx_2[0xe]), ecx_12)
                            double xmm1_6 = _mm_cvtepi32_pd(zx.q(ecx_12))
                            xmm2_1 f- xmm1_6
                            uint32_t eax_42
                            eax_42:1.b = (xmm2_1 f== xmm1_6 ? 1 : 0) << 6
                                | (is_unordered.q(xmm2_1, xmm1_6) ? 1 : 0) << 2
                                | (xmm2_1 f< xmm1_6 ? 1 : 0)
                            double xmm0_18 = _mm_cvtepi32_pd(zx.q(temp1_6)) f+
                                *((temp1_6 u>> 0x1f << 3) + &data_b0dbb0)
                            bool p_2 = unimplemented  {test ah, 0x44}
                            double xmm0_19
                            
                            if (p_2)
                                xmm0_19 =
                                    (xmm0_18 f- xmm2_1) * xmm4_1 / (xmm1_6 f- xmm2_1) f+ xmm2_1
                            else
                                xmm0_19 = xmm4_1
                            
                            double xmm0_23
                            x87control, xmm0_23 =
                                __libm_sse2_sin_precise(mxcsr, x87control, xmm0_19)
                            var_18_1 += int.d(xmm0_23 * _mm_cvtepi32_pd(zx.q(ebx_2[0xc])))
                        
                        int32_t ecx_13 = ebx_2[0xb]
                        
                        if (ecx_13 s> 0 && ebx_2[0xd] s> 0)
                            uint32_t temp1_7 = modu.dp.d(0:(ebx_2[0xe]), ecx_13)
                            double xmm2_3 = _mm_cvtepi32_pd(zx.q(ecx_13))
                            var_84_1 f- xmm2_3
                            uint32_t eax_45
                            eax_45:1.b = (var_84_1 f== xmm2_3 ? 1 : 0) << 6
                                | (is_unordered.q(var_84_1, xmm2_3) ? 1 : 0) << 2
                                | (var_84_1 f< xmm2_3 ? 1 : 0)
                            double xmm0_27 = _mm_cvtepi32_pd(zx.q(temp1_7)) f+
                                *((temp1_7 u>> 0x1f << 3) + &data_b0dbb0)
                            bool p_4 = unimplemented  {test ah, 0x44}
                            double xmm0_28
                            
                            if (p_4)
                                xmm0_28 = (xmm0_27 f- var_84_1) * var_7c_1
                                    / (xmm2_3 f- var_84_1) f+ var_84_1
                            else
                                xmm0_28 = var_7c_1
                            
                            double xmm0_32
                            x87control, xmm0_32 =
                                __libm_sse2_sin_precise(mxcsr, x87control, xmm0_28)
                            var_1c_1 += int.d(xmm0_32 * _mm_cvtepi32_pd(zx.q(ebx_2[0xd])))
                        
                        int32_t var_48_1
                        
                        if (var_18_1 s<= 0)
                            var_48_1 = ecx - mods.dp.d(sx.q(neg.d(var_18_1)), ecx)
                        else
                            var_48_1 = mods.dp.d(sx.q(var_18_1), ecx)
                        
                        int32_t var_18_2
                        
                        if (var_1c_1 s<= 0)
                            var_18_2 = result_1 - mods.dp.d(sx.q(neg.d(var_1c_1)), result_1)
                        else
                            var_18_2 = mods.dp.d(sx.q(var_1c_1), result_1)
                        
                        double var_6c
                        var_6c:4.d = ebx_2[0x12]
                        var_5c:4.d = ebx_2[0x13]
                        char var_36_1 = 0
                        char var_25_1 = 0
                        char result_3 = 0
                        char var_37_1 = 0
                        void var_bc
                        int32_t eax_63 = *(*sub_54d980(*(edi + 0x1568), &var_bc, esi_1) + 4)
                        int32_t* var_b8
                        
                        if (var_b8 != 0)
                            bool cond:6_1 = var_b8[1] != 1
                            var_b8[1]
                            var_b8[1] -= 1
                            
                            if (not(cond:6_1))
                                (*(*var_b8 + 4))(eax_2)
                                bool cond:8_1 = var_b8[2] != 1
                                var_b8[2]
                                var_b8[2] -= 1
                                
                                if (not(cond:8_1))
                                    (*(*var_b8 + 8))()
                        
                        void var_cc
                        int32_t eax_70 = *(*sub_54d980(*(edi + 0x1568), &var_cc, esi_1) + 8)
                        int32_t* var_c8
                        
                        if (var_c8 != 0)
                            bool cond:7_1 = var_c8[1] != 1
                            var_c8[1]
                            var_c8[1] -= 1
                            
                            if (not(cond:7_1))
                                (*(*var_c8 + 4))(eax_2)
                                bool cond:10_1 = var_c8[2] != 1
                                var_c8[2]
                                var_c8[2] -= 1
                                
                                if (not(cond:10_1))
                                    (*(*var_c8 + 8))()
                        
                        void var_dc
                        void* eax_76 = *sub_54d980(*(edi + 0x1568), &var_dc, esi_1)
                        int32_t ecx_26 = *(eax_76 + 0x1c)
                        var_54:4.d = *(eax_76 + 0x20)
                        int32_t* var_d8
                        
                        if (var_d8 != 0)
                            bool cond:9_1 = var_d8[1] != 1
                            var_d8[1]
                            var_d8[1] -= 1
                            
                            if (not(cond:9_1))
                                (*(*var_d8 + 4))(eax_2)
                                bool cond:16_1 = var_d8[2] != 1
                                var_d8[2]
                                var_d8[2] -= 1
                                
                                if (not(cond:16_1))
                                    (*(*var_d8 + 8))()
                        
                        void var_c4
                        void* ecx_31 = *sub_54d980(*(edi + 0x1568), &var_c4, esi_1)
                        var_54.d = *(ecx_31 + 0x1c)
                        var_54:4.d = *(ecx_31 + 0x20)
                        int32_t* var_c0
                        
                        if (var_c0 != 0)
                            bool cond:15_1 = var_c0[1] != 1
                            var_c0[1]
                            var_c0[1] -= 1
                            
                            if (not(cond:15_1))
                                (*(*var_c0 + 4))(eax_2)
                                bool cond:19_1 = var_c0[2] != 1
                                var_c0[2]
                                var_c0[2] -= 1
                                
                                if (not(cond:19_1))
                                    (*(*var_c0 + 8))()
                        
                        char eax_91 = var_36_1
                        
                        if (var_48_1 - ecx_26 * var_6c:4.d s/ 0x3e8 s< 0)
                            eax_91 = 1
                        
                        char ecx_43 = var_25_1
                        
                        if ((eax_63 - ecx_26) * var_6c:4.d s/ 0x3e8 + var_48_1 s>= ecx)
                            ecx_43 = 1
                        
                        uint32_t result_2 = zx.d(result_3)
                        
                        if (var_18_2 - var_54:4.d * var_5c:4.d s/ 0x3e8 s< 0)
                            result_2 = 1
                        
                        uint32_t ecx_52 = zx.d(var_37_1)
                        
                        if ((eax_70 - var_54:4.d) * var_5c:4.d s/ 0x3e8 + var_18_2 s>= result_1)
                            ecx_52 = 1
                        
                        void* ebx_7 = i_1 * 0x4c0
                        int32_t eax_106 = *(edi + 0x1588)
                        var_54:4.d = ecx_52
                        sub_628eb0(eax_106, ebx_7 + 0x120 + eax_106, edi + 0x12d0, 
                            ebx_7 + 4 + eax_106)
                        void var_ac
                        sub_54d980(*(edi + 0x1568), &var_ac, esi_1)
                        int32_t var_8_1 = 0
                        sub_5b17d0(*(edi + 0x1588) + 0xd8 + ebx_7, &var_ac)
                        int32_t var_8_2 = 0xffffffff
                        int32_t* var_a8
                        
                        if (var_a8 != 0)
                            bool cond:18_1 = var_a8[1] != 1
                            var_a8[1]
                            var_a8[1] -= 1
                            
                            if (not(cond:18_1))
                                (*(*var_a8 + 4))(eax_2)
                                bool cond:20_1 = var_a8[2] != 1
                                var_a8[2]
                                var_a8[2] -= 1
                                
                                if (not(cond:20_1))
                                    (*(*var_a8 + 8))()
                        
                        int32_t eax_111 = *(edi + 0x1588)
                        float xmm0_35 = _mm_cvtepi32_ps(zx.o(var_48_1))
                        *(ebx_7 + eax_111 + 0x18) = 0
                        int32_t eax_112 = *(edi + 0x1588)
                        *(ebx_7 + eax_112 + 0x1c) = xmm0_35 f+ *(ebx_7 + eax_112 + 0x1c)
                        int32_t eax_113 = *(edi + 0x1588)
                        *(ebx_7 + eax_113 + 0x20) =
                            _mm_cvtepi32_ps(zx.o(var_18_2)) f+ *(ebx_7 + eax_113 + 0x20)
                        float xmm0_41 = _mm_cvtepi32_ps(zx.o(var_6c:4.d))
                        int32_t eax_114 = *(edi + 0x1588)
                        float xmm0_42 = xmm0_41 / 1000f
                        var_6c:4.d = xmm0_42
                        *(ebx_7 + eax_114 + 0x34) = xmm0_42 f* *(ebx_7 + eax_114 + 0x34)
                        float xmm0_45 = _mm_cvtepi32_ps(zx.o(var_5c:4.d))
                        int32_t eax_115 = *(edi + 0x1588)
                        float xmm0_46 = xmm0_45 / 1000f
                        var_5c:4.d = xmm0_46
                        *(ebx_7 + eax_115 + 0x38) = xmm0_46 f* *(ebx_7 + eax_115 + 0x38)
                        int32_t esi_8 = *(edi + 0x1588)
                        *(ebx_7 + esi_8 + 0x7c) =
                            (zx.d(*(ebx_7 + esi_8 + 0x7c)) * var_24_1 s/ 0xff).b
                        
                        if (eax_91 != 0 || ecx_43 != 0)
                            int32_t eax_120 = *(edi + 0x1588)
                            sub_628eb0(eax_120, ebx_7 + 0x250 + eax_120, edi + 0x12d0, 
                                ebx_7 + 0x134 + eax_120)
                            void var_9c
                            sub_54d980(*(edi + 0x1568), &var_9c, var_30_1)
                            int32_t var_8_3 = 1
                            sub_5b17d0(ebx_7 + 0x208 + *(edi + 0x1588), &var_9c)
                            int32_t var_8_4 = 0xffffffff
                            int32_t* var_98
                            
                            if (var_98 != 0)
                                bool cond:22_1 = var_98[1] != 1
                                var_98[1]
                                var_98[1] -= 1
                                
                                if (not(cond:22_1))
                                    (*(*var_98 + 4))(eax_2)
                                    bool cond:23_1 = var_98[2] != 1
                                    var_98[2]
                                    var_98[2] -= 1
                                    
                                    if (not(cond:23_1))
                                        (*(*var_98 + 8))()
                            
                            int32_t ecx_74 = ecx
                            *(ebx_7 + *(edi + 0x1588) + 0x148) = 0
                            
                            if (eax_91 == 0)
                                ecx_74 = neg.d(ecx_74)
                            
                            int32_t eax_126 = *(edi + 0x1588)
                            *(ebx_7 + eax_126 + 0x14c) = _mm_cvtepi32_ps(zx.o(ecx_74))
                                + _mm_cvtepi32_ps(zx.o(var_48_1)) f+ *(ebx_7 + eax_126 + 0x14c)
                            int32_t eax_127 = *(edi + 0x1588)
                            *(ebx_7 + eax_127 + 0x150) =
                                _mm_cvtepi32_ps(zx.o(var_18_2)) f+ *(ebx_7 + eax_127 + 0x150)
                            int32_t eax_128 = *(edi + 0x1588)
                            *(ebx_7 + eax_128 + 0x164) = var_6c:4.d f* *(ebx_7 + eax_128 + 0x164)
                            int32_t eax_129 = *(edi + 0x1588)
                            *(ebx_7 + eax_129 + 0x168) = var_5c:4.d f* *(ebx_7 + eax_129 + 0x168)
                            int32_t esi_10 = *(edi + 0x1588)
                            *(ebx_7 + esi_10 + 0x1ac) =
                                (zx.d(*(ebx_7 + esi_10 + 0x1ac)) * var_24_1 s/ 0xff).b
                        
                        result = result_2
                        char ecx_79
                        
                        if (result.b == 0)
                            ecx_79 = var_54:4.b
                        
                        if (result.b != 0 || ecx_79 != 0)
                            int32_t eax_134 = *(edi + 0x1588)
                            sub_628eb0(eax_134, ebx_7 + 0x380 + eax_134, edi + 0x12d0, 
                                ebx_7 + 0x264 + eax_134)
                            void var_8c
                            sub_54d980(*(edi + 0x1568), &var_8c, var_30_1)
                            int32_t var_8_5 = 2
                            sub_5b17d0(((i_1 << 2) + 2) * 0x130 + 0xd8 + *(edi + 0x1588), &var_8c)
                            int32_t var_8_6 = 0xffffffff
                            int32_t* var_88
                            
                            if (var_88 != 0)
                                bool cond:25_1 = var_88[1] != 1
                                var_88[1]
                                var_88[1] -= 1
                                
                                if (not(cond:25_1))
                                    (*(*var_88 + 4))(eax_2)
                                    bool cond:26_1 = var_88[2] != 1
                                    var_88[2]
                                    var_88[2] -= 1
                                    
                                    if (not(cond:26_1))
                                        (*(*var_88 + 8))()
                            
                            int32_t result_4 = result_1
                            *(ebx_7 + *(edi + 0x1588) + 0x278) = 0
                            int32_t eax_141 = *(edi + 0x1588)
                            *(ebx_7 + eax_141 + 0x27c) =
                                _mm_cvtepi32_ps(zx.o(var_48_1)) f+ *(ebx_7 + eax_141 + 0x27c)
                            
                            if (result_2.b == 0)
                                result_4 = neg.d(result_4)
                            
                            int32_t eax_142 = *(edi + 0x1588)
                            *(ebx_7 + eax_142 + 0x280) = _mm_cvtepi32_ps(zx.o(result_4))
                                + _mm_cvtepi32_ps(zx.o(var_18_2)) f+ *(ebx_7 + eax_142 + 0x280)
                            int32_t eax_143 = *(edi + 0x1588)
                            *(ebx_7 + eax_143 + 0x294) = var_6c:4.d f* *(ebx_7 + eax_143 + 0x294)
                            int32_t eax_144 = *(edi + 0x1588)
                            *(ebx_7 + eax_144 + 0x298) = var_5c:4.d f* *(ebx_7 + eax_144 + 0x298)
                            int32_t esi_12 = *(edi + 0x1588)
                            ecx_79 = var_54:4.b
                            *(ebx_7 + esi_12 + 0x2dc) =
                                (zx.d(*(ebx_7 + esi_12 + 0x2dc)) * var_24_1 s/ 0xff).b
                            result = result_2
                        
                        if ((eax_91 != 0 || ecx_43 != 0) && (result.b != 0 || ecx_79 != 0))
                            int32_t eax_149 = *(edi + 0x1588)
                            sub_628eb0(eax_149, ebx_7 + 0x4b0 + eax_149, edi + 0x12d0, 
                                ebx_7 + 0x394 + eax_149)
                            void var_94
                            sub_54d980(*(edi + 0x1568), &var_94, var_30_1)
                            int32_t var_8_7 = 3
                            sub_5b17d0(((i_1 << 2) + 3) * 0x130 + 0xd8 + *(edi + 0x1588), &var_94)
                            int32_t var_8_8 = 0xffffffff
                            int32_t* var_90
                            
                            if (var_90 != 0)
                                bool cond:28_1 = var_90[1] != 1
                                var_90[1]
                                var_90[1] -= 1
                                
                                if (not(cond:28_1))
                                    (*(*var_90 + 4))(eax_2)
                                    bool cond:30_1 = var_90[2] != 1
                                    var_90[2]
                                    var_90[2] -= 1
                                    
                                    if (not(cond:30_1))
                                        (*(*var_90 + 8))()
                            
                            int32_t ecx_104 = ecx
                            *(ebx_7 + *(edi + 0x1588) + 0x3a8) = 0
                            
                            if (eax_91 == 0)
                                ecx_104 = neg.d(ecx_104)
                            
                            int32_t eax_156 = *(edi + 0x1588)
                            int32_t result_5 = result_1
                            *(ebx_7 + eax_156 + 0x3ac) = _mm_cvtepi32_ps(zx.o(ecx_104))
                                + _mm_cvtepi32_ps(zx.o(var_48_1)) f+ *(ebx_7 + eax_156 + 0x3ac)
                            
                            if (result_2.b == 0)
                                result_5 = neg.d(result_5)
                            
                            int32_t eax_157 = *(edi + 0x1588)
                            *(ebx_7 + eax_157 + 0x3b0) = _mm_cvtepi32_ps(zx.o(result_5))
                                + _mm_cvtepi32_ps(zx.o(var_18_2)) f+ *(ebx_7 + eax_157 + 0x3b0)
                            int32_t eax_158 = *(edi + 0x1588)
                            *(ebx_7 + eax_158 + 0x3c4) = var_6c:4.d f* *(ebx_7 + eax_158 + 0x3c4)
                            int32_t eax_159 = *(edi + 0x1588)
                            *(ebx_7 + eax_159 + 0x3c8) = var_5c:4.d f* *(ebx_7 + eax_159 + 0x3c8)
                            int32_t esi_16 = *(edi + 0x1588)
                            result = zx.d(*(ebx_7 + esi_16 + 0x40c)) * var_24_1 s/ 0xff
                            *(ebx_7 + esi_16 + 0x40c) = result.b
                    else if (result == 2)
                        int32_t eax_163 = ebx_2[7]
                        int32_t ecx_112 = ebx_2[0x14] + 0x7d0
                        int32_t esi_17
                        
                        if (eax_163 s<= 0)
                            esi_17 = ecx_112 - ebx_2[9]
                        else
                            esi_17 = ebx_2[9]
                        
                        var_54 = xmm2_1
                        double xmm3_2 = _mm_cvtepi32_pd(zx.q(ebx_2[5]))
                        double var_44_1 = xmm3_2
                        
                        if (eax_163 != 0)
                            double xmm0_83 = _mm_cvtepi32_pd(zx.q(esi_17))
                            float xmm2_6 = _mm_cvtepi32_ps(zx.o(eax_163))
                            float xmm1_21 =
                                _mm_cvtpd_ps(xmm0_83 f+ *((esi_17 u>> 0x1f << 3) + &data_b0dbb0))
                            xmm2_1 = var_84_1
                            xmm3_2 =
                                fconvert.d(1000f / xmm2_6 / xmm2_6 * xmm1_21 * xmm1_21) + xmm3_2
                            var_44_1 = xmm3_2
                        
                        int32_t ecx_113 = ebx_2[0xa]
                        
                        if (ecx_113 s> 0 && ebx_2[0xc] s> 0)
                            int32_t eax_167
                            int32_t edx_67
                            edx_67:eax_167 = sx.q(ebx_2[0xe])
                            double xmm1_23 = _mm_cvtepi32_pd(zx.q(ecx_113))
                            xmm2_1 f- xmm1_23
                            double xmm0_92 =
                                _mm_cvtepi32_pd(zx.q(mods.dp.d(edx_67:eax_167, ecx_113)))
                            int32_t eax_168
                            eax_168:1.b = (xmm2_1 f== xmm1_23 ? 1 : 0) << 6
                                | (is_unordered.q(xmm2_1, xmm1_23) ? 1 : 0) << 2
                                | (xmm2_1 f< xmm1_23 ? 1 : 0)
                            bool p_6 = unimplemented  {test ah, 0x44}
                            double xmm0_93
                            
                            if (p_6)
                                xmm0_93 =
                                    (xmm0_92 f- xmm2_1) * xmm4_1 / (xmm1_23 f- xmm2_1) f+ xmm2_1
                            else
                                xmm0_93 = xmm4_1
                            
                            double xmm0_97
                            x87control, xmm0_97 =
                                __libm_sse2_sin_precise(mxcsr, x87control, xmm0_93)
                            xmm2_1 = var_84_1
                            xmm3_2 = var_44_1
                            var_54 = xmm0_97 * _mm_cvtepi32_pd(zx.q(ebx_2[0xc])) f+ xmm2_1
                        
                        int32_t ecx_114 = ebx_2[0xb]
                        
                        if (ecx_114 s> 0 && ebx_2[0xd] s> 0)
                            int32_t eax_170
                            int32_t edx_69
                            edx_69:eax_170 = sx.q(ebx_2[0xe])
                            double xmm1_28 = _mm_cvtepi32_pd(zx.q(ecx_114))
                            xmm2_1 f- xmm1_28
                            double xmm0_101 =
                                _mm_cvtepi32_pd(zx.q(mods.dp.d(edx_69:eax_170, ecx_114)))
                            int32_t eax_171
                            eax_171:1.b = (xmm2_1 f== xmm1_28 ? 1 : 0) << 6
                                | (is_unordered.q(xmm2_1, xmm1_28) ? 1 : 0) << 2
                                | (xmm2_1 f< xmm1_28 ? 1 : 0)
                            bool p_8 = unimplemented  {test ah, 0x44}
                            double xmm0_102
                            
                            if (p_8)
                                xmm0_102 =
                                    (xmm0_101 f- xmm2_1) * var_7c_1 / (xmm1_28 f- xmm2_1) f+ xmm2_1
                            else
                                xmm0_102 = var_7c_1
                            
                            double xmm0_106
                            x87control, xmm0_106 =
                                __libm_sse2_sin_precise(mxcsr, x87control, xmm0_102)
                            xmm3_2 = _mm_cvtepi32_pd(zx.q(ebx_2[0xd])) * xmm0_106 + var_44_1
                            var_44_1 = xmm3_2
                        
                        double xmm1_32 = _mm_cvtepi32_pd(zx.q(ebx_2[0xf]))
                        double xmm0_111 = _mm_cvtepi32_pd(zx.q(ebx_2[6])) / xmm0_1 * xmm0_3
                            + xmm1_32 / xmm0_1 * xmm3_2 / xmm0_2 * xmm0_3
                        int16_t x87control_1
                        double xmm0_112
                        x87control_1, xmm0_112 =
                            __libm_sse2_cos_precise(mxcsr, x87control, xmm0_111)
                        double xmm0_114
                        x87control, xmm0_114 =
                            __libm_sse2_sin_precise(mxcsr, x87control_1, xmm0_111)
                        double xmm1_42 = (_mm_cvtepi32_pd(zx.q(esi_17)) f+
                            *((esi_17 u>> 0x1f << 3) + &data_b0dbb0)) * xmm0_2
                        int32_t eax_173 =
                            int.d(xmm0_112 * var_44_1 - xmm0_114 * var_54) + *(edi + 0x23c)
                        var_54:4.d = int.d(xmm0_112 * var_54 + xmm0_114 * var_44_1) + *(edi + 0x240)
                        int32_t edi_3 = ebx_2[0x11]
                        int32_t ebx_8 = ebx_2[0x10]
                        int32_t esi_20 = int.d(xmm1_42 / (_mm_cvtepi32_pd(zx.q(ecx_112)) f+
                            *((ecx_112 u>> 0x1f << 3) + &data_b0dbb0)))
                        edi = var_70
                        void* ebx_9 = i_1 * 0x130
                        var_5c:4.d = (edi_3 - ebx_8) * esi_20 s/ 0x3e8 + ebx_8
                        void* eax_188 = *(edi + 0x1588)
                        sub_628eb0(eax_188, eax_188 + 0x120 + ebx_9, edi + 0x12d0, 
                            ebx_9 + 4 + eax_188)
                        void var_b4
                        sub_54d980(*(edi + 0x1568), &var_b4, var_30_1)
                        int32_t var_8_9 = 4
                        sub_5b17d0(*(edi + 0x1588) + 0xd8 + ebx_9, &var_b4)
                        int32_t var_8_10 = 0xffffffff
                        int32_t* var_b0
                        
                        if (var_b0 != 0)
                            bool cond:4_1 = var_b0[1] != 1
                            var_b0[1]
                            var_b0[1] -= 1
                            
                            if (not(cond:4_1))
                                (*(*var_b0 + 4))(eax_2)
                                bool cond:5_1 = var_b0[2] != 1
                                var_b0[2]
                                var_b0[2] -= 1
                                
                                if (not(cond:5_1))
                                    (*(*var_b0 + 8))()
                        
                        int32_t eax_193 = *(edi + 0x1588)
                        float xmm0_120 = _mm_cvtepi32_ps(zx.o(eax_173))
                        *(ebx_9 + eax_193 + 0x18) = 0
                        int32_t eax_194 = *(edi + 0x1588)
                        *(ebx_9 + eax_194 + 0x1c) = xmm0_120 f+ *(ebx_9 + eax_194 + 0x1c)
                        int32_t eax_195 = *(edi + 0x1588)
                        *(ebx_9 + eax_195 + 0x20) =
                            _mm_cvtepi32_ps(zx.o(var_54:4.d)) f+ *(ebx_9 + eax_195 + 0x20)
                        float xmm0_126 =
                            _mm_cvtepi32_ps(zx.o((edi_3 - ebx_8) * esi_20 s/ 0x3e8 + ebx_8))
                        int32_t eax_196 = *(edi + 0x1588)
                        *(ebx_9 + eax_196 + 0x34) = xmm0_126 / 1000f f* *(ebx_9 + eax_196 + 0x34)
                        float xmm0_130 = _mm_cvtepi32_ps(zx.o(var_5c:4.d))
                        int32_t eax_197 = *(edi + 0x1588)
                        *(ebx_9 + eax_197 + 0x38) = xmm0_130 / 1000f f* *(ebx_9 + eax_197 + 0x38)
                        int32_t esi_22 = *(edi + 0x1588)
                        result = zx.d(*(ebx_9 + esi_22 + 0x7c)) * var_24_1 s/ 0xff
                        *(ebx_9 + esi_22 + 0x7c) = result.b
                
                i = i_1
            else
                esi_1 = *(edi + 0x218)
            label_5f746b:
                var_30_1 = esi_1
                
                if (esi_1 s>= 0)
                    goto label_5f7476
        
        xmm2_1 = var_84_1
        i += 1
        xmm4_1 = var_7c_1
        i_1 = i
    while (i s< *(edi + 0x1558))

fsbase->NtTib.ExceptionList = ExceptionList
return result
