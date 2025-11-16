// 函数: sub_55ed80
// 地址: 0x55ed80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2afb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_c8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *arg2
struct _EXCEPTION_REGISTRATION_RECORD** result = *arg4
int16_t var_e0

if (ecx == 0)
    int32_t var_64_1 = 7
    int16_t var_78 = ecx.w
    int32_t var_8_1 = ecx
    int32_t var_34_1 = 7
    int16_t var_48 = ecx.w
    var_8_1.b = 1
    int32_t* var_b8_1 = 0xffffffff
    int32_t edx = 2
    int32_t* var_b0_1 = nullptr
    int32_t var_9c_1 = 0xffffffff
    int32_t ecx_1 = 0xffffffff
    int32_t var_94_1 = 2
    int32_t var_98_1 = 0xffffffff
    bool var_a0_1 = false
    bool var_a8_1 = false
    bool var_a4_1 = false
    bool var_ac_1 = false
    bool var_b4_1 = false
    
    if (result == 0)
        goto label_55ee51
    
    if (result == 1)
        var_b0_1 = *(arg4[1] + 0x16c)
    label_55ee51:
        void** eax_8 = arg4[1] + 0xc
        
        if (&var_78 != eax_8)
            sub_52e3c0(&var_78, eax_8, 0, 0xffffffff)
            ecx_1 = 0xffffffff
            edx = 2
    
    for (int32_t* i = arg4[2]; i u< arg4[3]; i = &i[0x59])
        int32_t eax_9 = *i
        
        if (eax_9 u> 0xb)
            ecx_1 = var_98_1
            edx = var_94_1
        else
            switch (eax_9)
                case 0
                    var_a0_1 = i[2] != 0
                    ecx_1 = var_98_1
                    edx = var_94_1
                case 1
                    var_a8_1 = i[2] != 0
                    ecx_1 = var_98_1
                    edx = var_94_1
                case 2
                    var_b0_1 = i[2]
                    ecx_1 = var_98_1
                    edx = var_94_1
                case 3
                    int32_t eax_11 = i[2]
                    
                    if (eax_11 s< 0xffffffff)
                        ecx_1 = var_98_1
                        edx = var_94_1
                    else
                        ecx_1 = var_98_1
                        
                        if (eax_11 s>= 0x20)
                            edx = var_94_1
                        else
                            edx = eax_11
                            var_94_1 = edx
                case 4
                    var_a4_1 = i[2] != 0
                    ecx_1 = var_98_1
                    edx = var_94_1
                case 5
                    var_ac_1 = i[2] != 0
                    ecx_1 = var_98_1
                    edx = var_94_1
                case 6
                    ecx_1 = i[2]
                    var_98_1 = ecx_1
                    edx = var_94_1
                case 7
                    if (&var_78 != &i[3])
                        sub_52e3c0(&var_78, &i[3], 0, 0xffffffff)
                    
                    ecx_1 = var_98_1
                    edx = var_94_1
                case 8
                    var_b8_1 = i[2]
                    ecx_1 = var_98_1
                    edx = var_94_1
                case 9
                    var_9c_1 = i[2]
                    ecx_1 = var_98_1
                    edx = var_94_1
                case 0xa
                    if (&var_48 != &i[3])
                        sub_52e3c0(&var_48, &i[3], 0, 0xffffffff)
                    
                    ecx_1 = var_98_1
                    edx = var_94_1
                case 0xb
                    var_b4_1 = i[2] != 0
                    ecx_1 = var_98_1
                    edx = var_94_1
    
    if (ecx != 0)
        int32_t var_cc_4 = 7
        int32_t var_d0_4 = 0
        var_e0 = 0
        sub_52e3c0(&var_e0, &var_78, 0, 0xffffffff)
        sub_601ff0(arg3, var_a0_1.d, var_a8_1, var_b0_1, var_94_1, var_98_1, var_a4_1, var_ac_1, 
            var_b4_1, 0, var_e0)
    else if (ecx != 0)
        int32_t var_cc_5 = 7
        int32_t var_d0_5 = 0
        var_e0 = 0
        sub_52e3c0(&var_e0, &var_48, 0, 0xffffffff)
        sub_602140(arg3, var_a0_1.d, var_a8_1, var_b0_1, var_94_1, var_98_1, var_a4_1, var_ac_1, 
            var_b4_1, 0, var_e0)
    else if (var_b8_1 s>= 0)
        var_e0.d = edx
        sub_602280(arg3, var_b8_1, var_a0_1.d, var_a8_1, var_b0_1, var_e0, ecx_1, var_a4_1, 
            var_ac_1, var_b4_1, 0)
    else if (var_9c_1 s>= 0)
        var_e0.d = edx
        sub_602370(arg3, var_9c_1, var_a0_1, var_a8_1, var_b0_1, var_e0, ecx_1, var_a4_1, var_ac_1, 
            var_b4_1, 0)
    
    if (var_34_1 u>= 8)
        j__free(var_48.d)
    
    int32_t var_34_2 = 7
    int32_t var_38_2 = 0
    var_48 = 0
    
    if (var_64_1 u>= 8)
        j__free(var_78.d)
