// 函数: sub_652fa0
// 地址: 0x652fa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4248
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t* ebx
int32_t* var_138 = ebx
int32_t var_144 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lpFileName_1
sub_652090(&lpFileName_1)
int32_t var_8_1 = 0
int32_t* lpFileName = &lpFileName_1
int32_t var_e0

if (var_e0 u>= 8)
    lpFileName = lpFileName_1

uint32_t result = GetFileAttributesW(lpFileName)

if (result == 0xffffffff || (result.b & 0x10) != 0)
    ebx.b = 1
else
    int32_t* var_134 = nullptr
    int32_t var_130_1 = 0
    int32_t var_12c_1 = 0
    var_8_1.b = 1
    int32_t var_128
    int32_t var_74
    int32_t var_60
    int16_t var_44
    
    if (sub_6b80e0(&lpFileName_1, &var_134) != 0)
        int32_t esi_2 = var_130_1
        ebx = var_134
        int32_t i_1 = (esi_2 - ebx) s/ 0x18
        int16_t var_5c
        
        if (i_1 s> 0)
            int32_t i
            
            do
                int32_t var_48_1 = 7
                void* const var_148_7 = 0xffffffff
                int32_t var_14c_3 = 0
                int32_t var_4c_1 = 0
                var_5c = 0
                sub_52e3c0(&var_5c, ebx, var_14c_3, var_148_7)
                var_8_1.b = 4
                void* const var_148_8 = 3
                int32_t var_b0_1 = 7
                int32_t* var_14c_4 = &data_aee7a0
                int32_t var_b4_1 = 0
                int16_t var_c4 = 0
                sub_52e720(&var_c4, var_14c_4, var_148_8)
                int16_t* ecx_11 = &var_5c
                
                if (var_48_1 u>= 8)
                    ecx_11 = var_5c.d
                
                int32_t var_60_1 = 7
                int32_t var_64_1 = 0
                int16_t* ecx_12 = &var_5c
                
                if (var_48_1 u>= 8)
                    ecx_12 = var_5c.d
                
                var_74.w = 0
                var_8_1.b = 6
                void* var_148_9 = 0xffffffff
                void* var_78_1 = &ecx_11[var_4c_1]
                int32_t var_14c_5 = 0
                int16_t* var_7c = ecx_12
                sub_52e3c0(&var_74, &var_c4, var_14c_5, var_148_9)
                var_8_1.b = 8
                
                if (var_b0_1 u>= 8)
                    j__free(var_c4.d)
                
                int32_t var_b0_2 = 7
                int32_t var_b4_2 = 0
                var_c4 = 0
                int16_t* var_160 = &data_af77d0
                void var_15c
                sub_52e820(&var_15c, var_160)
                var_160 = &var_7c
                
                if (sub_6afb70(var_160, var_15c) == 0)
                    int32_t var_24
                    int32_t* var_148_11 = &var_24
                    sub_52e820(&var_160, u"#D3D.ADAPTER_NO = %d")
                    
                    if (sub_6afb70(&var_7c, var_160) == 0)
                        int32_t* var_148_12 = &var_24
                        sub_52e820(&var_160, u"#D3D.HARDWARE_VERTEX = %d")
                        
                        if (sub_6afb70(&var_7c) == 0)
                            int32_t* var_148_13 = &var_24
                            sub_52e820(&var_160, u"#D3D.PRESENT_INTERVAL = %d")
                            
                            if (sub_6afb70(&var_7c) == 0)
                                int32_t* var_148_14 = &var_24
                                sub_52e820(&var_160, u"#D3D.USE_MIPMAP = %d")
                                
                                if (sub_6afb70(&var_7c) == 0)
                                    int32_t* var_148_15 = &var_24
                                    sub_52e820(&var_160, u"#D3D.WIPE_BUFFER_COUNT = %d")
                                    
                                    if (sub_6afb70(&var_7c) == 0)
                                        int32_t* var_148_16 = &var_24
                                        sub_52e820(&var_160, u"#DS.PLAY_SILENT_SOUND = %d")
                                        
                                        if (sub_6afb70(&var_7c) == 0)
                                            int32_t* var_148_17 = &var_24
                                            sub_52e820(&var_160, u"#MOVIE_TYPE = %d")
                                            
                                            if (sub_6afb70(&var_7c) != 0)
                                                int32_t ecx_28 = var_24
                                                
                                                if (ecx_28 s< 0)
                                                    ecx_28 = 0
                                                else if (ecx_28 s> 1)
                                                    ecx_28 = 1
                                                
                                                *(data_bac434 + 0x10) = ecx_28
                                        else
                                            *(data_bac434 + 0xe) = var_24 != 0
                                    else
                                        int32_t ecx_24 = var_24
                                        
                                        if (ecx_24 s>= 1)
                                            if (ecx_24 s> 2)
                                                ecx_24 = 2
                                            
                                            *(data_bac434 + 8) = ecx_24
                                        else
                                            *(data_bac434 + 8) = 1
                                else
                                    *(data_bac434 + 0xd) = var_24 != 0
                            else
                                int32_t ecx_20 = var_24
                                
                                if (ecx_20 s>= 0)
                                    if (ecx_20 s> 1)
                                        ecx_20 = 1
                                    
                                    *(data_bac434 + 4) = ecx_20
                                else
                                    *(data_bac434 + 4) = 0
                        else
                            *(data_bac434 + 0xc) = var_24 != 0
                    else
                        *data_bac434 = var_24
                
                if (var_60_1 u>= 8)
                    j__free(var_74)
                
                var_8_1.b = 1
                var_60 = 7
                int32_t var_64_2 = 0
                var_74.w = 0
                
                if (var_48_1 u>= 8)
                    j__free(var_5c.d)
                
                ebx = &ebx[6]
                i = i_1
                i_1 -= 1
            while (i != 1)
            ebx = var_134
            esi_2 = var_130_1
        
        void* var_148_20 = 0x12
        int32_t var_48_2 = 7
        void* const var_14c_6 = &data_af7930
        int32_t var_4c_2 = 0
        var_5c = 0
        sub_52e720(&var_5c, var_14c_6, var_148_20)
        var_8_1.b = 9
        int32_t ecx_31 = sub_684160(data_bac424, 5, &var_5c)
        var_8_1.b = 1
        
        if (var_48_2 u>= 8)
            ecx_31 = j__free(var_5c.d)
        
        int32_t var_48_3 = 7
        var_5c = 0
        result = data_bac434
        int32_t var_4c_3 = 0
        
        if (*result != 0)
            int32_t var_148_23 = ecx_31
            int16_t* eax_26 = sub_6ad9b0(&var_74)
            var_8_1.b = 0xa
            int16_t var_124
            int16_t* eax_27 = sub_548cb0(eax_26, 0xaf7968, &var_124, eax_26)
            var_8_1.b = 0xb
            int16_t var_10c
            int16_t* eax_28 = sub_532b80(eax_27, eax_27, &var_10c, &data_af7958)
            var_8_1.b = 0xc
            ecx_31 = sub_684160(data_bac424, 5, eax_28)
            int32_t var_f8
            
            if (var_f8 u>= 8)
                ecx_31 = j__free(var_10c.d)
            
            int32_t var_f8_1 = 7
            int32_t var_fc_1 = 0
            var_10c = 0
            int32_t var_110
            
            if (var_110 u>= 8)
                ecx_31 = j__free(var_124.d)
            
            var_8_1.b = 1
            int32_t var_110_1 = 7
            int32_t var_114_1 = 0
            var_124 = 0
            
            if (var_60 u>= 8)
                ecx_31 = j__free(var_74)
            
            int32_t var_60_2 = 7
            var_74.w = 0
            result = data_bac434
            int32_t var_64_3 = 0
        
        if (*(result + 0xc) == 0)
            void* var_148_30 = 0x13
            int32_t var_18_1 = 7
            void* const var_14c_9 = &data_af7984
            int32_t var_1c_1 = 0
            int16_t var_2c = 0
            sub_52e720(&var_2c, var_14c_9, var_148_30)
            var_8_1.b = 0xd
            ecx_31 = sub_684160(data_bac424, 5, &var_2c)
            var_8_1.b = 1
            
            if (var_18_1 u>= 8)
                ecx_31 = j__free(var_2c.d)
            
            int32_t var_18_2 = 7
            var_2c = 0
            result = data_bac434
            int32_t var_1c_2 = 0
        
        if (*(result + 4) == 0)
            void* var_148_33 = 0x13
            int32_t var_98_1 = 7
            void* const var_14c_11 = &data_af79ac
            int32_t var_9c_1 = 0
            int16_t var_ac = 0
            sub_52e720(&var_ac, var_14c_11, var_148_33)
            var_8_1.b = 0xe
            ecx_31 = sub_684160(data_bac424, 5, &var_ac)
            var_8_1.b = 1
            
            if (var_98_1 u>= 8)
                ecx_31 = j__free(var_ac.d)
            
            int32_t var_98_2 = 7
            var_ac = 0
            result = data_bac434
            int32_t var_9c_2 = 0
        
        if (*(result + 0xd) == 0)
            void* var_148_36 = 0xf
            int32_t var_80_1 = 7
            void* const var_14c_13 = &data_af79d4
            int32_t var_84_1 = 0
            int16_t var_94 = 0
            sub_52e720(&var_94, var_14c_13, var_148_36)
            var_8_1.b = 0xf
            ecx_31 = sub_684160(data_bac424, 5, &var_94)
            var_8_1.b = 1
            
            if (var_80_1 u>= 8)
                ecx_31 = j__free(var_94.d)
            
            int32_t var_80_2 = 7
            var_94 = 0
            result = data_bac434
            int32_t var_84_2 = 0
        
        if (*(result + 8) == 1)
            void* var_148_39 = 0x13
            int32_t var_c8_1 = 7
            void* const var_14c_15 = &data_af79f4
            int32_t var_cc_1 = 0
            int16_t var_dc = 0
            sub_52e720(&var_dc, var_14c_15, var_148_39)
            var_8_1.b = 0x10
            ecx_31 = sub_684160(data_bac424, 5, &var_dc)
            var_8_1.b = 1
            
            if (var_c8_1 u>= 8)
                ecx_31 = j__free(var_dc.d)
            
            int32_t var_c8_2 = 7
            var_dc = 0
            result = data_bac434
            int32_t var_cc_2 = 0
        
        if (*(result + 0xe) != 0)
            void* var_148_42 = 0x16
            int32_t var_30_2 = 7
            void* const var_14c_17 = &data_af7a1c
            int32_t var_34_2 = 0
            var_44 = 0
            sub_52e720(&var_44, var_14c_17, var_148_42)
            var_8_1.b = 0x11
            ecx_31 = sub_684160(data_bac424, 5, &var_44)
            var_8_1.b = 1
            
            if (var_30_2 u>= 8)
                ecx_31 = j__free(var_44.d)
            
            int32_t var_30_3 = 7
            var_44 = 0
            result = data_bac434
            int32_t var_34_3 = 0
        
        if (*(result + 0x10) == 0)
            void* var_148_45 = 0x12
            int32_t var_30_4 = 7
            wchar16 const* const var_14c_19 = u"- MCI"
            int32_t var_34_4 = 0
            var_44 = 0
            sub_52e720(&var_44, var_14c_19, var_148_45)
            var_8_1.b = 0x12
            result, ecx_31 = sub_684160(data_bac424, 5, &var_44)
            
            if (var_30_4 u>= 8)
                result, ecx_31 = j__free(var_44.d)
        
        if (ebx != 0)
            int32_t var_148_48 = var_128
            int32_t var_14c_21 = ecx_31
            sub_55d500(ebx, esi_2)
            j__free(ebx)
        
        ebx.b = 1
    else
        int16_t* eax_4 = sub_6b9ed0(&var_74)
        var_8_1.b = 2
        int16_t* eax_5 = sub_548cb0(eax_4, 0xaf77a0, &var_44, eax_4)
        var_8_1.b = 3
        int32_t ecx_5 = sub_684160(data_bac424, 2, eax_5)
        int32_t var_30
        
        if (var_30 u>= 8)
            ecx_5 = j__free(var_44.d)
        
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (var_60 u>= 8)
            result, ecx_5 = j__free(var_74)
        
        int32_t* esi_1 = var_134
        
        if (esi_1 != 0)
            int32_t var_148_6 = var_128
            int32_t var_14c_2 = ecx_5
            sub_55d500(esi_1, var_130_1)
            j__free(esi_1)
        
        ebx.b = 0

if (var_e0 u>= 8)
    j__free(lpFileName_1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
