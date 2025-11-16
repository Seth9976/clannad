// 函数: sub_654500
// 地址: 0x654500
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c454f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx = __chkstk(0x1304)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t entry_ebx
int32_t var_14_1 = entry_ebx
int32_t edi
int32_t var_1c = edi
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_bac504
void* result

if (*(esi + 0x98) == *(esi + 0x9c) || ecx s< 0)
    result.b = 0
else
    result = data_bac510
    
    if (*(result + 0x10b90) + *(result + 0x10b8c) + *(result + 0x10b88) s<= ecx)
        result.b = 0
    else
        sub_6a4eb0(esi + 0x4b068, ecx)
        sub_65a1d0(data_bac504)
        int128_t var_12dc = zx.o(0)
        int32_t var_8_1 = 0
        void* edx_1 = data_bac504
        int32_t eax_3 = *(edx_1 + 0x18)
        int64_t var_30 = *(edx_1 + 0x10)
        int32_t var_28_1 = eax_3
        eax_3.w = *(edx_1 + 0x1c)
        int32_t var_24_1
        var_24_1.w = eax_3.w
        sub_5d5030(&var_12dc, var_30, var_28_1, var_24_1.w)
        sub_5b0590(&var_12dc, data_bac504 + 0x20)
        sub_5b0590(&var_12dc, data_bac504 + 0x38)
        sub_5b0590(&var_12dc, data_bac504 + 0x50)
        sub_5b0590(&var_12dc, data_bac504 + 0x68)
        sub_5b0590(&var_12dc, data_bac504 + 0x80)
        void* eax_14 = data_bac504
        int32_t esi_2 = *(eax_14 + 0x9c) - *(eax_14 + 0x98)
        sub_5979b0(&var_12dc, var_12dc:0xc.d + 4)
        int32_t ecx_13 = var_12dc.d
        void* edx_2 = data_bac504
        
        if (ecx_13 == var_12dc:4.d)
            ecx_13 = 0
        
        int32_t* eax_17 = var_12dc:0xc.d
        *(eax_17 + ecx_13) = esi_2
        int32_t* ecx_14 = *(edx_2 + 0x98)
        var_12dc:0xc.d = &eax_17[1]
        
        if (ecx_14 == *(edx_2 + 0x9c))
            ecx_14 = nullptr
        
        sub_5b2670(&var_12dc, ecx_14, *(edx_2 + 0x9c) - *(edx_2 + 0x98))
        void* eax_21 = data_bac504
        int32_t esi_4 = *(eax_21 + 0xac) - *(eax_21 + 0xa8)
        sub_5979b0(&var_12dc, var_12dc:0xc.d + 4)
        int32_t ecx_17 = var_12dc.d
        void* edx_3 = data_bac504
        
        if (ecx_17 == var_12dc:4.d)
            ecx_17 = 0
        
        int32_t* eax_24 = var_12dc:0xc.d
        *(eax_24 + ecx_17) = esi_4
        int32_t* ecx_18 = *(edx_3 + 0xa8)
        var_12dc:0xc.d = &eax_24[1]
        
        if (ecx_18 == *(edx_3 + 0xac))
            ecx_18 = nullptr
        
        sub_5b2670(&var_12dc, ecx_18, *(edx_3 + 0xac) - *(edx_3 + 0xa8))
        int32_t esi_5 = *(data_bac504 + 0xcc)
        sub_5979b0(&var_12dc, var_12dc:0xc.d + 4)
        int32_t edi_1 = var_12dc.d
        int32_t eax_31 = edi_1
        
        if (edi_1 == var_12dc:4.d)
            eax_31 = 0
        
        int32_t* ecx_21 = var_12dc:0xc.d
        *(ecx_21 + eax_31) = esi_5
        void* ecx_22 = &ecx_21[1]
        void* eax_32 = data_bac504
        var_12dc:0xc.d = ecx_22
        void* i = **(eax_32 + 0xc8)
        void* i_1 = i
        int64_t var_12f4
        
        if (i != *(eax_32 + 0xc8))
            do
                int64_t* eax_33 = *(i + 0x20)
                int32_t edi_2 = eax_33[1].d
                entry_ebx.w = *(eax_33 + 0xc)
                var_12f4 = *eax_33
                sub_5979b0(&var_12dc, ecx_22 + 0xe)
                int32_t eax_35 = var_12dc.d
                
                if (eax_35 == var_12dc:4.d)
                    eax_35 = 0
                
                int64_t* ecx_24 = var_12dc:0xc.d
                *(ecx_24 + eax_35) = var_12f4
                *(ecx_24 + eax_35 + 8) = edi_2
                *(ecx_24 + eax_35 + 0xc) = entry_ebx.w
                var_12dc:0xc.d = ecx_24 + 0xe
                sub_5b0590(&var_12dc, *(i + 0x20) + 0x10)
                sub_5b0590(&var_12dc, *(i + 0x20) + 0x28)
                sub_5b0590(&var_12dc, *(i + 0x20) + 0x40)
                sub_5b0590(&var_12dc, *(i + 0x20) + 0x58)
                sub_5b0590(&var_12dc, *(i + 0x20) + 0x70)
                void* eax_46 = *(i + 0x20)
                int32_t edi_4 = *(eax_46 + 0x8c) - *(eax_46 + 0x88)
                sub_5979b0(&var_12dc, var_12dc:0xc.d + 4)
                int32_t eax_49 = var_12dc.d
                int32_t* ebx = var_12dc:0xc.d
                
                if (eax_49 == var_12dc:4.d)
                    eax_49 = 0
                
                *(ebx + eax_49) = edi_4
                void* ebx_1 = &ebx[1]
                void* eax_50 = *(i + 0x20)
                var_12dc:0xc.d = ebx_1
                int32_t ecx_32 = *(eax_50 + 0x88)
                
                if (ecx_32 == *(eax_50 + 0x8c))
                    ecx_32 = 0
                
                int32_t edi_6 = *(eax_50 + 0x8c) - *(eax_50 + 0x88)
                
                if (edi_6 s> 0)
                    sub_5979b0(&var_12dc, ebx_1 + edi_6)
                    void* const eax_52 = var_12dc.d
                    void* ebx_2 = var_12dc:0xc.d
                    int32_t var_24_20 = edi_6
                    int32_t var_28_4 = ecx_32
                    
                    if (eax_52 == var_12dc:4.d)
                        eax_52 = nullptr
                    
                    var_30:4.d = eax_52 + ebx_2
                    sub_748840()
                    ebx_1 = ebx_2 + edi_6
                    var_12dc:0xc.d = ebx_1
                
                void* eax_54 = *(i + 0x20)
                int32_t edi_8 = *(eax_54 + 0x9c) - *(eax_54 + 0x98)
                sub_5979b0(&var_12dc, ebx_1 + 4)
                int32_t* ecx_35 = var_12dc.d
                int32_t* eax_56 = ecx_35
                int32_t ebx_3 = var_12dc:0xc.d
                
                if (ecx_35 == var_12dc:4.d)
                    eax_56 = nullptr
                
                *(eax_56 + ebx_3) = edi_8
                void* eax_57 = *(i + 0x20)
                var_12dc:0xc.d = ebx_3 + 4
                int32_t ecx_36 = *(eax_57 + 0x98)
                
                if (ecx_36 == *(eax_57 + 0x9c))
                    ecx_36 = 0
                
                int32_t esi_8 = *(eax_57 + 0x9c) - *(eax_57 + 0x98)
                
                if (esi_8 s<= 0)
                    edi_1 = var_12dc.d
                else
                    sub_5979b0(&var_12dc, ebx_3 + 4 + esi_8)
                    edi_1 = var_12dc.d
                    int32_t eax_59 = edi_1
                    int32_t ebx_4 = var_12dc:0xc.d
                    int32_t var_24_23 = esi_8
                    int32_t var_28_5 = ecx_36
                    
                    if (edi_1 == var_12dc:4.d)
                        eax_59 = 0
                    
                    var_30:4.d = eax_59 + ebx_4
                    sub_748840()
                    var_12dc:0xc.d = ebx_4 + esi_8
                
                sub_563d80(&i_1)
                i = i_1
                ecx_22 = var_12dc:0xc.d
            while (i != *(data_bac504 + 0xc8))
        
        void* result_1
        sub_597840(&result_1, &var_12dc)
        var_8_1.b = 1
        sub_6522e0(&result_1)
        SYSTEMTIME systemTime
        GetLocalTime(&systemTime)
        int32_t var_24_26 = 0x1228
        int32_t var_28_6 = 0
        int32_t var_12c8
        var_30:4.d = &var_12c8
        _memset()
        uint32_t wYear = zx.d(systemTime.wYear)
        uint32_t wMonth = zx.d(systemTime.wMonth)
        uint32_t wDay = zx.d(systemTime.wDay)
        uint32_t wDayOfWeek = zx.d(systemTime.wDayOfWeek)
        uint32_t wHour = zx.d(systemTime.wHour)
        uint32_t wMinute = zx.d(systemTime.wMinute)
        uint32_t wSecond = zx.d(systemTime.wSecond)
        int32_t var_24_27 = 0x200
        uint32_t wMilliseconds = zx.d(systemTime.wMilliseconds)
        int32_t var_28_7 = 0
        void var_12a4
        var_30:4.d = &var_12a4
        int32_t var_12cc = 1
        var_12c8 = 0
        _memset()
        void** eax_71 = data_bac504 + 0x20
        
        if (eax_71[5] u>= 8)
            eax_71 = *eax_71
        
        var_30:4.d = 0x100
        var_30.d = &var_12a4
        _wcsncpy_s(var_30, eax_71, 0xff)
        char var_10a4[0x200]
        _memset(&var_10a4, 0, 0x200)
        void** eax_73 = data_bac504 + 0x38
        
        if (eax_73[5] u>= 8)
            eax_73 = *eax_73
        
        var_30:4.d = 0x100
        var_30.d = &var_10a4
        _wcsncpy_s(var_30, eax_73, 0xff)
        char var_ea4[0x200]
        _memset(&var_ea4, 0, 0x200)
        void** eax_75 = data_bac504 + 0x50
        
        if (eax_75[5] u>= 8)
            eax_75 = *eax_75
        
        var_30:4.d = 0x100
        var_30.d = &var_ea4
        _wcsncpy_s(var_30, eax_75, 0xff)
        char var_ca4[0x200]
        _memset(&var_ca4, 0, 0x200)
        void** eax_77 = data_bac504 + 0x68
        
        if (eax_77[5] u>= 8)
            eax_77 = *eax_77
        
        var_30:4.d = 0x100
        var_30.d = &var_ca4
        _wcsncpy_s(var_30, eax_77, 0xff)
        char var_aa4[0x200]
        _memset(&var_aa4, 0, 0x200)
        void** eax_79 = data_bac504 + 0x80
        
        if (eax_79[5] u>= 8)
            eax_79 = *eax_79
        
        var_30:4.d = 0x100
        var_30.d = &var_aa4
        _wcsncpy_s(var_30, eax_79, 0xff)
        char var_8a4[0x200]
        _memset(&var_8a4, 0, 0x200)
        int32_t var_24_33 = 0x200
        int32_t var_28_13 = 0
        void var_6a4
        var_30:4.d = &var_6a4
        _memset()
        int32_t var_24_34 = 0x400
        int32_t var_28_14 = 0
        void var_4a4
        var_30:4.d = &var_4a4
        _memset()
        void* result_2 = result_1
        var_12f4.d = 0
        int32_t* var_130c
        void* var_a4_1 = var_130c - result_2
        var_12f4:4.d = 0
        int32_t var_12ec_3 = 0
        var_8_1.b = 2
        var_30:4.d = &var_12cc
        var_30.d = 0
        void var_a0
        sub_656990(&var_12f4, var_30, &var_a0, ecx)
        var_30:4.d = result_2
        var_30.d = var_12f4:4.d
        sub_656ab0(&var_12f4, var_30, var_130c, ecx)
        int16_t var_9c
        sub_651e40(&var_9c, ecx)
        var_8_1.b = 3
        int32_t var_44
        sub_6b3e90(&var_44, &var_9c)
        var_8_1.b = 4
        var_8_1.b = 3
        result_2.b = sub_6b4260(&var_44)
        
        if (var_30.d u>= 8)
            j__free(var_44)
        
        int32_t var_18
        int16_t* eax_84
        
        if (result_2.b != 0)
            if (sub_6520c0(&var_9c, &var_12f4) == 0)
                void** eax_86 = sub_6b9ed0(&var_44)
                var_8_1.b = 7
                eax_84 = sub_548cb0(eax_86, 0xaf7bf0, &var_30:4, eax_86)
                var_8_1.b = 8
                goto label_654d0b
            
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            var_30:4.w = 0
            sub_52e720(&var_30:4, &data_af7c18, 0xe)
            var_8_1.b = 9
            sub_684160(data_bac424, 5, &var_30:4)
            var_8_1.b = 3
            
            if (var_18_1 u>= 8)
                j__free(var_30:4.d)
            
            var_18 = 7
            var_30:4.w = 0
            var_1c = 0
            
            if (*(data_bac510 + 0x10bc0) != 0)
                void var_84
                sub_651f20(&var_84, ecx)
                var_8_1.b = 0xa
                uint32_t eax_88 = sub_6b4360(&var_84)
                char eax_89
                
                if (eax_88 == 1)
                    sub_6b4390(&var_84)
                    eax_89 = sub_6b4cb0(&var_84)
                
                if (eax_88 != 1 || eax_89 != 0)
                    int32_t* eax_93 = data_bac454 + 0x1c00
                    
                    if (*eax_93 != 0)
                        int32_t* var_12fc
                        int32_t ecx_65 = sub_54d950(&var_12fc, eax_93)
                        int32_t* esi_11 = var_12fc
                        var_20 = 0
                        var_1c = 0
                        var_18 = 0
                        result_2 = esi_11[1]
                        i_1 = esi_11[2]
                        var_8_1.b = 0xf
                        int32_t var_24_53 = 0
                        int32_t var_28_25 = ecx_65
                        void var_1304
                        var_30:4.d = &var_1304
                        var_30.d = ecx_65
                        void var_6c
                        int16_t* eax_102
                        
                        if (*(data_bac510 + 0x10bc4) != 1)
                            if (sub_6f3b20(esi_11) != 0)
                                char eax_108
                                int32_t ecx_85
                                eax_108, ecx_85 =
                                    sub_6290a0(&var_1304, result_2, &var_20, i_1, &var_1304)
                                
                                if (eax_108 != 0)
                                    int32_t var_24_63 = ecx_85
                                    
                                    if (sub_6f3c40(esi_11) == 0)
                                        void** eax_110 = sub_6b9ed0(&var_44)
                                        var_8_1.b = 0x19
                                        eax_102 = sub_548cb0(eax_110, 0xaf7d28, &var_6c, eax_110)
                                        var_8_1.b = 0x1a
                                        goto label_655063
                                    
                                    if (sub_6520c0(&var_84, &var_20) != 0)
                                        goto label_65513d
                                    
                                    void** eax_113 = sub_6b9ed0(&var_44)
                                    var_8_1.b = 0x1b
                                    eax_102 = sub_548cb0(eax_113, 0xaf7cf0, &var_6c, eax_113)
                                    var_8_1.b = 0x1c
                                    goto label_655063
                                
                                result_2.b = 0
                            else
                                void** eax_106 = sub_6b9ed0(&var_44)
                                var_8_1.b = 0x17
                                eax_102 = sub_548cb0(eax_106, 0xaf7cbc, &var_6c, eax_106)
                                var_8_1.b = 0x18
                            label_655063:
                                sub_684160(data_bac424, 2, eax_102)
                                sub_52e8a0(&var_6c)
                                sub_52e8a0(&var_44)
                                result_2.b = 0
                        else if (sub_6f3b20(esi_11) != 0)
                            var_30.d = 7
                            int32_t var_34_6 = 0
                            var_44.w = 0
                            sub_52e720(&var_44, &data_af3974, 3)
                            var_8_1.b = 0x12
                            sub_6b3f90(&var_84, &var_44)
                            var_8_1.b = 0xf
                            sub_52e8a0(&var_44)
                            int32_t var_24_57 = 0
                            void* var_28_28 = &var_1304
                            var_30:4.d = i_1
                            char eax_100
                            int32_t ecx_76
                            eax_100, ecx_76 = sub_6291d0(&var_1304, result_2, &var_84)
                            
                            if (eax_100 == 0)
                                int16_t* eax_101 = sub_6b9ed0(&var_44)
                                var_8_1.b = 0x13
                                eax_102 = sub_548cb0(eax_101, 0xaf7cf0, &var_6c, eax_101)
                                var_8_1.b = 0x14
                                goto label_655063
                            
                            int32_t var_24_59 = ecx_76
                            
                            if (sub_6f3c40(esi_11) == 0)
                                void** eax_104 = sub_6b9ed0(&var_44)
                                var_8_1.b = 0x15
                                eax_102 = sub_548cb0(eax_104, 0xaf7d28, &var_6c, eax_104)
                                var_8_1.b = 0x16
                                goto label_655063
                            
                        label_65513d:
                            var_30.d = 7
                            int32_t var_34_7 = 0
                            var_44.w = 0
                            sub_52e720(&var_44, &data_af7d60, 0x10)
                            var_8_1.b = 0x1d
                            sub_684160(data_bac424, 5, &var_44)
                            sub_52e8a0(&var_44)
                            result_2.b = 1
                        else
                            int16_t* eax_97 = sub_6b9ed0(&var_6c)
                            var_8_1.b = 0x10
                            int16_t* eax_98 = sub_548cb0(eax_97, 0xaf7cbc, &var_44, eax_97)
                            var_8_1.b = 0x11
                            sub_684160(data_bac424, 2, eax_98)
                            sub_52e8a0(&var_44)
                            sub_52e8a0(&var_6c)
                            result_2.b = 0
                        sub_538150(&var_20)
                        var_8_1.b = 0xa
                        sub_54b010(&var_12fc)
                    else
                        var_18 = 7
                        var_1c = 0
                        var_30:4.w = 0
                        sub_52e720(&var_30:4, &data_af7c94, 0x12)
                        var_8_1.b = 0xd
                        sub_684160(data_bac424, 3, &var_30:4)
                        sub_52e8a0(&var_30:4)
                        result_2.b = 0
                else
                    int16_t* eax_90 = sub_6b9ed0(&var_30:4)
                    var_8_1.b = 0xb
                    int16_t* eax_91 = sub_548cb0(eax_90, 0xaf7c38, &var_44, eax_90)
                    var_8_1.b = 0xc
                    sub_684160(data_bac424, 2, eax_91)
                    sub_52e8a0(&var_44)
                    sub_52e8a0(&var_30:4)
                    result_2.b = 0
                
                sub_52e8a0(&var_84)
            else
                result_2.b = 1
        else
            int16_t* eax_83 = sub_6b9ed0(&var_44)
            var_8_1.b = 5
            eax_84 = sub_548cb0(eax_83, 0xaf7744, &var_30:4, eax_83)
            var_8_1.b = 6
        label_654d0b:
            sub_684160(data_bac424, 2, eax_84)
            
            if (arg1 u>= 8)
                j__free(var_30:4.d)
            
            var_18 = 7
            var_30:4.w = 0
            var_1c = 0
            
            if (var_30.d u>= 8)
                j__free(var_44)
            
            result_2.b = 0
        int32_t var_88
        
        if (var_88 u>= 8)
            j__free(var_9c.d)
        
        int32_t var_88_1 = 7
        var_9c = 0
        int32_t eax_111 = var_12f4.d
        int32_t var_8c_1 = 0
        
        if (eax_111 != 0)
            j__free(eax_111)
        
        result = result_1
        
        if (result != 0)
            j__free(result)
        
        if (edi_1 != 0)
            j__free(edi_1)
        
        result.b = result_2.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(var_14_1 ^ &__saved_ebp)
return result
