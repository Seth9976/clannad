// 函数: sub_6a2820
// 地址: 0x6a2820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9eee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = 0
int32_t* esi = arg2
int32_t var_190 = 0
int32_t edx = data_4ebe2a0
int32_t ecx = data_4ebe29c
int32_t* var_194 = esi
int32_t** result

if (((edx - ecx) & 0xffffff80) s<= 0)
label_6a294a:
    int32_t* esi_2 = sub_745f3f(0xc)
    
    if (esi_2 == 0)
        esi_2 = nullptr
    else
        *esi_2 = 0
        esi_2[1] = 0
        esi_2[2] = 0
    
    int32_t* var_16c = esi_2
    int32_t var_168_1 = 0
    int32_t var_8_1 = 1
    int32_t* var_1a8
    int32_t* eax_19 = sub_5f21f0(&var_1a8, esi_2)
    int32_t* ecx_9 = *eax_19
    *eax_19 = var_168_1
    int32_t* edi_3 = var_1a8
    
    if (edi_3 != 0)
        bool cond:1_1 = edi_3[1] != 1
        edi_3[1]
        edi_3[1] -= 1
        
        if (not(cond:1_1))
            (*(*edi_3 + 4))(eax_2)
            bool cond:3_1 = edi_3[2] != 1
            edi_3[2]
            edi_3[2] -= 1
            
            if (not(cond:3_1))
                (*(*edi_3 + 8))()
    
    int32_t* var_1c8_6 = esi_2
    int32_t* var_1cc_2 = esi_2
    int32_t** var_1d0_2 = &var_16c
    int32_t var_8_2 = 2
    int16_t* edi_4 = nullptr
    void* i = nullptr
    char var_14d_2 = 1
    int32_t* ebx_2 = nullptr
    void* i_3 = nullptr
    int16_t* var_178_1 = nullptr
    int16_t* var_180 = nullptr
    int32_t* var_17c_1 = nullptr
    int32_t* var_164 = nullptr
    int32_t var_160 = 0
    int32_t* var_15c_1 = nullptr
    int32_t var_1c8_7 = 1
    var_8_2.b = 4
    void var_1dc
    sub_6a42f0(sub_669af0(&var_1dc, 0xaf4584), var_194, &var_164)
    int32_t* ecx_16 = var_160 - var_164
    void* i_2 = nullptr
    
    if (ecx_16 s/ 0x18 s<= 0)
    label_6a3651:
        int32_t var_190_4 = 1
        *arg1 = nullptr
        arg1[1] = 0
        int32_t* eax_136 = var_164
        
        if (eax_136 == 0)
            goto label_6a36b2
        
        int32_t** var_1c8_53 = arg1
        int32_t* var_1cc_23 = ecx_16
        ecx_16 = eax_136
    label_6a3681:
        sub_55d500(ecx_16, var_160)
        ecx_16 = j__free(var_164)
        var_164 = nullptr
        var_160 = 0
        int32_t var_15c_3 = 0
    label_6a36b2:
        
        if (i != 0)
            int32_t** var_1c8_54 = arg1
            int32_t* var_1cc_24 = ecx_16
            sub_629800(i, edi_4)
            j__free(i)
        
        var_8_2.b = 0
        
        if (ecx_9 != 0)
            bool cond:7_1 = ecx_9[1] != 1
            ecx_9[1]
            ecx_9[1] -= 1
            
            if (not(cond:7_1))
                (*(*ecx_9 + 4))(eax_2)
                int32_t ebx_13 = ecx_9[2]
                ecx_9[2] -= 1
                
                if (ebx_13 == 1)
                    (*(*ecx_9 + 8))()
        
        result = arg1
    else
        edi_4 = nullptr
        void* var_154
        
        do
            void* var_1c8_8 = 0xffffffff
            int32_t var_60_1 = 7
            int32_t var_64_1 = 0
            int32_t var_1cc_3 = 0
            int16_t var_74 = 0
            sub_52e3c0(&var_74, &var_164[i * 6], var_1cc_3, var_1c8_8)
            var_8_2.b = 5
            int16_t var_5c
            sub_6b3e90(&var_5c, &var_74)
            var_8_2.b = 6
            int32_t* var_2c
            sub_6b3e20(&var_2c, &var_74)
            int32_t var_a0_1 = 7
            int32_t var_a4_1 = 0
            int16_t var_b4 = 0
            int32_t var_88_1 = 7
            int32_t var_8c_1 = 0
            int16_t var_9c = 0
            int128_t var_84 = zx.o(0)
            var_8_2.b = 8
            int32_t* esi_4 = &var_2c
            int32_t var_18
            int32_t edx_9 = var_18
            int32_t* ecx_21 = var_2c
            
            if (edx_9 u>= 8)
                esi_4 = ecx_21
            
            int32_t var_cc
            int32_t var_b8
            int32_t var_48
            int16_t var_44
            int32_t var_30
            int32_t var_1c
            
            while (true)
                bool cond:8_1 = edx_9 u>= 8
                int32_t* eax_33 = &var_2c
                edx_9 = var_18
                
                if (cond:8_1)
                    eax_33 = ecx_21
                
                if (esi_4 == eax_33 + var_1c * 2)
                    break
                
                if (*esi_4 == 0x28)
                    var_30 = 7
                    int32_t** ecx_22 = &var_2c
                    int32_t var_34_1 = 0
                    
                    if (edx_9 u>= 8)
                        ecx_22 = var_2c
                    
                    var_44 = 0
                    
                    if (ecx_22 != esi_4)
                        sub_52e720(&var_44, ecx_22, (esi_4 - ecx_22) s>> 1)
                    
                    var_8_2.b = 0xf
                    int32_t* eax_38 = sub_52e3c0(&var_b4, &var_44, 0, 0xffffffff)
                    var_8_2.b = 8
                    
                    if (var_30 u>= 8)
                        eax_38 = j__free(var_44.d)
                    
                    if (var_a4_1 != 0)
                        int16_t* eax_39 = sub_532b80(eax_38, &var_5c, &var_cc, &data_ad900c)
                        var_8_2.b = 0x10
                        int16_t* eax_40 = sub_5327a0(eax_39, eax_39, &var_44, &var_b4)
                        var_8_2.b = 0x11
                        
                        if (&var_9c != eax_40)
                            sub_52e3c0(&var_9c, eax_40, 0, 0xffffffff)
                        
                        if (var_30 u>= 8)
                            j__free(var_44.d)
                        
                        var_8_2.b = 8
                        var_30 = 7
                        int32_t var_34_2 = 0
                        var_44 = 0
                        
                        if (var_b8 u>= 8)
                            j__free(var_cc)
                    
                    int32_t** ebx_3 = var_2c
                    int32_t** eax_41 = &var_2c
                    var_154 = esi_4 + 2
                    int32_t esi_6 = var_18
                    
                    if (esi_6 u>= 8)
                        eax_41 = ebx_3
                    
                    int32_t edi_6 = var_1c * 2
                    void* eax_42 = eax_41 + edi_6
                    char eax_43 = sub_6af490(eax_42, &var_84:4, &var_154, eax_42)
                    void* ecx_29 = var_154
                    int32_t** eax_44 = &var_2c
                    
                    if (esi_6 u>= 8)
                        eax_44 = ebx_3
                    
                    void* eax_45
                    
                    if (ecx_29 == eax_44 + edi_6)
                        eax_45.b = 0
                    else if (*ecx_29 == 0x2c)
                        var_154 = ecx_29 + 2
                        eax_45.b = 1
                    else
                        eax_45.b = 0
                    
                    char var_14d_3 = var_14d_2 & eax_43 & eax_45.b
                    int32_t* edx_14 = &var_84:8
                    
                    while (true)
                        int32_t** eax_46 = &var_2c
                        
                        if (esi_6 u>= 8)
                            eax_46 = ebx_3
                        
                        while (true)
                            void* eax_47 = eax_46 + edi_6
                            char eax_48 = sub_6af490(eax_47, edx_14, &var_154, eax_47)
                            void* ecx_31 = var_154
                            char edx_15 = var_14d_3 & eax_48
                            var_14d_3 = edx_15
                            int32_t** eax_49 = &var_2c
                            
                            if (esi_6 u>= 8)
                                eax_49 = ebx_3
                            
                            void* eax_50
                            
                            if (ecx_31 == eax_49 + edi_6)
                                eax_50.b = 0
                            else if (*ecx_31 == 0x2c)
                                ecx_31 += 2
                                eax_50.b = 1
                                var_154 = ecx_31
                            else
                                eax_50.b = 0
                            
                            if (eax_50.b == 0)
                                int32_t** eax_56 = &var_2c
                                
                                if (esi_6 u>= 8)
                                    eax_56 = ebx_3
                                
                                edi_4 = var_178_1
                                void* eax_57
                                
                                if (ecx_31 != eax_56 + (var_1c << 1))
                                    eax_57.b = *ecx_31 == 0x29
                                else
                                    eax_57.b = 0
                                
                                edx_15 &= eax_57.b
                                var_14d_2 = edx_15
                                
                                if (edx_15 != 0)
                                    sub_629610(&i_3, &var_b4)
                                    ebx_2 = var_17c_1
                                    edi_4 = var_180
                                    goto label_6a30bf
                                
                                int32_t var_190_2 = 1
                                *arg1 = nullptr
                                arg1[1] = 0
                                sub_57a0a0(&var_b4)
                                
                                if (var_18 u>= 8)
                                    j__free(var_2c)
                                
                                int32_t var_18_1 = 7
                                int32_t var_1c_1 = 0
                                var_2c.w = 0
                                
                                if (var_48 u>= 8)
                                    j__free(var_5c.d)
                                
                                int32_t var_48_1 = 7
                                int32_t var_4c_2 = 0
                                var_5c = 0
                                
                                if (var_60_1 u>= 8)
                                    j__free(var_74.d)
                                
                                ecx_16 = var_164
                                int32_t var_60_2 = 7
                                int32_t var_64_2 = 0
                                var_74 = 0
                                
                                if (ecx_16 != 0)
                                    int32_t** var_1c8_43 = arg1
                                    int32_t* var_1cc_16 = ecx_16
                                    sub_55d500(ecx_16, var_160)
                                    ecx_16 = j__free(var_164)
                                    var_164 = nullptr
                                    var_160 = 0
                                    int32_t var_15c_2 = 0
                                
                                i = i_3
                                goto label_6a36b2
                            
                            int32_t ecx_33 = sub_52e820(&var_44, u"blend")
                            esi_6 = var_18
                            int32_t** eax_51 = &var_2c
                            ebx_3 = var_2c
                            int32_t edi_7 = var_1c
                            int32_t var_1c8_20 = ecx_33
                            
                            if (esi_6 u>= 8)
                                eax_51 = ebx_3
                            
                            void* eax_52 = eax_51 + (edi_7 << 1)
                            char eax_53 = sub_6af310(eax_52, &var_44, &var_154, eax_52)
                            
                            if (var_30 u>= 8)
                                j__free(var_44.d)
                                esi_6 = var_18
                                ebx_3 = var_2c
                                edi_7 = var_1c
                            
                            if (eax_53 != 0)
                                void* eax_54 = var_154
                                int32_t** ecx_35 = &var_2c
                                
                                if (esi_6 u>= 8)
                                    ecx_35 = ebx_3
                                
                                edi_6 = edi_7 * 2
                                
                                if (eax_54 == ecx_35 + edi_6)
                                    edx_14 = &var_84:0xc
                                    var_14d_3 = 0
                                    break
                                
                                if (*eax_54 != 0x3d)
                                    edx_14 = &var_84:0xc
                                    var_14d_3 = 0
                                    break
                                
                                edx_14 = &var_84:0xc
                                var_154 = eax_54 + 2
                                var_14d_3 &= 1
                                break
                            
                            eax_46 = &var_2c
                            edx_14 = &var_84
                            
                            if (esi_6 u>= 8)
                                eax_46 = ebx_3
                            
                            edi_6 = edi_7 * 2
                else
                    esi_4 += 2
            
            int32_t* eax_58 = sub_52e3c0(&var_b4, &var_2c, 0, 0xffffffff)
            
            if (var_a4_1 != 0)
                void** eax_59 = sub_532b80(eax_58, &var_5c, &var_cc, &data_ad900c)
                var_8_2.b = 9
                int16_t* eax_60 = sub_5327a0(eax_59, eax_59, &var_44, &var_2c)
                var_8_2.b = 0xa
                
                if (&var_9c != eax_60)
                    sub_52e3c0(&var_9c, eax_60, 0, 0xffffffff)
                
                if (var_30 u>= 8)
                    j__free(var_44.d)
                
                var_8_2.b = 8
                var_30 = 7
                int32_t var_34_3 = 0
                var_44 = 0
                
                if (var_b8 u>= 8)
                    j__free(var_cc)
            
            void* i_4 = i_3
            
            if (&var_b4 u>= edi_4 || i_4 u> &var_b4)
                if (edi_4 == ebx_2 && (ebx_2 - edi_4) s>> 6 u< 1)
                    int32_t edi_13 = (edi_4 - i_4) s>> 6
                    
                    if (0x3ffffff - edi_13 u< 1)
                        sub_743191("vector<T> too long")
                        noreturn
                    
                    int32_t ebx_8 = (ebx_2 - i_4) s>> 6
                    uint32_t ecx_48 = ebx_8 u>> 1
                    int32_t ebx_9
                    
                    if (0x3ffffff - ecx_48 u>= ebx_8)
                        ebx_9 = ebx_8 + ecx_48
                    else
                        ebx_9 = 0
                    
                    if (ebx_9 u< edi_13 + 1)
                        ebx_9 = edi_13 + 1
                    
                    sub_629720(&i_3, ebx_9)
                    ebx_2 = var_17c_1
                    edi_4 = var_180
                
                int16_t* var_19c_2 = edi_4
                int16_t* var_188_3 = edi_4
                var_8_2.b = 0xd
                
                if (edi_4 != 0)
                    *(edi_4 + 0x14) = 7
                    void* const var_1c8_33 = 0xffffffff
                    *(edi_4 + 0x10) = 0
                    int32_t var_1cc_12 = 0
                    *edi_4 = 0
                    sub_52e3c0(edi_4, &var_b4, var_1cc_12, var_1c8_33)
                    var_8_2.b = 0xe
                    *(edi_4 + 0x2c) = 7
                    void* const var_1c8_34 = 0xffffffff
                    *(edi_4 + 0x28) = 0
                    int32_t var_1cc_13 = 0
                    edi_4[0xc] = 0
                    sub_52e3c0(&edi_4[0xc], &var_9c, var_1cc_13, var_1c8_34)
                    *(edi_4 + 0x30) = var_84.d
                    *(edi_4 + 0x34) = var_84:4.d
                    *(edi_4 + 0x38) = var_84:8.d
                    *(edi_4 + 0x3c) = var_84:0xc.d
            else
                int32_t esi_7 = &var_b4 - i_4
                
                if (edi_4 == ebx_2 && (ebx_2 - edi_4) s>> 6 u< 1)
                    int32_t edi_10 = (edi_4 - i_4) s>> 6
                    
                    if (0x3ffffff - edi_10 u< 1)
                        sub_743191("vector<T> too long")
                        noreturn
                    
                    int32_t ebx_5 = (ebx_2 - i_4) s>> 6
                    uint32_t ecx_43 = ebx_5 u>> 1
                    int32_t ebx_6
                    
                    if (0x3ffffff - ecx_43 u>= ebx_5)
                        ebx_6 = ebx_5 + ecx_43
                    else
                        ebx_6 = 0
                    
                    if (ebx_6 u< edi_10 + 1)
                        ebx_6 = edi_10 + 1
                    
                    sub_629720(&i_3, ebx_6)
                    ebx_2 = var_17c_1
                    edi_4 = var_180
                    i_4 = i_3
                
                int16_t* var_19c_1 = edi_4
                void* esi_9 = (esi_7 & 0xffffffc0) + i_4
                int16_t* var_188_2 = edi_4
                var_8_2.b = 0xb
                
                if (edi_4 != 0)
                    *(edi_4 + 0x14) = 7
                    void* const var_1c8_30 = 0xffffffff
                    int32_t var_1cc_10 = 0
                    *(edi_4 + 0x10) = 0
                    void** var_1d0_8 = esi_9
                    *edi_4 = 0
                    sub_52e3c0(edi_4, var_1d0_8, var_1cc_10, var_1c8_30)
                    var_8_2.b = 0xc
                    *(edi_4 + 0x2c) = 7
                    void* const var_1c8_31 = 0xffffffff
                    *(edi_4 + 0x28) = 0
                    int32_t var_1cc_11 = 0
                    edi_4[0xc] = 0
                    sub_52e3c0(&edi_4[0xc], esi_9 + 0x18, var_1cc_11, var_1c8_31)
                    *(edi_4 + 0x30) = *(esi_9 + 0x30)
                    *(edi_4 + 0x34) = *(esi_9 + 0x34)
                    *(edi_4 + 0x38) = *(esi_9 + 0x38)
                    *(edi_4 + 0x3c) = *(esi_9 + 0x3c)
            
            edi_4 = &edi_4[0x20]
            var_180 = edi_4
        label_6a30bf:
            var_178_1 = edi_4
            sub_57a0a0(&var_b4)
            
            if (var_18 u>= 8)
                j__free(var_2c)
            
            var_18 = 7
            var_1c = 0
            var_2c.w = 0
            
            if (var_48 u>= 8)
                j__free(var_5c.d)
            
            var_8_2.b = 4
            var_48 = 7
            int32_t var_4c_1 = 0
            var_5c = 0
            
            if (var_60_1 u>= 8)
                j__free(var_74.d)
            
            ecx_16 = var_160 - var_164
            i = i_2 + 1
            i_2 = i
        while (i s< ecx_16 s/ 0x18)
        
        i = i_3
        
        if (i == edi_4)
            goto label_6a3651
        
        int32_t* ecx_54 = var_16c
        char eax_87
        
        if (((edi_4 - i) & 0xffffffc0) != 0x40)
            eax_87 = sub_6f2d40(ecx_54, &i_3)
        else
            eax_87 = sub_6f30a0(ecx_54, i + 0x18, arg3)
        
        ecx_16 = var_164
        
        if (eax_87 == 0)
            int32_t var_190_1 = 1
            *arg1 = nullptr
            arg1[1] = 0
            
            if (ecx_16 == 0)
                goto label_6a36b2
            
            int32_t** var_1c8_39 = arg1
            int32_t* var_1cc_15 = ecx_16
            goto label_6a3681
        
        if (ecx_16 != 0)
            int32_t** var_1c8_46 = arg1
            int32_t* var_1cc_17 = ecx_16
            sub_55d500(ecx_16, var_160)
            ecx_16 = j__free(var_164)
            var_164 = nullptr
            var_160 = 0
            var_15c_1 = nullptr
        
        var_8_2.b = 2
        
        if (i != 0)
            int32_t** var_1c8_47 = arg1
            int32_t* var_1cc_18 = ecx_16
            sub_629800(i, edi_4)
            j__free(i)
        
        int32_t* ecx_57 = var_16c
        int32_t ebx_10 = 0
        int32_t i_1 = 0
        var_154 = nullptr
        int32_t var_198_1 = 0
        int32_t var_178_2 = 0
        int32_t var_18c_1 = 0
        
        if (((ecx_57[1] - *ecx_57) & 0xfffffff8) s> 0)
            do
                void var_1b0
                bool var_155_2 = *sub_54d980(ecx_57, &var_1b0, i_1) != 0
                int32_t* var_1ac
                
                if (var_1ac != 0)
                    bool cond:26_1 = var_1ac[1] != 1
                    var_1ac[1]
                    var_1ac[1] -= 1
                    
                    if (not(cond:26_1))
                        (*(*var_1ac + 4))(eax_2)
                        bool cond:27_1 = var_1ac[2] != 1
                        var_1ac[2] -= 1
                        
                        if (not(cond:27_1))
                            (*(*var_1ac + 8))()
                
                if (var_155_2 == 0)
                    ebx_10 = var_178_2
                else
                    void* eax_98 = *sub_54d980(var_16c, &var_180, i_1)
                    int32_t ecx_62 = *(eax_98 + 8)
                    void* eax_99 = *(eax_98 + 4)
                    
                    if (var_17c_1 != 0)
                        bool cond:30_1 = var_17c_1[1] != 1
                        var_17c_1[1]
                        var_17c_1[1] -= 1
                        
                        if (not(cond:30_1))
                            (*(*var_17c_1 + 4))(eax_2)
                            bool cond:32_1 = var_17c_1[2] != 1
                            var_17c_1[2]
                            var_17c_1[2] -= 1
                            
                            if (not(cond:32_1))
                                (*(*var_17c_1 + 8))()
                    
                    void* eax_105 = *sub_54d980(var_16c, &var_160, i_1)
                    int32_t edx_25 = *(eax_105 + 0x10)
                    ebx_10 = *(eax_105 + 0xc)
                    
                    if (var_15c_1 != 0)
                        bool cond:31_1 = var_15c_1[1] != 1
                        var_15c_1[1]
                        var_15c_1[1] -= 1
                        
                        if (not(cond:31_1))
                            (*(*var_15c_1 + 4))(eax_2)
                            bool cond:33_1 = var_15c_1[2] != 1
                            var_15c_1[2]
                            var_15c_1[2] -= 1
                            
                            if (not(cond:33_1))
                                (*(*var_15c_1 + 8))()
                    
                    if (ecx_62 * eax_99 s>= var_198_1 * var_154)
                        var_154 = eax_99
                        var_198_1 = ecx_62
                    
                    if (edx_25 * ebx_10 s< var_18c_1 * var_178_2)
                        ebx_10 = var_178_2
                    else
                        var_178_2 = ebx_10
                        var_18c_1 = edx_25
                
                ecx_57 = var_16c
                i_1 += 1
            while (i_1 s< (ecx_57[1] - *ecx_57) s>> 3)
        
        int32_t var_14c
        sub_6a0aa0(&var_14c)
        var_8_2.b = 0x12
        int32_t eax_118 = data_4ebe2a8
        int32_t* var_e0
        int32_t* ecx_75 = var_e0
        int32_t var_148_1 = eax_118
        data_4ebe2a8 = eax_118 + 1
        int32_t* eax_120 = var_16c
        var_14c = 6
        int32_t* var_e4_1 = eax_120
        
        if (ecx_9 != ecx_75)
            if (ecx_9 != 0)
                ecx_9[2] += 1
                ecx_75 = var_e0
            
            if (ecx_75 != 0)
                bool cond:29_1 = ecx_75[2] != 1
                ecx_75[2]
                ecx_75[2] -= 1
                
                if (not(cond:29_1))
                    (*(*ecx_75 + 8))(eax_2)
            
            int32_t* var_e0_1 = ecx_9
        
        void var_124
        
        if (&var_124 != var_194)
            sub_52e3c0(&var_124, var_194, 0, 0xffffffff)
        
        int32_t* eax_125 = var_16c
        void* var_144_1 = var_154
        int32_t var_140_1 = var_198_1
        int32_t var_138_1 = var_18c_1
        int32_t var_10c_1 = (eax_125[1] - *eax_125) s>> 3
        int32_t var_13c_1 = ebx_10
        char var_f8_1 = 0
        sub_6a4030(&var_14c)
        int32_t* eax_129 = var_16c
        var_16c = nullptr
        *arg1 = eax_129
        arg1[1] = 0
        int32_t* eax_130 = arg1[1]
        arg1[1] = ecx_9
        int32_t var_190_3 = 1
        var_8_2.b = 2
        sub_5719b0(&var_14c)
        var_8_2.b = 0
        
        if (eax_130 != 0)
            bool cond:28_1 = eax_130[1] != 1
            eax_130[1]
            eax_130[1] -= 1
            
            if (not(cond:28_1))
                (*(*eax_130 + 4))(eax_2)
                int32_t ebx_11 = eax_130[2]
                eax_130[2] -= 1
                
                if (ebx_11 == 1)
                    (*(*eax_130 + 8))()
        
        result = arg1
