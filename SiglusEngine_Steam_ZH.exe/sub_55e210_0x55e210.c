// 函数: sub_55e210
// 地址: 0x55e210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2aa8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t ecx = *arg1
void* esi = data_bac468
int32_t* result = *edi
int16_t var_b4
int16_t var_2c

if (ecx == 0)
    int32_t var_30_1 = 7
    int32_t var_34_1 = ecx
    int16_t var_44 = ecx.w
    int32_t var_8_1 = ecx
    arg2.b = 0
    char var_75_1 = 0
    ecx.b = 1
    char var_7d_1 = 1
    int32_t* var_88_1 = nullptr
    int32_t var_8c_1 = 0
    int32_t var_84_1 = 0xffffffff
    
    if (result == 0)
        goto label_55e2b7
    
    if (result == 1)
        goto label_55e2ab
    
    if (result == 2)
        var_8c_1 = *(edi[1] + 0x2d0)
    label_55e2ab:
        var_88_1 = *(edi[1] + 0x16c)
    label_55e2b7:
        void** eax_11 = edi[1] + 0xc
        
        if (&var_44 != eax_11)
            ecx, arg2 = sub_52e3c0(&var_44, eax_11, 0, 0xffffffff)
            ecx.b = var_7d_1
            arg2.b = var_75_1
    
    int32_t* i = edi[2]
    
    if (i u>= edi[3])
    label_55e426:
        int32_t var_a0_7 = 7
        int32_t var_a4_6 = 0
        var_b4 = 0
        sub_52e3c0(&var_b4, &var_44, 0, 0xffffffff)
        sub_5ffb50(esi, var_88_1, var_8c_1, var_84_1, 0, 0, var_b4)
    else
        do
            switch (*i)
                case 0
                    if (&var_44 != &i[3])
                        ecx, arg2 = sub_52e3c0(&var_44, &i[3], 0, 0xffffffff)
                        ecx.b = var_7d_1
                        arg2.b = var_75_1
                case 1
                    ecx.b = i[2] != 0
                    var_7d_1 = ecx.b
                case 2
                    arg2.b = i[2] != 0
                    var_75_1 = arg2.b
                case 3
                    var_84_1 = i[2]
                case 4
                    var_88_1 = i[2]
                case 5
                    var_8c_1 = i[2]
            
            i = &i[0x59]
        while (i u< edi[3])
        
        if (arg2.b == 0)
            if (ecx.b != 0)
                goto label_55e426
            
            int32_t var_a0_6 = 7
            int32_t var_a4_5 = 0
            var_b4 = 0
            sub_52e3c0(&var_b4, &var_44, 0, 0xffffffff)
            sub_5ffbe0(esi, var_88_1, var_8c_1, var_84_1, 0, 0, var_b4)
        else
            int32_t var_18_1 = 7
            void* var_a0_3 = 0xffffffff
            int32_t var_a4_3 = 0
            var_2c = 0
            int32_t var_1c_1 = 0
            sub_52e3c0(&var_2c, &var_44, var_a4_3, var_a0_3)
            var_8_1.b = 1
            int32_t var_a0_4 = 7
            int32_t var_a4_4 = 0
            var_b4 = 0
            sub_52e3c0(&var_b4, &var_2c, 0, 0xffffffff)
            sub_5ffa00(esi, nullptr, 1, var_88_1, var_8c_1, var_84_1, 0, 0, var_b4)
            
            if (var_18_1 u>= 8)
                j__free(var_2c.d)
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
else
    void* eax_49
    
    if (ecx != 1)
        if (ecx != 2)
            if (ecx == 0x10)
                int32_t var_48_1 = 7
                int32_t var_4c_1 = 0
                int16_t var_5c = 0
                int32_t var_8_2 = 2
                bool ecx_21 = true
                bool var_75_2 = true
                int32_t var_84_2 = 0x64
                int32_t var_88_2 = 0xffffffff
                
                if (result == 0)
                    goto label_55e5f7
                
                if (result == 2)
                    var_84_2 = *(edi[1] + 0x16c)
                label_55e5f7:
                    void** eax_37 = edi[1] + 0xc
                    
                    if (&var_5c != eax_37)
                        sub_52e3c0(&var_5c, eax_37, 0, 0xffffffff)
                        ecx_21 = var_75_2
                
                void* i_1 = edi[2]
                
                if (i_1 u>= edi[3])
                label_55e6ba:
                    int32_t var_a0_12 = 7
                    int32_t var_a4_10 = 0
                    var_b4 = 0
                    sub_52e3c0(&var_b4, &var_5c, 0, 0xffffffff)
                    sub_5ffb50(esi, nullptr, var_84_2, var_88_2, 1, 0, var_b4)
                else
                    do
                        switch (*i_1)
                            case 0
                                if (&var_5c != i_1 + 0xc)
                                    sub_52e3c0(&var_5c, i_1 + 0xc, 0, 0xffffffff)
                                    ecx_21 = var_75_2
                            case 1
                                ecx_21 = *(i_1 + 8) != 0
                                var_75_2 = ecx_21
                            case 3
                                var_88_2 = *(i_1 + 8)
                            case 5
                                var_84_2 = *(i_1 + 8)
                        
                        i_1 += 0x164
                    while (i_1 u< edi[3])
                    
                    if (ecx_21 != 0)
                        goto label_55e6ba
                    
                    int32_t var_a0_11 = 7
                    int32_t var_a4_9 = 0
                    var_b4 = 0
                    sub_52e3c0(&var_b4, &var_5c, 0, 0xffffffff)
                    sub_5ffbe0(esi, nullptr, var_84_2, var_88_2, 1, 0, var_b4)
                
                if (var_48_1 u>= 8)
                    j__free(var_5c.d)
            else if (ecx != 0x11)
                if (ecx != 4)
                    if (ecx != 0xa)
                        if (ecx == 0xb)
                            void* i_2 = edi[2]
                            int32_t* result_1 = nullptr
                            
                            for (; i_2 u< edi[3]; i_2 += 0x164)
                                if (*i_2 == 0)
                                    result_1 = *(i_2 + 8)
                            
                            if (result == 0)
                                *(esi + 0xc5) = result.b
                                
                                if (result_1 s< 0)
                                    result_1 = result
                                
                                if (result_1 == 0)
                                    result = *(esi + 0xd4)
                                    
                                    if (result s>= 0)
                                        void* i_3 = i_2
                                        x434b916e::_ExceptionPtr_static<class std::bad_exception>::operator[]::_ExceptionPtr_static<class std::bad_exception>::_ExceptionPtr_static<class std::bad_exception>(
                                            result * 0x15c + *(esi + 0xc8))
                                
                                *(esi + 0xbc) = result_1
                                *(esi + 0xc0) = 0
                            else if (result == 1)
                                sub_5ffda0(esi, 0, *(edi[1] + 8), result_1)
                        else if (ecx != 0xc)
                            if (ecx == 3)
                                sub_5ffe30(esi, 0, 0)
                            else if (ecx == 0xe)
                                sub_5ffe30(esi, 1, 1)
                            else if (ecx == 5)
                                sub_5fff20(esi, 0, 0)
                            else if (ecx == 0xf)
                                sub_5fff20(esi, 1, 1)
                            else if (ecx == 0x12)
                                sub_677bb0(sub_600010(esi))
                            else if (ecx != 6)
                                if (ecx != 7)
                                    if (ecx != 8)
                                        if (ecx == 9)
                                            sub_677bb0(*(esi + 0xb8))
                                        else if (ecx == 0x13)
                                            void var_74
                                            int16_t* eax_60 = sub_54edd0(esi, &var_74)
                                            int32_t var_8_3 = 3
                                            sub_60c680(data_bac49c + 0xc, eax_60)
                                            sub_52e8a0(&var_74)
                                        else if (ecx != 0xd)
                                            void* var_a0_35 = 0x15
                                            int32_t var_18_2 = 7
                                            void* const var_a4_24 = &data_ad8e20
                                            int32_t var_1c_2 = 0
                                            var_2c = 0
                                            sub_52e720(&var_2c, var_a4_24, var_a0_35)
                                            int32_t var_8_4 = 4
                                            sub_684160(data_bac424, 2, &var_2c)
                                            sub_52e8a0(&var_2c)
                                        else
                                            int32_t eax_61 = *(esi + 0xd4)
                                            
                                            if (eax_61 s< 0)
                                                sub_677bb0(0)
                                            else
                                                int32_t* ecx_63 = eax_61 * 0x15c + *(esi + 0xc8)
                                                int32_t* var_a0_34 = ecx_63
                                                sub_677bb0(sub_6df1d0(ecx_63))
                                    else if (result == 0)
                                        sub_6000b0(esi, result, result)
                                    else if (result == 1)
                                        sub_6000b0(esi, nullptr, *(edi[1] + 8))
                                else if (result == 0)
                                    sub_6000b0(esi, 0xff, result)
                                else if (result == 1)
                                    sub_6000b0(esi, 0xff, *(edi[1] + 8))
                            else if (result == 0)
                                sub_6000b0(esi, *(edi[1] + 8), result)
                            else if (result == 1)
                                void* eax_57 = edi[1]
                                sub_6000b0(esi, *(eax_57 + 8), *(eax_57 + 0x16c))
                        else if (result == 0)
                            *(esi + 0xc5) = result.b
                            int32_t eax_53 = *(esi + 0xd4)
                            
                            if (eax_53 s>= 0)
                                int32_t var_a0_19 = ecx
                                x434b916e::_ExceptionPtr_static<class std::bad_exception>::operator[]::_ExceptionPtr_static<class std::bad_exception>::_ExceptionPtr_static<class std::bad_exception>(
                                    eax_53 * 0x15c + *(esi + 0xc8))
                            
                            sub_5ffe30(esi, 0, 0)
                            *(esi + 0xbc) = 0
                            *(esi + 0xc0) = 0
                        else if (result == 1)
                            sub_5ffda0(esi, 1, *(edi[1] + 8), 0)
                    else if (result == 0)
                        sub_5ffd60(esi, 0x64)
                    else if (result == 1)
                        sub_5ffd60(esi, *(edi[1] + 8))
                else if (result == 0)
                    sub_5ffd00(esi, 0x64)
                else if (result == 1)
                    sub_5ffd00(esi, *(edi[1] + 8))
            else if (result == 0)
                sub_536170(&var_b4, edi[1] + 0xc)
                sub_5ffbe0(esi, nullptr, 0, 0xffffffff, 1, 0, var_b4)
            else if (result == 1)
                sub_536170(&var_b4, edi[1] + 0xc)
                sub_5ffbe0(esi, *(edi[1] + 0x16c), 0, 0xffffffff, 1, 0, var_b4)
            else if (result == 2)
                sub_536170(&var_b4, edi[1] + 0xc)
                int32_t var_b8_11 = 0
                eax_49 = edi[1]
                sub_5ffbe0(esi, *(eax_49 + 0x16c), *(eax_49 + 0x2d0), 0xffffffff, 1, 0, var_b4)
        else if (result == 0)
            sub_536170(&var_b4, edi[1] + 0xc)
            sub_5ffc70(esi, nullptr, 0, 0xffffffff, 0, 0, var_b4)
        else if (result == 1)
            sub_536170(&var_b4, edi[1] + 0xc)
            sub_5ffc70(esi, *(edi[1] + 0x16c), 0, 0xffffffff, 0, 0, var_b4)
        else if (result == 2)
            sub_536170(&var_b4, edi[1] + 0xc)
            void* eax_31 = edi[1]
            sub_5ffc70(esi, *(eax_31 + 0x16c), *(eax_31 + 0x2d0), 0xffffffff, 0, 0, var_b4)
    else if (result == 0)
        sub_536170(&var_b4, edi[1] + 0xc)
        sub_5ffbe0(esi, nullptr, 0, 0xffffffff, 0, 0, var_b4)
    else if (result == 1)
        sub_536170(&var_b4, edi[1] + 0xc)
        sub_5ffbe0(esi, *(edi[1] + 0x16c), 0, 0xffffffff, 0, 0, var_b4)
    else if (result == 2)
        sub_536170(&var_b4, edi[1] + 0xc)
        int32_t var_b8_4 = 0
        eax_49 = edi[1]
        sub_5ffbe0(esi, *(eax_49 + 0x16c), *(eax_49 + 0x2d0), 0xffffffff, 0, 0, var_b4)
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
