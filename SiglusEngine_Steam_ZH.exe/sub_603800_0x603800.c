// 函数: sub_603800
// 地址: 0x603800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bdd43
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_2 = __security_cookie ^ &var_4
int32_t var_18 = eax_2
int32_t var_200 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 2
int32_t ebx

if (arg2 != 0)
    int32_t var_1e4 = 0
    int32_t* var_204_1 = &var_1e4
    void arg_50
    char* var_208 = &arg_50
    void var_30
    void* arg_20
    void* arg_38
    int32_t ecx_1
    ecx_1, ebp_1 = sub_60fb70(&arg_38, &arg_20, &var_30, &arg_38, var_208, var_204_1)
    ebp_1[-1].b = 3
    
    if (ebp_1[-7] == 0)
        int16_t* eax_5 = sub_548cb0(&ebp_1[0x15], 0xaf32bc, &ebp_1[-0x17], &ebp_1[0x15])
        ebp_1[-1].b = 4
        int16_t* eax_6 = sub_532b80(eax_5, eax_5, &ebp_1[-0x11], &data_af1b40)
        ebp_1[-1].b = 5
        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_4 = data_bac424
        var_208 = 0xb
        sub_684160(ecx_4, var_208, eax_6)
        
        if (ebp_1[-0xc] u>= 8)
            j__free(ebp_1[-0x11])
        
        ebp_1[-0xc] = 7
        bool cond:0_1 = ebp_1[-0x12] u< 8
        ebp_1[-0xd] = 0
        ebp_1[-0x11].w = 0
        
        if (not(cond:0_1))
            j__free(ebp_1[-0x17])
        
        ebx.b = 0
    else if (ebp_1[8].b != 0)
        ebx.b = 1
    else
        int32_t eax_8 = ebp_1[-0x78] - 1
        
        if (eax_8 u> 3)
            goto label_603e73
        
        void* ecx_48
        
        switch (eax_8)
            case 0
                struct NT3::C_sound_stream_base::NT3::C_wave_stream::VTable** eax_9 =
                    sub_745f3f(0xac)
                struct NT3::C_sound_stream_base::NT3::C_wave_stream::VTable** eax_10
                
                if (eax_9 == 0)
                    eax_10 = nullptr
                else
                    eax_10 = sub_6dfeb0(eax_9)
                
                sub_605450(&ebp_1[-0x7a], eax_10)
                ebp_1[-1].b = 6
                int32_t* ecx_7 = ebp_1[-0x7a]
                int32_t var_204_9 = 0
                var_208 = nullptr
                void* ecx_16
                
                if ((*(*ecx_7 + 4))(&ebp_1[-0xb], var_208, var_204_9) != 0)
                    var_208 = ebp_1[-0x7a]
                    void* eax_20 = ebp_1[-0x79]
                    void* var_204_14 = eax_20
                    
                    if (eax_20 != 0)
                        *(eax_20 + 4)
                        *(eax_20 + 4) += 1
                    
                    if (sub_6de830(arg1, 1, var_208) != 0)
                        ebp_1[-1].b = 3
                        ecx_1 = sub_54b010(&ebp_1[-0x7a])
                        goto label_603e73
                    
                    void** eax_24 = sub_548cb0(&ebp_1[0x15], 0xaf32bc, &ebp_1[-0x47], &ebp_1[0x15])
                    ebp_1[-1].b = 0xb
                    int32_t* eax_25 = sub_532b80(eax_24, eax_24, &ebp_1[-0x5f], &data_af32ec)
                    ebp_1[-1].b = 0xc
                    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_21 = data_bac424
                    var_208 = 2
                    sub_684160(ecx_21, var_208, eax_25)
                    sub_52e8a0(&ebp_1[-0x5f])
                    ecx_16 = &ebp_1[-0x47]
                    goto label_603a65
                
                void** eax_14 = sub_6b9ed0(&ebp_1[-0x3b])
                ebp_1[-1].b = 7
                void** eax_16 = sub_548cb0(&ebp_1[0x15], 0xaf32bc, &ebp_1[-0x2f], &ebp_1[0x15])
                ebp_1[-1].b = 8
                void** eax_17 = sub_532b80(eax_16, eax_16, &ebp_1[-0x11], &data_af32d0)
                ebp_1[-1].b = 9
                int32_t* eax_18 = sub_5327a0(eax_17, eax_17, &ebp_1[-0x17], eax_14)
                ebp_1[-1].b = 0xa
                struct _EXCEPTION_REGISTRATION_RECORD*** ecx_12 = data_bac424
                var_208 = 0xb
                sub_684160(ecx_12, var_208, eax_18)
                sub_52e8a0(&ebp_1[-0x17])
                sub_52e8a0(&ebp_1[-0x11])
                sub_52e8a0(&ebp_1[-0x2f])
                ecx_16 = &ebp_1[-0x3b]
            label_603a65:
                sub_52e8a0(ecx_16)
                ebp_1[-1].b = 3
                sub_54b010(&ebp_1[-0x7a])
                ebx.b = 0
            case 1
                struct NT3::C_sound_stream_base::NT3::C_nwa_stream::VTable** eax_26 =
                    sub_745f3f(0x1c)
                ebp_1[-0x78] = eax_26
                ebp_1[-1].b = 0xd
                struct NT3::C_sound_stream_base::NT3::C_nwa_stream::VTable** eax_27
                
                if (eax_26 == 0)
                    eax_27 = nullptr
                else
                    eax_27 = sub_6e0ad0(eax_26)
                
                ebp_1[-1].b = 3
                sub_6054b0(&ebp_1[-0x7a], eax_27)
                ebp_1[-1].b = 0xe
                int32_t* ecx_27 = ebp_1[-0x7a]
                int32_t var_204_20 = 0
                var_208 = nullptr
                void* ecx_32
                
                if ((*(*ecx_27 + 4))(&ebp_1[-0xb], var_208, var_204_20) != 0)
                    var_208 = ebp_1[-0x7a]
                    void* eax_36 = ebp_1[-0x79]
                    void* var_204_24 = eax_36
                    
                    if (eax_36 != 0)
                        *(eax_36 + 4)
                        *(eax_36 + 4) += 1
                    
                    if (sub_6de830(arg1, 1, var_208) != 0)
                        ebp_1[-1].b = 3
                        ecx_1 = sub_54b010(&ebp_1[-0x7a])
                        goto label_603e73
                    
                    void** eax_40 = sub_548cb0(&ebp_1[0x15], 0xaf32bc, &ebp_1[-0x29], &ebp_1[0x15])
                    ebp_1[-1].b = 0x11
                    int16_t* eax_41 = sub_532b80(eax_40, eax_40, &ebp_1[-0x23], &data_af32ec)
                    ebp_1[-1].b = 0x12
                    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_37 = data_bac424
                    var_208 = 2
                    ebx.b = sub_684160(ecx_37, var_208, eax_41)
                    sub_52e8a0(&ebp_1[-0x23])
                    ecx_32 = &ebp_1[-0x29]
                    goto label_603bc0
                
                void** eax_32 = sub_548cb0(&ebp_1[0x15], 0xaf32bc, &ebp_1[-0x53], &ebp_1[0x15])
                ebp_1[-1].b = 0xf
                int32_t* eax_33 = sub_532b80(eax_32, eax_32, &ebp_1[-0x1d], &data_af1a9c)
                ebp_1[-1].b = 0x10
                struct _EXCEPTION_REGISTRATION_RECORD*** ecx_30 = data_bac424
                var_208 = 0xb
                ebx.b = sub_684160(ecx_30, var_208, eax_33)
                sub_52e8a0(&ebp_1[-0x1d])
                ecx_32 = &ebp_1[-0x53]
            label_603bc0:
                sub_52e8a0(ecx_32)
                ebp_1[-1].b = 3
                sub_54b010(&ebp_1[-0x7a])
            case 2
                struct NT3::C_sound_stream_base::NT3::C_ogg_stream::VTable** eax_43 =
                    sub_745f3f(0x20)
                ebp_1[-0x78] = eax_43
                ebp_1[-1].b = 0x13
                struct NT3::C_sound_stream_base::NT3::C_ogg_stream::VTable** eax_44
                
                if (eax_43 == 0)
                    eax_44 = nullptr
                else
                    eax_44 = sub_6e0fe0(eax_43, 0)
                
                ebp_1[-1].b = 3
                sub_605510(&ebp_1[-0x7c], eax_44)
                ebp_1[-1].b = 0x14
                int32_t* ecx_43 = ebp_1[-0x7c]
                int32_t var_204_31 = 0
                var_208 = nullptr
                
                if ((*(*ecx_43 + 4))(&ebp_1[-0xb], var_208, var_204_31) != 0)
                    ebp_1[-0x78].b = 0
                    int32_t var_20c_5 = ebp_1[-0x78]
                    sub_605570(&var_208, &ebp_1[-0x7c])
                    
                    if (sub_6de830(arg1, 1, var_208) == 0)
                        void** eax_55 =
                            sub_548cb0(&ebp_1[0x15], 0xaf32bc, &ebp_1[-0x59], &ebp_1[0x15])
                        ebp_1[-1].b = 0x17
                        int32_t* eax_56 = sub_532b80(eax_55, eax_55, &ebp_1[-0x4d], &data_af32ec)
                        ebp_1[-1].b = 0x18
                        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_53 = data_bac424
                        var_208 = 2
                        ebx.b = sub_684160(ecx_53, var_208, eax_56)
                        sub_52e8a0(&ebp_1[-0x4d])
                        ecx_48 = &ebp_1[-0x59]
                        goto label_603e4e
                    
                label_603e6a:
                    ebp_1[-1].b = 3
                    ecx_1 = sub_54b010(&ebp_1[-0x7c])
                label_603e73:
                    int32_t var_204_48 = ecx_1
                    var_208 = ebp_1[2]
                    int32_t var_204_49 = sub_6df3f0(arg1, var_208.b)
                    var_208 = ebp_1[5]
                    int32_t var_204_50 = sub_6df2c0(arg1, ebp_1[3], ebp_1[4], var_208)
                    
                    if (ebp_1[7].b == 0)
                        char* eax_73 = ebp_1[6]
                        
                        if (eax_73 s> 0)
                            var_208 = eax_73
                            sub_6dee00(arg1, var_208)
                        else
                            x434b916e::_ExceptionPtr_static<class std::bad_exception>::operator[]::_ExceptionPtr_static<class std::bad_exception>::_ExceptionPtr_static<class std::bad_exception>(
                                arg1)
                    else
                        class std::unique_ptr<char16_t const[], struct std::default_delete<char16_t const[]>> __cdecl `anonymous namespace'::_Get_icu_string_impl<class `class std::unique_ptr<char16_t const[], struct std::default_delete<char16_t const[]>> __cdecl `anonymous namespace'::_Get_default_timezone(int &, enum __std_tzdb_error &)'::`2'::<lambda_1>>(class `class std::unique_ptr<char16_t const[], struct std::default_delete<char16_t const[]>> __cdecl 0x27667df0::_Get_default_timezone(int &, enum __std_tzdb_error &)'::`2'::<lambda_1>, int, int &, enum __std_tzdb_error &)(
                            arg1)
                    
                    ebx.b = 1
                else
                    void** eax_49 = sub_548cb0(&ebp_1[0x15], 0xaf32bc, &ebp_1[-0x41], &ebp_1[0x15])
                    ebp_1[-1].b = 0x15
                    int32_t* eax_50 = sub_532b80(eax_49, eax_49, &ebp_1[-0x35], &data_af1a9c)
                    ebp_1[-1].b = 0x16
                    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_46 = data_bac424
                    var_208 = 0xb
                    ebx.b = sub_684160(ecx_46, var_208, eax_50)
                    sub_52e8a0(&ebp_1[-0x35])
                    ecx_48 = &ebp_1[-0x41]
                label_603e4e:
                    sub_52e8a0(ecx_48)
                    ebp_1[-1].b = 3
                    sub_54b010(&ebp_1[-0x7c])
            case 3
                struct NT3::C_sound_stream_base::NT3::C_ogg_stream::VTable** eax_58 =
                    sub_745f3f(0x20)
                ebp_1[-0x79] = eax_58
                ebp_1[-1].b = 0x19
                struct NT3::C_sound_stream_base::NT3::C_ogg_stream::VTable** eax_59
                
                if (eax_58 == 0)
                    eax_59 = nullptr
                else
                    eax_59 = sub_6e0fe0(eax_58, 0x39)
                
                ebp_1[-1].b = 3
                sub_605510(&ebp_1[-0x7c], eax_59)
                ebp_1[-1].b = 0x1a
                int32_t* ecx_57 = ebp_1[-0x7c]
                int32_t var_204_41 = 0
                var_208 = nullptr
                
                if ((*(*ecx_57 + 4))(&ebp_1[-0xb], var_208, var_204_41) == 0)
                    int16_t* eax_64 =
                        sub_548cb0(&ebp_1[0x15], 0xaf32bc, &ebp_1[-0x71], &ebp_1[0x15])
                    ebp_1[-1].b = 0x1b
                    int16_t* eax_65 = sub_532b80(eax_64, eax_64, &ebp_1[-0x65], &data_af1a9c)
                    ebp_1[-1].b = 0x1c
                    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_60 = data_bac424
                    var_208 = 0xb
                    ebx.b = sub_684160(ecx_60, var_208, eax_65)
                    sub_52e8a0(&ebp_1[-0x65])
                    ecx_48 = &ebp_1[-0x71]
                    goto label_603e4e
                
                ebp_1[-0x78].b = 0
                int32_t var_20c_7 = ebp_1[-0x78]
                sub_605570(&var_208, &ebp_1[-0x7c])
                
                if (sub_6de830(arg1, 1, var_208) != 0)
                    goto label_603e6a
                
                void** eax_70 = sub_548cb0(&ebp_1[0x15], 0xaf32bc, &ebp_1[-0x6b], &ebp_1[0x15])
                ebp_1[-1].b = 0x1d
                int32_t* eax_71 = sub_532b80(eax_70, eax_70, &ebp_1[-0x77], &data_af32ec)
                ebp_1[-1].b = 0x1e
                struct _EXCEPTION_REGISTRATION_RECORD*** ecx_66 = data_bac424
                var_208 = 2
                ebx.b = sub_684160(ecx_66, var_208, eax_71)
                sub_52e8a0(&ebp_1[-0x77])
                ecx_48 = &ebp_1[-0x6b]
                goto label_603e4e
    
    if (ebp_1[-6] u>= 8)
        j__free(ebp_1[-0xb])
    
    ebp_1[-6] = 7
    ebp_1[-7] = 0
    ebp_1[-0xb].w = 0
else
    ebx.b = 1

if (ebp_1[0xe] u>= 8)
    j__free(ebp_1[9])

ebp_1[0xe] = 7
bool cond:1 = ebp_1[0x14] u< 8
ebp_1[0xd] = 0
ebp_1[9].w = 0

if (not(cond:1))
    j__free(ebp_1[0xf])

ebp_1[0x14] = 7
bool cond:3 = ebp_1[0x1a] u< 8
ebp_1[0x13] = 0
ebp_1[0xf].w = 0

if (not(cond:3))
    j__free(ebp_1[0x15])

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ebp_1[-3]
sub_745f2b(ebp_1[-5] ^ ebp_1)
*ebp_1
return result
