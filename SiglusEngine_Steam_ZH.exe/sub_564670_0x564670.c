// 函数: sub_564670
// 地址: 0x564670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b34eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
enum MESSAGEBOX_STYLE var_46c
int32_t eax_2 = __security_cookie ^ &var_46c
int32_t __saved_edi
int32_t var_47c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** eax_5 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *arg2
int32_t* systemTime
void var_320
enum MESSAGEBOX_RESULT eax_86
void* ecx_61
void* ecx_81
int32_t ebx_4
enum MESSAGEBOX_RESULT esi_14

if (ecx u> 0x15)
    int32_t var_2d8_1 = 7
    int32_t var_2dc_1 = 0
    int16_t var_2ec = 0
    sub_52e720(&var_2ec, 0xad90d0, 0x18)
    int32_t var_c_13 = 0x25
    sub_684160(data_bac424, 2, &var_2ec)
    
    if (var_2d8_1 u>= 8)
        j__free(var_2ec.d)
else
    switch (ecx)
        case 0
            int32_t ecx_40
            ecx_40.b = *(data_bac4a0 + 0xc8) != 0
            sub_677bb0(ecx_40)
        case 1
            void var_f4
            int16_t* eax_66 = sub_532b80(eax_5, data_bac4d8 + 0x18, &var_f4, &data_ad900c)
            int32_t var_c_1 = 0
            sub_5327a0(eax_66, eax_66, &systemTime, arg3[1] + 0xc)
            var_c_1.b = 2
            sub_52e8a0(&var_f4)
            uint32_t eax_67 = sub_6b4360(&systemTime)
            
            if (eax_67 != 1)
                void var_154
                int16_t* eax_68 = sub_532b80(eax_67, arg3[1] + 0xc, &var_154, 0xad8948)
                var_c_1.b = 3
                sub_684160(data_bac424, 9, eax_68)
                sub_52e8a0(&var_154)
                sub_52e8a0(&systemTime)
            else
                sub_6b52f0(&systemTime)
                sub_52e8a0(&systemTime)
        case 2
            void* edx_21 = arg3[1]
            sub_61fac0(edx_21 + 0x2d4, *(edx_21 + 0x16c), edx_21 + 0xc, edx_21 + 0x2d4)
        case 3
            sub_536170(&var_320, arg3[1] + 0xc)
            int32_t var_c_11 = 0x23
            sub_60c170(&var_320)
            sub_52e8a0(&var_320)
        case 4
            void var_184
            int16_t* eax_128 = sub_60c480(&var_184)
            int32_t var_c_10 = 0x22
            sub_60c680(data_bac49c + 0xc, eax_128)
            sub_52e8a0(&var_184)
        case 5
            sub_536170(&systemTime, arg3[1] + 0xc)
            int32_t var_c_2 = 4
            sub_6b52f0(&systemTime)
            sub_52e8a0(&systemTime)
        case 6
            void var_124
            int16_t* eax_71 = sub_532b80(eax_5, data_bac4d8 + 0x18, &var_124, &data_ad900c)
            int32_t var_c_3 = 5
            sub_5327a0(eax_71, eax_71, &systemTime, arg3[1] + 0xc)
            ecx_61 = &var_124
        label_564c6a:
            sub_52e8a0(ecx_61)
            
            if (sub_6b4360(&systemTime) s< 0)
                sub_677bb0(0)
                sub_52e8a0(&systemTime)
            else
                sub_677bb0(1)
                sub_52e8a0(&systemTime)
        case 7, 8
            enum MESSAGEBOX_RESULT esi_18
            
            if (*data_bac4a0 != 0)
                enum MESSAGEBOX_STYLE ebx_5 = MB_OK
                esi_18 = IDOK
                int32_t ecx_83 = ecx - 7
                
                if (ecx == 7)
                    ebx_5 = MB_OK
                else
                    int32_t temp8_1 = ecx_83
                    ecx_83 -= 1
                    
                    if (temp8_1 == 1)
                        ebx_5 = MB_OKCANCEL
                
                int32_t eax_88 = *arg3
                
                if (eax_88 == 0)
                    int32_t var_480_26 = ecx_83
                    *(arg3[1] + 8)
                    int32_t var_c_7 = 9
                    void var_64
                    esi_18 = sub_60e0d0(sub_6ad9b0(&var_64), ebx_5)
                    sub_52e8a0(&var_64)
                else if (eax_88 == 1)
                    esi_18 = sub_60e0d0(arg3[1] + 0xc, ebx_5)
            
            if (*data_bac4a0 == 0 || esi_18 == IDOK || esi_18 != 2)
                sub_677bb0(0)
            else
                sub_677bb0(esi_18 - 1)
        case 9, 0xa
            ebx_4 = 0
            
            if (*data_bac4a0 != 0)
                esi_14 = IDYES
                enum MESSAGEBOX_STYLE edx_35 = MB_YESNO
                var_46c = MB_YESNO
                int32_t ecx_90 = ecx - 9
                
                if (ecx == 9)
                    var_46c = edx_35
                else
                    int32_t temp9_1 = ecx_90
                    ecx_90 -= 1
                    
                    if (temp9_1 == 1)
                        edx_35 = MB_YESNOCANCEL
                        var_46c = edx_35
                
                int32_t eax_95 = *arg3
                
                if (eax_95 != 0)
                    if (eax_95 == 1)
                        esi_14 = sub_60e0d0(arg3[1] + 0xc, edx_35)
                    
                    goto label_564e29
                
                int32_t var_480_27 = ecx_90
                *(arg3[1] + 8)
                int32_t var_c_8 = 0xa
                void var_34
                eax_86 = sub_60e0d0(sub_6ad9b0(&var_34), var_46c)
                ecx_81 = &var_34
                goto label_564e22
            
            sub_677bb0(ebx_4)
        case 0xb
            int32_t var_2f0_1 = 7
            int32_t var_2f4_1 = 0
            int16_t var_304 = 0
            int32_t var_c_9 = 0xb
            
            if (*data_bac4a0 != 0)
                systemTime = nullptr
                int64_t var_348_1 = 0
                var_c_9.b = 0xc
                var_c_9.b = 0xd
                var_c_9.b = 0xc
                void var_7c
                int32_t ebx
                ebx.b = sub_6b41e0(sub_564640(&var_7c)) == 0
                sub_52e8a0(&var_7c)
                void* ecx_101
                
                if (ebx.b == 0)
                    int32_t var_2c0_1 = 7
                    int32_t var_2c4_1 = 0
                    int16_t var_2d4 = 0
                    sub_52e720(&var_2d4, 0xad906c, 2)
                    var_c_9.b = 0x10
                    var_c_9.b = 0x11
                    void var_22c
                    ebx.b = sub_6b7a80(&systemTime, sub_564640(&var_22c), &var_2d4) == 0
                    sub_52e8a0(&var_22c)
                    var_c_9.b = 0xc
                    sub_52e8a0(&var_2d4)
                    
                    if (ebx.b == 0)
                        void var_4c
                        int16_t* eax_109 = sub_6b2fd0(&var_4c)
                        var_c_9.b = 0x14
                        void var_1cc
                        int16_t* eax_110 = sub_548cb0(eax_109, &data_ad85e8, &var_1cc, eax_109)
                        var_c_9.b = 0x15
                        void var_10c
                        int16_t* eax_111 = sub_532b80(eax_110, eax_110, &var_10c, 0xad9098)
                        var_c_9.b = 0x16
                        
                        if (&var_304 != eax_111)
                            sub_52e3c0(&var_304, eax_111, 0, 0xffffffff)
                        
                        sub_52e8a0(&var_10c)
                        sub_52e8a0(&var_1cc)
                        var_c_9.b = 0xc
                        sub_52e8a0(&var_4c)
                        void* ecx_117 = data_bac45c
                        int32_t eax_112 = *(ecx_117 + 0x64)
                        
                        if (eax_112 s>= 0)
                            var_c_9.b = 0x17
                            int32_t var_480_37 = sub_698170(ecx_117, &var_320, eax_112)
                            *(data_bac45c + 0x68)
                            void var_274
                            int16_t* eax_114 = sub_6ad9b0(&var_274)
                            var_c_9.b = 0x18
                            void var_28c
                            int16_t* eax_116 = sub_548cb0(&var_320, 0xad90b8, &var_28c, &var_320)
                            var_c_9.b = 0x19
                            void var_16c
                            int16_t* eax_117 = sub_532b80(eax_116, eax_116, &var_16c, u".ss line=")
                            var_c_9.b = 0x1a
                            void var_dc
                            int16_t* eax_118 = sub_5327a0(eax_117, eax_117, &var_dc, eax_114)
                            var_c_9.b = 0x1b
                            var_c_9.b = 0x1c
                            void var_19c
                            sub_532870(&var_304, 
                                sub_532b80(eax_118, eax_118, &var_19c, &data_ad90a0), 0, 0xffffffff)
                            sub_52e8a0(&var_19c)
                            sub_52e8a0(&var_dc)
                            sub_52e8a0(&var_16c)
                            sub_52e8a0(&var_28c)
                            sub_52e8a0(&var_274)
                            ecx_117 = sub_52e8a0(&var_320)
                        
                        int32_t var_324_1 = 7
                        int32_t var_328_1 = 0
                        int16_t var_338 = 0
                        var_c_9.b = 0x1d
                        int32_t eax_120 = *arg3
                        int32_t* eax_122
                        
                        if (eax_120 == 0)
                            void* var_480_40 = ecx_117
                            *(arg3[1] + 8)
                            void var_244
                            int16_t* eax_124 = sub_6ad9b0(&var_244)
                            var_c_9.b = 0x1e
                            
                            if (&var_338 != eax_124)
                                sub_52e3c0(&var_338, eax_124, 0, 0xffffffff)
                            
                            var_c_9.b = 0x1d
                            eax_122 = sub_52e8a0(&var_244)
                        else
                            eax_122 = eax_120 - 1
                            
                            if (eax_120 == 1)
                                eax_122 = arg3[1] + 0xc
                                
                                if (&var_338 != eax_122)
                                    eax_122 = sub_52e3c0(&var_338, eax_122, 0, 0xffffffff)
                        
                        void var_1b4
                        int16_t* eax_125 = sub_532b80(eax_122, &var_304, &var_1b4, 0xad90c4)
                        var_c_9.b = 0x1f
                        void var_1e4
                        int16_t* eax_126 = sub_5327a0(eax_125, eax_125, &var_1e4, &var_338)
                        var_c_9.b = 0x20
                        var_c_9.b = 0x21
                        void var_214
                        sub_6b7b50(&systemTime, 
                            sub_532b80(eax_126, eax_126, &var_214, &data_ad90c0))
                        sub_52e8a0(&var_214)
                        sub_52e8a0(&var_1e4)
                        var_c_9.b = 0x1d
                        sub_52e8a0(&var_1b4)
                        sub_684160(data_bac424, 5, &var_338)
                        ecx_101 = &var_338
                    else
                        void var_1fc
                        int16_t* eax_107 = sub_6b9ed0(&var_1fc)
                        var_c_9.b = 0x12
                        void var_ac
                        int16_t* eax_108 = sub_548cb0(eax_107, 0xad9074, &var_ac, eax_107)
                        var_c_9.b = 0x13
                        sub_684160(data_bac424, 2, eax_108)
                        sub_52e8a0(&var_ac)
                        ecx_101 = &var_1fc
                else
                    void var_13c
                    int16_t* eax_103 = sub_6b9ed0(&var_13c)
                    var_c_9.b = 0xe
                    void var_25c
                    int16_t* eax_104 = sub_548cb0(eax_103, 0xad9030, &var_25c, eax_103)
                    var_c_9.b = 0xf
                    sub_684160(data_bac424, 2, eax_104)
                    sub_52e8a0(&var_25c)
                    ecx_101 = &var_13c
                
                sub_52e8a0(ecx_101)
                var_c_9.b = 0xb
                sub_6b7a50(&systemTime)
            
            sub_52e8a0(&var_304)
        case 0xc
            void var_2a4
            int16_t* eax_73 = sub_532b80(eax_5, data_bac4d8 + 0x48, &var_2a4, &data_ad900c)
            int32_t var_c_4 = 6
            sub_5327a0(eax_73, eax_73, &systemTime, arg3[1] + 0xc)
            ecx_61 = &var_2a4
            goto label_564c6a
        case 0xd
            int32_t ecx_41
            ecx_41.b = *data_bac4a0 != 0
            sub_677bb0(ecx_41)
        case 0xe
            void* eax_6 = arg3[1]
            int32_t* var_458_1 = eax_6 + 0x24
            int32_t eax_8 = *(eax_6 + 0xa0)
            var_46c = eax_6 + 0x87c
            sub_54b050(&var_320)
            char var_308_1 = 1
            sub_54b210(&var_320, eax_6 + 0x24 + (eax_8 << 2) - 8, var_458_1, &var_320)
            void* var_454_1
            void* var_30c
            
            if (var_30c == 0)
                var_454_1 = nullptr
            else
                var_454_1 = var_30c - 4
            
            void* esi_2 = &(eax_6 + 0x188)[*(eax_6 + 0x204) - 2]
            void var_3a4
            sub_54b050(&var_3a4)
            char var_38c_1 = 1
            sub_54b210(&var_3a4, esi_2, eax_6 + 0x188, &var_3a4)
            void* var_440_1
            void* var_390
            
            if (var_390 == 0)
                var_440_1 = nullptr
            else
                var_440_1 = var_390 - 4
            
            void* esi_3 = &(eax_6 + 0x2ec)[*(eax_6 + 0x368) - 2]
            void var_36c
            sub_54b050(&var_36c)
            char var_354_1 = 1
            sub_54b210(&var_36c, esi_3, eax_6 + 0x2ec, &var_36c)
            void* var_448_1
            void* var_358
            
            if (var_358 == 0)
                var_448_1 = nullptr
            else
                var_448_1 = var_358 - 4
            
            void* esi_4 = &(eax_6 + 0x450)[*(eax_6 + 0x4cc)]
            void var_3dc
            sub_54b050(&var_3dc)
            char var_3c4_1 = 1
            sub_54b210(&var_3dc, esi_4 - 8, eax_6 + 0x450, &var_3dc)
            void* var_450_1
            void* var_3c8
            
            if (var_3c8 == 0)
                var_450_1 = nullptr
            else
                var_450_1 = var_3c8 - 4
            
            void* esi_5 = &(eax_6 + 0x5b4)[*(eax_6 + 0x630)]
            void var_414
            sub_54b050(&var_414)
            char var_3fc_1 = 1
            sub_54b210(&var_414, esi_5 - 8, eax_6 + 0x5b4, &var_414)
            void* var_44c_1
            void* var_400
            
            if (var_400 == 0)
                var_44c_1 = nullptr
            else
                var_44c_1 = var_400 - 4
            
            void* esi_6 = &(eax_6 + 0x718)[*(eax_6 + 0x794)]
            void var_388
            sub_54b050(&var_388)
            char var_370_1 = 1
            sub_54b210(&var_388, esi_6 - 8, eax_6 + 0x718, &var_388)
            void* var_444_1
            void* var_374
            
            if (var_374 == 0)
                var_444_1 = nullptr
            else
                var_444_1 = var_374 - 4
            
            enum MESSAGEBOX_STYLE ecx_20 = var_46c
            void* esi_7 = ecx_20 + (*(ecx_20 + 0x7c) << 2)
            void var_3c0
            sub_54b050(&var_3c0)
            char var_3a8_1 = 1
            sub_54b210(&var_3c0, esi_7 - 8, var_46c, &var_3c0)
            void* var_43c_1
            void* var_3ac
            
            if (var_3ac == 0)
                var_43c_1 = nullptr
            else
                var_43c_1 = var_3ac - 4
            
            void* esi_8 = eax_6 + 0x9e0 + (*(eax_6 + 0xa5c) << 2)
            void var_3f8
            sub_54b050(&var_3f8)
            char var_3e0_1 = 1
            sub_54b210(&var_3f8, esi_8 - 8, eax_6 + 0x9e0, &var_3f8)
            void* var_460_2
            void* var_3e4
            
            if (var_3e4 == 0)
                var_460_2 = nullptr
            else
                var_460_2 = var_3e4 - 4
            
            int32_t eax_43 = var_458_1[var_458_1[0x1f] - 1]
            int32_t eax_45 = (eax_6 + 0x188)[*(eax_6 + 0x204) - 1]
            int32_t eax_47 = (eax_6 + 0x2ec)[*(eax_6 + 0x368) - 1]
            int32_t eax_49 = (eax_6 + 0x450)[*(eax_6 + 0x4cc) - 1]
            int32_t eax_51 = (eax_6 + 0x5b4)[*(eax_6 + 0x630) - 1]
            int32_t eax_53 = (eax_6 + 0x718)[*(eax_6 + 0x794) - 1]
            enum MESSAGEBOX_STYLE ecx_30 = var_46c
            int32_t eax_55 = *(ecx_30 + (*(ecx_30 + 0x7c) << 2) - 4)
            int32_t eax_57 = *(eax_6 + 0x9e0 + (*(eax_6 + 0xa5c) << 2) - 4)
            GetLocalTime(&systemTime)
            uint32_t esi_10 = zx.d(systemTime:2.w)
            int64_t var_348
            var_46c = zx.d(var_348.w)
            sub_557630(var_454_1, eax_43, zx.d(systemTime.w))
            sub_557630(var_440_1, eax_45, esi_10)
            int16_t var_34a
            sub_557630(var_448_1, eax_47, zx.d(var_34a))
            int16_t var_34c
            sub_557630(var_450_1, eax_49, zx.d(var_34c))
            sub_557630(var_44c_1, eax_51, var_46c)
            sub_557630(var_444_1, eax_53, zx.d(var_348:2.w))
            sub_557630(var_43c_1, eax_55, zx.d(var_348:4.w))
            sub_557630(var_460_2, eax_57, zx.d(var_348:6.w))
        case 0xf
            uint32_t eax_63
            int32_t edx_9
            eax_63, edx_9 = sub_746b5d(eax_5, arg2, ecx, nullptr)
            int32_t var_41c_1 = edx_9
            sub_677bb0(eax_63)
        case 0x10
            int32_t var_2a8_1 = 7
            int32_t var_2ac_1 = 0
            int16_t var_2bc = 0
            sub_52e720(&var_2bc, 0xad90c8, 2)
            int32_t var_c_12 = 0x24
            sub_60c680(data_bac49c + 0xc, &var_2bc)
            sub_52e8a0(&var_2bc)
        case 0x11, 0x12
            enum MESSAGEBOX_STYLE ebx_3 = MB_OK
            enum MESSAGEBOX_RESULT esi_11 = IDOK
            int32_t ecx_70 = ecx - 0x11
            
            if (ecx == 0x11)
                ebx_3 = MB_OK
            else
                int32_t temp2_1 = ecx_70
                ecx_70 -= 1
                
                if (temp2_1 == 1)
                    ebx_3 = MB_OKCANCEL
            
            int32_t eax_75 = *arg3
            
            if (eax_75 == 0)
                int32_t var_480_24 = ecx_70
                *(arg3[1] + 8)
                int32_t var_c_5 = 7
                void var_c4
                esi_11 = sub_60e0d0(sub_6ad9b0(&var_c4), ebx_3)
                sub_52e8a0(&var_c4)
            else if (eax_75 == 1)
                esi_11 = sub_60e0d0(arg3[1] + 0xc, ebx_3)
            
            if (esi_11 == IDOK || esi_11 != 2)
                sub_677bb0(0)
            else
                sub_677bb0(1)
        case 0x13, 0x14
            ebx_4 = 0
            enum MESSAGEBOX_STYLE edx_27 = MB_YESNO
            var_46c = MB_YESNO
            esi_14 = IDYES
            int32_t ecx_76 = ecx - 0x13
            
            if (ecx == 0x13)
                var_46c = edx_27
            else
                int32_t temp3_1 = ecx_76
                ecx_76 -= 1
                
                if (temp3_1 == 1)
                    edx_27 = MB_YESNOCANCEL
                    var_46c = edx_27
            
            int32_t eax_81 = *arg3
            
            if (eax_81 != 0)
                if (eax_81 == 1)
                    esi_14 = sub_60e0d0(arg3[1] + 0xc, edx_27)
                
                goto label_564e29
            
            int32_t var_480_25 = ecx_76
            *(arg3[1] + 8)
            int32_t var_c_6 = 8
            void var_94
            eax_86 = sub_60e0d0(sub_6ad9b0(&var_94), var_46c)
            ecx_81 = &var_94
        label_564e22:
            esi_14 = eax_86
            sub_52e8a0(ecx_81)
        label_564e29:
            
            if (esi_14 == IDCANCEL)
                sub_677bb0(2)
            else if (esi_14 == 6)
                sub_677bb0(0)
            else if (esi_14 != 7)
                sub_677bb0(ebx_4)
            else
                sub_677bb0(1)
        case 0x15
            data_bac418[0x2e0] = 0
int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_46c)
return result
