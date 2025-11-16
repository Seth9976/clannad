// 函数: sub_680ea0
// 地址: 0x680ea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7a5c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s>= 0)
    void* esi_1 = data_bac510
    
    if (*(esi_1 + 0xb58c) s> arg2)
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        void* const var_17c_1 = 0xffffffff
        int32_t var_180_1 = 0
        int16_t var_30 = 0
        result = sub_52e3c0(&var_30, esi_1 + ((arg2 * 7 + 0x2663) << 2), var_180_1, var_17c_1)
        int32_t var_8_1 = 0
        
        if (var_20_1 != 0)
            void* i_3 = nullptr
            int16_t var_a8
            sub_60f460(&i_3, &var_30, &var_a8, &i_3)
            var_8_1.b = 1
            int32_t var_98
            int32_t var_78
            int16_t var_60
            int16_t var_48
            
            if (var_98 == 0)
                int16_t* eax_9 = sub_548cb0(&var_30, 0xaf9db8, &var_48, &var_30)
                var_8_1.b = 2
                int16_t* eax_10 = sub_532b80(eax_9, eax_9, &var_60, &data_af9d98)
                var_8_1.b = 3
                int16_t* eax_11 = sub_5327a0(eax_10, eax_10, &var_78, &var_30)
                var_8_1.b = 4
                sub_684160(data_bac424, 0xa, eax_11)
                sub_52e8a0(&var_78)
                sub_52e8a0(&var_60)
                sub_52e8a0(&var_48)
            else if (i_3 == 1)
                void* var_158 = nullptr
                int32_t var_154_1 = 0
                int32_t var_150_1 = 0
                var_8_1.b = 6
                int32_t* var_14c
                int32_t ecx_22
                void* esi_3
                int32_t edi_1
                void var_90
                
                if (sub_6c8bc0(&var_158, &var_a8) != 0)
                    edi_1 = var_154_1
                    int32_t i = 0
                    esi_3 = var_158
                    void* i_6
                    
                    if (((edi_1 - esi_3) & 0xfffffff8) s> 0)
                        do
                            int32_t ecx_24 = sub_6c86d0(&var_158, &i_6, i)
                            var_8_1.b = 0xb
                            void* i_7 = i_6
                            
                            if (i_7 != 0 && (*(i_7 + 0xc) != 0x20 || *(i_7 + 0x10) != 0x20))
                                int32_t var_17c_14 = ecx_24
                                void var_130
                                int16_t* eax_22 = sub_6ad9b0(&var_130)
                                var_8_1.b = 0xc
                                int16_t* eax_24 = sub_548cb0(&var_30, 0xaf9e18, &var_90, &var_30)
                                var_8_1.b = 0xd
                                int16_t* eax_25 = sub_532b80(eax_24, eax_24, &var_48, u" (patno = ")
                                var_8_1.b = 0xe
                                int16_t* eax_26 = sub_5327a0(eax_25, eax_25, &var_60, eax_22)
                                var_8_1.b = 0xf
                                int16_t* eax_27 = sub_532b80(eax_26, eax_26, &var_78, &data_ad90a0)
                                var_8_1.b = 0x10
                                sub_684160(data_bac424, 2, eax_27)
                                sub_52e8a0(&var_78)
                                sub_52e8a0(&var_60)
                                sub_52e8a0(&var_48)
                                sub_52e8a0(&var_90)
                                sub_52e8a0(&var_130)
                            
                            var_8_1.b = 6
                            sub_54b010(&i_6)
                            edi_1 = var_154_1
                            i += 1
                            esi_3 = var_158
                        while (i s< (edi_1 - esi_3) s>> 3)
                    
                    int32_t ebx_3 = (edi_1 - esi_3) s>> 3
                    int32_t var_138 = ebx_3
                    arg1[2] = ebx_3
                    int32_t ecx_37
                    ecx_37.b = mulu.dp.d(ebx_3, 8) u>> 0x20 != 0
                    int32_t ecx_39 = neg.d(ecx_37) | (ebx_3 * 8)
                    int32_t eax_34
                    eax_34.b = ecx_39 u>= 0xfffffffc
                    int32_t var_17c_20 = neg.d(eax_34) | (ecx_39 + 4)
                    int32_t* eax_37 = sub_7431ed()
                    var_14c = eax_37
                    var_8_1.b = 0x11
                    void* i_5
                    
                    if (eax_37 == 0)
                        i_5 = nullptr
                    else
                        BOOL (__fastcall* var_17c_21)(int32_t* arg1) = sub_680e70
                        int32_t* (__fastcall* var_180_7)(int32_t* arg1) = TI_OFF::TI_OFF
                        *eax_37 = ebx_3
                        int32_t var_188_1 = 8
                        i_3 = &eax_37[1]
                        sub_74675f(&eax_37[1], var_188_1, ebx_3, var_180_7)
                        i_5 = i_3
                    
                    var_8_1.b = 6
                    i_3.b = 0
                    void* i_4 = i_3
                    i_6 = i_5
                    int32_t* var_144
                    sub_6817a0(&var_144, i_5)
                    var_8_1.b = 0x12
                    sub_54d190(arg1, &i_6)
                    var_8_1.b = 6
                    ecx_22 = sub_54b010(&i_6)
                    void* i_1 = nullptr
                    i_3 = nullptr
                    
                    if (var_138 s> 0)
                        do
                            int32_t* var_164
                            sub_6c86d0(&var_158, &var_164, i_1)
                            var_8_1.b = 0x13
                            int32_t* ecx_45 = var_164
                            int32_t eax_39 = ecx_45[5]
                            var_14c = ecx_45[6]
                            ecx_22 = sub_6c99b0(ecx_45, &i_6)
                            
                            if (i_6 != 0)
                                int32_t var_17c_25 = ecx_22
                                void var_118
                                void* ecx_46 = &var_118
                                sub_6c8050(ecx_46)
                                int32_t var_17c_26 = 0
                                var_8_1.b = 0x15
                                sub_6c8170(ecx_46, 0x20, 0x20, &var_118, 0)
                                void* i_8 = i_6
                                int32_t* ecx_47 = &var_138
                                var_138 = 0x20
                                int32_t eax_41 = *(i_8 + 0x58)
                                int32_t var_140 = eax_41
                                int32_t eax_42 = *(i_8 + 0x5c)
                                
                                if (eax_41 s<= 0x20)
                                    ecx_47 = &var_140
                                
                                int32_t esi_5 = *ecx_47
                                int32_t* ecx_48 = &var_140
                                
                                if (eax_42 s<= 0x20)
                                    ecx_48 = &var_138
                                
                                var_138 = eax_42
                                var_140 = 0x20
                                int32_t edi_2 = 0
                                int32_t eax_43 = *ecx_48
                                var_138 = eax_43
                                char var_e4
                                int32_t var_e0
                                
                                if (eax_43 s> 0)
                                    while (true)
                                        int32_t ecx_49
                                        int32_t var_d4
                                        
                                        if (var_e4 == 0)
                                            ecx_49 = var_e0
                                            int32_t var_dc
                                            
                                            if (ecx_49 == var_dc)
                                                ecx_49 = 0
                                        else
                                            ecx_49 = var_d4
                                        int32_t esi_6
                                        
                                        if (*(i_8 + 0x34) == 0)
                                            esi_6 = *(i_8 + 0x38)
                                            
                                            if (esi_6 == *(i_8 + 0x3c))
                                                esi_6 = 0
                                        else
                                            esi_6 = *(i_8 + 0x44)
                                        
                                        int32_t var_cc
                                        sub_748840(var_cc * edi_2 + ecx_49, 
                                            *(i_8 + 0x4c) * edi_2 + esi_6, esi_5 << 2, eax_2)
                                        edi_2 += 1
                                        
                                        if (edi_2 s>= var_138)
                                            break
                                        
                                        i_8 = i_6
                                    
                                    i_1 = i_3
                                
                                int32_t edi_3 = i_1 << 3
                                *(*arg1 + edi_3 + 4) = CreateBitmap(0x20, 0x20, 1, 1, 0)
                                ICONINFO piconinfo
                                piconinfo.xHotspot = eax_39
                                piconinfo.yHotspot = var_14c
                                int32_t eax_52 = 0
                                piconinfo.fIcon = 0
                                int32_t var_d0
                                
                                if (var_e4 != 0)
                                    eax_52 = var_d0
                                piconinfo.hbmColor = eax_52
                                int32_t* esi_8 = *arg1
                                piconinfo.hbmMask = esi_8[i_1 * 2 + 1]
                                esi_8[i_1 * 2] = CreateIconIndirect(&piconinfo)
                                
                                if (*(edi_3 + *arg1) == 0)
                                    int16_t* eax_58 = sub_6b9ed0(&var_78)
                                    void* i_2 = i_1
                                    var_8_1.b = 0x16
                                    void var_198
                                    sub_52e820(&var_198, 0xaf9e58)
                                    int16_t* eax_59 = sub_6ae4c0(&var_60, var_198)
                                    var_8_1.b = 0x17
                                    int16_t* eax_60 = sub_5327a0(eax_59, eax_59, &var_48, eax_58)
                                    var_8_1.b = 0x18
                                    sub_684160(data_bac424, 2, eax_60)
                                    int32_t var_34
                                    
                                    if (var_34 u>= 8)
                                        j__free(var_48.d)
                                    
                                    var_34 = 7
                                    int32_t var_38_1 = 0
                                    var_48 = 0
                                    int32_t var_4c
                                    
                                    if (var_4c u>= 8)
                                        j__free(var_60.d)
                                    
                                    var_4c = 7
                                    int32_t var_50_1 = 0
                                    var_60 = 0
                                    int32_t var_64
                                    
                                    if (var_64 u>= 8)
                                        j__free(var_78)
                                
                                ecx_22 = sub_6c8100(&var_118)
                                
                                if (var_e0 != 0)
                                    ecx_22 = j__free(var_e0)
                            
                            var_8_1.b = 0x13
                            int32_t* esi_9 = var_144
                            
                            if (esi_9 != 0)
                                bool cond:2_1 = esi_9[1] != 1
                                ecx_22 = esi_9[1]
                                esi_9[1] -= 1
                                
                                if (not(cond:2_1))
                                    ecx_22 = (*(*esi_9 + 4))(eax_2)
                                    bool cond:5_1 = esi_9[2] != 1
                                    esi_9[2]
                                    esi_9[2] -= 1
                                    
                                    if (not(cond:5_1))
                                        ecx_22 = (*(*esi_9 + 8))()
                            
                            var_8_1.b = 6
                            int32_t* var_160
                            
                            if (var_160 != 0)
                                bool cond:4_1 = var_160[1] != 1
                                ecx_22 = var_160[1]
                                var_160[1] -= 1
                                
                                if (not(cond:4_1))
                                    ecx_22 = (*(*var_160 + 4))(eax_2)
                                    bool cond:6_1 = var_160[2] != 1
                                    var_160[2]
                                    var_160[2] -= 1
                                    
                                    if (not(cond:6_1))
                                        ecx_22 = (*(*var_160 + 8))()
                            
                            edi_1 = var_154_1
                            i_1 += 1
                            esi_3 = var_158
                            i_3 = i_1
                        while (i_1 s< (edi_1 - esi_3) s>> 3)
                else
                    int16_t* eax_15 = sub_6b9ed0(&var_90)
                    var_8_1.b = 7
                    int16_t* eax_17 = sub_548cb0(&var_30, 0xaf9db8, &var_48, &var_30)
                    var_8_1.b = 8
                    int16_t* eax_18 = sub_532b80(eax_17, eax_17, &var_60, &data_af46b4)
                    var_8_1.b = 9
                    int16_t* eax_19 = sub_5327a0(eax_18, eax_18, &var_78, eax_15)
                    var_8_1.b = 0xa
                    sub_684160(data_bac424, 0xa, eax_19)
                    sub_52e8a0(&var_78)
                    sub_52e8a0(&var_60)
                    sub_52e8a0(&var_48)
                    ecx_22 = sub_52e8a0(&var_90)
                    edi_1 = var_154_1
                    esi_3 = var_158
                var_8_1.b = 1
                
                if (esi_3 != 0)
                    int32_t* var_17c_36 = var_14c
                    int32_t var_180_14 = ecx_22
                    sub_579a70(esi_3, edi_1)
                    j__free(esi_3)
            else
                int16_t* eax_13 = sub_548cb0(&var_30, 0xaf9dcc, &var_78, &var_30)
                var_8_1.b = 5
                sub_684160(data_bac424, 2, eax_13)
                sub_52e8a0(&var_78)
            int32_t var_94
            
            if (var_94 u>= 8)
                j__free(var_a8.d)
            
            result = nullptr
            int32_t var_94_1 = 7
            int32_t var_98_1 = 0
            var_a8 = 0
        
        if (var_1c_1 u>= 8)
            result = j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
