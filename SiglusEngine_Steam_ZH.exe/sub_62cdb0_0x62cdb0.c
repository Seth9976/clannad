// 函数: sub_62cdb0
// 地址: 0x62cdb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c0c17
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7ec = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result
int32_t var_44
int32_t var_30
int16_t var_2c

if (sub_6f13a0() != 0)
    void* var_7f0_4 = 0x12
    int32_t var_18_2 = 7
    wchar16 const* const var_7f4_1 = u"Direct3D"
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_52e720(&var_2c, var_7f4_1, var_7f0_4)
    int32_t var_8_2 = 2
    sub_684160(data_bac424, 5, &var_2c)
    int32_t var_8_3 = 0xffffffff
    
    if (var_18_2 u>= 8)
        j__free(var_2c.d)
    
    int32_t* eax_6 = data_4ebee38
    int32_t eax_7 = (*(*eax_6 + 0x10))(eax_6)
    int32_t var_48_1 = 7
    void* var_7f0_8 = 0x1c
    wchar16 const* const var_7f4_3 = u"Direct3D"
    int32_t var_4c_1 = 0
    int16_t var_5c = 0
    sub_52e720(&var_5c, var_7f4_3, var_7f0_8)
    int32_t var_8_4 = 3
    sub_684160(data_bac424, 5, &var_5c)
    int32_t var_8_5 = 0xffffffff
    
    if (var_48_1 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_2 = 7
    int32_t ebx_1 = 0
    int32_t var_4c_2 = 0
    var_5c = 0
    int32_t var_7c4_1 = 0
    
    if (eax_7 s> 0)
        while (true)
            int32_t var_7f0_11 = 0x1ff
            char var_7a4 = 0
            char var_7a3[0x1ff]
            _memset(&var_7a3, 0, var_7f0_11)
            char var_5a4
            _memset(&var_5a4, 0, 0x24c)
            int32_t* eax_8 = data_4ebee38
            int32_t var_7f0_14 = (*(*eax_8 + 0x14))(eax_8, ebx_1, 0, &var_7a4)
            int16_t var_104
            int16_t* eax_9 = sub_6ad9b0(&var_104)
            int32_t var_8_6 = 4
            int16_t var_ec
            int16_t* eax_10 = sub_6ad9b0(&var_ec)
            var_8_6.b = 5
            int16_t var_14c
            int16_t* eax_11 = sub_6ad9b0(&var_14c)
            var_8_6.b = 6
            int16_t var_d4
            int16_t* eax_12 = sub_6ad9b0(&var_d4)
            var_8_6.b = 7
            int16_t var_bc
            int16_t* eax_13 = sub_532b80(eax_12, eax_12, &var_bc, &data_ad7d2c)
            var_8_6.b = 8
            int16_t var_a4
            int16_t* eax_14 = sub_5327a0(eax_13, eax_13, &var_a4, eax_11)
            var_8_6.b = 9
            int16_t var_17c
            int16_t* eax_15 = sub_532b80(eax_14, eax_14, &var_17c, &data_ad7d2c)
            var_8_6.b = 0xa
            int16_t var_8c
            int16_t* eax_16 = sub_5327a0(eax_15, eax_15, &var_8c, eax_10)
            var_8_6.b = 0xb
            int16_t var_11c
            int16_t* eax_17 = sub_532b80(eax_16, eax_16, &var_11c, &data_ad7d2c)
            var_8_6.b = 0xc
            int32_t* var_194
            sub_5327a0(eax_17, eax_17, &var_194, eax_9)
            int32_t var_108
            
            if (var_108 u>= 8)
                j__free(var_11c.d)
            
            var_108 = 7
            int32_t var_10c_1 = 0
            var_11c = 0
            int32_t var_78
            
            if (var_78 u>= 8)
                j__free(var_8c.d)
            
            var_78 = 7
            int32_t var_7c_1 = 0
            var_8c = 0
            int32_t var_168
            
            if (var_168 u>= 8)
                j__free(var_17c.d)
            
            var_168 = 7
            int32_t var_16c_1 = 0
            var_17c = 0
            int32_t var_90
            
            if (var_90 u>= 8)
                j__free(var_a4.d)
            
            var_90 = 7
            int32_t var_94_1 = 0
            var_a4 = 0
            int32_t var_a8
            
            if (var_a8 u>= 8)
                j__free(var_bc.d)
            
            var_a8 = 7
            int32_t var_ac_1 = 0
            var_bc = 0
            int32_t var_c0
            
            if (var_c0 u>= 8)
                j__free(var_d4.d)
            
            var_c0 = 7
            int32_t var_c4_1 = 0
            var_d4 = 0
            int32_t var_138
            
            if (var_138 u>= 8)
                j__free(var_14c.d)
            
            var_138 = 7
            int32_t var_13c_1 = 0
            var_14c = 0
            int32_t var_d8
            
            if (var_d8 u>= 8)
                j__free(var_ec.d)
            
            var_d8 = 7
            int32_t var_dc_1 = 0
            var_ec = 0
            var_8_6.b = 0x16
            int32_t var_f0
            
            if (var_f0 u>= 8)
                j__free(var_104.d)
            
            var_f0 = 7
            int32_t var_f4_1 = 0
            var_104 = 0
            int32_t var_18_3 = 0xf
            int32_t var_1c_2 = 0
            var_2c.b = 0
            char var_3a4
            void var_3a3
            void* ecx_20
            
            if (var_3a4 != 0)
                char* ecx_21 = &var_3a4
                char i
                
                do
                    i = *ecx_21
                    ecx_21 = &ecx_21[1]
                while (i != 0)
                ecx_20 = ecx_21 - &var_3a3
            else
                ecx_20 = nullptr
            
            sub_541eb0(&var_2c, &var_3a4, ecx_20)
            var_8_6.b = 0x17
            bool cond:1_1 = var_5a4 != 0
            int32_t var_60_1 = 0xf
            int32_t var_64_1 = 0
            char var_74 = 0
            void* ecx_23
            
            if (cond:1_1)
                char* ecx_24 = &var_5a4
                char i_1
                
                do
                    i_1 = *ecx_24
                    ecx_24 = &ecx_24[1]
                while (i_1 != 0)
                void var_5a3
                ecx_23 = ecx_24 - &var_5a3
            else
                ecx_23 = nullptr
            
            sub_541eb0(&var_74, &var_5a4, ecx_23)
            var_8_6.b = 0x18
            int16_t* eax_18 = sub_6af1e0(&var_44)
            var_8_6.b = 0x19
            
            if (*(eax_18 + 0x14) u>= 8)
                eax_18 = *eax_18
            
            int16_t* var_7f0_32 = eax_18
            int32_t* eax_19 = &var_194
            int32_t var_180
            
            if (var_180 u>= 8)
                eax_19 = var_194
            
            int32_t* var_7f4_10 = eax_19
            int16_t var_164
            int16_t* eax_20 = sub_6af1e0(&var_164)
            var_8_6.b = 0x1a
            
            if (*(eax_20 + 0x14) u>= 8)
                eax_20 = *eax_20
            
            int16_t* var_7f8_4 = eax_20
            int32_t var_7fc_2 = var_7c4_1
            int32_t var_800_1 = 7
            int32_t var_804_1 = 0
            int16_t var_814 = 0
            sub_52e720(&var_814, 0xaf54dc, 0x1b)
            int16_t var_134
            int16_t* eax_21 = sub_6ae4c0(&var_134, var_814)
            var_8_6.b = 0x1b
            char* ecx_30 = sub_684160(data_bac424, 5, eax_21)
            int32_t var_120
            
            if (var_120 u>= 8)
                ecx_30 = j__free(var_134.d)
            
            var_120 = 7
            int32_t var_124_1 = 0
            var_134 = 0
            int32_t var_150
            
            if (var_150 u>= 8)
                ecx_30 = j__free(var_164.d)
            
            var_150 = 7
            int32_t var_154_1 = 0
            var_164 = 0
            
            if (var_30 u>= 8)
                ecx_30 = j__free(var_44)
            
            int32_t var_30_1 = 7
            int32_t var_34_1 = 0
            var_44.w = 0
            
            if (var_60_1 u>= 0x10)
                ecx_30 = j__free(var_74.d)
            
            var_8_6.b = 0x16
            int32_t var_60_2 = 0xf
            int32_t var_64_2 = 0
            var_74 = 0
            
            if (var_18_3 u>= 0x10)
                ecx_30 = j__free(var_2c.d)
            
            int32_t* ebx_3 = data_bac4a4
            int32_t var_18_4 = 0xf
            int32_t var_1c_3 = 0
            var_2c.b = 0
            int32_t edi_2 = ebx_3[1]
            int32_t eax_22
            
            if (&var_7a4 u< edi_2)
                eax_22 = *ebx_3
                ecx_30 = &var_7a4
            
            int32_t edi_3
            
            if (&var_7a4 u>= edi_2 || eax_22 u> &var_7a4)
                if (edi_2 == ebx_3[2])
                    char* var_7f0_40 = ecx_30
                    sub_631280(ebx_3)
                
                edi_3 = ebx_3[1]
                
                if (edi_3 != 0)
                    __builtin_memcpy(edi_3, &var_7a4, 0x44c)
            else
                void* ecx_31 = &var_7a4 - eax_22
                
                if (edi_2 == ebx_3[2])
                    void* var_7f0_39 = ecx_31
                    sub_631280(ebx_3)
                
                edi_3 = ebx_3[1]
                
                if (edi_3 != 0)
                    __builtin_memcpy(edi_3, ecx_31 s/ 0x44c * 0x44c + *ebx_3, 0x44c)
            ebx_3[1] += 0x44c
            int32_t* edi_4 = nullptr
            struct _EXCEPTION_REGISTRATION_RECORD** ebx_4 = nullptr
            int32_t* var_7b4_1 = nullptr
            int32_t esi_8 = 0
            struct _EXCEPTION_REGISTRATION_RECORD** var_7b8 = nullptr
            int32_t var_7b0_1 = 0
            var_8_6.b = 0x1c
            enum ENUM_DISPLAY_SETTINGS_MODE iModeNum = 0
            DEVMODEW devMode
            int32_t var_18_6
            
            while (true)
                int32_t var_7f0_41 = 0x3e
                char var_7f4_12 = 0
                DEVMODEW devMode_1
                devMode_1.dmDeviceName[0] = 0
                var_272
                _memset(&var_272, var_7f4_12, var_7f0_41)
                var_234
                _memset(&var_234, 0, 0x9c)
                int32_t var_18_5 = 0xf
                devMode_1.dmSize = 0xdc
                int32_t var_1c_4 = 0
                var_2c.b = 0
                void* ecx_34
                
                if (var_3a4 != 0)
                    char* ecx_35 = &var_3a4
                    char i_2
                    
                    do
                        i_2 = *ecx_35
                        ecx_35 = &ecx_35[1]
                    while (i_2 != 0)
                    ecx_34 = ecx_35 - &var_3a3
                else
                    ecx_34 = nullptr
                
                sub_541eb0(&var_2c, &var_3a4, ecx_34)
                var_8_6.b = 0x1d
                int16_t* lpszDeviceName = sub_6af1e0(&var_44)
                
                if (*(lpszDeviceName + 0x14) u>= 8)
                    lpszDeviceName = *lpszDeviceName
                
                bool var_7a5_1 =
                    EnumDisplaySettingsExW(lpszDeviceName, iModeNum, &devMode_1, 0) == 0
                
                if (var_30_1 u>= 8)
                    j__free(var_44)
                
                var_8_6.b = 0x1c
                var_30_1 = 7
                int32_t var_34_2 = 0
                var_44.w = 0
                
                if (var_18_5 u>= 0x10)
                    j__free(var_2c.d)
                
                uint32_t dmPelsHeight_2
                
                if (var_7a5_1 != 0)
                    int32_t eax_39 = (edi_4 - ebx_4) s>> 3
                    sub_6332f0(eax_39, edi_4, ebx_4, eax_39, 0.d)
                    int32_t var_7f8_8 = 0.d
                    sub_630d70(&var_7b8, &dmPelsHeight_2, sub_6333e0(ebx_4, edi_4), edi_4)
                    int32_t var_7ac_1 = 0
                    int32_t var_7f0_51 = 0x3e
                    char var_7f4_18 = 0
                    devMode.dmDeviceName[0] = 0
                    var_352
                    _memset(&var_352, var_7f4_18, var_7f0_51)
                    var_314
                    _memset(&var_314, 0, 0x9c)
                    var_18_6 = 0xf
                    devMode.dmSize = 0xdc
                    int32_t var_1c_5 = 0
                    var_2c.b = 0
                    break
                
                uint32_t dmPelsWidth = devMode_1.dmPelsWidth
                uint32_t dmPelsHeight = devMode_1.dmPelsHeight
                uint32_t dmPelsWidth_1 = dmPelsWidth
                dmPelsHeight_2 = dmPelsHeight
                uint32_t dmPelsHeight_1 = dmPelsHeight
                
                if (&dmPelsWidth_1 u>= edi_4 || ebx_4 u> &dmPelsWidth_1)
                    if (edi_4 == esi_8 && (esi_8 - edi_4) s>> 3 u< 1)
                        int32_t edi_9 = (edi_4 - ebx_4) s>> 3
                        
                        if (0x1fffffff - edi_9 u< 1)
                            sub_743191("vector<T> too long")
                            noreturn
                        
                        int32_t esi_13 = (esi_8 - ebx_4) s>> 3
                        uint32_t ecx_44 = esi_13 u>> 1
                        int32_t esi_14
                        
                        if (0x1fffffff - ecx_44 u>= esi_13)
                            esi_14 = esi_13 + ecx_44
                        else
                            esi_14 = 0
                        
                        if (esi_14 u< edi_9 + 1)
                            esi_14 = edi_9 + 1
                        
                        sub_5383e0(&var_7b8, esi_14)
                        esi_8 = var_7b0_1
                        edi_4 = var_7b4_1
                        ebx_4 = var_7b8
                        dmPelsHeight = dmPelsHeight_2
                    
                    if (edi_4 != 0)
                        *edi_4 = dmPelsWidth
                        edi_4[1] = dmPelsHeight
                else
                    int32_t ecx_39 = (&dmPelsWidth_1 - ebx_4) s>> 3
                    
                    if (edi_4 == esi_8 && (esi_8 - edi_4) s>> 3 u< 1)
                        int32_t edi_6 = (edi_4 - ebx_4) s>> 3
                        
                        if (0x1fffffff - edi_6 u< 1)
                            sub_743191("vector<T> too long")
                            noreturn
                        
                        int32_t esi_10 = (esi_8 - ebx_4) s>> 3
                        uint32_t ecx_41 = esi_10 u>> 1
                        int32_t esi_11
                        
                        if (0x1fffffff - ecx_41 u>= esi_10)
                            esi_11 = esi_10 + ecx_41
                        else
                            esi_11 = 0
                        
                        if (esi_11 u< edi_6 + 1)
                            esi_11 = edi_6 + 1
                        
                        sub_5383e0(&var_7b8, esi_11)
                        esi_8 = var_7b0_1
                        edi_4 = var_7b4_1
                        ebx_4 = var_7b8
                    
                    if (edi_4 != 0)
                        *edi_4 = ebx_4[ecx_39 * 2]
                        edi_4[1] = ebx_4[ecx_39 * 2 + 1]
                        edi_4 = &edi_4[2]
                        iModeNum += 1
                        var_7b4_1 = edi_4
                        continue
                
                edi_4 = &edi_4[2]
                iModeNum += 1
                var_7b4_1 = edi_4
            
            void* ecx_49
            
            if (var_3a4 != 0)
                char* ecx_50 = &var_3a4
                char i_3
                
                do
                    i_3 = *ecx_50
                    ecx_50 = &ecx_50[1]
                while (i_3 != 0)
                ecx_49 = ecx_50 - &var_3a3
            else
                ecx_49 = nullptr
            
            sub_541eb0(&var_2c, &var_3a4, ecx_49)
            var_8_6.b = 0x1e
            int16_t* lpszDeviceName_1 = sub_6af1e0(&var_44)
            
            if (*(lpszDeviceName_1 + 0x14) u>= 8)
                lpszDeviceName_1 = *lpszDeviceName_1
            
            EnumDisplaySettingsExW(lpszDeviceName_1, ENUM_CURRENT_SETTINGS, &devMode, EDS_RAWMODE)
            
            if (var_30_1 u>= 8)
                j__free(var_44)
            
            var_8_6.b = 0x1c
            var_30 = 7
            int32_t var_34_3 = 0
            var_44.w = 0
            
            if (var_18_6 u>= 0x10)
                j__free(var_2c.d)
            
            int32_t eax_41 = 0
            struct _EXCEPTION_REGISTRATION_RECORD** edx_17 = var_7b8
            int32_t ecx_55 = (var_7b4_1 - edx_17) s>> 3
            int32_t var_18_7 = 0xf
            int32_t var_1c_6 = 0
            var_2c.b = 0
            
            if (ecx_55 s> 0)
                do
                    if (edx_17[eax_41 * 2] == devMode.dmPelsWidth
                            && edx_17[eax_41 * 2 + 1] == devMode.dmPelsHeight)
                        int32_t var_7ac_2 = eax_41
                        break
                    
                    eax_41 += 1
                while (eax_41 s< ecx_55)
            
            sub_630dd0(data_bac4a4 + 0xc, &var_7b8)
            struct _EXCEPTION_REGISTRATION_RECORD** eax_42 = var_7b8
            
            if (eax_42 != 0)
                j__free(eax_42)
                var_7b8 = nullptr
                int32_t var_7b4_2 = 0
                int32_t var_7b0_2 = 0
            
            int32_t var_8_7 = 0xffffffff
            
            if (var_180 u>= 8)
                j__free(var_194)
            
            ebx_1 = var_7c4_1 + 1
            var_7c4_1 = ebx_1
            
            if (ebx_1 s>= eax_7)
                break
    
    void* esi_16 = data_bac4a0
    void* eax_43 = data_bac4a4
    *(esi_16 + 0x5c) = 0
    *(esi_16 + 0x60) = *(*(eax_43 + 0xc) + 0xc)
    int32_t eax_46 = *(esi_16 + 0x40)
    
    if (eax_46 != 1 && eax_46 == 0)
        sub_616b90(esi_16 + 0x48)
        esi_16 = data_bac4a0
    
    int32_t eax_47
    int32_t edx_18
    edx_18:eax_47 = muls.dp.d(0x51eb851f, *(esi_16 + 0x48) * *(esi_16 + 8))
    int32_t edx_19 = edx_18 s>> 5
    *(esi_16 + 0x30) = (edx_19 u>> 0x1f) + edx_19
    int32_t eax_48
    int32_t edx_20
    edx_20:eax_48 = muls.dp.d(0x51eb851f, *(esi_16 + 0x4c) * *(esi_16 + 0xc))
    int32_t edx_21 = edx_20 s>> 5
    *(esi_16 + 0x34) = (edx_21 u>> 0x1f) + edx_21
    result.b = 1
else
    int16_t* eax_4 = sub_6b9ed0(&var_44)
    int32_t var_8_1 = 0
    int16_t* eax_5 = sub_548cb0(eax_4, u"Direct3D", &var_2c, eax_4)
    var_8_1.b = 1
    sub_684160(data_bac424, 2, eax_5)
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c = 0
    var_2c = 0
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
