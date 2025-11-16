// 函数: sub_5ab310
// 地址: 0x5ab310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ba221
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34c
int32_t eax_2 = __security_cookie ^ &var_34c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = arg1

if (*(result + 4) != 0)
    int32_t ebx_1 = 0xffffffff
    void* var_324 = nullptr
    int32_t var_320_1 = 0
    int32_t var_31c_1 = 0
    int32_t var_c_1 = 0
    int32_t* esi_2 = data_bac4b0 + 0xa4
    int32_t i_2 = 0
    
    if ((esi_2[1] - *esi_2) s/ 0x164 s> 0)
        int32_t ecx_2 = 0
        int32_t var_32c_1 = 0
        int32_t i
        
        do
            ebx_1 += 1
            void* eax_10 = *esi_2 + ecx_2
            int32_t var_33c_1 = ebx_1
            sub_5acef0(&var_324, ebx_1 + 1)
            int32_t esi_6 = ebx_1 * 0x44
            int32_t* ecx_5 = var_324 + esi_6
            *ecx_5 = 0xffffffff
            ecx_5[1] = i_2
            
            switch (*(*(data_bac45c + 0x14) + (i_2 << 3)) - 0xa)
                case 0
                    ecx_5[3] = 0
                case 1
                    ecx_5[3] = 1
                case 0xa
                    ecx_5[3] = 3
                case 0xb
                    ecx_5[3] = 4
            
            ecx_5[4] = 0
            int16_t var_64
            int16_t* eax_16 = sub_698470(&var_64, i_2)
            var_c_1.b = 1
            
            if (&ecx_5[5] != eax_16)
                sub_52e3c0(&ecx_5[5], eax_16, 0, 0xffffffff)
            
            var_c_1.b = 0
            int32_t var_50
            
            if (var_50 u>= 8)
                j__free(var_64.d)
            
            var_50 = 7
            var_64 = 0
            int32_t var_54_1 = 0
            int32_t ecx_8 = ecx_5[3]
            
            switch (ecx_8)
                case 0
                    int32_t var_360_4 = ecx_8
                    *(eax_10 + 8)
                    int16_t var_f4
                    void** eax_18 = sub_6ad9b0(&var_f4)
                    var_c_1.b = 2
                    
                    if (&ecx_5[0xb] != eax_18)
                        sub_52e3c0(&ecx_5[0xb], eax_18, 0, 0xffffffff)
                    
                    var_c_1.b = 0
                    int32_t var_e0
                    
                    if (var_e0 u>= 8)
                        j__free(var_f4.d)
                    
                    var_e0 = 7
                    int32_t var_e4_1 = 0
                    var_f4 = 0
                case 1
                    void var_2fc
                    void* edx_11 = *sub_58c590(&var_2fc, eax_10 + 0x160)
                    void* var_340_2 = edx_11
                    int32_t* var_2f8
                    
                    if (var_2f8 != 0)
                        bool cond:0_1 = var_2f8[1] != 1
                        var_2f8[1]
                        var_2f8[1] -= 1
                        
                        if (not(cond:0_1))
                            (*(*var_2f8 + 4))(eax_4)
                            bool cond:2_1 = var_2f8[2] != 1
                            var_2f8[2]
                            var_2f8[2] -= 1
                            
                            if (not(cond:2_1))
                                (*(*var_2f8 + 8))()
                            
                            edx_11 = var_340_2
                    
                    int32_t j = 0
                    
                    if (((*(edx_11 + 0xa8) - *(edx_11 + 0xa4)) & 0xfffffffc) s> 0)
                        int32_t edi_2 = ebx_1 + 1
                        
                        do
                            var_33c_1 = edi_2
                            int32_t ecx_18 = sub_5acef0(&var_324, edi_2 + 1)
                            void* edi_4 = var_324 + esi_6 + 0x44
                            int32_t var_360_7 = ecx_18
                            *edi_4 = 0xffffffff
                            *(edi_4 + 4) = i_2
                            *(edi_4 + 8) = j
                            *(edi_4 + 0xc) = 2
                            int32_t* eax_29
                            int32_t ecx_20
                            eax_29, ecx_20 = sub_55b0d0(edx_11 + 4, j)
                            
                            if (eax_29 != 0)
                                *eax_29
                            
                            int32_t var_360_8 = ecx_20
                            int16_t var_c4
                            void** eax_30 = sub_6ad9b0(&var_c4)
                            void* ecx_22 = edi_4 + 0x2c
                            var_c_1.b = 3
                            
                            if (ecx_22 != eax_30)
                                ecx_22 = sub_52e3c0(ecx_22, eax_30, 0, 0xffffffff)
                            
                            var_c_1.b = 0
                            int32_t var_b0
                            
                            if (var_b0 u>= 8)
                                ecx_22 = j__free(var_c4.d)
                            
                            var_b0 = 7
                            void* var_360_10 = ecx_22
                            int32_t var_b4_1 = 0
                            var_c4 = 0
                            int16_t var_1fc
                            void** eax_31 = sub_6ad9b0(&var_1fc)
                            var_c_1.b = 4
                            int16_t var_ac
                            void** eax_32 = sub_5483b0(edx_11 + 4, &var_ac)
                            var_c_1.b = 5
                            int16_t var_34
                            void** eax_33 = sub_532b80(eax_32, eax_32, &var_34, &data_ad85e8)
                            var_c_1.b = 6
                            int16_t var_244
                            void** eax_34 = sub_5327a0(eax_33, eax_33, &var_244, eax_31)
                            var_c_1.b = 7
                            int16_t var_94
                            void** eax_35 = sub_532b80(eax_34, eax_34, &var_94, &data_af18c0)
                            var_c_1.b = 8
                            
                            if (edi_4 + 0x14 != eax_35)
                                sub_52e3c0(edi_4 + 0x14, eax_35, 0, 0xffffffff)
                            
                            int32_t var_80
                            
                            if (var_80 u>= 8)
                                j__free(var_94.d)
                            
                            var_80 = 7
                            int32_t var_84_1 = 0
                            var_94 = 0
                            int32_t var_230
                            
                            if (var_230 u>= 8)
                                j__free(var_244.d)
                            
                            var_230 = 7
                            int32_t var_234_1 = 0
                            var_244 = 0
                            int32_t var_20
                            
                            if (var_20 u>= 8)
                                j__free(var_34.d)
                            
                            var_20 = 7
                            int32_t var_24_1 = 0
                            var_34 = 0
                            int32_t var_98
                            
                            if (var_98 u>= 8)
                                j__free(var_ac.d)
                            
                            var_98 = 7
                            var_c_1.b = 0
                            int32_t var_9c_1 = 0
                            var_ac = 0
                            int32_t var_1e8
                            
                            if (var_1e8 u>= 8)
                                j__free(var_1fc.d)
                            
                            esi_6 += 0x44
                            j += 1
                            edi_2 += 1
                            var_1fc = 0
                            var_1e8 = 7
                            int32_t var_1ec_1 = 0
                        while (j s< (*(var_340_2 + 0xa8) - *(var_340_2 + 0xa4)) s>> 2)
                    
                    ebx_1 = var_33c_1
                case 3
                    if (&ecx_5[0xb] != eax_10 + 0xc)
                        sub_52e3c0(&ecx_5[0xb], eax_10 + 0xc, 0, 0xffffffff)
                case 4
                    void var_2f4
                    void* edx_21 = *sub_58c640(&var_2f4, eax_10 + 0x160)
                    void* var_348_3 = edx_21
                    int32_t* var_2f0
                    
                    if (var_2f0 != 0)
                        bool cond:1_1 = var_2f0[1] != 1
                        var_2f0[1]
                        var_2f0[1] -= 1
                        
                        if (not(cond:1_1))
                            (*(*var_2f0 + 4))(eax_4)
                            bool cond:3_1 = var_2f0[2] != 1
                            var_2f0[2]
                            var_2f0[2] -= 1
                            
                            if (not(cond:3_1))
                                (*(*var_2f0 + 8))()
                            
                            edx_21 = var_348_3
                    
                    int32_t j_1 = 0
                    int32_t eax_44
                    int32_t edx_23
                    edx_23:eax_44 = muls.dp.d(0x2aaaaaab, *(edx_21 + 0xa8) - *(edx_21 + 0xa4))
                    int32_t edx_24 = edx_23 s>> 2
                    
                    if ((edx_24 u>> 0x1f) + edx_24 s> 0)
                        int32_t edi_5 = ebx_1 + 1
                        int32_t edx_30
                        
                        do
                            var_33c_1 = edi_5
                            sub_5acef0(&var_324, edi_5 + 1)
                            void* edi_7 = var_324 + esi_6 + 0x44
                            *edi_7 = 0xffffffff
                            *(edi_7 + 4) = i_2
                            *(edi_7 + 8) = j_1
                            *(edi_7 + 0xc) = 5
                            int16_t var_10c
                            void** eax_52 = sub_5a9030(var_348_3, &var_10c, j_1)
                            void* ecx_38 = edi_7 + 0x2c
                            var_c_1.b = 9
                            
                            if (ecx_38 != eax_52)
                                ecx_38 = sub_52e3c0(ecx_38, eax_52, 0, 0xffffffff)
                            
                            var_c_1.b = 0
                            int32_t var_f8
                            
                            if (var_f8 u>= 8)
                                ecx_38 = j__free(var_10c.d)
                            
                            var_f8 = 7
                            void* var_360_21 = ecx_38
                            int32_t var_fc_1 = 0
                            var_10c = 0
                            int16_t var_16c
                            int16_t* eax_53 = sub_6ad9b0(&var_16c)
                            var_c_1.b = 0xa
                            int16_t var_dc
                            int16_t* eax_54 = sub_5483b0(var_348_3 + 4, &var_dc)
                            var_c_1.b = 0xb
                            int16_t var_19c
                            int16_t* eax_55 = sub_532b80(eax_54, eax_54, &var_19c, &data_ad85e8)
                            var_c_1.b = 0xc
                            int16_t var_4c
                            int16_t* eax_56 = sub_5327a0(eax_55, eax_55, &var_4c, eax_53)
                            var_c_1.b = 0xd
                            int16_t var_1cc
                            int16_t* eax_57 = sub_532b80(eax_56, eax_56, &var_1cc, &data_af18c0)
                            var_c_1.b = 0xe
                            
                            if (edi_7 + 0x14 != eax_57)
                                sub_52e3c0(edi_7 + 0x14, eax_57, 0, 0xffffffff)
                            
                            int32_t var_1b8
                            
                            if (var_1b8 u>= 8)
                                j__free(var_1cc.d)
                            
                            var_1b8 = 7
                            int32_t var_1bc_1 = 0
                            var_1cc = 0
                            int32_t var_38
                            
                            if (var_38 u>= 8)
                                j__free(var_4c.d)
                            
                            var_38 = 7
                            int32_t var_3c_1 = 0
                            var_4c = 0
                            int32_t var_188
                            
                            if (var_188 u>= 8)
                                j__free(var_19c.d)
                            
                            var_188 = 7
                            int32_t var_18c_1 = 0
                            var_19c = 0
                            int32_t var_c8
                            
                            if (var_c8 u>= 8)
                                j__free(var_dc.d)
                            
                            var_c8 = 7
                            var_c_1.b = 0
                            int32_t var_cc_1 = 0
                            var_dc = 0
                            int32_t var_158
                            
                            if (var_158 u>= 8)
                                j__free(var_16c.d)
                            
                            esi_6 += 0x44
                            var_16c = 0
                            j_1 += 1
                            edi_5 += 1
                            var_158 = 7
                            int32_t var_15c_1 = 0
                            int32_t eax_59
                            int32_t edx_29
                            edx_29:eax_59 =
                                muls.dp.d(0x2aaaaaab, *(var_348_3 + 0xa8) - *(var_348_3 + 0xa4))
                            edx_30 = edx_29 s>> 2
                        while (j_1 s< (edx_30 u>> 0x1f) + edx_30)
                    
                    ebx_1 = var_33c_1
            
            esi_2 = data_bac4b0 + 0xa4
            var_32c_1 += 0x164
            i = i_2 + 1
            i_2 = i
            ecx_2 = var_32c_1
        while (i s< (esi_2[1] - *esi_2) s/ 0x164)
    
    int32_t i_3 = 0
    int32_t edi_9 = *(data_bac45c + 0x64)
    void* ecx_49 = edi_9 * 0xb8
    void** esi_14 = *(data_bac4ac + 0xa4) + 0xa4 + ecx_49
    int16_t var_2ec
    int16_t var_2d4
    int16_t var_2bc
    int16_t var_2a4
    int16_t var_28c
    
    if ((esi_14[1] - *esi_14) s/ 0x164 s> 0)
        int32_t ecx_52 = 0
        int32_t var_330_3 = 0
        int32_t ebx_4 = ebx_1
        int32_t i_1
        
        do
            ebx_4 += 1
            void* eax_75 = *esi_14 + ecx_52
            int32_t var_33c_2 = ebx_4
            int32_t var_334_3 = ebx_4 + 1
            sub_5acef0(&var_324, ebx_4 + 1)
            int32_t esi_18 = ebx_4 * 0x44
            int32_t* edi_11 = var_324 + esi_18
            *edi_11 = edi_9
            edi_11[1] = i_3
            
            switch (*(*(*(data_bac45c + 0x54) + edi_9 * 0x54 + 0x1c) + (i_3 << 3)) - 0xa)
                case 0
                    edi_11[3] = 0
                case 1
                    edi_11[3] = 1
                case 0xa
                    edi_11[3] = 3
                case 0xb
                    edi_11[3] = 4
            
            edi_11[4] = 0
            int16_t var_7c
            void** eax_83 = sub_6984d0(&var_7c, edi_9, i_3)
            void* ecx_55 = &edi_11[5]
            var_c_1.b = 0xf
            
            if (ecx_55 != eax_83)
                ecx_55 = sub_52e3c0(ecx_55, eax_83, 0, 0xffffffff)
            
            var_c_1.b = 0
            int32_t var_68
            
            if (var_68 u>= 8)
                ecx_55 = j__free(var_7c.d)
            
            var_68 = 7
            var_7c = 0
            int32_t var_6c_1 = 0
            
            switch (edi_11[3])
                case 0
                    void* var_360_32 = ecx_55
                    *(eax_75 + 8)
                    int16_t var_13c
                    void** eax_85 = sub_6ad9b0(&var_13c)
                    var_c_1.b = 0x10
                    
                    if (&edi_11[0xb] != eax_85)
                        sub_52e3c0(&edi_11[0xb], eax_85, 0, 0xffffffff)
                    
                    var_c_1.b = 0
                    int32_t var_128
                    
                    if (var_128 u>= 8)
                        j__free(var_13c.d)
                    
                    var_128 = 7
                    int32_t var_12c_1 = 0
                    var_13c = 0
                case 1
                    int16_t var_274
                    sub_52e820(&var_274, &data_ad7c90)
                    var_c_1.b = 0x11
                    
                    if (&edi_11[0xb] != &var_274)
                        sub_52e3c0(&edi_11[0xb], &var_274, 0, 0xffffffff)
                    
                    var_c_1.b = 0
                    int32_t var_260
                    
                    if (var_260 u>= 8)
                        j__free(var_274.d)
                    
                    var_260 = 7
                    int32_t var_264_1 = 0
                    var_274 = 0
                    void var_30c
                    void** eax_86
                    int32_t ecx_62
                    eax_86, ecx_62 = sub_58c590(&var_30c, eax_75 + 0x160)
                    void* edi_12 = *eax_86
                    int32_t* var_308
                    
                    if (var_308 != 0)
                        bool cond:4_1 = var_308[1] != 1
                        var_308[1]
                        var_308[1] -= 1
                        
                        if (not(cond:4_1))
                            (*(*var_308 + 4))(eax_4)
                            bool cond:5_1 = var_308[2] != 1
                            var_308[2]
                            var_308[2] -= 1
                            
                            if (not(cond:5_1))
                                (*(*var_308 + 8))()
                    
                    int32_t j_2 = 0
                    
                    if (((*(edi_12 + 0xa8) - *(edi_12 + 0xa4)) & 0xfffffffc) s> 0)
                        do
                            var_33c_2 = var_334_3
                            int32_t eax_94 = var_334_3 + 1
                            var_334_3 = eax_94
                            int32_t ecx_67 = sub_5acef0(&var_324, eax_94)
                            void* edi_15 = var_324 + esi_18 + 0x44
                            int32_t var_360_36 = ecx_67
                            *edi_15 = edi_9
                            *(edi_15 + 4) = i_3
                            *(edi_15 + 8) = j_2
                            *(edi_15 + 0xc) = 2
                            int32_t* eax_97
                            int32_t ecx_69
                            eax_97, ecx_69 = sub_55b0d0(edi_12 + 4, j_2)
                            
                            if (eax_97 != 0)
                                *eax_97
                            
                            int32_t var_360_37 = ecx_69
                            int16_t var_22c
                            void** eax_98 = sub_6ad9b0(&var_22c)
                            void* ecx_71 = edi_15 + 0x2c
                            var_c_1.b = 0x12
                            
                            if (ecx_71 != eax_98)
                                ecx_71 = sub_52e3c0(ecx_71, eax_98, 0, 0xffffffff)
                            
                            var_c_1.b = 0
                            int32_t var_218
                            
                            if (var_218 u>= 8)
                                ecx_71 = j__free(var_22c.d)
                            
                            var_218 = 7
                            void* var_360_39 = ecx_71
                            int32_t var_21c_1 = 0
                            var_22c = 0
                            int16_t var_154
                            void** eax_99 = sub_6ad9b0(&var_154)
                            var_c_1.b = 0x13
                            int16_t var_184
                            void** eax_100 = sub_5483b0(edi_12 + 4, &var_184)
                            var_c_1.b = 0x14
                            int16_t var_1b4
                            void** eax_101 = sub_532b80(eax_100, eax_100, &var_1b4, &data_ad85e8)
                            var_c_1.b = 0x15
                            int16_t var_1e4
                            void** eax_102 = sub_5327a0(eax_101, eax_101, &var_1e4, eax_99)
                            var_c_1.b = 0x16
                            int16_t var_214
                            void** eax_103 = sub_532b80(eax_102, eax_102, &var_214, &data_af18c0)
                            var_c_1.b = 0x17
                            
                            if (edi_15 + 0x14 != eax_103)
                                sub_52e3c0(edi_15 + 0x14, eax_103, 0, 0xffffffff)
                            
                            int32_t var_200
                            
                            if (var_200 u>= 8)
                                j__free(var_214.d)
                            
                            var_200 = 7
                            int32_t var_204_1 = 0
                            var_214 = 0
                            int32_t var_1d0
                            
                            if (var_1d0 u>= 8)
                                j__free(var_1e4.d)
                            
                            var_1d0 = 7
                            int32_t var_1d4_1 = 0
                            var_1e4 = 0
                            int32_t var_1a0
                            
                            if (var_1a0 u>= 8)
                                j__free(var_1b4.d)
                            
                            var_1a0 = 7
                            int32_t var_1a4_1 = 0
                            var_1b4 = 0
                            int32_t var_170
                            
                            if (var_170 u>= 8)
                                j__free(var_184.d)
                            
                            var_170 = 7
                            var_c_1.b = 0
                            int32_t var_174_1 = 0
                            var_184 = 0
                            int32_t var_140
                            
                            if (var_140 u>= 8)
                                j__free(var_154.d)
                            
                            esi_18 += 0x44
                            j_2 += 1
                            var_154 = 0
                            var_140 = 7
                            int32_t var_144_1 = 0
                        while (j_2 s< (*(edi_12 + 0xa8) - *(edi_12 + 0xa4)) s>> 2)
                    
                    ebx_4 = var_33c_2
                case 3
                    if (&edi_11[0xb] != eax_75 + 0xc)
                        sub_52e3c0(&edi_11[0xb], eax_75 + 0xc, 0, 0xffffffff)
                case 4
                    int16_t var_25c
                    sub_52e820(&var_25c, &data_ad7c90)
                    var_c_1.b = 0x18
                    
                    if (&edi_11[0xb] != &var_25c)
                        sub_52e3c0(&edi_11[0xb], &var_25c, 0, 0xffffffff)
                    
                    var_c_1.b = 0
                    int32_t var_248
                    
                    if (var_248 u>= 8)
                        j__free(var_25c.d)
                    
                    var_248 = 7
                    int32_t var_24c_1 = 0
                    var_25c = 0
                    void var_304
                    void* edi_16 = *sub_58c640(&var_304, eax_75 + 0x160)
                    sub_54b010(&var_304)
                    int32_t j_3 = 0
                    int32_t eax_108
                    int32_t edx_55
                    edx_55:eax_108 = muls.dp.d(0x2aaaaaab, *(edi_16 + 0xa8) - *(edi_16 + 0xa4))
                    int32_t edx_56 = edx_55 s>> 2
                    
                    if ((edx_56 u>> 0x1f) + edx_56 s> 0)
                        int32_t edx_62
                        
                        do
                            var_33c_2 = var_334_3
                            int32_t eax_113 = var_334_3 + 1
                            var_334_3 = eax_113
                            sub_5acef0(&var_324, eax_113)
                            void* edi_19 = var_324 + esi_18 + 0x44
                            *edi_19 = edi_9
                            *(edi_19 + 4) = i_3
                            *(edi_19 + 8) = j_3
                            *(edi_19 + 0xc) = 5
                            int16_t var_124
                            int16_t* eax_116 = sub_5a9030(edi_16, &var_124, j_3)
                            int32_t* ecx_87 = edi_19 + 0x2c
                            var_c_1.b = 0x19
                            
                            if (ecx_87 != eax_116)
                                ecx_87 = sub_52e3c0(ecx_87, eax_116, 0, 0xffffffff)
                            
                            var_c_1.b = 0
                            int32_t var_110
                            
                            if (var_110 u>= 8)
                                ecx_87 = j__free(var_124.d)
                            
                            var_110 = 7
                            int32_t* var_360_51 = ecx_87
                            int32_t var_114_1 = 0
                            var_124 = 0
                            void** eax_117 = sub_6ad9b0(&var_2ec)
                            var_c_1.b = 0x1a
                            void** eax_118 = sub_5483b0(edi_16 + 4, &var_2a4)
                            var_c_1.b = 0x1b
                            void** eax_119 = sub_532b80(eax_118, eax_118, &var_28c, &data_ad85e8)
                            var_c_1.b = 0x1c
                            void** eax_120 = sub_5327a0(eax_119, eax_119, &var_2bc, eax_117)
                            var_c_1.b = 0x1d
                            void** eax_121 = sub_532b80(eax_120, eax_120, &var_2d4, &data_af18c0)
                            var_c_1.b = 0x1e
                            
                            if (edi_19 + 0x14 != eax_121)
                                sub_52e3c0(edi_19 + 0x14, eax_121, 0, 0xffffffff)
                            
                            int32_t var_2c0
                            
                            if (var_2c0 u>= 8)
                                j__free(var_2d4.d)
                            
                            var_2c0 = 7
                            int32_t var_2c4_1 = 0
                            var_2d4 = 0
                            int32_t var_2a8
                            
                            if (var_2a8 u>= 8)
                                j__free(var_2bc.d)
                            
                            var_2a8 = 7
                            int32_t var_2ac_1 = 0
                            var_2bc = 0
                            int32_t var_278
                            
                            if (var_278 u>= 8)
                                j__free(var_28c.d)
                            
                            var_278 = 7
                            int32_t var_27c_1 = 0
                            var_28c = 0
                            int32_t var_290
                            
                            if (var_290 u>= 8)
                                j__free(var_2a4.d)
                            
                            var_290 = 7
                            var_c_1.b = 0
                            int32_t var_294_1 = 0
                            var_2a4 = 0
                            int32_t var_2d8
                            
                            if (var_2d8 u>= 8)
                                j__free(var_2ec.d)
                            
                            esi_18 += 0x44
                            var_2ec = 0
                            j_3 += 1
                            var_2d8 = 7
                            int32_t var_2dc_1 = 0
                            int32_t eax_123
                            int32_t edx_61
                            edx_61:eax_123 =
                                muls.dp.d(0x2aaaaaab, *(edi_16 + 0xa8) - *(edi_16 + 0xa4))
                            edx_62 = edx_61 s>> 2
                        while (j_3 s< (edx_62 u>> 0x1f) + edx_62)
                    
                    ebx_4 = var_33c_2
            
            var_330_3 += 0x164
            i_1 = i_3 + 1
            esi_14 = ecx_49 + 0xa4 + *(data_bac4ac + 0xa4)
            i_3 = i_1
            ecx_52 = var_330_3
        while (i_1 s< (esi_14[1] - *esi_14) s/ 0x164)
    
    void* result_1 = result
    int32_t eax_133
    int32_t eax_134
    
    if (*(result_1 + 0xb8) == 0)
        eax_133 = sub_5ad000(result_1 + 0x414)
        eax_134 = sub_5ad000(&var_324)
    
    if (*(result_1 + 0xb8) != 0 || eax_134 != eax_133)
        sub_56af00(result_1 + 0xe0, sub_5ad000(&var_324))
    
    void* ebx_6 = result_1 + 0xe0
    int32_t esi_26 = 0
    
    if (sub_6c4ae0(ebx_6) s> 0)
        LRESULT eax_153
        
        do
            int32_t eax_137
            
            if (*(result_1 + 0xb8) == 0)
                eax_137 = sub_5ad000(result_1 + 0x414)
            
            char var_341_1
            int32_t* edi_21
            
            if (*(result_1 + 0xb8) != 0 || esi_26 s>= eax_137)
                var_341_1 = 1
            label_5ac5a4:
                edi_21 = sub_5ad020(&var_324, esi_26)
                int32_t eax_142 = edi_21[3]
                int16_t* eax_144
                
                if (eax_142 == 2 || eax_142 == 5)
                    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                        &var_2ec, &data_ad7c90)
                    var_c_1.b = 0x1f
                    eax_144 = &var_2ec
                else
                    int32_t eax_143 = *edi_21
                    
                    if (eax_143 != 0xffffffff)
                        eax_144 = sub_698170(data_bac45c, &var_2ec, eax_143)
                        var_c_1.b = 0x21
                    else
                        <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                            &var_2ec, (inc)")
                        var_c_1.b = 0x20
                        eax_144 = &var_2ec
                
                sub_56af20(ebx_6, esi_26, 0, eax_144)
                var_c_1.b = 0
                sub_52e8a0(&var_2ec)
                
                if (var_341_1 != 0)
                    goto label_5ac646
                
                goto label_5ac635
            
            var_341_1 = 0
            int32_t* eax_138 = sub_5ad020(result_1 + 0x414, esi_26)
            edi_21 = sub_5ad020(&var_324, esi_26)
            
            if (*edi_21 != *eax_138 || edi_21[1] != eax_138[1])
                goto label_5ac5a4
            
        label_5ac635:
            void* eax_145 = sub_5ad020(result + 0x414, esi_26)
            
            if (edi_21[3] != *(eax_145 + 0xc))
            label_5ac646:
                int16_t* ecx_119
                
                switch (edi_21[3])
                    case 0
                        <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                            &var_2ec, 0xaf18c4)
                        var_c_1.b = 0x22
                        sub_56af20(ebx_6, esi_26, 1, &var_2ec)
                        ecx_119 = &var_2ec
                    case 1
                        <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                            &var_28c, intlist")
                        var_c_1.b = 0x24
                        sub_56af20(ebx_6, esi_26, 1, &var_28c)
                        ecx_119 = &var_28c
                    case 3
                        <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                            &var_2a4, 0xaf18cc)
                        var_c_1.b = 0x23
                        sub_56af20(ebx_6, esi_26, 1, &var_2a4)
                        ecx_119 = &var_2a4
                    case 4
                        <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                            &var_2bc, strlist")
                        var_c_1.b = 0x25
                        sub_56af20(ebx_6, esi_26, 1, &var_2bc)
                        ecx_119 = &var_2bc
                    default
                        <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                            &var_2d4, &data_ad7c90)
                        var_c_1.b = 0x26
                        sub_56af20(ebx_6, esi_26, 1, &var_2d4)
                        ecx_119 = &var_2d4
                
                var_c_1.b = 0
                sub_52e8a0(ecx_119)
                
                if (var_341_1 != 0)
                    goto label_5ac794
                
                goto label_5ac782
            
        label_5ac782:
            
            if (sub_535c40(&edi_21[5], sub_5ad020(result + 0x414, esi_26) + 0x14) == 0)
            label_5ac7b6:
                
                if (sub_535c40(&edi_21[0xb], sub_5ad020(result + 0x414, esi_26) + 0x2c) != 0)
                    sub_56af20(ebx_6, esi_26, 3, &edi_21[0xb])
            else
            label_5ac794:
                sub_56af20(ebx_6, esi_26, 2, &edi_21[5])
                
                if (var_341_1 == 0)
                    goto label_5ac7b6
                
                sub_56af20(ebx_6, esi_26, 3, &edi_21[0xb])
            
            esi_26 += 1
            eax_153 = sub_6c4ae0(ebx_6)
            result_1 = result
        while (esi_26 s< eax_153)
    
    <lambda_1c5d2e30ced80982b54a94023c03f3fc>::<lambda_1c5d2e30ced80982b54a94023c03f3fc>(
        result_1 + 0x414, &var_324)
    *(result_1 + 0xb8) = 0
    result = sub_5ac8b0(&var_324)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_34c)
return result
