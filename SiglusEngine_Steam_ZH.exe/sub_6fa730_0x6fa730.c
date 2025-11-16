// 函数: sub_6fa730
// 地址: 0x6fa730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ce073
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_218
int32_t eax_2 = __security_cookie ^ &var_218
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg5
int32_t result_15 = 0
int32_t edx_1 = *(arg2 + 0xfc)
int32_t* var_1f0 = edi
int32_t result_19 = 0
int96_t var_164 = (zx.o(0)).12
int128_t var_154 = zx.o(0)
int32_t result
int16_t* var_258_1
void var_254
void var_23c
int32_t result_2
int16_t var_168
int16_t var_140
float var_64
void* ecx_16

if (edx_1 != 0)
    int32_t result_10 = (*(*edi + 0xf0))(edi, edx_1)
    result_2 = result_10
    
    if (result_10 s< 0)
        void* var_214_6 = &var_23c
        sub_52e820(&var_23c, u"SetTechnique")
        int32_t var_c_10 = 8
    label_6faafd:
        ecx_16 = &var_254
        var_258_1 = &data_b07e20
        goto label_6fab04
    
    int32_t result_11 = (*(*edi + 0x80))(edi, &data_b07f38, arg2 + 0x100, 4)
    result_2 = result_11
    int16_t* eax_32
    int32_t result_1
    int32_t edx_9
    
    if (result_11 s>= 0)
        int32_t result_12 = (*(*edi + 0x80))(edi, &data_b07f50, arg2 + 0x110, 4)
        result_2 = result_12
        
        if (result_12 s< 0)
            void* var_214_8 = &var_23c
            sub_52e820(&var_23c, u"SetFloatArray")
            int32_t var_c_12 = 0xa
            ecx_16 = &var_254
            var_258_1 = &data_b07ddc
            goto label_6fab04
        
    label_6faf08:
        int32_t xmm0_41 = *(arg3 + 0x38)
        int32_t var_f0_1 = 0
        int32_t var_f4_1 = 0
        int32_t var_f8_1 = 0
        int32_t var_fc_1 = 0
        int32_t xmm0_42 = *(arg3 + 0x34)
        int32_t xmm0_43 = *(arg3 + 0x30)
        void var_e8
        void* var_234_7 = &var_e8
        int32_t var_104_1 = 0
        int32_t var_108_1 = 0
        int32_t var_10c_1 = 0
        int32_t var_110_1 = 0
        int32_t var_118_1 = 0
        int32_t var_11c_1 = 0
        int32_t var_120_1 = 0
        int32_t var_124_1 = 0
        int32_t var_ec_1 = 0x3f800000
        int32_t var_100_1 = 0x3f800000
        int32_t var_114_1 = 0x3f800000
        int32_t var_128 = 0x3f800000
        j_sub_4021aa(&var_128, &var_128, j_sub_402a90(var_234_7, xmm0_43, xmm0_42, xmm0_41))
        j_sub_4021aa(&var_128, &var_128, 
            j_sub_402fb6(&var_e8, *(arg3 + 0x40), *(arg3 + 0x3c), *(arg3 + 0x44)))
        j_sub_4021aa(&var_128, &var_128, 
            j_sub_402b24(&var_e8, *(arg3 + 0x18), *(arg3 + 0x1c), *(arg3 + 0x20)))
        int32_t ecx_25 = *(arg1 + 0x14)
        void var_a8
        j_sub_4021aa(&var_a8, ecx_25, ecx_25 + 0x40)
        (*(*edi + 0x98))(edi, "g_mat_world", &var_128)
        (*(*edi + 0x98))(edi, "g_mat_view_proj", &var_a8)
        void* eax_61 = *(arg1 + 0x14)
        int32_t var_228_23 = 3
        int32_t var_48
        int32_t* var_22c_21 = &var_48
        char const* const var_230_16 = "g_camera_dir"
        var_48 = *(eax_61 + 0x8c)
        int32_t var_44_1 = *(eax_61 + 0x90)
        int32_t var_40_1 = *(eax_61 + 0x94)
        (*(*edi + 0x80))(edi, var_230_16, var_22c_21, var_228_23)
        int16_t* ecx_26 = arg4
        
        if (ecx_26 == 0)
            ecx_26 = &var_168
            var_168.o = data_b0db60
        
        (*(*edi + 0x80))(edi, "g_mtrl_diffuse", ecx_26, 4)
        void* esi_2 = arg2
        int32_t eax_64 = *(esi_2 + 0x90)
        
        if (eax_64 s>= 0)
            var_164:8.d = 0x3f800000
            int32_t var_228_25 = 4
            void var_1d8
            __builtin_memcpy(&var_1d8, eax_64 * 0x70 + 0x4ebeab0, 0x70)
            edi = var_1f0
            int32_t var_1a4
            var_168.d = var_1a4
            int32_t var_1a0
            var_164.d = var_1a0
            int32_t var_19c
            var_164:4.d = var_19c
            int128_t var_1b4
            var_140.o = var_1b4
            (*(*edi + 0x80))(edi, "g_light_pos", &var_168, var_228_25)
            (*(*edi + 0x80))(edi, "g_light_ambient", &var_140, 4)
            esi_2 = arg2
        
        if (*(*(arg1 + 0x14) + 0x18fc) != 0 && *(esi_2 + 0xe) != 0)
            bool var_215_2 = *sub_6f12f0(esi_2, &var_64, 3) != 0
            sub_54b010(&var_64)
            
            if (var_215_2 != 0)
                int32_t esi_5 = *(*sub_6f12f0(esi_2, &var_64, 3) + 0xc)
                sub_54b010(&var_64)
                int32_t edi_6 = *(*sub_6f12f0(arg2, &result_15, 3) + 0x10)
                sub_54b010(&result_15)
                float xmm2_2 = _mm_cvtepi32_ps(zx.o(edi_6))
                edi = var_1f0
                void* ecx_33 = *(arg1 + 0x14)
                int32_t eax_77 = *(arg1 + 0xc) - *(arg1 + 4)
                int32_t var_228_30 = 4
                float xmm1_2 = xmm2_2 / _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10) - *(arg1 + 8)))
                float xmm3_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10) - *(arg1 + 8)))
                int32_t eax_81 = *(arg1 + 0xc) - *(arg1 + 4)
                float xmm0_61 = _mm_cvtepi32_ps(zx.o(esi_5))
                float xmm4_2 = _mm_cvtepi32_ps(zx.o(eax_77))
                float xmm2_4 = *(ecx_33 + 0x1900) / xmm0_61
                int32_t var_2c = 0x3f800000
                int32_t eax_83 = *(arg1 + 0x10) - *(arg1 + 8)
                float xmm1_3 = 0.5f / _mm_cvtepi32_ps(zx.o(eax_81))
                float xmm0_65 = _mm_cvtepi32_ps(zx.o(eax_83))
                int32_t eax_84 = *edi
                float var_34_1 = xmm4_2 / xmm0_61 * xmm1_2
                float var_38_1 = 0.5f / xmm0_65
                float var_30_1 = xmm3_2 / xmm2_2
                float var_3c = ((xmm2_4 * xmm1_2) ^ (data_b0dbe0).d) - xmm1_3
                int32_t var_28_1 = *(ecx_33 + 0x1904)
                int32_t var_24_1 = *(ecx_33 + 0x1908)
                int32_t var_20_1 = 0
                int32_t var_54 = *(ecx_33 + 0x80)
                int32_t var_50_1 = *(ecx_33 + 0x84)
                int32_t var_4c_1 = *(ecx_33 + 0x88)
                (*(eax_84 + 0x80))(edi, "g_fog_param", &var_3c, var_228_30)
                (*(*edi + 0x80))(edi, "g_fog_range", &var_2c, 4)
                (*(*edi + 0x80))(edi, "g_camera_pos", &var_54, 3)
        
        int32_t eax_87 = *edi
        int32_t var_228_33 = 0
        int32_t var_1dc
        int32_t* var_22c_31 = &var_1dc
        var_1dc = 0
        int32_t result_3 = (*(eax_87 + 0x104))(edi, var_22c_31, var_228_33)
        
        if (result_3 s< 0)
            void* var_214_9 = &var_23c
            sub_52e820(&var_23c, u"Begin")
            int32_t var_c_13 = 0xb
            eax_32, edx_9 = sub_52e820(&var_254, 0xb07e68)
            result_1 = result_3
            goto label_6fab0d
        
        result = (*(*edi + 0x108))(edi, 0)
        
        if (result s< 0)
            void* var_214_10 = &var_23c
            sub_52e820(&var_23c, u"BeginPass")
            int32_t var_c_14 = 0xc
            eax_32, edx_9 = sub_52e820(&var_254, 0xb08004)
            result_1 = result
            goto label_6fab0d
        
        result.b = 1
    else
        void* var_214_7 = &var_23c
        sub_52e820(&var_23c, u"SetFloatArray")
        int32_t var_c_11 = 9
        ecx_16 = &var_254
        var_258_1 = &data_b07ddc
    label_6fab04:
        eax_32, edx_9 = sub_52e820(ecx_16, var_258_1)
        result_1 = result_2
    label_6fab0d:
        int32_t var_c_5 = 0xffffffff
        sub_6f1ae0(eax_32, edx_9, result_1)
        result.b = 0
