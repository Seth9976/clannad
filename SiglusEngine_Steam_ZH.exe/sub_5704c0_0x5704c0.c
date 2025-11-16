// 函数: sub_5704c0
// 地址: 0x5704c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b4053
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2fc
int32_t eax_2 = __security_cookie ^ &var_2fc
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_2ec = edi
int32_t ebx = 0
int32_t var_2f0 = 0

if (*(edi + 4) != 0)
    void* var_2e8 = nullptr
    int32_t var_2e4_1 = 0
    int32_t var_2e0_1 = 0
    int32_t var_c_1 = 0
    sub_571450(&var_2e8, &data_4ebe29c)
    void* esi = var_2e8
    int32_t var_2dc_1
    int32_t edx_3
    
    if (*(edi + 0xb8) == 0)
        edx_3 = (var_2e4_1 - esi) s>> 7
        var_2dc_1 = edx_3
    
    if (*(edi + 0xb8) != 0 || edx_3 != (*(edi + 0x418) - *(edi + 0x414)) s>> 7)
        edx_3 = (var_2e4_1 - esi) s>> 7
        var_2dc_1 = edx_3
        int32_t eax_9 = *(data_bac4e0 + 0x30)
        
        if (eax_9 != 0)
            eax_9(*(edi + 0xe4), edx_3, eax_4)
            edx_3 = var_2dc_1
    
    int32_t ecx_2 = 0
    int32_t var_2f8_1 = 0
    
    if (edx_3 s> 0)
        do
            char var_2fa_1
            int32_t var_2f4_1
            int32_t edx_7
            void* esi_1
            
            if (*(edi + 0xb8) == 0 && ecx_2 s< (*(edi + 0x418) - *(edi + 0x414)) s>> 7)
                var_2fa_1 = 0
                edx_7 = ecx_2 << 7
                esi_1 = esi + edx_7
                var_2f4_1 = edx_7
                
                if (*(esi_1 + 4) == *(edx_7 + *(edi + 0x414) + 4))
                    goto label_570686
                
                ecx_2 = var_2f8_1
                esi = var_2e8
                goto label_5705f0
            
            var_2fa_1 = 1
        label_5705f0:
            int32_t eax_15 = ecx_2 << 7
            esi_1 = esi + eax_15
            var_2f4_1 = eax_15
            int32_t var_310_2 = ecx_2
            *(esi_1 + 4)
            int16_t var_22c
            int16_t* eax_16 = sub_6ad9b0(&var_22c)
            var_c_1.b = 1
            int32_t ecx_6 = *(data_bac4e0 + 0x34)
            
            if (ecx_6 != 0)
                ecx_6(*(edi + 0xe4), var_2f8_1, 0, eax_16, eax_4)
            
            var_c_1.b = 0
            int32_t var_218
            
            if (var_218 u>= 8)
                j__free(var_22c.d)
            
            var_218 = 7
            int32_t var_21c_1 = 0
            var_22c = 0
            
            if (var_2fa_1 != 0)
                goto label_570691
            
            edx_7 = var_2f4_1
        label_570686:
            
            if (*esi_1 != *(edx_7 + *(edi + 0x414)))
            label_570691:
                int32_t var_278_1 = 7
                int32_t var_27c_1 = 0
                int16_t* edx_9 = (&data_ad98b0)[*esi_1]
                int16_t var_28c = 0
                int32_t ecx_8
                
                if (*edx_9 != 0)
                    int16_t* ecx_9 = edx_9
                    void* eax_19
                    
                    do
                        eax_19.w = *ecx_9
                        ecx_9 = &ecx_9[1]
                    while (eax_19.w != 0)
                    ecx_8 = (ecx_9 - &ecx_9[1]) s>> 1
                else
                    ecx_8 = 0
                
                sub_52e720(&var_28c, edx_9, ecx_8)
                var_c_1.b = 2
                int32_t eax_21 = *(data_bac4e0 + 0x34)
                
                if (eax_21 != 0)
                    eax_21(*(edi + 0xe4), var_2f8_1, 1, &var_28c, eax_4)
                
                var_c_1.b = 0
                
                if (var_278_1 u>= 8)
                    j__free(var_28c.d)
                
                edx_7 = var_2f4_1
                int32_t var_278_2 = 7
                int32_t var_27c_2 = 0
                var_28c = 0
            
            int32_t eax_22 = *esi_1
            
            if (eax_22 == 1 || eax_22 == 3 || eax_22 == 4)
                char var_2f9_5
                
                if (var_2fa_1 != 0)
                    var_2f9_5 = 1
                else
                    void var_2bc
                    int32_t* eax_43 = sub_571430(*(edi + 0x414) + 0x58 + edx_7, &var_2bc)
                    var_c_1.b = 3
                    void var_2cc
                    int32_t* eax_44
                    eax_44, edx_7 = sub_571430(esi_1 + 0x58, &var_2cc)
                    ebx |= 3
                    var_2f9_5 = 0
                    var_2f0 = ebx
                    
                    if (*eax_44 != *eax_43)
                        var_2f9_5 = 1
                
                if ((ebx.b & 2) != 0)
                    ebx &= 0xfffffffd
                    var_2f0 = ebx
                    int32_t* var_2c8
                    
                    if (var_2c8 != 0)
                        bool cond:0_1 = var_2c8[1] != 1
                        var_2c8[1] -= 1
                        
                        if (not(cond:0_1))
                            (*(*var_2c8 + 4))(eax_4)
                            bool cond:2_1 = var_2c8[2] != 1
                            var_2c8[2]
                            var_2c8[2] -= 1
                            
                            if (not(cond:2_1))
                                (*(*var_2c8 + 8))()
                
                var_c_1 = 0
                
                if ((ebx.b & 1) != 0)
                    ebx &= 0xfffffffe
                    var_2f0 = ebx
                    int32_t* var_2b8
                    
                    if (var_2b8 != 0)
                        bool cond:1_1 = var_2b8[1] != 1
                        var_2b8[1]
                        var_2b8[1] -= 1
                        
                        if (not(cond:1_1))
                            (*(*var_2b8 + 4))(eax_4)
                            bool cond:5_1 = var_2b8[2] != 1
                            var_2b8[2]
                            var_2b8[2] -= 1
                            
                            if (not(cond:5_1))
                                (*(*var_2b8 + 8))()
                
                if (var_2f9_5 == 0)
                    edi = var_2ec
                else
                    void var_2ac
                    int32_t* eax_54
                    int32_t ecx_62
                    eax_54, ecx_62 = sub_571430(esi_1 + 0x58, &var_2ac)
                    bool var_2f9_6 = *eax_54 != 0
                    int32_t* var_2a8
                    
                    if (var_2a8 != 0)
                        bool cond:4_1 = var_2a8[1] != 1
                        ecx_62 = var_2a8[1]
                        var_2a8[1] -= 1
                        
                        if (not(cond:4_1))
                            ecx_62 = (*(*var_2a8 + 4))(eax_4)
                            bool cond:6_1 = var_2a8[2] != 1
                            var_2a8[2]
                            var_2a8[2] -= 1
                            
                            if (not(cond:6_1))
                                ecx_62 = (*(*var_2a8 + 8))()
                    
                    void* eax_59 = *(esi_1 + 0x5c)
                    
                    if (eax_59 != 0)
                        *(eax_59 + 4)
                        ebx = var_2f0
                    
                    int32_t var_310_23 = ecx_62
                    int16_t var_124
                    void** eax_60 = sub_6ad9b0(&var_124)
                    var_c_1.b = 4
                    int16_t var_1fc
                    int16_t* eax_61 = sub_6ad930(&var_1fc, var_2f9_6)
                    var_c_1.b = 5
                    int16_t var_154
                    int16_t* eax_62 = sub_532b80(eax_61, eax_61, &var_154, 0xad94e4)
                    var_c_1.b = 6
                    int16_t var_274
                    int16_t* eax_63 = sub_5327a0(eax_62, eax_62, &var_274, eax_60)
                    var_c_1.b = 7
                    int16_t var_184
                    int16_t* eax_64
                    eax_64, edx_7 = sub_532b80(eax_63, eax_63, &var_184, &data_ad90a0)
                    edi = var_2ec
                    var_c_1.b = 8
                    int32_t ecx_71 = *(data_bac4e0 + 0x34)
                    
                    if (ecx_71 != 0)
                        ecx_71(*(edi + 0xe4), var_2f8_1, 2, eax_64, eax_4)
                    
                    int32_t var_170
                    
                    if (var_170 u>= 8)
                        j__free(var_184.d)
                    
                    var_170 = 7
                    int32_t var_174_1 = 0
                    var_184 = 0
                    int32_t var_260
                    
                    if (var_260 u>= 8)
                        j__free(var_274.d)
                    
                    var_260 = 7
                    int32_t var_264_1 = 0
                    var_274 = 0
                    int32_t var_140
                    
                    if (var_140 u>= 8)
                        j__free(var_154.d)
                    
                    var_140 = 7
                    int32_t var_144_1 = 0
                    var_154 = 0
                    int32_t var_1e8
                    
                    if (var_1e8 u>= 8)
                        j__free(var_1fc.d)
                    
                    var_1e8 = 7
                    var_c_1.b = 0
                    int32_t var_1ec_1 = 0
                    var_1fc = 0
                    int32_t var_110
                    
                    if (var_110 u>= 8)
                        j__free(var_124.d)
                    
                    var_110 = 7
                    int32_t var_114_1 = 0
                    var_124 = 0
            else if (eax_22 == 6)
                char var_2f9_1
                void var_2d4
                void var_29c
                
                if (var_2fa_1 != 0)
                    var_2f9_1 = 1
                else
                    int32_t* eax_23 = sub_571430(*(edi + 0x414) + 0x68 + edx_7, &var_2d4)
                    var_c_1.b = 9
                    int32_t* eax_24
                    eax_24, edx_7 = sub_571430(esi_1 + 0x68, &var_29c)
                    ebx |= 0xc
                    var_2f9_1 = 0
                    var_2f0 = ebx
                    
                    if (*eax_24 != *eax_23)
                        var_2f9_1 = 1
                
                if ((ebx.b & 8) != 0)
                    ebx &= 0xfffffff7
                    var_2f0 = ebx
                    sub_54b010(&var_29c)
                
                var_c_1 = 0
                
                if ((ebx.b & 4) != 0)
                    ebx &= 0xfffffffb
                    var_2f0 = ebx
                    sub_54b010(&var_2d4)
                
                if (var_2f9_1 == 0)
                    edi = var_2ec
                else
                    void var_2c4
                    bool var_2f9_2 = *sub_571430(esi_1 + 0x68, &var_2c4) != 0
                    int32_t ecx_20 = sub_54b010(&var_2c4)
                    void* eax_27 = *(esi_1 + 0x6c)
                    
                    if (eax_27 != 0)
                        *(eax_27 + 4)
                        ebx = var_2f0
                    
                    int32_t var_310_11 = ecx_20
                    void var_4c
                    void** eax_28 = sub_6ad9b0(&var_4c)
                    var_c_1.b = 0xa
                    void var_ac
                    int16_t* eax_29 = sub_6ad930(&var_ac, var_2f9_2)
                    var_c_1.b = 0xb
                    void var_7c
                    int16_t* eax_30 = sub_532b80(eax_29, eax_29, &var_7c, 0xad94e4)
                    var_c_1.b = 0xc
                    void var_dc
                    int16_t* eax_31 = sub_5327a0(eax_30, eax_30, &var_dc, eax_28)
                    var_c_1.b = 0xd
                    edi = var_2ec
                    var_c_1.b = 0xe
                    void var_10c
                    sub_56af20(edi + 0xe0, var_2f8_1, 2, 
                        sub_532b80(eax_31, eax_31, &var_10c, &data_ad90a0))
                    sub_52e8a0(&var_10c)
                    sub_52e8a0(&var_dc)
                    sub_52e8a0(&var_7c)
                    sub_52e8a0(&var_ac)
                    var_c_1.b = 0
                    sub_52e8a0(&var_4c)
            else if (eax_22 == 7)
                char var_2f9_3
                void var_2b4
                void var_2a4
                
                if (var_2fa_1 != 0)
                    var_2f9_3 = 1
                else
                    int32_t* eax_33 = sub_571430(*(edi + 0x414) + 0x60 + edx_7, &var_2b4)
                    var_c_1.b = 0xf
                    int32_t* eax_34
                    eax_34, edx_7 = sub_571430(esi_1 + 0x60, &var_2a4)
                    ebx |= 0x30
                    var_2f9_3 = 0
                    var_2f0 = ebx
                    
                    if (*eax_34 != *eax_33)
                        var_2f9_3 = 1
                
                if ((ebx.b & 0x20) != 0)
                    ebx &= 0xffffffdf
                    var_2f0 = ebx
                    sub_54b010(&var_2a4)
                
                var_c_1 = 0
                
                if ((ebx.b & 0x10) != 0)
                    ebx &= 0xffffffef
                    var_2f0 = ebx
                    sub_54b010(&var_2b4)
                
                if (var_2f9_3 == 0)
                    edi = var_2ec
                else
                    void var_294
                    bool var_2f9_4 = *sub_571430(esi_1 + 0x60, &var_294) != 0
                    int32_t ecx_40 = sub_54b010(&var_294)
                    void* eax_37 = *(esi_1 + 0x64)
                    
                    if (eax_37 != 0)
                        *(eax_37 + 4)
                        ebx = var_2f0
                    
                    int32_t var_310_17 = ecx_40
                    void var_34
                    void** eax_38 = sub_6ad9b0(&var_34)
                    var_c_1.b = 0x10
                    void var_64
                    int16_t* eax_39 = sub_6ad930(&var_64, var_2f9_4)
                    var_c_1.b = 0x11
                    void var_94
                    int16_t* eax_40 = sub_532b80(eax_39, eax_39, &var_94, 0xad94e4)
                    var_c_1.b = 0x12
                    void var_c4
                    int16_t* eax_41 = sub_5327a0(eax_40, eax_40, &var_c4, eax_38)
                    var_c_1.b = 0x13
                    edi = var_2ec
                    var_c_1.b = 0x14
                    void var_f4
                    sub_56af20(edi + 0xe0, var_2f8_1, 2, 
                        sub_532b80(eax_41, eax_41, &var_f4, &data_ad90a0))
                    sub_52e8a0(&var_f4)
                    sub_52e8a0(&var_c4)
                    sub_52e8a0(&var_94)
                    sub_52e8a0(&var_64)
                    var_c_1.b = 0
                    sub_52e8a0(&var_34)
            
            int32_t eax_68
            
            if (var_2fa_1 != 0)
            label_570e09:
                eax_68 = *(data_bac4e0 + 0x34)
                
                if (eax_68 != 0)
                    eax_68, edx_7 = eax_68(*(edi + 0xe4), var_2f8_1, 3, esi_1 + 0x28, eax_4)
                
                if (var_2fa_1 == 0)
                    goto label_570e2f
                
            label_570e3e:
                edx_7.w = *(esi_1 + 0x44)
                int16_t var_1cc
                int16_t* eax_70
                eax_70, edx_7 = sub_6adc10(&var_1cc, edx_7.w)
                var_c_1.b = 0x15
                int32_t ecx_77 = *(data_bac4e0 + 0x34)
                
                if (ecx_77 != 0)
                    edx_7 = ecx_77(*(edi + 0xe4), var_2f8_1, 4, eax_70, eax_4)
                
                var_c_1.b = 0
                int32_t var_1b8
                
                if (var_1b8 u>= 8)
                    edx_7 = j__free(var_1cc.d)
                
                eax_68 = 0
                var_1b8 = 7
                int32_t var_1bc_1 = 0
                var_1cc = 0
                
                if (var_2fa_1 != 0)
                    goto label_570ef4
                
                goto label_570ec0
            
            void** eax_67 = *(edi + 0x414) + 0x28 + var_2f4_1
            int32_t edx_29 = eax_67[4]
            
            if (eax_67[5] u>= 8)
                eax_67 = *eax_67
            
            int32_t var_310_31 = edx_29
            eax_68, edx_7 = sub_536340(esi_1 + 0x28, esi_1 + 0x28, *(esi_1 + 0x38), eax_67)
            
            if (eax_68 != 0)
                goto label_570e09
            
        label_570e2f:
            edx_7 = var_2f4_1
            eax_68.w = *(esi_1 + 0x44)
            
            if (eax_68.w != *(*(edi + 0x414) + edx_7 + 0x44))
                goto label_570e3e
            
        label_570ec0:
            void* ecx_79 = var_2f4_1 + *(edi + 0x414)
            eax_68.b = *(esi_1 + 0x48)
            int32_t ecx_82
            
            if (eax_68.b != *(ecx_79 + 0x48))
            label_570ef4:
                int16_t var_16c
                int16_t* eax_71 = sub_6ae130(eax_68, edx_7.b, &var_16c, (*(esi_1 + 0x46)).b, 
                    eax_4.b, arg3.b, arg2.b)
                var_c_1.b = 0x16
                ecx_82 = *(data_bac4e0 + 0x34)
                
                if (ecx_82 != 0)
                    ecx_82 = ecx_82(*(edi + 0xe4), var_2f8_1, 5, eax_71)
                
                var_c_1.b = 0
                int32_t var_158
                
                if (var_158 u>= 8)
                    ecx_82 = j__free(var_16c.d)
                
                var_158 = 7
                int32_t var_15c_1 = 0
                var_16c = 0
                
                if (var_2fa_1 != 0)
                    goto label_570f81
                
                goto label_570f6a
            
            eax_68.b = *(esi_1 + 0x47)
            
            if (eax_68.b != *(ecx_79 + 0x47))
                goto label_570ef4
            
            eax_68.b = *(esi_1 + 0x46)
            
            if (eax_68.b != *(ecx_79 + 0x46))
                goto label_570ef4
            
            eax_68.b = *(esi_1 + 0x49)
            
            if (eax_68.b != *(ecx_79 + 0x49))
                goto label_570ef4
            
        label_570f6a:
            ecx_82 = *(edi + 0x414)
            int32_t eax_74
            int32_t ecx_86
            int32_t edx_32
            
            if (*(esi_1 + 0x40) == *(ecx_82 + var_2f4_1 + 0x40))
            label_571002:
                edx_32 = *(edi + 0x414)
                ecx_86 = var_2f4_1
                eax_74 = *(esi_1 + 8)
                
                if (eax_74 == *(edx_32 + ecx_86 + 8))
                    eax_74 = *(esi_1 + 0xc)
                    
                    if (eax_74 == *(edx_32 + ecx_86 + 0xc))
                        goto label_5710a9
            else
            label_570f81:
                *(esi_1 + 0x40)
                int32_t var_310_38 = ecx_82
                int16_t var_19c
                int16_t* eax_73
                eax_73, edx_32 = sub_6ad9b0(&var_19c)
                var_c_1.b = 0x17
                int32_t ecx_85 = *(data_bac4e0 + 0x34)
                
                if (ecx_85 != 0)
                    edx_32 = ecx_85(*(edi + 0xe4), var_2f8_1, 6, eax_73, eax_4, arg3, arg2)
                
                var_c_1.b = 0
                int32_t var_188
                
                if (var_188 u>= 8)
                    edx_32 = j__free(var_19c.d)
                
                eax_74 = 0
                var_188 = 7
                int32_t var_18c_1 = 0
                var_19c = 0
                
                if (var_2fa_1 == 0)
                    goto label_571002
            
            int16_t var_13c
            int16_t* eax_75
            eax_75, edx_32 = sub_6adc60(eax_74, edx_32, &var_13c, *(esi_1 + 8), *(esi_1 + 0xc))
            var_c_1.b = 0x18
            int32_t ecx_89 = *(data_bac4e0 + 0x34)
            
            if (ecx_89 != 0)
                edx_32 = ecx_89(*(edi + 0xe4), var_2f8_1, 7, eax_75, eax_4, arg3, arg2)
            
            var_c_1.b = 0
            int32_t var_128
            
            if (var_128 u>= 8)
                edx_32 = j__free(var_13c.d)
            
            int32_t eax_76 = 0
            var_128 = 7
            int32_t var_12c_1 = 0
            var_13c = 0
            
            if (var_2fa_1 != 0)
                goto label_5710d0
            
            ecx_86 = var_2f4_1
        label_5710a9:
            void* ecx_90 = ecx_86 + *(edi + 0x414)
            eax_76 = *(esi_1 + 0x10)
            int32_t ecx_93
            
            if (eax_76 != *(ecx_90 + 0x10))
            label_5710d0:
                int16_t var_1e4
                int16_t* eax_77 =
                    sub_6adc60(eax_76, edx_32, &var_1e4, *(esi_1 + 0x10), *(esi_1 + 0x14))
                var_c_1.b = 0x19
                ecx_93 = *(data_bac4e0 + 0x34)
                
                if (ecx_93 != 0)
                    ecx_93 = ecx_93(*(edi + 0xe4), var_2f8_1, 8, eax_77, eax_4, arg3, arg2)
                
                var_c_1.b = 0
                int32_t var_1d0
                
                if (var_1d0 u>= 8)
                    ecx_93 = j__free(var_1e4.d)
                
                var_1d0 = 7
                int32_t var_1d4_1 = 0
                var_1e4 = 0
                
                if (var_2fa_1 != 0)
                    goto label_57115d
                
                goto label_571146
            
            eax_76 = *(esi_1 + 0x14)
            
            if (eax_76 != *(ecx_90 + 0x14))
                goto label_5710d0
            
        label_571146:
            ecx_93 = *(edi + 0x414)
            int32_t edx_33 = var_2f4_1
            
            if (*(esi_1 + 0x18) != *(ecx_93 + edx_33 + 0x18))
            label_57115d:
                *(esi_1 + 0x18)
                int32_t var_310_47 = ecx_93
                int16_t var_1b4
                int16_t* eax_79 = sub_6ada00(&var_1b4)
                var_c_1.b = 0x1a
                int32_t ecx_96 = *(data_bac4e0 + 0x34)
                
                if (ecx_96 != 0)
                    ecx_96(*(edi + 0xe4), var_2f8_1, 9, eax_79, eax_4, arg3, arg2)
                
                var_c_1.b = 0
                int32_t var_1a0
                
                if (var_1a0 u>= 8)
                    j__free(var_1b4.d)
                
                var_1a0 = 7
                int32_t var_1a4_1 = 0
                var_1b4 = 0
                
                if (var_2fa_1 != 0)
                    goto label_5711ff
                
                edx_33 = var_2f4_1
            
            if (*(esi_1 + 0x1c) != *(*(edi + 0x414) + edx_33 + 0x1c))
            label_5711ff:
                int16_t var_25c
                int32_t* eax_81 = sub_6f1fd0(&var_25c, *(esi_1 + 0x1c))
                var_c_1.b = 0x1b
                int32_t ecx_100 = *(data_bac4e0 + 0x34)
                
                if (ecx_100 != 0)
                    ecx_100(*(edi + 0xe4), var_2f8_1, 0xa, eax_81, eax_4, arg3, arg2)
                
                var_c_1.b = 0
                int32_t var_248
                
                if (var_248 u>= 8)
                    j__free(var_25c.d)
                
                var_248 = 7
                int32_t var_24c_1 = 0
                var_25c = 0
                
                if (var_2fa_1 != 0)
                    goto label_571293
                
                edx_33 = var_2f4_1
            
            if (*(esi_1 + 0x20) == *(*(edi + 0x414) + edx_33 + 0x20))
                goto label_571313
            
        label_571293:
            int16_t var_244
            int16_t* eax_83 = sub_6f26f0(&var_244, *(esi_1 + 0x20))
            var_c_1.b = 0x1c
            int32_t ecx_104 = *(data_bac4e0 + 0x34)
            
            if (ecx_104 != 0)
                ecx_104(*(edi + 0xe4), var_2f8_1, 0xb, eax_83, eax_4, arg3, arg2)
            
            var_c_1.b = 0
            int32_t var_230
            
            if (var_230 u>= 8)
                j__free(var_244.d)
            
            var_230 = 7
            int32_t var_234_1 = 0
            var_244 = 0
            
            if (var_2fa_1 != 0)
                goto label_571323
            
            edx_33 = var_2f4_1
        label_571313:
            
            if (*(esi_1 + 0x24) != *(*(edi + 0x414) + edx_33 + 0x24))
            label_571323:
                int16_t var_214
                int16_t* eax_85 = sub_6f2bc0(&var_214, *(esi_1 + 0x24))
                var_c_1.b = 0x1d
                int32_t ecx_108 = *(data_bac4e0 + 0x34)
                
                if (ecx_108 != 0)
                    ecx_108(*(edi + 0xe4), var_2f8_1, 0xc, eax_85, eax_4, arg3, arg2)
                
                var_c_1.b = 0
                int32_t var_200
                
                if (var_200 u>= 8)
                    j__free(var_214.d)
                
                var_200 = 7
                int32_t var_204_1 = 0
                var_214 = 0
            
            esi = var_2e8
            ecx_2 = var_2f8_1 + 1
            var_2f8_1 = ecx_2
        while (ecx_2 s< var_2dc_1)
    
    result = sub_571450(edi + 0x414, &var_2e8)
    *(edi + 0xb8) = 0
    int32_t var_c_2 = 0xffffffff
    
    if (esi != 0)
        void* edi_10 = var_2e8
        
        if (edi_10 != var_2e4_1)
            do
                sub_5719b0(esi)
                esi -= 0xffffff80
            while (esi != var_2e4_1)
        
        result = j__free(edi_10)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_2fc)
return result
