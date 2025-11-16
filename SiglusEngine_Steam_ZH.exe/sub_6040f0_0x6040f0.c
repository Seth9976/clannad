// 函数: sub_6040f0
// 地址: 0x6040f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bdfb9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t* var_12c = edi
sub_603660(arg1)
int32_t* i_4
i_4.b = arg7
char* result

if (*data_bac4a0 != 0)
    if (edi s>= 0)
        goto label_604153
    
    result.b = 1
else if (i_4.b == 0 && edi s>= 0)
label_604153:
    void* var_10c = nullptr
    int32_t var_f0_1 = 7
    int32_t var_f4_1 = 0
    void* var_140_1 = 0xffffffff
    void* eax_8 = data_bac4d8
    int32_t i_1 = edi s% 0x186a0
    int32_t* var_144 = nullptr
    int16_t var_104 = 0
    sub_52e3c0(&var_104, eax_8 + 0x18, var_144, var_140_1)
    int32_t var_8_1 = 0
    void* const var_140_2 = 3
    int32_t var_c0_1 = 7
    var_144 = &data_aef59c
    int32_t var_c4_1 = 0
    int16_t var_d4 = 0
    sub_52e720(&var_d4, var_144, var_140_2)
    var_8_1.b = 1
    void** var_140_3 = &var_10c
    var_144 = edi
    int16_t var_bc
    int32_t ecx_5 = sub_610080(&var_d4, &var_104, &var_bc, &var_d4, var_144, var_140_3)
    var_8_1.b = 3
    
    if (var_c0_1 u>= 8)
        ecx_5 = j__free(var_d4.d)
    
    int32_t var_c0_2 = 7
    int32_t var_c4_2 = 0
    var_d4 = 0
    int32_t var_ac
    int16_t var_5c
    int32_t var_48
    int16_t var_2c
    
    if (var_ac != 0)
        void* esi_1 = var_10c
        
        if (esi_1 == 3 || i_4.b == 0)
            int32_t* eax_14
            int32_t* ecx_10
            eax_14, ecx_10 = sub_745f3f(0x28)
            int32_t* eax_15
            
            if (eax_14 == 0)
                eax_15 = nullptr
            else
                ecx_10 = eax_14
                eax_15 = sub_6e18b0(ecx_10)
            
            int32_t* var_11c = eax_15
            int32_t* var_118 = nullptr
            var_8_1.b = 7
            int32_t* var_140_13 = &var_118
            sub_605850(eax_15, eax_15, ecx_10)
            var_8_1.b = 8
            struct NT3::C_sound_stream_base::NT3::C_sound_stream::VTable** eax_16
            struct NT3::C_sound_stream_base::NT3::C_sound_stream::VTable** ecx_11
            eax_16, ecx_11 = sub_745f3f(0x20)
            struct NT3::C_sound_stream_base::NT3::C_sound_stream::VTable** eax_17
            
            if (eax_16 == 0)
                eax_17 = nullptr
            else
                ecx_11 = eax_16
                eax_17 = sub_6e1a50(ecx_11)
            
            int32_t* var_120 = nullptr
            var_8_1.b = 9
            int32_t* var_140_15 = &var_120
            sub_6058c0(eax_17, eax_17, ecx_11)
            var_8_1.b = 0xa
            void var_a4
            void var_8c
            void var_74
            int32_t* var_34
            int32_t* i_6
            
            if (esi_1 == 1)
                struct NT3::C_sound_stream_base::NT3::C_wave_stream::VTable** eax_18 =
                    sub_745f3f(0xac)
                struct NT3::C_sound_stream_base::NT3::C_wave_stream::VTable** eax_19
                
                if (eax_18 == 0)
                    eax_19 = nullptr
                else
                    eax_19 = sub_6dfeb0(eax_18)
                
                sub_605450(&var_34, eax_19)
                var_8_1.b = 0xb
                int32_t* ecx_14 = var_34
                int32_t var_140_18 = 0
                var_144 = nullptr
                char eax_22
                int32_t ecx_15
                eax_22, ecx_15 = (*(*ecx_14 + 4))(&var_bc, var_144, var_140_18)
                void* ecx_22
                
                if (eax_22 != 0)
                    var_140_15 = var_34
                    char eax_27
                    int32_t ecx_24
                    eax_27, ecx_24 = sub_6e19c0(var_11c, var_140_15)
                    
                    if (eax_27 == 0)
                        int32_t var_140_23 = ecx_24
                        int16_t* eax_28 = sub_6ad9b0(&var_2c)
                        var_8_1.b = 0xf
                        int16_t* eax_29 = sub_548cb0(eax_28, 0xaf3330, &var_5c, eax_28)
                        var_8_1.b = 0x10
                        int16_t* eax_30 = sub_532b80(eax_29, eax_29, &var_74, &data_af3340)
                        var_8_1.b = 0x11
                        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_28 = data_bac424
                        var_144 = 2
                        i_4.b = sub_684160(ecx_28, var_144, eax_30)
                        sub_52e8a0(&var_74)
                        sub_52e8a0(&var_5c)
                        ecx_22 = &var_2c
                        goto label_6044c0
                    
                    var_8_1.b = 0xa
                    sub_54b010(&var_34)
                label_6049b1:
                    int32_t* var_158
                    int32_t var_14c
                    
                    if (arg4 == 0x64)
                        sub_54d950(&var_144, &var_11c)
                        operator new(eax_17, var_144, var_140_15)
                    else
                        int32_t eax_68 = *var_11c
                        int32_t* var_110
                        
                        if (eax_68 == 1)
                            void* eax_69 = sub_745f3f(0x28)
                            void* const eax_70
                            
                            if (eax_69 == 0)
                                eax_70 = nullptr
                            else
                                eax_70 = sub_6e18b0(eax_69)
                            
                            sub_6055a0(&var_110, eax_70)
                            var_8_1.b = 0x2b
                            int32_t* eax_71 = var_11c
                            int32_t* ecx_99 = var_110
                            int32_t var_140_63 = eax_71[3]
                            var_144 = eax_71[2]
                            int32_t var_148_6 = eax_71[1]
                            var_14c = *eax_71
                            sub_6e1970(ecx_99, var_14c, var_148_6, var_144, var_140_63)
                            int32_t* eax_72 = var_11c
                            var_144 = eax_72[1]
                            int16_t* ecx_100 = eax_72[4]
                            int32_t var_148_7 = *eax_72
                            bool cond:7_1 = ecx_100 == eax_72[5]
                            var_14c = eax_72[2]
                            
                            if (cond:7_1)
                                ecx_100 = nullptr
                            
                            int32_t* var_150_1 = eax_72[3]
                            var_158 = &var_110[4]
                            sub_6acbf0(var_158, ecx_100, var_150_1, var_14c, var_148_7, var_144, 
                                arg4)
                            int32_t* ecx_101 = var_110
                            ecx_101[3] = ecx_101[5] - ecx_101[4]
                            sub_54d950(&var_144, &var_110)
                            operator new(eax_17)
                            var_8_1.b = 0xa
                            sub_54b010(&var_110)
                        else if (eax_68 == 2)
                            void* eax_77 = sub_745f3f(0x28)
                            void* const eax_78
                            
                            if (eax_77 == 0)
                                eax_78 = nullptr
                            else
                                eax_78 = sub_6e18b0(eax_77)
                            
                            sub_6055a0(&var_34, eax_78)
                            var_8_1.b = 0x2c
                            int32_t* ecx_107 = var_11c
                            int32_t eax_80
                            int32_t edx_27
                            edx_27:eax_80 = sx.q(ecx_107[3])
                            var_144 = ecx_107[2]
                            int32_t var_148_9 = ecx_107[1]
                            int32_t* ecx_108 = var_34
                            var_14c = 1
                            sub_6e1970(ecx_108, var_14c, var_148_9, var_144, 
                                (eax_80 - edx_27) s>> 1)
                            int32_t* esi_4 = var_11c
                            int32_t eax_84
                            int32_t edx_28
                            edx_28:eax_84 = sx.q(esi_4[1])
                            int16_t* edx_31 = esi_4[4]
                            
                            if (edx_31 == esi_4[5])
                                edx_31 = nullptr
                            
                            int32_t* ecx_112 = var_34
                            int32_t ebx_1 = 0
                            int16_t* esi_5 = ecx_112[4]
                            
                            if (esi_5 == ecx_112[5])
                                esi_5 = nullptr
                            
                            void* eax_88 = &esi_5[divs.dp.d(sx.q(esi_4[3]), 
                                (((edx_28 & 7) + eax_84) s>> 3) * *esi_4)]
                            uint32_t ecx_116 = (eax_88 - esi_5 + 1) u>> 1
                            
                            if (esi_5 u> eax_88)
                                ecx_116 = 0
                            
                            if (ecx_116 != 0)
                                do
                                    int32_t ecx_117 = sx.d(*edx_31)
                                    edx_31 = &edx_31[2]
                                    int32_t ecx_118 = ecx_117 + sx.d(edx_31[-1])
                                    
                                    if (ecx_118 s< 0xffff8ad0)
                                        ecx_118 = 0xffff8ad0
                                    else if (ecx_118 s> 0x7530)
                                        ecx_118 = 0x7530
                                    
                                    *esi_5 = ecx_118.w
                                    ebx_1 += 1
                                    esi_5 = &esi_5[1]
                                while (ebx_1 != ecx_116)
                                
                                edi = var_12c
                            
                            void* eax_90 = sub_745f3f(0x28)
                            void* const eax_91
                            
                            if (eax_90 == 0)
                                eax_91 = nullptr
                            else
                                eax_91 = sub_6e18b0(eax_90)
                            
                            sub_6055a0(&var_110, eax_91)
                            var_8_1.b = 0x2d
                            int32_t* eax_92 = var_34
                            int32_t* ecx_121 = var_110
                            int32_t var_140_70 = eax_92[3]
                            var_144 = eax_92[2]
                            int32_t var_148_10 = eax_92[1]
                            var_14c = 1
                            sub_6e1970(ecx_121, var_14c, var_148_10, var_144, var_140_70)
                            int32_t* eax_93 = var_34
                            var_144 = eax_93[1]
                            int16_t* ecx_122 = eax_93[4]
                            int32_t var_148_11 = *eax_93
                            bool cond:10_1 = ecx_122 == eax_93[5]
                            var_14c = eax_93[2]
                            
                            if (cond:10_1)
                                ecx_122 = nullptr
                            
                            int32_t* var_150_2 = eax_93[3]
                            var_158 = &var_110[4]
                            sub_6acbf0(var_158, ecx_122, var_150_2, var_14c, var_148_11, var_144, 
                                arg4)
                            int32_t* ecx_123 = var_110
                            ecx_123[3] = ecx_123[5] - ecx_123[4]
                            sub_54d950(&var_144, &var_110)
                            operator new(eax_17)
                            var_8_1.b = 0x2c
                            sub_54b010(&var_110)
                            var_8_1.b = 0xa
                            sub_54b010(&var_34)
                    
                    var_144 = eax_17
                    int32_t* eax_99 = var_120
                    int32_t* var_140_72 = eax_99
                    
                    if (eax_99 != 0)
                        eax_99[1]
                        eax_99[1] += 1
                    
                    i_4 = arg1
                    int32_t var_140_73 = sub_6de830(i_4, 1, var_144)
                    var_144 = arg3
                    int32_t var_140_74 = sub_6df3f0(i_4, var_144.b)
                    var_144 = nullptr
                    int32_t var_148_15 = 0xffffffff
                    var_14c = 0
                    int32_t var_140_75 = sub_6df2c0(i_4, var_14c, var_148_15, var_144)
                    var_144 = arg5
                    sub_6df120(i_4, var_144)
                    int32_t* var_140_76 = edi
                    sub_52e820(&var_158, u"z%09d.vol.csv")
                    var_8_1.b = 0x2e
                    int16_t var_ec
                    int32_t ecx_140 = sub_60eaf0(&var_ec, sub_6ae4c0(&var_5c, var_158))
                    var_8_1.b = 0x30
                    
                    if (var_48 u>= 8)
                        ecx_140 = j__free(var_5c.d)
                    
                    int32_t var_48_2 = 7
                    int32_t var_4c_2 = 0
                    var_5c = 0
                    int32_t var_dc
                    
                    if (var_dc == 0)
                    label_604ecb:
                        int32_t var_140_87 = ecx_140
                        
                        if (arg6 == 0)
                            x434b916e::_ExceptionPtr_static<class std::bad_exception>::operator[]::_ExceptionPtr_static<class std::bad_exception>::_ExceptionPtr_static<class std::bad_exception>(
                                i_4)
                        else
                            class std::unique_ptr<char16_t const[], struct std::default_delete<char16_t const[]>> __cdecl `anonymous namespace'::_Get_icu_string_impl<class `class std::unique_ptr<char16_t const[], struct std::default_delete<char16_t const[]>> __cdecl `anonymous namespace'::_Get_default_timezone(int &, enum __std_tzdb_error &)'::`2'::<lambda_1>>(class `class std::unique_ptr<char16_t const[], struct std::default_delete<char16_t const[]>> __cdecl 0x27667df0::_Get_default_timezone(int &, enum __std_tzdb_error &)'::`2'::<lambda_1>, int, int &, enum __std_tzdb_error &)(
                                i_4)
                        
                        i_4[0x4a] = 1
                        i_4[0x4c] = edi
                        i_4.b = 1
                    else
                        int32_t var_38 = 0
                        var_34 = nullptr
                        int32_t var_30_1 = 0
                        var_8_1.b = 0x31
                        char eax_102
                        int32_t ecx_142
                        eax_102, ecx_142 = sub_6b8190(&var_ec, &var_38)
                        int16_t* eax_105
                        
                        if (eax_102 != 0)
                            if (var_38 == var_34)
                                int32_t var_140_81 = ecx_142
                                void** eax_106 = sub_6ad9b0(&var_74)
                                var_8_1.b = 0x35
                                void** eax_107 = sub_548cb0(eax_106, 0xaf3380, &var_a4, eax_106)
                                var_8_1.b = 0x36
                                eax_105 = sub_532b80(eax_107, eax_107, &var_8c, &data_af3390)
                                var_8_1.b = 0x37
                                goto label_604d9c
                            
                            i_6 = nullptr
                            int32_t var_1c_4 = 0
                            int32_t var_18_4 = 0
                            int32_t var_140_85 = 1
                            var_8_1.b = 0x38
                            i_1 = &var_14c
                            sub_605600(&var_14c)
                            var_8_1.b = 0x39
                            int32_t* eax_109 = sub_6af1a0(&var_8c)
                            var_8_1.b = 0x3a
                            var_8_1.b = 0x3b
                            sub_605630(eax_109, eax_109, &i_6, var_14c)
                            var_8_1.b = 0x38
                            sub_53f510(&var_8c)
                            int32_t* i_10 = i_6
                            
                            if ((var_1c_4 - i_10) s/ 0x18 s> 0)
                                void* ebx_2 = nullptr
                                var_10c = &i_4[0x54]
                                int32_t i = 0
                                
                                do
                                    int32_t i_5 = sub_6080e0(ebx_2 + i_10)
                                    void* ecx_161 = var_10c
                                    int32_t* var_140_86 = &i_1
                                    i_1 = i_5
                                    sub_530ba0(ecx_161, var_140_86)
                                    ebx_2 += 0x18
                                    i_10 = i_6
                                    i += 1
                                while (i s< (var_1c_4 - i_10) s/ 0x18)
                                
                                edi = var_12c
                                i_4 = arg1
                            
                            sub_6053b0(&i_6)
                            var_8_1.b = 0x30
                            ecx_140 = sub_55d540(&var_38)
                            goto label_604ecb
                        
                        int32_t var_140_78 = ecx_142
                        int16_t* eax_103 = sub_6ad9b0(&var_74)
                        var_8_1.b = 0x32
                        int16_t* eax_104 = sub_548cb0(eax_103, 0xaf3380, &var_a4, eax_103)
                        var_8_1.b = 0x33
                        eax_105 = sub_532b80(eax_104, eax_104, &var_8c, &data_af3340)
                        var_8_1.b = 0x34
                    label_604d9c:
                        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_149 = data_bac424
                        var_144 = 2
                        i_4.b = sub_684160(ecx_149, var_144, eax_105)
                        sub_52e8a0(&var_8c)
                        sub_52e8a0(&var_a4)
                        sub_52e8a0(&var_74)
                        sub_55d540(&var_38)
                    
                    int32_t var_d8
                    
                    if (var_d8 u>= 8)
                        j__free(var_ec.d)
                    
                    int32_t var_d8_1 = 7
                    int32_t var_dc_1 = 0
                    var_ec = 0
                else
                    int32_t var_140_19 = ecx_15
                    int16_t* eax_23 = sub_6ad9b0(&var_74)
                    var_8_1.b = 0xc
                    int16_t* eax_24 = sub_548cb0(eax_23, 0xaf3330, &var_2c, eax_23)
                    var_8_1.b = 0xd
                    int16_t* eax_25 = sub_532b80(eax_24, eax_24, &var_5c, &data_af1a9c)
                    var_8_1.b = 0xe
                    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_19 = data_bac424
                    var_144 = 0xc
                    i_4.b = sub_684160(ecx_19, var_144, eax_25)
                    sub_52e8a0(&var_5c)
                    sub_52e8a0(&var_2c)
                    ecx_22 = &var_74
                label_6044c0:
                    sub_52e8a0(ecx_22)
                    var_8_1.b = 0xa
                    sub_54b010(&var_34)
            else if (esi_1 != 2)
                if (esi_1 != 3)
                    goto label_6049b1
                
                int32_t* var_54 = nullptr
                int32_t var_4c
                var_4c.q = 0
                var_8_1.b = 0x1a
                void* const var_140_37 = 2
                int32_t var_18_2 = 7
                var_144 = &data_af335c
                int32_t var_1c_2 = 0
                var_2c = 0
                sub_52e720(&var_2c, var_144, var_140_37)
                var_8_1.b = 0x1b
                int16_t* var_140_38 = &var_2c
                var_144 = &var_bc
                var_8_1.b = 0x1a
                i_4.b = sub_6b7a80(&var_54, var_144, var_140_38) == 0
                int32_t ecx_54 = sub_52e8a0(&var_2c)
                
                if (i_4.b == 0)
                    int32_t* var_140_43 = var_54
                    i_4 = nullptr
                    int32_t* esi_2 = 0xffffffff
                    var_10c = nullptr
                    sub_6b74a0(0, 4, &var_10c, var_140_43)
                    void* eax_49 = var_10c
                    
                    if (eax_49 == 0)
                        goto label_604844
                    
                    i_6 = nullptr
                    int32_t var_1c_3 = 0
                    int32_t var_18_3 = 0
                    var_8_1.b = 0x1f
                    sub_5979b0(&i_6, eax_49 << 4)
                    i_4 = i_6
                    char* i_9 = i_4
                    
                    if (i_4 == var_1c_3)
                        i_9 = nullptr
                    
                    sub_6b74a0(0, var_10c << 4, i_9, var_54)
                    void* esi_3 = var_10c
                    int32_t ecx_65 = 0
                    void* i_8 = i_4
                    
                    if (i_4 == var_1c_3)
                        i_8 = nullptr
                    
                    if (esi_3 s> 0)
                        while (*(i_8 + 8) != i_1)
                            ecx_65 += 1
                            i_8 += 0x10
                            
                            if (ecx_65 s>= esi_3)
                                goto label_604791
                        
                        esi_2 = *(i_8 + 4)
                        i_1 = *i_8
                    
                    if (esi_3 s<= 0 || esi_2 == 0xffffffff)
                    label_604791:
                        int32_t var_140_46 = ecx_65
                        void** eax_51 = sub_6ad9b0(&var_8c)
                        var_8_1.b = 0x20
                        void** eax_52 = sub_548cb0(eax_51, 0xaf3330, &var_74, eax_51)
                        var_8_1.b = 0x21
                        int32_t* eax_53 = sub_532b80(eax_52, eax_52, &var_a4, &data_af1b40)
                        var_8_1.b = 0x22
                        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_69 = data_bac424
                        var_144 = 0xc
                        i_4.b = sub_684160(ecx_69, var_144, eax_53)
                        sub_52e8a0(&var_a4)
                        sub_52e8a0(&var_74)
                        sub_52e8a0(&var_8c)
                        sub_538150(&i_6)
                        var_8_1.b = 0xa
                        sub_6b7a50(&var_54)
                    else
                        int32_t* i_7 = i_4
                        var_8_1.b = 0x1a
                        sub_538150(&i_6)
                        i_4 = i_1
                    label_604844:
                        
                        if (arg7 == 0)
                            int32_t i_3 = sub_745f3f(0x20)
                            i_1 = i_3
                            var_8_1.b = 0x23
                            struct NT3::C_sound_stream_base::NT3::C_ogg_stream::VTable** eax_56
                            
                            if (i_3 == 0)
                                eax_56 = nullptr
                            else
                                eax_56 = sub_6e0fe0(i_3, 0)
                            
                            var_8_1.b = 0x1a
                            sub_605510(&var_34, eax_56)
                            var_8_1.b = 0x24
                            int32_t* ecx_79 = var_34
                            var_144 = esi_2
                            char eax_59
                            int32_t ecx_80
                            eax_59, ecx_80 = (*(*ecx_79 + 4))(&var_bc, var_144, i_4)
                            int32_t* eax_62
                            
                            if (eax_59 != 0)
                                var_140_15 = var_34
                                char eax_63
                                int32_t ecx_85
                                eax_63, ecx_85 = sub_6e19c0(var_11c, var_140_15)
                                
                                if (eax_63 != 0)
                                    var_8_1.b = 0x1a
                                    sub_54b010(&var_34)
                                    var_8_1.b = 0xa
                                    sub_6b7a50(&var_54)
                                    goto label_6049b1
                                
                                int32_t var_140_57 = ecx_85
                                void** eax_64 = sub_6ad9b0(&var_74)
                                var_8_1.b = 0x28
                                void** eax_65 = sub_548cb0(eax_64, 0xaf3330, &var_a4, eax_64)
                                var_8_1.b = 0x29
                                eax_62 = sub_532b80(eax_65, eax_65, &var_8c, &data_af3340)
                                var_8_1.b = 0x2a
                                goto label_604948
                            
                            int32_t var_140_54 = ecx_80
                            void** eax_60 = sub_6ad9b0(&var_74)
                            var_8_1.b = 0x25
                            void** eax_61 = sub_548cb0(eax_60, 0xaf3330, &var_a4, eax_60)
                            var_8_1.b = 0x26
                            eax_62 = sub_532b80(eax_61, eax_61, &var_8c, &data_af1a9c)
                            var_8_1.b = 0x27
                        label_604948:
                            struct _EXCEPTION_REGISTRATION_RECORD*** ecx_89 = data_bac424
                            var_144 = 2
                            i_4.b = sub_684160(ecx_89, var_144, eax_62)
                            sub_52e8a0(&var_8c)
                            sub_52e8a0(&var_a4)
                            sub_52e8a0(&var_74)
                            var_8_1.b = 0x1a
                            sub_54b010(&var_34)
                            var_8_1.b = 0xa
                            sub_6b7a50(&var_54)
                        else
                            var_8_1.b = 0xa
                            i_4.b = 1
                            sub_6b7a50(&var_54)
                else
                    int32_t var_140_39 = ecx_54
                    void** eax_45 = sub_6ad9b0(&var_a4)
                    var_8_1.b = 0x1c
                    void** eax_46 = sub_548cb0(eax_45, 0xaf3330, &var_2c, eax_45)
                    var_8_1.b = 0x1d
                    int32_t* eax_47 = sub_532b80(eax_46, eax_46, &var_74, &data_af1a9c)
                    var_8_1.b = 0x1e
                    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_58 = data_bac424
                    var_144 = 0xc
                    i_4.b = sub_684160(ecx_58, var_144, eax_47)
                    sub_52e8a0(&var_74)
                    sub_52e8a0(&var_2c)
                    sub_52e8a0(&var_a4)
                    var_8_1.b = 0xa
                    sub_6b7a50(&var_54)
            else
                int32_t i_2 = sub_745f3f(0x1c)
                i_1 = i_2
                var_8_1.b = 0x12
                struct NT3::C_sound_stream_base::NT3::C_nwa_stream::VTable** eax_32
                
                if (i_2 == 0)
                    eax_32 = nullptr
                else
                    eax_32 = sub_6e0ad0(i_2)
                
                var_8_1.b = 0xa
                sub_6054b0(&var_34, eax_32)
                var_8_1.b = 0x13
                int32_t* ecx_35 = var_34
                int32_t var_140_29 = 0
                var_144 = nullptr
                char eax_35
                int32_t ecx_36
                eax_35, ecx_36 = (*(*ecx_35 + 4))(&var_bc, var_144, var_140_29)
                int32_t* var_140_33
                
                if (eax_35 != 0)
                    var_140_15 = var_34
                    char eax_39
                    int32_t ecx_41
                    eax_39, ecx_41 = sub_6e19c0(var_11c, var_140_15)
                    
                    if (eax_39 != 0)
                        var_8_1.b = 0xa
                        sub_54b010(&var_34)
                        goto label_6049b1
                    
                    int32_t var_140_34 = ecx_41
                    void** eax_40 = sub_6ad9b0(&var_2c)
                    var_8_1.b = 0x17
                    void** eax_41 = sub_548cb0(eax_40, 0xaf3330, &var_5c, eax_40)
                    var_8_1.b = 0x18
                    var_140_33 = sub_532b80(eax_41, eax_41, &var_74, &data_af3340)
                    var_8_1.b = 0x19
                    var_144 = 2
                    goto label_6045df
                
                int32_t var_140_30 = ecx_36
                int16_t* eax_36 = sub_6ad9b0(&var_2c)
                var_8_1.b = 0x14
                int16_t* eax_37 = sub_548cb0(eax_36, 0xaf3330, &var_5c, eax_36)
                var_8_1.b = 0x15
                var_140_33 = sub_532b80(eax_37, eax_37, &var_74, &data_af1a9c)
                var_8_1.b = 0x16
                var_144 = 0xc
            label_6045df:
                i_4.b = sub_684160(data_bac424, var_144, var_140_33)
                sub_52e8a0(&var_74)
                sub_52e8a0(&var_5c)
                sub_52e8a0(&var_2c)
                var_8_1.b = 0xa
                sub_54b010(&var_34)
            var_8_1.b = 8
            int32_t* esi_7 = var_120
            
            if (esi_7 != 0)
                bool cond:5_1 = esi_7[1] != 1
                esi_7[1]
                esi_7[1] -= 1
                
                if (not(cond:5_1))
                    (*(*esi_7 + 4))(eax_2)
                    bool cond:9_1 = esi_7[2] != 1
                    esi_7[2]
                    esi_7[2] -= 1
                    
                    if (not(cond:9_1))
                        (*(*esi_7 + 8))()
            
            var_8_1.b = 3
            int32_t* esi_8 = var_118
            
            if (esi_8 != 0)
                bool cond:8_1 = esi_8[1] != 1
                esi_8[1]
                esi_8[1] -= 1
                
                if (not(cond:8_1))
                    (*(*esi_8 + 4))(eax_2)
                    int32_t edi_2 = esi_8[2]
                    esi_8[2] -= 1
                    
                    if (edi_2 == 1)
                        (*(*esi_8 + 8))()
        else
            i_4.b = 1
    else
        int32_t var_140_5 = ecx_5
        int32_t var_44
        int16_t* eax_11 = sub_6ad9b0(&var_44)
        var_8_1.b = 4
        int16_t* eax_12 = sub_548cb0(eax_11, 0xaf3330, &var_2c, eax_11)
        var_8_1.b = 5
        int16_t* eax_13 = sub_532b80(eax_12, eax_12, &var_5c, &data_af1b40)
        var_8_1.b = 6
        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_9 = data_bac424
        var_144 = 0xc
        sub_684160(ecx_9, var_144, eax_13)
        
        if (var_48 u>= 8)
            j__free(var_5c.d)
        
        int32_t var_48_1 = 7
        int32_t var_4c_1 = 0
        var_5c = 0
        int32_t var_18
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_30
        
        if (var_30 u>= 8)
            j__free(var_44)
        
        i_4.b = 0
    int32_t var_a8
    
    if (var_a8 u>= 8)
        j__free(var_bc.d)
    
    int32_t var_a8_1 = 7
    int32_t var_ac_1 = 0
    var_bc = 0
    
    if (var_f0_1 u>= 8)
        j__free(var_104.d)
    
    result.b = i_4.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
