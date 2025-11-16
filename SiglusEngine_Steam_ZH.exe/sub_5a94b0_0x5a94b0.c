// 函数: sub_5a94b0
// 地址: 0x5a94b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b9e77
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_2a4
int32_t eax_2 = __security_cookie ^ &var_2a4
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1

if (result[1] != 0)
    int32_t ebx_1 = 0
    void* esi_1 = nullptr
    void* var_294 = nullptr
    int32_t var_290_1 = 0
    int32_t var_28c_1 = 0
    int32_t var_c_1 = 0
    int32_t edi_1 = 0xffffffff
    void* ecx = data_bac460
    void* eax_7 = sub_548970(ecx + 4, *(ecx + 0xb8) - 1, 1)
    int32_t var_280_1 = 0
    int32_t eax_11 = (*(eax_7 + 0x148) - *(eax_7 + 0x144)) s/ 0x16c
    int32_t var_268
    
    if (eax_11 s> 0)
        int32_t var_298_1 = 0
        int32_t eax_76
        
        do
            void* ecx_4 = data_bac460
            int32_t var_27c_1 = edi_1 + 1
            int32_t esi_2 = edi_1 + 2
            var_2a4 = *(sub_548970(ecx_4 + 4, *(ecx_4 + 0xb8) - 1, 1) + 0x144) + ebx_1
            sub_5aa700(&var_294, esi_2)
            void* ecx_7 = var_2a4
            int32_t ebx_5 = (edi_1 + 1) * 0x3c
            int32_t* edi_4 = var_294 + ebx_5
            *edi_4 = var_280_1
            edi_4[1] = *(ecx_7 + 4)
            edi_4[2] = 0
            int16_t var_208
            int16_t* eax_19 = sub_698540(&var_208, *(ecx_7 + 0x164), *(ecx_7 + 0x168))
            void* ecx_8 = &edi_4[3]
            var_c_1.b = 1
            
            if (ecx_8 != eax_19)
                ecx_8 = sub_52e3c0(ecx_8, eax_19, 0, 0xffffffff)
            
            var_c_1.b = 0
            int32_t var_1f4
            
            if (var_1f4 u>= 8)
                ecx_8 = j__free(var_208.d)
            
            var_1f4 = 7
            var_208 = 0
            int32_t var_1f8_1 = 0
            
            switch (edi_4[1] - 0xa)
                case 0
                    void* var_2b8_4 = ecx_8
                    *(var_2a4 + 8)
                    int16_t var_1d8
                    void** eax_24 = sub_6ad9b0(&var_1d8)
                    var_c_1.b = 2
                    
                    if (&edi_4[9] != eax_24)
                        sub_52e3c0(&edi_4[9], eax_24, 0, 0xffffffff)
                    
                    var_c_1.b = 0
                    int32_t var_1c4
                    
                    if (var_1c4 u>= 8)
                        j__free(var_1d8.d)
                    
                    var_1c4 = 7
                    int32_t var_1c8_1 = 0
                    var_1d8 = 0
                case 1
                    void var_270
                    void* edx_7 = *sub_58c590(&var_270, var_2a4 + 0x160)
                    var_2a4 = edx_7
                    int32_t* var_26c
                    
                    if (var_26c != 0)
                        bool cond:1_1 = var_26c[1] != 1
                        var_26c[1]
                        var_26c[1] -= 1
                        
                        if (not(cond:1_1))
                            (*(*var_26c + 4))(eax_4)
                            bool cond:3_1 = var_26c[2] != 1
                            var_26c[2]
                            var_26c[2] -= 1
                            
                            if (not(cond:3_1))
                                (*(*var_26c + 8))()
                            
                            edx_7 = var_2a4
                    
                    int32_t i = 0
                    
                    if (((*(edx_7 + 0xa8) - *(edx_7 + 0xa4)) & 0xfffffffc) s> 0)
                        void* ecx_31
                        
                        do
                            var_27c_1 = esi_2
                            ebx_5 += 0x3c
                            int32_t ecx_17 = sub_5aa700(&var_294, esi_2 + 1)
                            void* esi_3 = var_294
                            int32_t var_2b8_7 = ecx_17
                            *(ebx_5 + esi_3) = 0
                            int32_t* eax_37
                            int32_t ecx_19
                            eax_37, ecx_19 = sub_55b0d0(edx_7 + 4, i)
                            
                            if (eax_37 != 0)
                                *eax_37
                            
                            int32_t var_2b8_8 = ecx_19
                            int16_t var_e8
                            void** eax_38 = sub_6ad9b0(&var_e8)
                            var_c_1.b = 3
                            void* ecx_22 = esi_3 + 0x24 + ebx_5
                            
                            if (ecx_22 != eax_38)
                                ecx_22 = sub_52e3c0(ecx_22, eax_38, 0, 0xffffffff)
                            
                            var_c_1.b = 0
                            int32_t var_d4
                            
                            if (var_d4 u>= 8)
                                ecx_22 = j__free(var_e8.d)
                            
                            var_d4 = 7
                            void* var_2b8_10 = ecx_22
                            int32_t var_d8_1 = 0
                            var_e8 = 0
                            int16_t var_148
                            void** eax_39 = sub_6ad9b0(&var_148)
                            var_c_1.b = 4
                            int16_t var_b8
                            void** eax_40 = sub_5483b0(edx_7 + 4, &var_b8)
                            var_c_1.b = 5
                            int16_t var_178
                            void** eax_41 = sub_532b80(eax_40, eax_40, &var_178, &data_ad85e8)
                            var_c_1.b = 6
                            int16_t var_118
                            void** eax_42 = sub_5327a0(eax_41, eax_41, &var_118, eax_39)
                            var_c_1.b = 7
                            int16_t var_1a8
                            void** eax_43 = sub_532b80(eax_42, eax_42, &var_1a8, &data_af18c0)
                            var_c_1.b = 8
                            void* ecx_30 = var_294 + 0xc + ebx_5
                            
                            if (ecx_30 != eax_43)
                                sub_52e3c0(ecx_30, eax_43, 0, 0xffffffff)
                            
                            int32_t var_194
                            
                            if (var_194 u>= 8)
                                j__free(var_1a8.d)
                            
                            var_194 = 7
                            int32_t var_198_1 = 0
                            var_1a8 = 0
                            int32_t var_104
                            
                            if (var_104 u>= 8)
                                j__free(var_118.d)
                            
                            var_104 = 7
                            int32_t var_108_1 = 0
                            var_118 = 0
                            int32_t var_164
                            
                            if (var_164 u>= 8)
                                j__free(var_178.d)
                            
                            var_164 = 7
                            int32_t var_168_1 = 0
                            var_178 = 0
                            int32_t var_a4
                            
                            if (var_a4 u>= 8)
                                j__free(var_b8.d)
                            
                            var_a4 = 7
                            var_c_1.b = 0
                            int32_t var_a8_1 = 0
                            var_b8 = 0
                            int32_t var_134
                            
                            if (var_134 u>= 8)
                                j__free(var_148.d)
                            
                            ecx_31 = var_2a4
                            esi_2 += 1
                            i += 1
                            var_148 = 0
                            var_134 = 7
                            int32_t var_138_1 = 0
                        while (i s< (*(ecx_31 + 0xa8) - *(ecx_31 + 0xa4)) s>> 2)
                case 0xa
                    if (&edi_4[9] != var_2a4 + 0xc)
                        sub_52e3c0(&edi_4[9], var_2a4 + 0xc, 0, 0xffffffff)
                case 0xb
                    void var_278
                    void* edx_17 = *sub_58c640(&var_278, var_2a4 + 0x160)
                    var_2a4 = edx_17
                    int32_t* var_274
                    
                    if (var_274 != 0)
                        bool cond:2_1 = var_274[1] != 1
                        var_274[1]
                        var_274[1] -= 1
                        
                        if (not(cond:2_1))
                            (*(*var_274 + 4))(eax_4)
                            bool cond:4_1 = var_274[2] != 1
                            var_274[2]
                            var_274[2] -= 1
                            
                            if (not(cond:4_1))
                                (*(*var_274 + 8))()
                            
                            edx_17 = var_2a4
                    
                    int32_t i_1 = 0
                    int32_t eax_52
                    int32_t edx_19
                    edx_19:eax_52 = muls.dp.d(0x2aaaaaab, *(edx_17 + 0xa8) - *(edx_17 + 0xa4))
                    int32_t edx_20 = edx_19 s>> 2
                    
                    if ((edx_20 u>> 0x1f) + edx_20 s> 0)
                        void* eax_57 = var_2a4 + 4
                        int32_t edx_26
                        
                        do
                            var_27c_1 = esi_2
                            ebx_5 += 0x3c
                            sub_5aa700(&var_294, esi_2 + 1)
                            void* esi_5 = var_294
                            void* ecx_39 = var_2a4
                            *(ebx_5 + esi_5) = 0
                            int16_t var_1f0
                            int16_t* eax_60 = sub_5a9030(ecx_39, &var_1f0, i_1)
                            var_c_1.b = 9
                            int32_t* ecx_41 = esi_5 + 0x24 + ebx_5
                            
                            if (ecx_41 != eax_60)
                                ecx_41 = sub_52e3c0(ecx_41, eax_60, 0, 0xffffffff)
                            
                            var_c_1.b = 0
                            int32_t var_1dc
                            
                            if (var_1dc u>= 8)
                                ecx_41 = j__free(var_1f0.d)
                            
                            var_1dc = 7
                            int32_t* var_2b8_21 = ecx_41
                            int32_t var_1e0_1 = 0
                            var_1f0 = 0
                            int16_t var_100
                            int16_t* eax_61 = sub_6ad9b0(&var_100)
                            var_c_1.b = 0xa
                            int16_t var_130
                            int16_t* eax_62 = sub_5483b0(eax_57, &var_130)
                            var_c_1.b = 0xb
                            int16_t var_160
                            int16_t* eax_63 = sub_532b80(eax_62, eax_62, &var_160, &data_ad85e8)
                            var_c_1.b = 0xc
                            int16_t var_190
                            int16_t* eax_64 = sub_5327a0(eax_63, eax_63, &var_190, eax_61)
                            var_c_1.b = 0xd
                            int16_t var_1c0
                            int16_t* eax_65 = sub_532b80(eax_64, eax_64, &var_1c0, &data_af18c0)
                            var_c_1.b = 0xe
                            int32_t* ecx_49 = var_294 + 0xc + ebx_5
                            
                            if (ecx_49 != eax_65)
                                sub_52e3c0(ecx_49, eax_65, 0, 0xffffffff)
                            
                            int32_t var_1ac
                            
                            if (var_1ac u>= 8)
                                j__free(var_1c0.d)
                            
                            var_1ac = 7
                            int32_t var_1b0_1 = 0
                            var_1c0 = 0
                            int32_t var_17c
                            
                            if (var_17c u>= 8)
                                j__free(var_190.d)
                            
                            var_17c = 7
                            int32_t var_180_1 = 0
                            var_190 = 0
                            int32_t var_14c
                            
                            if (var_14c u>= 8)
                                j__free(var_160.d)
                            
                            var_14c = 7
                            int32_t var_150_1 = 0
                            var_160 = 0
                            int32_t var_11c
                            
                            if (var_11c u>= 8)
                                j__free(var_130.d)
                            
                            var_11c = 7
                            var_c_1.b = 0
                            int32_t var_120 = 0
                            var_130 = 0
                            int32_t var_ec
                            
                            if (var_ec u>= 8)
                                j__free(var_100.d)
                            
                            esi_2 += 1
                            var_100 = 0
                            i_1 += 1
                            void* eax_66 = var_2a4
                            var_ec = 7
                            int32_t var_f0_1 = 0
                            int32_t eax_67
                            int32_t edx_25
                            edx_25:eax_67 =
                                muls.dp.d(0x2aaaaaab, *(eax_66 + 0xa8) - *(eax_66 + 0xa4))
                            edx_26 = edx_25 s>> 2
                        while (i_1 s< (edx_26 u>> 0x1f) + edx_26)
                default
                    int32_t var_2b8_29 = eax_11
                    void* esi_8 = var_2a4 + 0x24
                    var_268 = 0
                    int32_t var_264_1 = 0
                    void var_a0
                    __builtin_memcpy(&var_a0, esi_8, 0x80)
                    int32_t var_260_1 = 0
                    int32_t var_24
                    sub_5aac70(&var_268, &var_a0, &var_a0 + (var_24 << 2))
                    var_c_1.b = 0xf
                    int16_t var_d0
                    void** eax_73 = sub_5aaa50(&var_d0, &var_268)
                    var_c_1.b = 0x10
                    
                    if (&edi_4[9] != eax_73)
                        sub_52e3c0(&edi_4[9], eax_73, 0, 0xffffffff)
                    
                    int32_t var_bc
                    
                    if (var_bc u>= 8)
                        j__free(var_d0.d)
                    
                    var_bc = 7
                    var_d0 = 0
                    var_c_1.b = 0
                    int32_t eax_74 = var_268
                    int32_t var_c0_1 = 0
                    
                    if (eax_74 != 0)
                        j__free(eax_74)
                        var_268 = 0
                        int32_t var_264_2 = 0
                        int32_t var_260_2 = 0
            
            eax_76 = var_280_1 + 1
            edi_1 = var_27c_1
            ebx_1 = var_298_1 + 0x16c
            var_280_1 = eax_76
            var_298_1 = ebx_1
        while (eax_76 s< eax_11)
        esi_1 = var_294
        ebx_1 = var_290_1
    
    int32_t var_298_2
    int32_t edx_33
    int32_t ebx_9
    
    if (result[0x2e].b == 0)
        int32_t ecx_59 = result[0x106] - result[0x105]
        ebx_9 = (ebx_1 - esi_1) s/ 0x3c
        int32_t eax_78
        int32_t edx_31
        edx_31:eax_78 = muls.dp.d(0x88888889, ecx_59)
        var_298_2 = ebx_9
        edx_33 = (edx_31 + ecx_59) s>> 5
    
    if (result[0x2e].b != 0 || ebx_9 != (edx_33 u>> 0x1f) + edx_33)
        int32_t eax_84 = *(data_bac4e0 + 0x30)
        ebx_9 = (var_290_1 - esi_1) s/ 0x3c
        var_298_2 = ebx_9
        
        if (eax_84 != 0)
            eax_84(result[0x39], ebx_9, eax_4)
    
    int32_t edi_8 = 0
    
    if (ebx_9 s> 0)
        int32_t* result_1 = result
        void* esi_9 = esi_1 + 4
        void* edx_37 = 0xfffffffc - var_294
        var_2a4 = edx_37
        
        do
            int32_t edx_40
            
            if (result_1[0x2e].b == 0)
                int32_t ecx_63 = result_1[0x106] - result_1[0x105]
                int32_t eax_85
                int32_t edx_38
                edx_38:eax_85 = muls.dp.d(0x88888889, ecx_63)
                edx_40 = (edx_38 + ecx_63) s>> 5
                edx_37 = var_2a4
            
            if (result_1[0x2e].b != 0 || edi_8 s>= (edx_40 u>> 0x1f) + edx_40)
                result_1.b = 1
            label_5a9f02:
                
                switch (*esi_9 - 0xa)
                    case 0
                        int32_t var_254_1 = 7
                        int32_t var_258_1 = 0
                        var_268.w = 0
                        sub_52e720(&var_268, 0xaf18c4, 3)
                        var_c_1.b = 0x11
                        int32_t eax_95 = *(data_bac4e0 + 0x34)
                        
                        if (eax_95 != 0)
                            eax_95(result[0x39], edi_8, 0, &var_268, eax_4)
                        
                        var_c_1.b = 0
                        
                        if (var_254_1 u>= 8)
                            j__free(var_268)
                        
                        int32_t var_254_2 = 7
                        int32_t var_258_2 = 0
                        var_268.w = 0
                        edx_37 = var_2a4
                    case 1
                        int16_t var_238
                        sub_52e820(&var_238, u"intlist")
                        var_c_1.b = 0x13
                        int32_t eax_99 = *(data_bac4e0 + 0x34)
                        
                        if (eax_99 != 0)
                            eax_99(result[0x39], edi_8, 0, &var_238, eax_4)
                        
                        var_c_1.b = 0
                        int32_t var_224
                        
                        if (var_224 u>= 8)
                            j__free(var_238.d)
                        
                        var_224 = 7
                        int32_t var_228_1 = 0
                        var_238 = 0
                        edx_37 = var_2a4
                    case 0xa
                        int32_t var_23c_1 = 7
                        int32_t var_240_1 = 0
                        int16_t var_250 = 0
                        sub_52e720(&var_250, 0xaf18cc, 3)
                        var_c_1.b = 0x12
                        int32_t eax_97 = *(data_bac4e0 + 0x34)
                        
                        if (eax_97 != 0)
                            eax_97(result[0x39], edi_8, 0, &var_250, eax_4)
                        
                        var_c_1.b = 0
                        
                        if (var_23c_1 u>= 8)
                            j__free(var_250.d)
                        
                        int32_t var_23c_2 = 7
                        int32_t var_240_2 = 0
                        var_250 = 0
                        edx_37 = var_2a4
                    case 0xb
                        int16_t var_220
                        sub_52e820(&var_220, u"strlist")
                        var_c_1.b = 0x14
                        int32_t eax_101 = *(data_bac4e0 + 0x34)
                        
                        if (eax_101 != 0)
                            eax_101(result[0x39], edi_8, 0, &var_220, eax_4)
                        
                        var_c_1.b = 0
                        int32_t var_20c
                        
                        if (var_20c u>= 8)
                            j__free(var_220.d)
                        
                        var_20c = 7
                        int32_t var_210_1 = 0
                        var_220 = 0
                        edx_37 = var_2a4
                
                if (result_1.b == 0)
                    goto label_5aa141
                
            label_5aa165:
                int32_t ecx_76 = *(data_bac4e0 + 0x34)
                
                if (ecx_76 != 0)
                    ecx_76(result[0x39], edi_8, 1, esi_9 + 8, eax_4)
                
                if (result_1.b == 0)
                    goto label_5aa186
                
                result_1 = result
            label_5aa1c1:
                int32_t ecx_79 = *(data_bac4e0 + 0x34)
                
                if (ecx_79 != 0)
                    ecx_79(result_1[0x39], edi_8, 2, esi_9 + 0x20, eax_4)
            else
                result_1.b = 0
                
                if (*esi_9 != *(result[0x105] + edx_37 + esi_9 + 4))
                    goto label_5a9f02
                
            label_5aa141:
                void* eax_106 = result[0x105] + 0xc + edx_37 + esi_9
                int32_t ecx_74 = *(eax_106 + 0x10)
                
                if (*(eax_106 + 0x14) u>= 8)
                    eax_106 = *eax_106
                
                int32_t var_2b8_41 = ecx_74
                
                if (sub_536340(esi_9 + 8, ecx_74, *(esi_9 + 0x18), eax_106) != 0)
                    goto label_5aa165
                
            label_5aa186:
                result_1 = result
                void* eax_114 = result_1[0x105] + 0x24 + var_2a4 + esi_9
                int32_t ecx_77 = *(eax_114 + 0x10)
                
                if (*(eax_114 + 0x14) u>= 8)
                    eax_114 = *eax_114
                
                int32_t var_2b8_43 = ecx_77
                
                if (sub_536340(esi_9 + 0x20, ecx_77, *(esi_9 + 0x30), eax_114) != 0)
                    goto label_5aa1c1
            
            edx_37 = var_2a4
            edi_8 += 1
            esi_9 += 0x3c
        while (edi_8 s< var_298_2)
        
        esi_1 = var_294
    
    int32_t* result_2 = result
    int32_t ecx_81
    result, ecx_81 = sub_5aa550(&result_2[0x105], &var_294)
    result_2[0x2e].b = 0
    
    if (esi_1 != 0)
        int32_t var_2b8_46 = eax_11
        int32_t var_2bc_10 = ecx_81
        sub_5aac00(esi_1, var_290_1)
        result = j__free(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_2a4)
return result
