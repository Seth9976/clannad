// 函数: sub_554130
// 地址: 0x554130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9b23fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3f8
int32_t eax_2 = __security_cookie ^ &var_3f8
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_3e4 = arg4
int32_t esi = *arg6
struct _EXCEPTION_REGISTRATION_RECORD** i_2

if (arg4 != arg5)
    struct _EXCEPTION_REGISTRATION_RECORD* i_4 = *arg4
    
    if (i_4 != 0xfffffffb)
        i_2.b = *(arg3 + 0xa0)
        
        if (i_2.b != 0)
            i_2 = i_4
            struct _EXCEPTION_REGISTRATION_RECORD* var_3e0_1
            
            if (i_2 s> &data_1000000)
                if (i_2 == 0x1000001)
                    int32_t eax_349 = 0
                    bool var_3d0_1 = true
                    var_3e0_1.b = 0
                    
                    if (esi == 0)
                        goto label_556ad5
                    
                    if (esi == 1)
                        var_3e0_1.b = *(arg6[1] + 0x2d0) != esi - 1
                    label_556ad5:
                        void* eax_351 = arg6[1]
                        eax_349 = *(eax_351 + 8)
                        var_3d0_1 = *(eax_351 + 0x16c) != 0
                    
                    sub_687000(arg3 + 0x1298, eax_349, var_3d0_1, 0)
                else
                label_556a60:
                    void var_248
                    int16_t* eax_347 = sub_5483b0(arg3, &var_248)
                    int32_t var_14_18 = 0x18
                    void var_260
                    int16_t* eax_348 = sub_548cb0(eax_347, 0xad88a4, &var_260, eax_347)
                    var_14_18.b = 0x19
                    sub_684160(data_bac424, 2, eax_348)
                    sub_52e8a0(&var_260)
                    sub_52e8a0(&var_248)
            else if (i_2 == &data_1000000)
                void** esi_51 = arg6[1] + 0xc
                sub_686a10(arg3 + 0x1298)
                sub_686ee0(arg3 + 0x1298, esi_51)
            else
                if (i_2 u> 0xbb)
                    goto label_556a60
                
                int32_t var_41c
                int32_t var_418
                int32_t* var_3e8
                char var_3d0
                void* var_3a0
                int32_t var_390
                int32_t* ecx_180
                int32_t ecx_230
                bool cond:5_1
                
                switch (i_2)
                    case nullptr
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x35c))
                        else if (esi == 1)
                            int32_t ecx_10
                            ecx_10.b = arg6[1][2] != 0
                            *(arg3 + 0x35c) = ecx_10
                    case 1
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x364))
                        else if (esi == 1)
                            sub_5ef770(arg3, *(arg6[1] + 8))
                    case 2
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x390))
                        else if (esi == 1)
                            *(arg3 + 0x390) = *(arg6[1] + 8)
                    case 3
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x3a0))
                        else if (esi == 1)
                            *(arg3 + 0x3a0) = *(arg6[1] + 8)
                    case 4
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x3cc))
                        else if (esi == 1)
                            *(arg3 + 0x3cc) = *(arg6[1] + 8)
                    case 5
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x3f8))
                        else if (esi == 1)
                            *(arg3 + 0x3f8) = *(arg6[1] + 8)
                    case 6
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x424))
                        else if (esi == 1)
                            *(arg3 + 0x424) = *(arg6[1] + 8)
                    case 7
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x450))
                        else if (esi == 1)
                            *(arg3 + 0x450) = *(arg6[1] + 8)
                    case 8
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x47c))
                        else if (esi == 1)
                            *(arg3 + 0x47c) = *(arg6[1] + 8)
                    case 9
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x4a8))
                        else if (esi == 1)
                            *(arg3 + 0x4a8) = *(arg6[1] + 8)
                    case 0xa
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x4d4))
                        else if (esi == 1)
                            *(arg3 + 0x4d4) = *(arg6[1] + 8)
                    case 0xb
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x500))
                        else if (esi == 1)
                            *(arg3 + 0x500) = *(arg6[1] + 8)
                    case 0xc
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x52c))
                        else if (esi == 1)
                            *(arg3 + 0x52c) = *(arg6[1] + 8)
                    case 0xd
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x558))
                        else if (esi == 1)
                            *(arg3 + 0x558) = *(arg6[1] + 8)
                    case 0xe
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x584))
                        else if (esi == 1)
                            *(arg3 + 0x584) = *(arg6[1] + 8)
                    case 0xf
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x5b0))
                        else if (esi == 1)
                            *(arg3 + 0x5b0) = *(arg6[1] + 8)
                    case 0x10
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x5dc))
                        else if (esi == 1)
                            *(arg3 + 0x5dc) = *(arg6[1] + 8)
                    case 0x11
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x608))
                        else if (esi == 1)
                            *(arg3 + 0x608) = *(arg6[1] + 8)
                    case 0x12
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x630))
                        else if (esi == 1)
                            int32_t ecx_35
                            ecx_35.b = arg6[1][2] != 0
                            *(arg3 + 0x630) = ecx_35
                    case 0x13
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x638))
                        else if (esi == 1)
                            *(arg3 + 0x638) = *(arg6[1] + 8)
                    case 0x14
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x664))
                        else if (esi == 1)
                            *(arg3 + 0x664) = *(arg6[1] + 8)
                    case 0x15
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x690))
                        else if (esi == 1)
                            *(arg3 + 0x690) = *(arg6[1] + 8)
                    case 0x16
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x6bc))
                        else if (esi == 1)
                            *(arg3 + 0x6bc) = *(arg6[1] + 8)
                    case 0x17
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x8fc))
                        else if (esi == 1)
                            sub_553920(arg3, *(arg6[1] + 8))
                    case 0x18
                        if (esi == 0)
                            sub_677bb0(sub_5ef850(arg3, 0))
                        else if (esi != 1)
                            sub_677bb0(0)
                        else
                            sub_677bb0(sub_5ef850(arg3, *(arg6[1] + 8)))
                    case 0x19
                        if (esi == 0)
                            sub_677bb0(sub_5ef9c0(arg3, 0))
                        else if (esi != 1)
                            sub_677bb0(0)
                        else
                            sub_677bb0(sub_5ef9c0(arg3, *(arg6[1] + 8)))
                    case 0x1a
                        void* ecx_345 = data_bac45c
                        void var_2c0
                        sub_698170(ecx_345, &var_2c0, *(ecx_345 + 0x64))
                        int32_t var_14_15 = 0x14
                        sub_536170(&var_3a0, arg6[1] + 0xc)
                        var_14_15.b = 0x15
                        sub_5f3360(arg3, &var_2c0, &var_3a0)
                        sub_52e8a0(&var_3a0)
                        sub_52e8a0(&var_2c0)
                    case 0x1b
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x79c))
                        else if (esi == 1)
                            sub_5537a0(arg3, *(arg6[1] + 8))
                    case 0x1c
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x7c8))
                        else if (esi == 1)
                            sub_5537d0(arg3, *(arg6[1] + 8))
                    case 0x1d
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x7f4))
                        else if (esi == 1)
                            sub_553800(arg3, *(arg6[1] + 8))
                    case 0x1e
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x820))
                        else if (esi == 1)
                            sub_553830(arg3, *(arg6[1] + 8))
                    case 0x1f
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x84c))
                        else if (esi == 1)
                            sub_553860(arg3, *(arg6[1] + 8))
                    case 0x20
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x878))
                        else if (esi == 1)
                            sub_553890(arg3, *(arg6[1] + 8))
                    case 0x21
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x8a4))
                        else if (esi == 1)
                            sub_5538c0(arg3, *(arg6[1] + 8))
                    case 0x22
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x8d0))
                        else if (esi == 1)
                            sub_5538f0(arg3, *(arg6[1] + 8))
                    case 0x23
                        sub_5e4f70(arg3, 1)
                    case 0x24
                        sub_5e5060(arg3, 1)
                    case 0x25
                        sub_5e5540(arg3, 1)
                    case 0x26
                        sub_536170(&var_3a0, arg6[1] + 0xc)
                        int32_t var_14_4 = 3
                        sub_5e4f70(arg3, 1)
                        
                        if (var_390 != 0)
                            sub_536170(&var_41c, &var_3a0)
                            sub_5ea6c0(arg3, var_41c, var_418)
                            
                            if (esi == 1)
                                goto label_555875
                            
                            if (esi == 2)
                                goto label_555851
                            
                            if (esi == 3)
                                sub_5ef770(arg3, *(arg6[1] + 0x598))
                            label_555851:
                                ecx_180 = arg6
                                *(arg3 + 0x3cc) = *(ecx_180[1] + 0x434)
                                *(arg3 + 0x3a0) = *(ecx_180[1] + 0x2d0)
                                goto label_55587e
                            
                            sub_52e8a0(&var_3a0)
                        else
                            void* var_408_83 = 0x1a
                            int32_t var_33c_1 = 7
                            wchar16 const* const var_40c_57 = u"create"
                            int32_t var_340_1 = 0
                            int16_t var_350 = 0
                            sub_52e720(&var_350, var_40c_57, var_408_83)
                            var_14_4.b = 4
                            sub_684160(data_bac424, 0xa, &var_350)
                            sub_52e8a0(&var_350)
                            sub_52e8a0(&var_3a0)
                    case 0x27
                        sub_536170(&var_3a0, arg6[1] + 0xc)
                        int32_t var_14_5 = 5
                        sub_5e4f70(arg3, 1)
                        sub_536170(&var_41c, &var_3a0)
                        sub_5f56c0(arg3, var_41c, var_418)
                        
                        if (esi == 1)
                        label_555875:
                            ecx_180 = arg6
                        label_55587e:
                            cond:5_1 = *(ecx_180[1] + 0x16c) != 0
                        label_555884:
                            int32_t ecx_181
                            ecx_181.b = cond:5_1
                            *(arg3 + 0x35c) = ecx_181
                            sub_52e8a0(&var_3a0)
                        else
                            if (esi == 2)
                                goto label_555851
                            
                            sub_52e8a0(&var_3a0)
                    case 0x28
                        sub_5e4f70(arg3, 1)
                        void* ecx_185 = arg6[1]
                        var_3a0 = *(ecx_185 + 8)
                        int32_t var_39c_1 = *(ecx_185 + 0x16c)
                        int32_t var_398_1 = *(ecx_185 + 0x2d0)
                        int32_t var_394_1 = *(ecx_185 + 0x434)
                        int32_t eax_237
                        eax_237.b = *(ecx_185 + 0x9c4)
                        var_3e8:3.b = eax_237.b
                        eax_237.b = *(ecx_185 + 0x598)
                        var_3e8:2.b = eax_237.b
                        eax_237.b = *(ecx_185 + 0x6fc)
                        var_3e8:1.b = eax_237.b
                        eax_237.b = *(ecx_185 + 0x860)
                        var_3e8.b = eax_237.b
                        int32_t var_414
                        var_414.o = var_3a0.o
                        sub_5ea620(arg3, var_3e8, var_414)
                        int32_t ecx_188
                        
                        if (esi == 1)
                            ecx_188.b = arg6[1][0x2ca] != 0
                            *(arg3 + 0x35c) = ecx_188
                        else if (esi == 2)
                            *(arg3 + 0x3cc) = *(arg6[1] + 0xdf0)
                            *(arg3 + 0x3a0) = *(arg6[1] + 0xc8c)
                            ecx_188.b = arg6[1][0x2ca] != 0
                            *(arg3 + 0x35c) = ecx_188
                    case 0x29
                        sub_5e4f70(arg3, 1)
                        *(arg6[1] + 0xa0)
                        void* eax_302 = sub_54b180(1)
                        
                        if (eax_302 != 0)
                            sub_5e9ed0(arg3, eax_302, 0)
                        else
                            void var_2a8
                            sub_52e820(&var_2a8, &data_ad8c64)
                            int32_t var_14_13 = 0x12
                            sub_684160(data_bac424, 2, &var_2a8)
                            sub_52e8a0(&var_2a8)
                    case 0x2a
                        int32_t eax_324 = 0
                        int32_t var_3c8_2 = 0
                        int32_t ecx_334 = 0
                        var_3d0.d = 0
                        int32_t var_3e0_5 = 0
                        
                        if (esi == 0)
                            var_3c8_2 = *(arg6[1] + 8)
                            eax_324 = var_3e0_5
                        else
                            if (esi == 1)
                                goto label_556707
                            
                            if (esi == 2)
                                void* eax_325 = arg6[1]
                                var_3e0_5 = *(eax_325 + 0x434)
                                ecx_334 = *(eax_325 + 0x2d0)
                            label_556707:
                                var_3d0.d = *(arg6[1] + 0x16c)
                                var_3c8_2 = *(arg6[1] + 8)
                                eax_324 = var_3e0_5
                        
                        sub_5f3330(arg3, var_3c8_2, 0, ecx_334, eax_324)
                    case 0x2b
                        sub_536170(&var_3a0, arg6[1] + 0xc)
                        int32_t var_14_8 = 0xa
                        sub_5e4f70(arg3, 1)
                        
                        if (var_390 != 0)
                            sub_536170(&var_41c, &var_3a0)
                            sub_5eada0(arg3, var_41c, var_418)
                            
                            if (esi == 1)
                                goto label_555875
                            
                            if (esi == 2)
                                goto label_555851
                            
                            sub_52e8a0(&var_3a0)
                        else
                            void* var_408_99 = 0x1f
                            int32_t var_354_1 = 7
                            wchar16 const* const var_40c_63 = u"create_mesh"
                            int32_t var_358_1 = 0
                            int16_t var_368 = 0
                            sub_52e720(&var_368, var_40c_63, var_408_99)
                            var_14_8.b = 0xb
                            sub_684160(data_bac424, 0xa, &var_368)
                            sub_52e8a0(&var_368)
                            sub_52e8a0(&var_3a0)
                    case 0x2c
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x394))
                        else if (esi == 1)
                            *(arg3 + 0x394) = *(arg6[1] + 8)
                    case 0x2d
                        sub_536170(&var_3a0, arg6[1] + 0xc)
                        int32_t var_14_9 = 0xc
                        sub_5e4f70(arg3, 1)
                        
                        if (var_390 != 0)
                            sub_536170(&var_41c, &var_3a0)
                            sub_5eb120(arg3, var_41c, var_418)
                            
                            if (esi == 1)
                                goto label_555875
                            
                            if (esi == 2)
                                goto label_555851
                            
                            sub_52e8a0(&var_3a0)
                        else
                            void* var_408_103 = 0x24
                            int32_t var_324_1 = 7
                            wchar16 const* const var_40c_65 = u"create_billboard"
                            int32_t var_328_1 = 0
                            int16_t var_338 = 0
                            sub_52e720(&var_338, var_40c_65, var_408_103)
                            var_14_9.b = 0xd
                            sub_684160(data_bac424, 0xa, &var_338)
                            sub_52e8a0(&var_338)
                            int32_t var_14_10 = 0xffffffff
                            sub_52e8a0(&var_3a0)
                        label_555c8a:
                            sub_5e4f70(arg3, 1)
                            int32_t esi_28 = *(arg6[1] + 8)
                            sub_5e5060(arg3, 1)
                            *(arg3 + 0x1ac) = 8
                            *(arg3 + 0x264) = esi_28
                            sub_5ea9d0(arg3)
                            
                            if (esi == 1)
                            label_555d14:
                                ecx_230.b = arg6[1][0x5b] != 0
                                *(arg3 + 0x35c) = ecx_230
                            else if (esi == 2)
                                *(arg3 + 0x3cc) = *(arg6[1] + 0x434)
                                *(arg3 + 0x3a0) = *(arg6[1] + 0x2d0)
                                ecx_230.b = arg6[1][0x5b] != 0
                                *(arg3 + 0x35c) = ecx_230
                    case 0x2e
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x9c4))
                        else if (esi == 1)
                            sub_5539e0(arg3, *(arg6[1] + 8))
                    case 0x2f
                        if (esi == 0 || esi == 1)
                            sub_677bb0(sub_5efb30(arg3))
                        else
                            sub_677bb0(0)
                    case 0x30
                        if (esi == 0)
                            *(arg3 + 0x3a0) = *(arg6[1] + 8)
                            *(arg3 + 0x3cc) = *(arg6[1] + 0x16c)
                        else if (esi == 1)
                            *(arg3 + 0x3a0) = *(arg6[1] + 8)
                            *(arg3 + 0x3cc) = *(arg6[1] + 0x16c)
                            *(arg3 + 0x3f8) = *(arg6[1] + 0x2d0)
                    case 0x31
                        if (esi == 0)
                            *(arg3 + 0x52c) = *(arg6[1] + 8)
                            *(arg3 + 0x558) = *(arg6[1] + 0x16c)
                        else if (esi == 1)
                            *(arg3 + 0x52c) = *(arg6[1] + 8)
                            *(arg3 + 0x558) = *(arg6[1] + 0x16c)
                            *(arg3 + 0x584) = *(arg6[1] + 0x2d0)
                    case 0x32
                        if (esi == 0)
                            *(arg3 + 0x5b0) = *(arg6[1] + 8)
                            *(arg3 + 0x5dc) = *(arg6[1] + 0x16c)
                        else if (esi == 1)
                            *(arg3 + 0x5b0) = *(arg6[1] + 8)
                            *(arg3 + 0x5dc) = *(arg6[1] + 0x16c)
                            *(arg3 + 0x608) = *(arg6[1] + 0x2d0)
                    case 0x33
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x39c, var_3e4 + 4, arg5, arg6)
                    case 0x34
                        sub_55a5d0(var_3e4 + 4, arg6, arg3 + 0xe94, var_3e4 + 4, arg5, arg6)
                    case 0x35
                        sub_5eb2d0(arg3, arg6[1] + 0xc)
                    case 0x36
                        sub_557c90(var_3e4 + 4, arg6, arg3 + 0x9cc, var_3e4 + 4, arg5, arg6)
                    case 0x37
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x38c))
                        else if (esi == 1)
                            *(arg3 + 0x38c) = *(arg6[1] + 8)
                    case 0x38
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x1b0))
                        else if (esi == 1)
                            int32_t ecx_4
                            ecx_4.b = arg6[1][2] != 0
                            *(arg3 + 0x1b0) = ecx_4
                    case 0x39
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x928))
                        else if (esi == 1)
                            sub_553950(arg3, *(arg6[1] + 8))
                    case 0x3a
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x954))
                        else if (esi == 1)
                            sub_553980(arg3, *(arg6[1] + 8))
                    case 0x3b
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x980))
                        else if (esi == 1)
                            sub_5539b0(arg3, *(arg6[1] + 8))
                    case 0x3c
                        sub_5f3450(arg3)
                    case 0x3d
                        sub_5f3250(arg3)
                    case 0x3e
                        void var_230
                        int16_t* eax_224 = sub_553a60(arg3, &var_230)
                        int32_t var_14_3 = 2
                        sub_60c680(data_bac49c + 0xc, eax_224)
                        sub_52e8a0(&var_230)
                    case 0x3f
                        sub_557c90(var_3e4 + 4, arg6, arg3 + 0xa88, var_3e4 + 4, arg5, arg6)
                    case 0x40
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x3c8, var_3e4 + 4, arg5, arg6)
                    case 0x41
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x3f4, var_3e4 + 4, arg5, arg6)
                    case 0x42
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x580, var_3e4 + 4, arg5, arg6)
                    case 0x43
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x528, var_3e4 + 4, arg5, arg6)
                    case 0x44
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x554, var_3e4 + 4, arg5, arg6)
                    case 0x45
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x5ac, var_3e4 + 4, arg5, arg6)
                    case 0x46
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x5d8, var_3e4 + 4, arg5, arg6)
                    case 0x47
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x604, var_3e4 + 4, arg5, arg6)
                    case 0x48
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x798, var_3e4 + 4, arg5, arg6)
                    case 0x49
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x7c4, var_3e4 + 4, arg5, arg6)
                    case 0x4a
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x7f0, var_3e4 + 4, arg5, arg6)
                    case 0x4b
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x81c, var_3e4 + 4, arg5, arg6)
                    case 0x4c
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x848, var_3e4 + 4, arg5, arg6)
                    case 0x4d
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x420, var_3e4 + 4, arg5, arg6)
                    case 0x4e
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x44c, var_3e4 + 4, arg5, arg6)
                    case 0x4f
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x478, var_3e4 + 4, arg5, arg6)
                    case 0x50
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x4a4, var_3e4 + 4, arg5, arg6)
                    case 0x51
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x4d0, var_3e4 + 4, arg5, arg6)
                    case 0x52
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x4fc, var_3e4 + 4, arg5, arg6)
                    case 0x53
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x8f8, var_3e4 + 4, arg5, arg6)
                    case 0x54
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x924, var_3e4 + 4, arg5, arg6)
                    case 0x55
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x950, var_3e4 + 4, arg5, arg6)
                    case 0x56
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x97c, var_3e4 + 4, arg5, arg6)
                    case 0x57
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x874, var_3e4 + 4, arg5, arg6)
                    case 0x58
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x8a0, var_3e4 + 4, arg5, arg6)
                    case 0x59
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x8cc, var_3e4 + 4, arg5, arg6)
                    case 0x5a
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x360, var_3e4 + 4, arg5, arg6)
                    case 0x5b
                        int32_t eax_195 = *(var_3e4 + 4)
                        
                        if (eax_195 == 0)
                            sub_5f01f0(arg3)
                        else if (eax_195 == 1)
                            int32_t var_180
                            sub_54aed0(&var_180)
                            int32_t var_14_1 = 0
                            var_180 = 0x27
                            int32_t eax_199 = (arg5 - arg2 - 8) s>> 2
                            int32_t var_184_1 = eax_199
                            void var_200
                            sub_748840(&var_200, arg2, eax_199 << 2, eax_4)
                            void var_17c
                            __builtin_memcpy(&var_17c, &var_200, 0x80)
                            void var_55c
                            sub_54cf80(&var_55c, &var_180)
                            sub_6766e0()
                            void var_f4
                            sub_54ae40(&var_f4)
                        else if (eax_195 != 2)
                            void* var_408_61 = 0x1a
                            int32_t var_36c_1 = 7
                            void* const var_40c_47 = &data_ad8a44
                            int32_t var_370_1 = 0
                            int16_t var_380 = 0
                            sub_52e720(&var_380, var_40c_47, var_408_61)
                            int32_t var_14_2 = 1
                            sub_684160(data_bac424, 2, &var_380)
                            sub_52e8a0(&var_380)
                        else
                            int32_t ecx_131
                            ecx_131.b = sub_5f0460(arg3) != 0
                            sub_677bb0(ecx_131)
                    case 0x5c
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x1b4))
                        else if (esi == 1)
                            int32_t ecx_6
                            ecx_6.b = arg6[1][2] != 0
                            *(arg3 + 0x1b4) = ecx_6
                    case 0x5d
                        sub_553f50(var_3e4 + 4, arg2, arg3 + 0x1390, var_3e4 + 4, arg5, arg6)
                    case 0x5e, 0xad, 0xb4
                        goto label_556a60
                    case 0x5f
                        *(arg3 + 0x33c) = 0
                    case 0x60
                        *(arg3 + 0x33c) = 3
                    case 0x61
                        *(arg3 + 0x33c) = 4
                    case 0x62
                        *(arg3 + 0x338) = *(arg6[1] + 8)
                    case 0x63
                        sub_536170(&var_41c, arg6[1] + 0xc)
                        sub_5f5780(arg3, var_41c, var_418)
                    case 0x64
                        if (esi == 0)
                            void* eax_222 = arg6[1]
                            int32_t var_408_74 = 0
                            sub_677bb0(sub_5effe0(arg3, esi, arg3, *(eax_222 + 8), 
                                *(eax_222 + 0x16c)))
                        else if (esi != 1)
                            sub_677bb0(0)
                        else
                            void* eax_220 = arg6[1]
                            int32_t var_408_73 = *(eax_220 + 0x2d0)
                            sub_677bb0(sub_5effe0(arg3, esi - 1, arg3, *(eax_220 + 8), 
                                *(eax_220 + 0x16c)))
                    case 0x65
                        void* eax_210
                        
                        if (esi == 0)
                            eax_210 = arg6[1]
                            int32_t var_408_68 = 0
                            sub_677bb0(sub_5efbc0(arg3, *(eax_210 + 8), *(eax_210 + 0x16c)))
                        else if (esi != 1)
                            sub_677bb0(0)
                        else
                            eax_210 = arg6[1]
                            int32_t var_408_67 = *(eax_210 + 0x2d0)
                            sub_677bb0(sub_5efbc0(arg3, *(eax_210 + 8), *(eax_210 + 0x16c)))
                    case 0x66
                        if (esi == 0)
                            void* eax_214 = arg6[1]
                            int32_t var_408_70 = 0
                            sub_677bb0(sub_5efd20(arg3, *(eax_214 + 8), *(eax_214 + 0x16c)))
                        else if (esi != 1)
                            sub_677bb0(0)
                        else
                            void* eax_212 = arg6[1]
                            int32_t var_408_69 = *(eax_212 + 0x2d0)
                            sub_677bb0(sub_5efd20(arg3, *(eax_212 + 8), *(eax_212 + 0x16c)))
                    case 0x67
                        if (esi == 0)
                            void* eax_218 = arg6[1]
                            int32_t var_408_72 = 0
                            sub_677bb0(sub_5efe80(arg3, *(eax_218 + 8), *(eax_218 + 0x16c)))
                        else if (esi != 1)
                            sub_677bb0(0)
                        else
                            void* eax_216 = arg6[1]
                            int32_t var_408_71 = *(eax_216 + 0x2d0)
                            sub_677bb0(sub_5efe80(arg3, *(eax_216 + 8), *(eax_216 + 0x16c)))
                    case 0x68
                        void* eax_308 = data_bac510
                        int32_t var_3d8_2 = 0xffffffff
                        int32_t var_3dc_2 = *(eax_308 + 0xa2ebc0)
                        int32_t ecx_284 = *(eax_308 + 0xa2ebbc)
                        
                        if (esi == 0)
                            goto label_55624c
                        
                        int32_t esi_41
                        
                        if (esi != 1)
                            esi_41 = *(eax_308 + 0xa2ebb8)
                        else
                            ecx_284 = *(arg6[1] + 0x9c4)
                        label_55624c:
                            void* eax_310 = arg6[1]
                            var_3d8_2 = *(eax_310 + 0x860)
                            esi_41 = *(eax_310 + 0x6fc)
                            var_3dc_2 = *(eax_310 + 0x598)
                        
                        void* eax_312 = arg6[1]
                        int32_t var_418_2 = *(eax_312 + 0x434)
                        var_41c = *(eax_312 + 0x2d0)
                        sub_5f5840(arg3, *(eax_312 + 8), *(eax_312 + 0x16c), var_41c, var_418_2, 
                            var_3dc_2, esi_41, ecx_284, var_3d8_2)
                    case 0x69
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x634, var_3e4 + 4, arg5, arg6)
                    case 0x6a
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x660, var_3e4 + 4, arg5, arg6)
                    case 0x6b
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x68c, var_3e4 + 4, arg5, arg6)
                    case 0x6c
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x6b8, var_3e4 + 4, arg5, arg6)
                    case 0x6d
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x9ac))
                        else if (esi == 1)
                            *(arg3 + 0x9ac) = *(arg6[1] + 8)
                    case 0x6e
                        sub_557c90(var_3e4 + 4, arg6, arg3 + 0xb44, var_3e4 + 4, arg5, arg6)
                    case 0x6f
                        sub_557680(var_3e4 + 4, 0x20, arg3 + 0xcbc, var_3e4, var_3e4 + 4, arg5, 
                            arg6)
                    case 0x70
                        sub_558170(var_3e4 + 4, arg2, arg3 + 0x9cc, var_3e4 + 4, arg5, arg6)
                    case 0x71
                        sub_558170(var_3e4 + 4, arg2, arg3 + 0xa88, var_3e4 + 4, arg5, arg6)
                    case 0x72
                        sub_558170(var_3e4 + 4, arg2, arg3 + 0xb44, var_3e4 + 4, arg5, arg6)
                    case 0x73
                        sub_55a440(var_3e4 + 4, arg6, arg3 + 0x1160, var_3e4 + 4, arg5, arg6)
                    case 0x74
                        goto label_555c8a
                    case 0x75
                        int32_t var_14_17 = 0x17
                        void var_278
                        sub_677c00(sub_5483b0(arg3, &var_278))
                        sub_52e8a0(&var_278)
                    case 0x76
                        sub_677bb0(*(arg3 + 0x33c))
                    case 0x77
                        sub_677bb0(*(arg3 + 0x338))
                    case 0x78, 0x79, 0x7a, 0x8f
                        sub_536170(&var_3a0, arg6[1] + 0xc)
                        int32_t var_14_11 = 0xe
                        char var_3c9_1 = 0
                        var_3e8.b = 0
                        int32_t ecx_241 = *var_3e4
                        int32_t var_3dc
                        var_3dc.b = 0
                        char eax_272 = 0
                        
                        if (ecx_241 == 0x79)
                            eax_272 = 1
                        
                        bool var_3d8 = true
                        int32_t* var_3d4
                        var_3d4.b = 1
                        var_3e0_1.b = eax_272
                        
                        if (ecx_241 == 0x7a || ecx_241 == 0x8f)
                            char eax_273 = 0
                            var_3c9_1 = 1
                            
                            if (ecx_241 == 0x8f)
                                eax_273 = 1
                            
                            var_3e8.b = eax_273
                        
                        int32_t* ecx_242 = arg6[2]
                        int32_t edx_47 = arg6[3]
                        
                        if (ecx_242 u< edx_47)
                            int32_t* ecx_243 = ecx_242
                            
                            do
                                int32_t eax_275 = *ecx_243
                                
                                if (eax_275 == 0)
                                    var_3d8 = ecx_243[2] != 0
                                else if (eax_275 == 1)
                                    var_3d4.b = ecx_243[2] != 0
                                else if (eax_275 == 2)
                                    var_3dc.b = ecx_243[2] != eax_275 - 2
                                
                                ecx_243 = &ecx_243[0x59]
                            while (ecx_243 u< edx_47)
                        
                        sub_5e4f70(arg3, 1)
                        
                        if (var_390 != 0)
                            sub_536170(&var_41c, &var_3a0)
                            sub_5f3dc0(arg3, var_3e0_1.b, var_3d8, var_3d4.b, var_3dc.b, var_41c)
                            int32_t ecx_252
                            
                            if (esi == 1)
                                ecx_252.b = *(arg6[1] + 0x16c) != 0
                                *(arg3 + 0x35c) = ecx_252
                            else if (esi == 2)
                                *(arg3 + 0x3cc) = *(arg6[1] + 0x434)
                                *(arg3 + 0x3a0) = *(arg6[1] + 0x2d0)
                                ecx_252.b = *(arg6[1] + 0x16c) != 0
                                *(arg3 + 0x35c) = ecx_252
                            
                            if (var_3c9_1 != 0)
                                char eax_284 = var_3e8.b
                                sub_5f4680(arg3, eax_284, eax_284)
                            
                            sub_52e8a0(&var_3a0)
                        else
                            void* var_408_113 = 0x20
                            int32_t var_2f4_1 = 7
                            wchar16 const* const var_40c_67 = u"create_movie"
                            int32_t var_2f8_1 = 0
                            int16_t var_308 = 0
                            sub_52e720(&var_308, var_40c_67, var_408_113)
                            var_14_11.b = 0xf
                            sub_684160(data_bac424, 0xa, &var_308)
                            sub_52e8a0(&var_308)
                            sub_52e8a0(&var_3a0)
                    case 0x7b
                        sub_677bb0(sub_5f3640(arg3))
                    case 0x7c
                        sub_677bb0(sub_5f3680(arg3))
                    case 0x7d
                        *(arg3 + 0x26b) = 1
                    case 0x7e
                        *(arg3 + 0x26b) = 0
                    case 0x7f
                        sub_677bb0(zx.d(sub_5f4650(arg3)))
                    case 0x80
                        sub_5f4680(arg3, 0, 0)
                    case 0x81
                        sub_536170(&var_3a0, arg6[1] + 0xc)
                        int32_t var_14_7 = 8
                        sub_5e4f70(arg3, 1)
                        
                        if (var_390 != 0)
                            sub_536170(&var_41c, &var_3a0)
                            sub_5f6880(arg3, var_41c)
                            
                            if (esi == 1)
                                goto label_555875
                            
                            if (esi == 2)
                                goto label_555851
                            
                            sub_52e8a0(&var_3a0)
                        else
                            void* var_408_95 = 0x22
                            int32_t var_30c_1 = 7
                            wchar16 const* const var_40c_61 = u"create_weather"
                            int32_t var_310_1 = 0
                            int16_t var_320 = 0
                            sub_52e720(&var_320, var_40c_61, var_408_95)
                            var_14_7.b = 9
                            sub_684160(data_bac424, 0xa, &var_320)
                            sub_52e8a0(&var_320)
                            sub_52e8a0(&var_3a0)
                    case 0x82
                        int32_t* i = arg6[2]
                        int32_t ecx_288 = 0
                        int32_t edx_50 = arg6[3]
                        int32_t esi_42 = 0
                        int32_t var_3ec_1 = 0
                        int32_t var_3c4_1
                        __builtin_memset(&var_3c4_1, 0, 0x20)
                        int32_t var_3e4_1 = 0
                        int32_t var_3e8_1 = 0x3e8
                        int32_t var_3d4_1 = 0x3e8
                        int32_t var_3dc_3 = 0xafc8
                        int32_t var_3d8_3 = 0
                        int32_t var_3c0_1
                        int32_t var_3bc_1
                        int32_t var_3b8_1
                        int32_t var_3b4_1
                        int32_t var_3b0_1
                        int32_t var_3ac_1
                        int32_t var_3a8_1
                        
                        for (; i u< edx_50; i = &i[0x59])
                            int32_t ecx_289 = *i
                            
                            if (ecx_289 u> 0xe)
                                ecx_288 = var_3ec_1
                            else
                                switch (ecx_289)
                                    case 0
                                        esi_42 = i[2]
                                        ecx_288 = var_3ec_1
                                    case 1
                                        ecx_288 = i[2]
                                        var_3ec_1 = ecx_288
                                    case 2
                                        var_3c0_1 = i[2]
                                        ecx_288 = var_3ec_1
                                    case 3
                                        var_3b4_1 = i[2]
                                        ecx_288 = var_3ec_1
                                    case 4
                                        var_3ac_1 = i[2]
                                        ecx_288 = var_3ec_1
                                    case 5
                                        var_3c4_1 = i[2]
                                        ecx_288 = var_3ec_1
                                    case 6
                                        var_3bc_1 = i[2]
                                        ecx_288 = var_3ec_1
                                    case 7
                                        var_3a8_1 = i[2]
                                        ecx_288 = var_3ec_1
                                    case 8
                                        var_3b0_1 = i[2]
                                        ecx_288 = var_3ec_1
                                    case 9
                                        var_3b8_1 = i[2]
                                        ecx_288 = var_3ec_1
                                    case 0xa
                                        var_3e4_1 = i[2]
                                        ecx_288 = var_3ec_1
                                    case 0xb
                                        var_3d8_3 = i[2]
                                        ecx_288 = var_3ec_1
                                    case 0xc
                                        var_3e8_1 = i[2]
                                        ecx_288 = var_3ec_1
                                    case 0xd
                                        var_3d4_1 = i[2]
                                        ecx_288 = var_3ec_1
                                    case 0xe
                                        var_3dc_3 = i[2]
                                        ecx_288 = var_3ec_1
                        
                        i.b = var_3d8_3 != 0
                        var_41c = var_3b8_1
                        sub_5f6910(arg3, esi_42, ecx_288, var_3c0_1, var_3b4_1, var_3ac_1, 
                            var_3c4_1, var_3bc_1, var_3a8_1, var_3b0_1, var_41c, var_3e4_1, 
                            var_3e8_1, var_3d4_1, var_3dc_3, i.b)
                    case 0x83
                        int32_t* i_1 = arg6[2]
                        int32_t ecx_304 = 0
                        int32_t esi_43 = 0
                        int32_t var_3ec_2 = 0
                        int32_t var_3e0_4 = 0
                        var_3d0.d = 0
                        int32_t var_3c8_1 = 0
                        int32_t var_3a4_1 = 0
                        int32_t var_3e4_2 = 0
                        int32_t var_3e8_2 = 0x64
                        int32_t var_3d4_2 = 0x3e8
                        int32_t var_3dc_4 = 0
                        int32_t var_3d8_4 = 0
                        int32_t var_3b8_2 = 0
                        int32_t var_3b0_2 = 0
                        int32_t var_3a8_2 = 0
                        int32_t var_3bc_2 = 0x3e8
                        int32_t var_3c4_2 = 0x3e8
                        int32_t var_3ac_2 = 0x3e8
                        int32_t var_3b4_2 = 0x3e8
                        int32_t var_3c0_2 = 0
                        
                        for (; i_1 u< arg6[3]; i_1 = &i_1[0x59])
                            int32_t ecx_305 = *i_1
                            
                            if (ecx_305 u> 0x13)
                                ecx_304 = var_3ec_2
                            else
                                switch (ecx_305)
                                    case 0
                                        esi_43 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 1
                                        ecx_304 = i_1[2]
                                        var_3ec_2 = ecx_304
                                    case 2
                                        var_3e0_4 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 3
                                        var_3d0.d = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 4
                                        var_3c8_1 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 5
                                        var_3d4_2 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 6
                                        ecx_304 = var_3ec_2
                                    case 7
                                        var_3dc_4 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 8
                                        var_3d8_4 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 9
                                        var_3b8_2 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 0xa
                                        var_3b0_2 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 0xb
                                        var_3a4_1 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 0xc
                                        var_3e4_2 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 0xd
                                        var_3e8_2 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 0xe
                                        var_3bc_2 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 0xf
                                        var_3c4_2 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 0x10
                                        var_3a8_2 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 0x11
                                        var_3c0_2 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 0x12
                                        var_3ac_2 = i_1[2]
                                        ecx_304 = var_3ec_2
                                    case 0x13
                                        var_3b4_2 = i_1[2]
                                        ecx_304 = var_3ec_2
                        
                        i_1.b = var_3c0_2 != 0
                        var_41c = var_3a8_2
                        sub_5f69d0(arg3, esi_43, ecx_304, var_3e0_4, var_3d0.d, var_3c8_1, 
                            var_3a4_1, var_3e4_2, var_3e8_2, var_3d4_2, var_3dc_4, var_3d8_4, 
                            var_3b8_2, var_3b0_2, var_41c, var_3bc_2, var_3c4_2, var_3ac_2, 
                            var_3b4_2, i_1.b)
                    case 0x84
                        sub_536170(&var_3a0, arg6[1] + 0xc)
                        int32_t var_14_6 = 6
                        sub_5e4f70(arg3, 1)
                        
                        if (var_390 != 0)
                            sub_536170(&var_41c, &var_3a0)
                            sub_5f4950(arg3, var_41c, var_418)
                            
                            if (esi == 1)
                                goto label_555875
                            
                            if (esi == 2)
                                goto label_555851
                            
                            sub_52e8a0(&var_3a0)
                        else
                            void* var_408_91 = 0x21
                            int32_t var_2dc_1 = 7
                            wchar16 const* const var_40c_59 = u"create_number"
                            int32_t var_2e0_1 = 0
                            int16_t var_2f0 = 0
                            sub_52e720(&var_2f0, var_40c_59, var_408_91)
                            var_14_6.b = 7
                            sub_684160(data_bac424, 0xa, &var_2f0)
                            sub_52e8a0(&var_2f0)
                            sub_52e8a0(&var_3a0)
                    case 0x85
                        *(arg3 + 0x1f0) = *(arg6[1] + 8)
                    case 0x86
                        void* eax_314 = arg6[1]
                        int32_t var_408_128 = *(eax_314 + 0x6fc)
                        int32_t var_40c_75 = *(eax_314 + 0x598)
                        int32_t var_410_56 = *(eax_314 + 0x434)
                        int32_t var_414_3 = *(eax_314 + 0x2d0)
                        int32_t var_418_3 = *(eax_314 + 0x16c)
                        var_41c = *(eax_314 + 8)
                        sub_5f4910(arg3, var_41c, var_418_3, var_414_3, var_410_56, var_40c_75, 
                            var_408_128)
                    case 0x87
                        int32_t var_14_14 = 0x13
                        void var_218
                        sub_677c00(sub_553ad0(arg3, &var_218))
                        sub_52e8a0(&var_218)
                    case 0x88
                        sub_677bb0(*(arg3 + 0x1f0))
                    case 0x89
                        sub_5f45f0(arg3, *(arg6[1] + 8))
                    case 0x8a
                        sub_677bb0(sub_5f4620(arg3))
                    case 0x8b
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x1b8))
                        else if (esi == 1)
                            int32_t ecx_8
                            ecx_8.b = arg6[1][2] != 0
                            *(arg3 + 0x1b8) = ecx_8
                    case 0x8c
                        sub_558170(var_3e4 + 4, arg2, arg3 + 0xc00, var_3e4 + 4, arg5, arg6)
                    case 0x8d
                        sub_557c90(var_3e4 + 4, arg6, arg3 + 0xc00, var_3e4 + 4, arg5, arg6)
                    case 0x8e
                        sub_5f4680(arg3, 1, 1)
                    case 0x90
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x9b4))
                        else if (esi == 1)
                            int32_t ecx_85
                            ecx_85.b = arg6[1][2] != 0
                            *(arg3 + 0x9b4) = ecx_85
                    case 0x91
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x9a8))
                        else if (esi == 1)
                            *(arg3 + 0x9a8) = *(arg6[1] + 8)
                    case 0x92
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x9b8))
                        else if (esi == 1)
                            int32_t ecx_76
                            ecx_76.b = arg6[1][2] != 0
                            *(arg3 + 0x9b8) = ecx_76
                    case 0x93
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x9bc))
                        else if (esi == 1)
                            int32_t ecx_78
                            ecx_78.b = arg6[1][2] != 0
                            *(arg3 + 0x9bc) = ecx_78
                    case 0x94
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x9c0))
                        else if (esi == 1)
                            int32_t ecx_80
                            ecx_80.b = arg6[1][2] != 0
                            *(arg3 + 0x9c0) = ecx_80
                    case 0x95
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x6e4))
                        else if (esi == 1)
                            int32_t ecx_42
                            ecx_42.b = arg6[1][2] != 0
                            *(arg3 + 0x6e4) = ecx_42
                    case 0x96
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x6ec))
                        else if (esi == 1)
                            *(arg3 + 0x6ec) = *(arg6[1] + 8)
                    case 0x97
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x718))
                        else if (esi == 1)
                            *(arg3 + 0x718) = *(arg6[1] + 8)
                    case 0x98
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x744))
                        else if (esi == 1)
                            *(arg3 + 0x744) = *(arg6[1] + 8)
                    case 0x99
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x770))
                        else if (esi == 1)
                            *(arg3 + 0x770) = *(arg6[1] + 8)
                    case 0x9a
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x6e8, var_3e4 + 4, arg5, arg6)
                    case 0x9b
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x714, var_3e4 + 4, arg5, arg6)
                    case 0x9c
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x740, var_3e4 + 4, arg5, arg6)
                    case 0x9d
                        sub_557e50(var_3e4 + 4, arg2, arg3 + 0x76c, var_3e4 + 4, arg5, arg6)
                    case 0x9e
                        if (esi == 0)
                            *(arg3 + 0x424) = *(arg6[1] + 8)
                            *(arg3 + 0x450) = *(arg6[1] + 0x16c)
                        else if (esi == 1)
                            *(arg3 + 0x424) = *(arg6[1] + 8)
                            *(arg3 + 0x450) = *(arg6[1] + 0x16c)
                            *(arg3 + 0x47c) = *(arg6[1] + 0x2d0)
                    case 0x9f
                        if (esi == 0)
                            *(arg3 + 0x4a8) = *(arg6[1] + 8)
                            *(arg3 + 0x4d4) = *(arg6[1] + 0x16c)
                        else if (esi == 1)
                            *(arg3 + 0x4a8) = *(arg6[1] + 8)
                            *(arg3 + 0x4d4) = *(arg6[1] + 0x16c)
                            *(arg3 + 0x500) = *(arg6[1] + 0x2d0)
                    case 0xa0
                        int32_t ecx_40
                        ecx_40.b = *(arg6[1] + 8) != 0
                        *(arg3 + 0x630) = ecx_40
                        *(arg3 + 0x638) = *(arg6[1] + 0x16c)
                        *(arg3 + 0x664) = *(arg6[1] + 0x2d0)
                        *(arg3 + 0x690) = *(arg6[1] + 0x434)
                        *(arg3 + 0x6bc) = *(arg6[1] + 0x598)
                    case 0xa1
                        int32_t ecx_47
                        ecx_47.b = *(arg6[1] + 8) != 0
                        *(arg3 + 0x6e4) = ecx_47
                        *(arg3 + 0x6ec) = *(arg6[1] + 0x16c)
                        *(arg3 + 0x718) = *(arg6[1] + 0x2d0)
                        *(arg3 + 0x744) = *(arg6[1] + 0x434)
                        *(arg3 + 0x770) = *(arg6[1] + 0x598)
                    case 0xa2
                        goto label_55688c
                    case 0xa3
                        *(arg3 + 0x9c8) = 0
                    label_55688c:
                        
                        for (i_2 = arg6[2]; i_2 u< arg6[3]; i_2 = &i_2[0x59])
                            if (*i_2 == 0)
                                if (i_2[2] == 0)
                                    *(arg3 + 0x9c8) &= 0xfffffffe
                                else
                                    *(arg3 + 0x9c8) |= 1
                    case 0xa4
                        if (esi == 0)
                            sub_5f34c0(arg3, *(arg6[1] + 8))
                        else if (esi == 1)
                            __builtin_memcpy(arg3 + 0x2b8, arg6[1] + 0x24, 0x80)
                    case 0xa5
                        sub_5e4f70(arg3, 1)
                        sub_5e5060(arg3, 1)
                        *(arg3 + 0x1ac) = 0xa
                        sub_5eab90(arg3)
                        int32_t ecx_239
                        
                        if (esi == 1)
                            ecx_239.b = arg6[1][2] != 0
                            *(arg3 + 0x35c) = ecx_239
                        else if (esi == 2)
                            *(arg3 + 0x3cc) = *(arg6[1] + 0x2d0)
                            *(arg3 + 0x3a0) = *(arg6[1] + 0x16c)
                            ecx_239.b = arg6[1][2] != 0
                            *(arg3 + 0x35c) = ecx_239
                    case 0xa6
                        *(arg3 + 0x398) = 0
                    case 0xa7
                        *(arg3 + 0x398) = 1
                    case 0xa8
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x9b0))
                        else if (esi == 1)
                            *(arg3 + 0x9b0) = *(arg6[1] + 8)
                    case 0xa9
                        if (*(arg3 + 0x1ac) != 2)
                            sub_677bb0(0)
                        else
                            int32_t* eax_202 = *(arg3 + 0x1568)
                            
                            if (eax_202 == 0)
                                sub_677bb0(0)
                            else
                                sub_677bb0((eax_202[1] - *eax_202) s>> 3)
                    case 0xaa
                        sub_5e4f70(arg3, 1)
                        int32_t esi_31 = *(arg6[1] + 8)
                        sub_5e5060(arg3, 1)
                        *(arg3 + 0x1ac) = 0xb
                        *(arg3 + 0x264) = esi_31
                        sub_5eaab0(arg3)
                        
                        if (esi == 1)
                            goto label_555d14
                        
                        if (esi == 2)
                            *(arg3 + 0x3cc) = *(arg6[1] + 0x434)
                            *(arg3 + 0x3a0) = *(arg6[1] + 0x2d0)
                            ecx_230.b = arg6[1][0x5b] != 0
                            *(arg3 + 0x35c) = ecx_230
                    case 0xab
                        i_2 = *(arg3 + 0x15e0)
                        
                        if (i_2 != 0)
                            (*i_2)[0x44].b = 0
                    case 0xac
                        i_2.b = arg6[1][2] != 0
                        *(arg3 + 0x269) = i_2.b
                    case 0xae
                        int32_t ecx_276
                        ecx_276.b = *(arg3 + 0x1ac) != 0
                        sub_677bb0(ecx_276)
                    case 0xaf
                        *(arg3 + 0x358) = *(arg6[1] + 8)
                    case 0xb0
                        sub_677bb0(*(arg3 + 0x358))
                    case 0xb1
                        void* eax_285 = arg6[1]
                        var_3d0.d = *(eax_285 + 8)
                        int32_t ecx_256 = *(eax_285 + 0x16c)
                        sub_536170(&var_3a0, eax_285 + 0x2d4)
                        int32_t var_14_12 = 0x10
                        int32_t var_3d8_1 = 0
                        int32_t var_3dc_1 = 0
                        
                        for (int32_t* i_3 = arg6[2]; i_3 u< arg6[3]; i_3 = &i_3[0x59])
                            int32_t eax_288 = *i_3
                            
                            if (eax_288 == 0)
                                var_3d8_1 = i_3[2]
                            else if (eax_288 == 1)
                                var_3dc_1 = i_3[2]
                        
                        sub_5e4f70(arg3, 1)
                        
                        if (var_390 != 0)
                            sub_536170(&var_41c, &var_3a0)
                            sub_5ead10(arg3, var_3d0.d, ecx_256, var_41c)
                            *(arg3 + 0x29c) = var_3d8_1
                            *(arg3 + 0x2a0) = var_3dc_1
                            
                            if (esi == 1)
                                cond:5_1 = *(arg6[1] + 0x434) != 0
                                goto label_555884
                            
                            if (esi == 2)
                                *(arg3 + 0x3cc) = *(arg6[1] + 0x6fc)
                                *(arg3 + 0x3a0) = *(arg6[1] + 0x598)
                                cond:5_1 = *(arg6[1] + 0x434) != 0
                                goto label_555884
                            
                            sub_52e8a0(&var_3a0)
                        else
                            void* var_408_118 = 0x20
                            int32_t var_2c4_1 = 7
                            wchar16 const* const var_40c_70 = u"create_emote"
                            int32_t var_2c8_1 = 0
                            int16_t var_2d8 = 0
                            sub_52e720(&var_2d8, var_40c_70, var_408_118)
                            var_14_12.b = 0x11
                            sub_684160(data_bac424, 0xa, &var_2d8)
                            sub_52e8a0(&var_2d8)
                            sub_52e8a0(&var_3a0)
                    case 0xb2
                        void* eax_337 = arg6[1]
                        int32_t ecx_352 = *(eax_337 + 8)
                        void var_290
                        sub_536170(&var_290, eax_337 + 0x170)
                        struct _EXCEPTION_REGISTRATION_RECORD** eax_339 = nullptr
                        int32_t var_14_16 = 0x16
                        
                        if (esi == 1)
                            eax_339 = *(arg6[1] + 0x2d0)
                        
                        sub_5f08c0(arg3, ecx_352, &var_290, eax_339)
                        sub_52e8a0(&var_290)
                    case 0xb3
                        if (esi != 0)
                            sub_5f09a0(arg3, *(arg6[1] + 8))
                        else
                            sub_5f0a30(arg3)
                    case 0xb5
                        sub_677bb0(0)
                    case 0xb6
                        std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getmfld(
                            arg3, 0, 0)
                    case 0xb7
                        std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getmfld(
                            arg3, 1, 1)
                    case 0xba
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x294))
                        else if (esi == 1)
                            *(arg3 + 0x294) = *(arg6[1] + 8)
                    case 0xbb
                        if (esi == 0)
                            sub_677bb0(*(arg3 + 0x298))
                        else if (esi == 1)
                            *(arg3 + 0x298) = *(arg6[1] + 8)
        
        i_2.b = 1
    else
        void* ecx_1 = *(arg3 + 0x9c)
        
        if (*(ecx_1 + 0x80) != 0x51f)
            i_2.b = 1
        else
            i_2 = sub_553f50(var_3e4 + 4, arg2, ecx_1 - 4, var_3e4 + 4, arg5, arg6)
else
    arg6[5] = arg3
    i_2.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_3f8)
return i_2