else if (ecx != 2)
    if (ecx != 1)
        if (ecx == 0xb)
            int32_t var_4c_1 = 7
            int32_t var_50_1 = 0
            int16_t var_60 = 0
            int32_t var_8_2 = 2
            int32_t var_1c_1 = 7
            int32_t var_20_1 = 0
            int16_t var_30 = 0
            var_8_2.b = 3
            int32_t* var_9c_2 = 0xffffffff
            int32_t edx_1 = 2
            int32_t var_98_2 = 2
            int32_t var_b8_2 = 0xffffffff
            int32_t ecx_20 = 0xffffffff
            int32_t var_94_2 = 0xffffffff
            bool var_ac_2 = false
            bool var_a4_2 = false
            bool var_a8_2 = false
            bool var_a0_2 = false
            
            if (result == 0)
                void** eax_26 = arg4[1] + 0xc
                
                if (&var_60 != eax_26)
                    sub_52e3c0(&var_60, eax_26, 0, 0xffffffff)
                    ecx_20 = 0xffffffff
                    edx_1 = 2
            
            for (int32_t* i_1 = arg4[2]; i_1 u< arg4[3]; i_1 = &i_1[0x59])
                int32_t eax_27 = *i_1
                
                if (eax_27 u> 0xb)
                    ecx_20 = var_94_2
                    edx_1 = var_98_2
                else
                    switch (eax_27)
                        case 0
                            var_ac_2 = i_1[2] != 0
                            ecx_20 = var_94_2
                            edx_1 = var_98_2
                        case 1, 2
                            ecx_20 = var_94_2
                            edx_1 = var_98_2
                        case 3
                            int32_t eax_28 = i_1[2]
                            
                            if (eax_28 s< 0xffffffff)
                                ecx_20 = var_94_2
                                edx_1 = var_98_2
                            else
                                ecx_20 = var_94_2
                                
                                if (eax_28 s>= 0x20)
                                    edx_1 = var_98_2
                                else
                                    edx_1 = eax_28
                                    var_98_2 = edx_1
                        case 4
                            var_a4_2 = i_1[2] != 0
                            ecx_20 = var_94_2
                            edx_1 = var_98_2
                        case 5
                            var_a8_2 = i_1[2] != 0
                            ecx_20 = var_94_2
                            edx_1 = var_98_2
                        case 6
                            ecx_20 = i_1[2]
                            var_94_2 = ecx_20
                            edx_1 = var_98_2
                        case 7
                            if (&var_60 != &i_1[3])
                                sub_52e3c0(&var_60, &i_1[3], 0, 0xffffffff)
                            
                            ecx_20 = var_94_2
                            edx_1 = var_98_2
                        case 8
                            var_9c_2 = i_1[2]
                            ecx_20 = var_94_2
                            edx_1 = var_98_2
                        case 9
                            var_b8_2 = i_1[2]
                            ecx_20 = var_94_2
                            edx_1 = var_98_2
                        case 0xa
                            if (&var_30 != &i_1[3])
                                sub_52e3c0(&var_30, &i_1[3], 0, 0xffffffff)
                            
                            ecx_20 = var_94_2
                            edx_1 = var_98_2
                        case 0xb
                            var_a0_2 = i_1[2] != 0
                            ecx_20 = var_94_2
                            edx_1 = var_98_2
            
            if (var_50_1 != 0)
                int32_t var_cc_13 = 7
                int32_t var_d0_11 = 0
                var_e0 = 0
                sub_52e3c0(&var_e0, &var_60, 0, 0xffffffff)
                sub_601ff0(arg3, var_ac_2.d, 0, nullptr, var_98_2, var_94_2, var_a4_2, var_a8_2, 
                    var_a0_2, 1, var_e0)
            else if (var_20_1 != 0)
                int32_t var_cc_14 = 7
                int32_t var_d0_12 = 0
                var_e0 = 0
                sub_52e3c0(&var_e0, &var_30, 0, 0xffffffff)
                sub_602140(arg3, var_ac_2.d, 0, nullptr, var_98_2, var_94_2, var_a4_2, var_a8_2, 
                    var_a0_2, 1, var_e0)
            else if (var_9c_2 s>= 0)
                var_e0.d = edx_1
                sub_602280(arg3, var_9c_2, var_ac_2.d, 0, 0, var_e0, ecx_20, var_a4_2, var_a8_2, 
                    var_a0_2, 1)
            else if (var_b8_2 s>= 0)
                var_e0.d = edx_1
                sub_602370(arg3, var_b8_2, var_ac_2, 0, 0, var_e0, ecx_20, var_a4_2, var_a8_2, 
                    var_a0_2, 1)
            
            if (var_1c_1 u>= 8)
                j__free(var_30.d)
            
            int32_t var_1c_2 = 7
            int32_t var_20_2 = 0
            var_30 = 0
            
            if (var_4c_1 u>= 8)
                j__free(var_60.d)
        else if (ecx != 0x10)
            if (ecx != 5)
                if (ecx != 0xa)
                    if (ecx == 9)
                        void* ecx_40 = arg4[2]
                        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
                        int32_t edx_2 = arg4[3]
                        
                        if (ecx_40 u< edx_2)
                            result_1 = nullptr
                            
                            do
                                if (*ecx_40 == 0)
                                    result_1 = *(ecx_40 + 8)
                                
                                ecx_40 += 0x164
                            while (ecx_40 u< edx_2)
                        
                        if (result == 0)
                            *(arg3 + 0xf0) = result.b
                            
                            if (result_1 s< 0)
                                result_1 = result
                            
                            if (result_1 == 0)
                                void* var_cc_23 = ecx_40
                                x434b916e::_ExceptionPtr_static<class std::bad_exception>::operator[]::_ExceptionPtr_static<class std::bad_exception>::_ExceptionPtr_static<class std::bad_exception>(
                                    arg3 + 0xf4)
                            
                            *(arg3 + 0xe4) = result_1
                            *(arg3 + 0xe8) = 0
                        else if (result == 1)
                            sub_602490(arg3, 0, *(arg4[1] + 8), result_1)
                    else if (ecx != 0x11)
                        if (ecx == 3)
                            sub_602510(arg3, 0, 0)
                        else if (ecx == 6)
                            sub_602510(arg3, 1, 1)
                        else if (ecx == 8)
                            sub_602600(arg3, 0, 0)
                        else if (ecx == 7)
                            sub_602600(arg3, 1, 1)
                        else if (ecx == 4)
                            sub_677bb0(sub_55e1a0(arg3 + 0xf4))
                        else if (ecx != 0xd)
                            if (ecx != 0xe)
                                if (ecx != 0xf)
                                    if (ecx != 0xc)
                                        void* var_cc_39 = 0x17
                                        int32_t var_7c_1 = 7
                                        void* const var_d0_27 = &data_ad8edc
                                        int32_t var_80_1 = 0
                                        int16_t var_90 = 0
                                        sub_52e720(&var_90, var_d0_27, var_cc_39)
                                        int32_t var_8_3 = 5
                                        sub_684160(data_bac424, 2, &var_90)
                                        sub_52e8a0(&var_90)
                                    else
                                        sub_677bb0(*(arg3 + 0xe0))
                                else if (result == 0)
                                    sub_602760(arg3, result)
                                else if (result == 1)
                                    sub_602760(arg3, *(arg4[1] + 8))
                            else if (result == 0)
                                sub_602730(arg3, result)
                            else if (result == 1)
                                sub_602730(arg3, *(arg4[1] + 8))
                        else if (result == 0)
                            sub_6026f0(arg3, *(arg4[1] + 8), result)
                        else if (result == 1)
                            void* eax_44 = arg4[1]
                            sub_6026f0(arg3, *(eax_44 + 8), *(eax_44 + 0x16c))
                    else if (result == 0)
                        int32_t var_cc_25 = ecx
                        *(arg3 + 0xf0) = result.b
                        x434b916e::_ExceptionPtr_static<class std::bad_exception>::operator[]::_ExceptionPtr_static<class std::bad_exception>::_ExceptionPtr_static<class std::bad_exception>(
                            arg3 + 0xf4)
                        sub_602510(arg3, 0, 0)
                        *(arg3 + 0xe4) = 0
                        *(arg3 + 0xe8) = 0
                    else if (result == 1)
                        void* var_cc_27 = arg3 + 0xf4
                        int32_t edi_1 = *(arg4[1] + 8)
                        *(arg3 + 0xf0) = 0
                        
                        if (edi_1 s> 0)
                            sub_6dee00(arg3 + 0xf4, edi_1)
                        else
                            x434b916e::_ExceptionPtr_static<class std::bad_exception>::operator[]::_ExceptionPtr_static<class std::bad_exception>::_ExceptionPtr_static<class std::bad_exception>(
                                arg3 + 0xf4)
                        
                        sub_602510(arg3, 0, 0)
                        *(arg3 + 0xe4) = 0
                        *(arg3 + 0xe8) = edi_1
                else if (result == 0)
                    int32_t var_cc_21 = ecx
                    sub_6deed0(arg3 + 0xf4, 0x64)
                else if (result == 1)
                    sub_605260(arg3 + 0xf4, *(arg4[1] + 8))
            else if (result == 0)
                int32_t var_cc_19 = ecx
                sub_6defc0(arg3 + 0xf4, 0x64)
                *(arg3 + 0xec) = 0
            else if (result == 1)
                sub_602450(arg3, *(arg4[1] + 8))
        else if (result == 0)
            sub_536170(&var_e0, arg4[1] + 0xc)
            sub_601ff0(arg3, 1, 0, nullptr, 2, 0xffffffff, 0, 0, 0, 1, var_e0)
        else if (result == 1)
            sub_536170(&var_e0, arg4[1] + 0xc)
            sub_601ff0(arg3, 1, 0, *(arg4[1] + 0x16c), 2, 0xffffffff, 0, 0, 0, 1, var_e0)
    else if (result == 0)
        sub_536170(&var_e0, arg4[1] + 0xc)
        sub_601ff0(arg3, nullptr, 1, nullptr, 2, 0xffffffff, 0, 0, 0, 0, var_e0)
    else if (result == 1)
        sub_536170(&var_e0, arg4[1] + 0xc)
        sub_601ff0(arg3, nullptr, 1, *(arg4[1] + 0x16c), 2, 0xffffffff, 0, 0, 0, 0, var_e0)
else if (result == 0)
    sub_536170(&var_e0, arg4[1] + 0xc)
    sub_601ff0(arg3, 1, 0, nullptr, 2, 0xffffffff, 0, 0, 0, 0, var_e0)
else if (result == 1)
    sub_536170(&var_e0, arg4[1] + 0xc)
    sub_601ff0(arg3, 1, 0, *(arg4[1] + 0x16c), 2, 0xffffffff, 0, 0, 0, 0, var_e0)
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