else
    void* ebx_1 = nullptr
    
    while (true)
        if (*(ebx_1 + ecx) == 6)
            int32_t* eax_7
            
            if (esi[5] u< 8)
                eax_7 = esi
            else
                eax_7 = *esi
            
            int32_t var_1c8_1 = esi[4]
            
            if (sub_536340(ebx_1 + ecx + 0x28, ebx_1 + ecx + 0x28, *(ebx_1 + ecx + 0x38), eax_7)
                    == 0)
                void var_1a0
                bool edx_1 = *sub_571430(data_4ebe29c + 0x68 + ebx_1, &var_1a0) != 0
                int32_t* var_19c
                
                if (var_19c != 0)
                    bool cond:4_1 = var_19c[1] != 1
                    var_19c[1]
                    var_19c[1] -= 1
                    
                    if (not(cond:4_1))
                        (*(*var_19c + 4))(eax_2)
                        bool cond:6_1 = var_19c[2] != 1
                        var_19c[2]
                        var_19c[2] -= 1
                        
                        if (not(cond:6_1))
                            (*(*var_19c + 8))()
                        
                        edx_1 = edx_1
                
                if (edx_1 != 0)
                    sub_571430((edi << 7) + data_4ebe29c + 0x68, arg1)
                    result = arg1
                    break
                
                esi = var_194
            
            edx = data_4ebe2a0
            ecx = data_4ebe29c
        
        edi += 1
        ebx_1 -= 0xffffff80
        
        if (edi s>= (edx - ecx) s>> 7)
            goto label_6a294a

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
