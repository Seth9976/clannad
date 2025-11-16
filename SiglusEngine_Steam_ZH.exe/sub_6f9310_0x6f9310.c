// 函数: sub_6f9310
// 地址: 0x6f9310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cdebb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_c8
int32_t eax_2 = __security_cookie ^ &var_c8
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_ac = 0
int32_t var_c4 = 0
int32_t var_98 = 0
int32_t* result

if (*(arg2 + 0xf8) != 0)
label_6f9f24:
    result.b = 1
else
    int16_t var_6c
    int32_t var_58_1
    int16_t var_54
    int32_t var_40_1
    
    if (*(arg3 + 9) == 0 || *(arg3 + 0x8c) s< 0)
        if (*(arg3 + 2) == 0 && *(arg3 + 0x8c) s>= 0)
            int32_t var_44_2 = 0
            void* const var_d8_5 = 9
            var_40_1 = 7
            int32_t* var_dc_3 = u"SetEffect"
            var_54 = 0
            sub_52e720(&var_54, var_dc_3, var_d8_5)
            int32_t var_c_2 = 2
            void* const var_d8_6 = 0x1a
            var_58_1 = 7
            int32_t* var_dc_4 = &data_b07d24
            int32_t var_5c_3 = 0
            var_6c = 0
            sub_52e720(&var_6c, var_dc_4, var_d8_6)
            var_c_2.b = 3
            goto label_6f940b
        
        void* eax_6 = *(arg1 + 0x14)
        int32_t* ecx_5 = *(arg2 + 0xfc)
        int32_t* var_a0 = ecx_5
        int32_t var_b0_1 = 0
        int32_t* eax_7 = *(eax_6 + 0x98)
        int32_t* var_bc_1 = eax_7
        int128_t var_90
        __builtin_memset(&var_90, 0, 0x20)
        int32_t* var_b8
        int32_t var_ac_2
        int128_t var_80
        float var_3c
        float var_2c
        int32_t ecx_20
        int32_t edx_2
        void* edi_2
        
        if (ecx_5 == 0)
            var_6c.d = ecx_5
            var_b8 = ecx_5
            int32_t var_c_3 = 4
            int32_t ecx_7 = 1
            bool cond:0_1 = *sub_6f12f0(arg2, &var_3c, ecx_5) == 0
            var_c4 = 1
            char var_c5_1
            int32_t* eax_10
            
            if (not(cond:0_1))
                ecx_7 = 3
                var_c5_1 = 1
                var_c4 = 3
                eax_10 = *sub_6f12f0(arg2, &var_54, 0)
            
            if (cond:0_1 || *eax_10 == 0)
                var_c5_1 = 0
            
            if ((ecx_7.b & 2) != 0)
                int32_t ecx_9 = ecx_7 & 0xfffffffd
                var_c4 = ecx_9
                int32_t var_ac_1 = ecx_9
                sub_54b010(&var_54)
                ecx_7 = var_c4
            
            int32_t var_c_4 = 0xffffffff
            
            if ((ecx_7.b & 1) != 0)
                var_c4 = ecx_7 & 0xfffffffe
                sub_54b010(&var_3c)
            
            float eax_11 = var_90:8.d
            
            if (var_c5_1 != 0)
                eax_11 = 1.40129846e-45f
            
            uint32_t ecx_14 = zx.d(*(arg3 + 0x9f)) << 8
            var_2c = eax_11
            int32_t var_b0_2 = 1
            
            if (((((ecx_14 + zx.d(*(arg3 + 0x9e))) << 8) + zx.d(*(arg3 + 0x9d))) << 8)
                    + zx.d(*(arg3 + 0x9c)) u< 0xffffffff || *(arg3 + 0x78) u< 0xff)
                var_ac_2 = 1
            else
                var_ac_2 = var_90:0xc.d
            
            if (*(arg3 + 0x79) u<= 0 && *(arg3 + 0x7a) u<= 0 && *(arg3 + 0x7b) u<= 0)
                edx_2 = var_80.d
            
            if (*(arg3 + 0x79) u> 0 || *(arg3 + 0x7a) u> 0 || *(arg3 + 0x7b) u> 0
                    || *(arg3 + 0x7c) u> 0)
                edx_2 = 1
            
            if (*(arg3 + 0x80) u<= 0 && *(arg3 + 0x81) u<= 0 && *(arg3 + 0x82) u<= 0)
                ecx_20 = var_80:4.d
            
            if (*(arg3 + 0x80) u> 0 || *(arg3 + 0x81) u> 0 || *(arg3 + 0x82) u> 0
                    || *(arg3 + 0x83) u> 0)
                ecx_20 = 1
            
            float eax_16 = var_80:8.d
            
            if (*(arg3 + 0x84) s>= 0)
                eax_16 = 1.40129846e-45f
            
            bool cond:15_1 = *(arg3 + 9) == 1
            var_3c = eax_16
            int32_t eax_17 = var_80:0xc.d
            
            if (cond:15_1)
                eax_17 = 1
            
            int32_t edi_1 = 0
            var_54.d = eax_17
            int32_t eax_18 = *(arg3 + 0x98)
            
            if (eax_18 == 3)
                edi_1 = var_b0_2
            
            int32_t eax_19 = edi_1
            
            if (eax_18 == 4)
                eax_19 = 2
            
            edi_2 = arg2
            var_b0_1 = eax_19
            
            if (var_2c == 0 && var_ac_2 == 0 && edx_2 == 0 && ecx_20 == 0 && var_3c == ecx_20
                    && var_54.d == ecx_20 && eax_19 == 0)
                goto label_6f9f4b
            
            eax_7 = var_bc_1
            goto label_6f96e1
        
        edx_2 = 0
        var_ac_2 = 0
        var_2c = 0f
        var_54.d = 0
        var_b8 = var_90:4.d
        int32_t edi_10 = var_90.d
        var_3c = var_80:8.d
        ecx_20 = var_80:4.d
        var_6c.d = edi_10
        edi_2 = arg2
    label_6f96e1:
        void var_104
        void var_ec
        int16_t* eax_48
        int32_t* ecx_45
        int32_t edx_5
        
        if (eax_7 == 0)
        label_6f9f4b:
            int32_t edi_11 = 0
            
            while (true)
                int32_t var_c_25 = 0x14
                int32_t edx_11 = var_c4 | 0x40
                bool cond:6_1 = *sub_6f12f0(arg2, &var_6c, edi_11) == 0
                var_c4 = edx_11
                char var_c5_4
                
                if (not(cond:6_1))
                    edx_11 = var_c4 | 0x80
                    var_c5_4 = 1
                    var_c4 = edx_11
                    result = *sub_6f12f0(arg2, &var_b8, edi_11)
                
                if (cond:6_1 || *result == 0)
                    var_c5_4 = 0
                
                if (edx_11.b s< 0)
                    edx_11 &= 0xffffff7f
                    var_c4 = edx_11
                    int32_t var_ac_5 = edx_11
                    int32_t* var_b4
                    
                    if (var_b4 != 0)
                        bool cond:3_1 = var_b4[1] != 1
                        var_b4[1] -= 1
                        
                        if (not(cond:3_1))
                            (*(*var_b4 + 4))(eax_4)
                            bool cond:5_1 = var_b4[2] != 1
                            var_b4[2]
                            var_b4[2] -= 1
                            
                            if (not(cond:5_1))
                                (*(*var_b4 + 8))()
                            
                            edx_11 = var_c4
                
                int32_t var_c_26 = 0xffffffff
                
                if ((edx_11.b & 0x40) != 0)
                    var_c4 = edx_11 & 0xffffffbf
                    int32_t* var_68
                    
                    if (var_68 != 0)
                        bool cond:4_1 = var_68[1] != 1
                        var_68[1]
                        var_68[1] -= 1
                        
                        if (not(cond:4_1))
                            (*(*var_68 + 4))(eax_4)
                            bool cond:8_1 = var_68[2] != 1
                            var_68[2]
                            var_68[2] -= 1
                            
                            if (not(cond:8_1))
                                (*(*var_68 + 8))()
                
                if (var_c5_4 != 0)
                    int32_t* esi_10 = data_4ebe4b0
                    int32_t var_c_27 = 0x15
                    int32_t var_c_28 = 0xffffffff
                    int32_t* var_c0_12 =
                        (*(*esi_10 + 0x104))(esi_10, edi_11, **sub_6f12f0(arg2, &var_a0, edi_11))
                    int32_t* var_9c
                    
                    if (var_9c != 0)
                        bool cond:7_1 = var_9c[1] != 1
                        var_9c[1]
                        var_9c[1] -= 1
                        
                        if (not(cond:7_1))
                            (*(*var_9c + 4))(eax_4)
                            bool cond:10_1 = var_9c[2] != 1
                            var_9c[2]
                            var_9c[2] -= 1
                            
                            if (not(cond:10_1))
                                (*(*var_9c + 8))()
                    
                    if (var_c0_12 s< 0)
                        void* var_c0_13 = &var_ec
                        sub_52e820(&var_ec, u"SetTexture")
                        int32_t var_c_29 = 0x16
                        eax_48, edx_5 = sub_52e820(&var_104, &data_b07d94)
                        ecx_45 = var_c0_12
                        break
                
                edi_11 += 1
                
                if (edi_11 s>= 4)
                    goto label_6f9f24_1
            
            goto label_6f9a0e
        
        int16_t* var_108_1
        void* ecx_42
        int32_t* esi_1
        int32_t* edi_8
        
        if (var_a0 == 0)
            int32_t eax_28 = ((var_3c i+ ((ecx_20 + ((edx_2
                + ((var_ac_2 + ((var_2c i+ ((var_b8 + (var_6c.d << 1)) << 1)) << 1)) << 1)) << 1))
                << 1)) << 1) + 0xd + var_54.d
            var_54.d = 0x1830
            var_a0 = *(*(arg1 + 0x14) + ((eax_28 * 3 + var_b0_1) << 2))
            int32_t eax_32 = 0
            int32_t var_b0_4 = 0
            
            while (true)
                int32_t var_c_5 = 5
                int32_t ecx_27 = var_c4 | 4
                bool cond:12_1 = *sub_6f12f0(arg2, &var_3c, eax_32) == 0
                var_c4 = ecx_27
                char var_c5_2
                int32_t* eax_35
                
                if (not(cond:12_1))
                    ecx_27 = var_c4 | 8
                    var_c5_2 = 1
                    var_c4 = ecx_27
                    eax_35 = *sub_6f12f0(arg2, &var_6c, var_b0_4)
                
                if (cond:12_1 || *eax_35 == 0)
                    var_c5_2 = 0
                
                if ((ecx_27.b & 8) != 0)
                    int32_t ecx_30 = ecx_27 & 0xfffffff7
                    var_c4 = ecx_30
                    int32_t var_ac_3 = ecx_30
                    sub_54b010(&var_6c)
                    ecx_27 = var_c4
                
                int32_t var_c_6 = 0xffffffff
                
                if ((ecx_27.b & 4) != 0)
                    var_c4 = ecx_27 & 0xfffffffb
                    sub_54b010(&var_3c)
                
                if (var_c5_2 != 0)
                    int32_t var_c_7 = 6
                    int32_t* eax_37 = *sub_6f12f0(arg2, &var_2c, var_b0_4)
                    var_b8 = (*(*var_bc_1 + 0xd0))(var_bc_1, *(*(arg1 + 0x14) + var_54.d + 0x98), 
                        *eax_37)
                    int32_t var_c_8 = 0xffffffff
                    sub_54b010(&var_2c)
                    
                    if (var_b8 s< 0)
                        void* var_c0_2 = &var_ec
                        sub_52e820(&var_ec, u"SetTexture")
                        int32_t var_c_10 = 7
                    label_6f99fe:
                        ecx_42 = &var_104
                        var_108_1 = &data_b07d94
                        break
                
                eax_32 = var_b0_4 + 1
                var_54.d += 4
                var_b0_4 = eax_32
                
                if (var_54.d + 4 s>= 0x1840)
                    eax_32.b = *(arg3 + 0x79)
                    
                    if (eax_32.b != 0 || *(arg3 + 0x7a) u> 0 || *(arg3 + 0x7b) u> 0
                            || *(arg3 + 0x7c) u> 0 || *(arg3 + 0x80) u> 0 || *(arg3 + 0x81) u> 0
                            || *(arg3 + 0x82) u> 0 || *(arg3 + 0x83) u> 0)
                        edi_8 = var_bc_1
                        int32_t var_d8_13 = 4
                        int16_t* var_dc_11 = &var_54
                        float xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_32.b))
                        int32_t ecx_40 = *edi_8
                        var_54.d = xmm0_2 / 255f
                        float var_50_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x7a))) / 255f
                        float var_4c_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x7b))) / 255f
                        float var_48_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x7c))) / 255f
                        int32_t* eax_47 = (*(ecx_40 + 0x80))(edi_8, *(*(arg1 + 0x14) + 0x18d8), 
                            var_dc_11, var_d8_13)
                        var_b8 = eax_47
                        
                        if (eax_47 s< 0)
                            void* var_c0_1 = &var_ec
                            sub_52e820(&var_ec, u"SetFloatArray")
                            int32_t var_c_9 = 8
                            ecx_42 = &var_104
                            var_108_1 = &data_b07ddc
                            goto label_6f9a05
                        
                        int32_t ecx_46 = *edi_8
                        int32_t var_d8_14 = 4
                        float xmm0_14 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x7d)))
                        uint32_t eax_50 = zx.d(*(arg3 + 0x7e))
                        int32_t* var_dc_12 = &var_3c
                        var_3c = xmm0_14 / 255f
                        float var_38_1 = _mm_cvtepi32_ps(zx.o(eax_50)) / 255f
                        float var_34_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x7f))) / 255f
                        float var_30_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x80))) / 255f
                        int32_t* eax_55 = (*(ecx_46 + 0x80))(edi_8, *(*(arg1 + 0x14) + 0x18dc), 
                            var_dc_12, var_d8_14)
                        var_b8 = eax_55
                        
                        if (eax_55 s< 0)
                            void* var_c0_3 = &var_ec
                            sub_52e820(&var_ec, u"SetFloatArray")
                            int32_t var_c_12 = 9
                            ecx_42 = &var_104
                            var_108_1 = &data_b07ddc
                            goto label_6f9a05
                        
                        int32_t ecx_48 = *edi_8
                        int32_t var_d8_15 = 4
                        float xmm0_26 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x81)))
                        uint32_t eax_57 = zx.d(*(arg3 + 0x82))
                        int32_t* var_dc_13 = &var_2c
                        int32_t var_20_1 = 0
                        var_2c = xmm0_26 / 255f
                        float var_28_1 = _mm_cvtepi32_ps(zx.o(eax_57)) / 255f
                        float var_24_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x83))) / 255f
                        int32_t* eax_61 = (*(ecx_48 + 0x80))(edi_8, *(*(arg1 + 0x14) + 0x18e0), 
                            var_dc_13, var_d8_15)
                        var_b8 = eax_61
                        
                        if (eax_61 s< 0)
                            void* var_c0_4 = &var_ec
                            sub_52e820(&var_ec, u"SetFloatArray")
                            int32_t var_c_13 = 0xa
                            ecx_42 = &var_104
                            var_108_1 = &data_b07ddc
                            goto label_6f9a05
                    else
                        edi_8 = var_bc_1
                    
                    if (*(arg3 + 0x84) s< 0)
                        goto label_6f9e4f
                    
                    int32_t ecx_50 = *edi_8
                    int32_t var_d8_16 = 4
                    int16_t* var_dc_14 = &var_6c
                    var_6c.d = (_mm_cvtepi32_ps(zx.o(*(arg3 + 0x84))) + 0.5f) / 255f
                    float var_68_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x88))) / 255f
                    int64_t var_64_1 = 0
                    esi_1 =
                        (*(ecx_50 + 0x80))(edi_8, *(*(arg1 + 0x14) + 0x18e4), var_dc_14, var_d8_16)
                    
                    if (esi_1 s>= 0)
                        goto label_6f9e4f
                    
                    void* var_c0_5 = &var_ec
                    sub_52e820(&var_ec, u"SetFloatArray")
                    int32_t var_c_14 = 0xb
                    goto label_6f9c4c
            
            goto label_6f9a05
        
        int32_t esi_2 = 0
        var_54.d = 0x1830
        
        do
            int32_t var_c_15 = 0xc
            int32_t ecx_55 = var_c4 | 0x10
            bool cond:11_1 = *sub_6f12f0(edi_2, &var_3c, esi_2) == 0
            var_c4 = ecx_55
            char var_c5_3
            int32_t* eax_69
            
            if (not(cond:11_1))
                ecx_55 = var_c4 | 0x20
                var_c5_3 = 1
                var_c4 = ecx_55
                eax_69 = *sub_6f12f0(edi_2, &var_6c, esi_2)
            
            if (cond:11_1 || *eax_69 == 0)
                var_c5_3 = 0
            
            if ((ecx_55.b & 0x20) != 0)
                int32_t ecx_58 = ecx_55 & 0xffffffdf
                var_c4 = ecx_58
                int32_t var_ac_4 = ecx_58
                sub_54b010(&var_6c)
                ecx_55 = var_c4
            
            int32_t var_c_16 = 0xffffffff
            
            if ((ecx_55.b & 0x10) != 0)
                var_c4 = ecx_55 & 0xffffffef
                sub_54b010(&var_3c)
            
            if (var_c5_3 != 0)
                int32_t var_c_17 = 0xd
                int32_t* eax_71 = *sub_6f12f0(edi_2, &var_2c, esi_2)
                var_b8 =
                    (*(*var_bc_1 + 0xd0))(var_bc_1, *(var_54.d + *(arg1 + 0x14) + 0x98), *eax_71)
                int32_t var_c_18 = 0xffffffff
                sub_54b010(&var_2c)
                
                if (var_b8 s< 0)
                    void* var_c0_7 = &var_ec
                    sub_52e820(&var_ec, u"SetTexture")
                    int32_t var_c_20 = 0xe
                    goto label_6f99fe
            
            esi_2 += 1
            var_54.d += 4
        while (var_54.d + 4 s< 0x1840)
        
        int32_t* eax_78 =
            (*(*var_bc_1 + 0x80))(var_bc_1, *(*(arg1 + 0x14) + 0x18d8), edi_2 + 0x100, 4)
        var_b8 = eax_78
        
        if (eax_78 s>= 0)
            edi_8 = var_bc_1
            esi_1 = (*(*var_bc_1 + 0x80))(edi_8, *(*(arg1 + 0x14) + 0x18dc), edi_2 + 0x110, 4)
            
            if (esi_1 s< 0)
                void* var_c0_8 = &var_ec
                sub_52e820(&var_ec, u"SetFloatArray")
                int32_t var_c_21 = 0x10
            label_6f9c4c:
                eax_48, edx_5 = sub_52e820(&var_104, &data_b07ddc)
                ecx_45 = esi_1
                goto label_6f9a0e
            
        label_6f9e4f:
            int32_t* eax_83 = (*(*edi_8 + 0xf0))(edi_8, var_a0)
            
            if (eax_83 s< 0)
                void* var_c0_9 = &var_ec
                sub_52e820(&var_ec, u"SetTechnique")
                int32_t var_c_22 = 0x11
                eax_48, edx_5 = sub_52e820(&var_104, &data_b07e20)
                ecx_45 = eax_83
                goto label_6f9a0e
            
            int32_t* eax_85 = (*(*edi_8 + 0x104))(edi_8, &var_98, 0)
            
            if (eax_85 s< 0)
                void* var_c0_10 = &var_ec
                sub_52e820(&var_ec, u"Begin")
                int32_t var_c_23 = 0x12
                eax_48, edx_5 = sub_52e820(&var_104, 0xb07e68)
                ecx_45 = eax_85
                goto label_6f9a0e
            
            int32_t* eax_87 = (*(*edi_8 + 0x108))(edi_8, 0)
            
            if (eax_87 s< 0)
                void* var_c0_11 = &var_ec
                sub_52e820(&var_ec, u"BeginPass")
                int32_t var_c_24 = 0x13
                eax_48, edx_5 = sub_52e820(&var_104, 0xb07e98)
                ecx_45 = eax_87
                goto label_6f9a0e
            
            *arg4 = edi_8
        label_6f9f24_1:
            result.b = 1
        else
            void* var_c0_6 = &var_ec
            sub_52e820(&var_ec, u"SetFloatArray")
            int32_t var_c_19 = 0xf
            ecx_42 = &var_104
            var_108_1 = &data_b07ddc
        label_6f9a05:
            eax_48, edx_5 = sub_52e820(ecx_42, var_108_1)
            ecx_45 = var_b8
        label_6f9a0e:
            int32_t var_c_11 = 0xffffffff
            sub_6f1ae0(eax_48, edx_5, ecx_45)
            result.b = 0
    else
        void* var_d8_1 = 9
        wchar16 const* const var_dc_1 = u"SetEffect"
        var_40_1 = 7
        int32_t var_44_1 = 0
        var_54 = 0
        sub_52e720(&var_54, var_dc_1, var_d8_1)
        int32_t var_c_1 = 0
        void* const var_d8_2 = 0x1a
        var_58_1 = 7
        int32_t* var_dc_2 = &data_b07d5c
        int32_t var_5c_1 = 0
        var_6c = 0
        sub_52e720(&var_6c, var_dc_2, var_d8_2)
        var_c_1.b = 1
    label_6f940b:
        sub_6b9da0(&var_6c, &var_54)
        
        if (var_58_1 u>= 8)
            j__free(var_6c.d)
        
        int32_t var_58_2 = 7
        int32_t var_5c_2 = 0
        var_6c = 0
        
        if (var_40_1 u>= 8)
            j__free(var_54.d)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_c8)
return result