else
    if (*(arg3 + 9) == edx_1.b || *(arg3 + 0x8c) s< edx_1)
        int32_t edx_3 = 0
        int32_t result_13 = 1
        
        if (*(arg2 + 0x90) s>= 0)
            edx_3 = 1
        
        int32_t eax_7 = 0
        
        if (*(*(arg1 + 0x14) + 0x18fc) != 0 && *(arg2 + 0xe) != 0)
            eax_7 = 1
        
        int32_t* eax_8 = sub_6f12f0(arg2, &var_64, 0)
        int32_t var_c_2 = 2
        int32_t result_20 = 1
        char var_215_1
        int32_t* eax_10
        
        if (*eax_8 != 0)
            result_20 = 3
            var_215_1 = 1
            eax_10 = *sub_6f12f0(arg2, &result_2, 0)
        
        if (*eax_8 == 0 || *eax_10 == 0)
            var_215_1 = 0
        
        if ((result_20.b & 2) != 0)
            result_20 &= 0xfffffffd
            result_15 = result_20
            int32_t* var_20c
            
            if (var_20c != 0)
                bool cond:5_1 = var_20c[1] != 1
                var_20c[1]
                var_20c[1] -= 1
                
                if (not(cond:5_1))
                    (*(*var_20c + 4))(eax_4)
                    bool cond:7_1 = var_20c[2] != 1
                    var_20c[2]
                    var_20c[2] -= 1
                    
                    if (not(cond:7_1))
                        (*(*var_20c + 8))()
        
        int32_t var_c_3 = 0xffffffff
        int32_t* var_60
        
        if ((result_20.b & 1) != 0 && var_60 != 0)
            bool cond:6_1 = var_60[1] != 1
            var_60[1]
            var_60[1] -= 1
            
            if (not(cond:6_1))
                (*(*var_60 + 4))(eax_4)
                bool cond:8_1 = var_60[2] != 1
                var_60[2]
                var_60[2] -= 1
                
                if (not(cond:8_1))
                    (*(*var_60 + 8))()
        
        int32_t result_4 = var_164:8.d
        
        if (var_215_1 != 0)
            result_4 = result_13
        
        bool cond:4_1 = *(arg3 + 0x79) u> 0
        result_2 = result_4
        int32_t result_14
        
        if (cond:4_1 || *(arg3 + 0x7a) u> 0 || *(arg3 + 0x7b) u> 0 || *(arg3 + 0x7c) u> 0)
            result_14 = result_13
        else
            result_14 = var_154.d
        
        if (*(arg3 + 0x80) u> 0 || *(arg3 + 0x81) u> 0 || *(arg3 + 0x82) u> 0
                || *(arg3 + 0x83) u> 0)
            result_15 = result_13
        else
            result_15 = var_154:4.d
        
        int32_t result_17 = var_154:8.d
        int32_t eax_21 = *(arg3 + 0x98)
        
        if (*(arg3 + 0x84) s>= 0)
            result_17 = result_13
        
        int32_t result_16 = var_154:0xc.d
        
        if (*(arg3 + 9) == 1)
            result_16 = result_13
        
        int32_t result_18 = result_19
        
        if (eax_21 == 3)
            result_18 = result_13
        
        if (eax_21 == 4)
            result_18 = 2
        
        edi = var_1f0
        int32_t result_5 = (*(*edi + 0xf0))(edi, 
            *(*(arg1 + 0x14) + (((((result_17 + ((result_15
                + ((result_14 + ((result_2 + ((eax_7 + (edx_3 << 1)) << 1)) << 2)) << 1)) << 1)) << 1)
                + 0x11d + result_16) * 3 + result_18) << 2)))
        result_2 = result_5
        
        if (result_5 s< 0)
            void* var_214_1 = &var_23c
            sub_52e820(&var_23c, u"SetTechnique")
            int32_t var_c_4 = 3
            goto label_6faafd
        
        result_5.b = *(arg3 + 0x79)
        
        if (result_5.b != 0 || *(arg3 + 0x7a) u> 0 || *(arg3 + 0x7b) u> 0 || *(arg3 + 0x7c) u> 0
                || *(arg3 + 0x80) u> 0 || *(arg3 + 0x81) u> 0 || *(arg3 + 0x82) u> 0
                || *(arg3 + 0x83) u> 0)
            int32_t var_228_7 = 4
            int32_t* var_22c_5 = &var_64
            void* const var_230_1 = &data_b07f38
            float xmm0_2 = _mm_cvtepi32_ps(zx.o(result_5.b))
            uint32_t eax_34 = zx.d(*(arg3 + 0x7a))
            var_64 = xmm0_2 / 255f
            float var_60_1 = _mm_cvtepi32_ps(zx.o(eax_34)) / 255f
            float var_5c_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x7b))) / 255f
            float var_58_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x7c))) / 255f
            int32_t result_6 = (*(*edi + 0x80))(edi, var_230_1, var_22c_5, var_228_7)
            result_2 = result_6
            
            if (result_6 s< 0)
                void* var_214_2 = &var_23c
                sub_52e820(&var_23c, u"SetFloatArray")
                int32_t var_c_6 = 4
                ecx_16 = &var_254
                var_258_1 = &data_b07ddc
                goto label_6fab04
            
            int32_t var_228_8 = 4
            int16_t* var_22c_6 = &var_140
            void* const var_230_2 = &data_b07f50
            var_140.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x7d))) / 255f
            float var_13c_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x7e))) / 255f
            float var_138_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x7f))) / 255f
            float var_134_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x80))) / 255f
            int32_t result_7 = (*(*edi + 0x80))(edi, var_230_2, var_22c_6, var_228_8)
            result_2 = result_7
            
            if (result_7 s< 0)
                void* var_214_3 = &var_23c
                sub_52e820(&var_23c, u"SetFloatArray")
                int32_t var_c_7 = 5
                ecx_16 = &var_254
                var_258_1 = &data_b07ddc
                goto label_6fab04
            
            int32_t var_228_9 = 4
            int16_t* var_22c_7 = &var_168
            void* const var_230_3 = &data_b07f4c
            var_164:8.d = 0
            var_168.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x81))) / 255f
            var_164.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x82))) / 255f
            var_164:4.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x83))) / 255f
            int32_t result_8 = (*(*edi + 0x80))(edi, var_230_3, var_22c_7, var_228_9)
            result_2 = result_8
            
            if (result_8 s< 0)
                void* var_214_4 = &var_23c
                sub_52e820(&var_23c, u"SetFloatArray")
                int32_t var_c_8 = 6
                ecx_16 = &var_254
                var_258_1 = &data_b07ddc
                goto label_6fab04
        
        if (*(arg3 + 0x84) s< 0)
            goto label_6faf08
        
        int32_t var_228_10 = 4
        int16_t* var_22c_8 = &var_168
        void* const var_230_4 = &data_b07f60
        var_168.d = (_mm_cvtepi32_ps(zx.o(*(arg3 + 0x84))) + 0.5f) / 255f
        var_164.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x88))) / 255f
        var_164:4.q = 0
        int32_t result_9 = (*(*edi + 0x80))(edi, var_230_4, var_22c_8, var_228_10)
        result_2 = result_9
        
        if (result_9 s>= 0)
            goto label_6faf08
        
        void* var_214_5 = &var_23c
        sub_52e820(&var_23c, u"SetFloatArray")
        int32_t var_c_9 = 7
        ecx_16 = &var_254
        var_258_1 = &data_b07ddc
        goto label_6fab04
    
    void* var_228 = 9
    int32_t var_12c_1 = 7
    wchar16 const* const var_22c = u"SetEffect"
    int32_t var_130_1 = edx_1
    var_140 = 0
    sub_52e720(&var_140, var_22c, var_228)
    int32_t var_c_1 = 0
    void* const var_228_1 = 0x1a
    var_154.d = 7
    int32_t* var_22c_1 = &data_b07d5c
    var_164:0xc.d = 0
    var_168 = 0
    sub_52e720(&var_168, var_22c_1, var_228_1)
    var_c_1.b = 1
    sub_6b9da0(&var_168, &var_140)
    
    if (var_154.d u>= 8)
        j__free(var_168.d)
    
    var_154.d = 7
    var_164:0xc.d = 0
    var_168 = 0
    
    if (var_12c_1 u>= 8)
        j__free(var_140.d)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_218)
return result
