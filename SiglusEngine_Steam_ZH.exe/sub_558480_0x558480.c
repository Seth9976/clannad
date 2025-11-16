// 函数: sub_558480
// 地址: 0x558480
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2633
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i_2 = arg3
int32_t ecx = *arg6
int32_t var_98 = ecx
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg4 != arg5)
    struct _EXCEPTION_REGISTRATION_RECORD* eax_4 = *arg4
    int16_t* var_30
    int32_t var_1c
    int16_t* eax_5
    
    if (eax_4 != 0)
        if (eax_4 == 1)
            eax_5 = sub_6ae650(&var_30, i_2)
            int32_t var_8_2 = 1
            goto label_558542
        
        if (eax_4 == 6)
            sub_677bb0(i_2[4])
        else if (eax_4 == 5)
            int32_t ebx_1 = 0
            int16_t* i_6
            
            if (i_2[5] u< 8)
                i_6 = i_2
            else
                i_6 = *i_2
            
            int32_t edx_2 = data_b9c398
            
            while (true)
                int32_t* i_4
                
                if (i_2[5] u< 8)
                    i_4 = i_2
                else
                    i_4 = *i_2
                
                if (i_6 == i_4 + (i_2[4] << 1))
                    break
                
                uint32_t eax_8 = zx.d(*i_6)
                
                if ((edx_2.b & 1) == 0)
                    data_b9c398 = edx_2 | 1
                    sub_6ad730()
                    edx_2 = data_b9c398
                
                int32_t ecx_9
                ecx_9.b = *(zx.d(eax_8.w) + 0xb9c3a0) != 1
                ebx_1 += ecx_9 + 1
                i_6 = &i_6[1]
            
            sub_677bb0(ebx_1)
        else
            void var_48
            
            if (eax_4 == 2)
                void* ecx_12 = i_2[4]
                void* eax_11 = *(arg6[1] + 8)
                
                if (eax_11 s< 0)
                    eax_11 = nullptr
                else if (eax_11 s> ecx_12)
                    eax_11 = ecx_12
                
                int32_t var_8_3 = 2
                sub_532840(&var_30, sub_53d730(i_2, &var_48, 0, eax_11))
                var_8_3.b = 3
            label_5588be:
                sub_60c680(data_bac49c + 0xc, &var_30)
                sub_52e8a0(&var_30)
                sub_52e8a0(&var_48)
            else if (eax_4 != 7)
                if (eax_4 == 4)
                    void* eax_22 = arg6[1]
                    int32_t edx_4 = i_2[4]
                    int32_t ecx_25 = edx_4 - *(eax_22 + 8)
                    
                    if (edx_4 - *(eax_22 + 8) s< 0)
                        ecx_25 = 0
                    else if (ecx_25 s> edx_4)
                        ecx_25 = edx_4
                    
                    int32_t var_8_5 = 5
                    sub_532840(&var_30, sub_53d730(i_2, &var_48, ecx_25, 0xffffffff))
                    var_8_5.b = 6
                    goto label_5588be
                
                if (eax_4 != 9)
                    if (eax_4 == 3)
                        void* eax_33 = arg6[1]
                        
                        if (ecx != 0)
                            int32_t ecx_41 = *(eax_33 + 8)
                            int32_t edx_6 = i_2[4]
                            int32_t eax_37 = *(eax_33 + 0x16c) + ecx_41
                            
                            if (ecx_41 s< 0)
                                ecx_41 = 0
                            else if (ecx_41 s> edx_6)
                                ecx_41 = edx_6
                            
                            if (eax_37 s< ecx_41)
                                eax_37 = ecx_41
                            else if (eax_37 s> edx_6)
                                eax_37 = edx_6
                            
                            int32_t var_8_8 = 0xc
                            sub_532840(&var_30, sub_53d730(i_2, &var_48, ecx_41, eax_37 - ecx_41))
                            var_8_8.b = 0xd
                        else
                            int32_t eax_34 = *(eax_33 + 8)
                            int32_t ecx_38 = i_2[4]
                            
                            if (eax_34 s< 0)
                                eax_34 = 0
                            else if (eax_34 s> ecx_38)
                                eax_34 = ecx_38
                            
                            int32_t var_8_7 = 0xa
                            sub_532840(&var_30, sub_53d730(i_2, &var_48, eax_34, 0xffffffff))
                            var_8_7.b = 0xb
                        
                        goto label_5588be
                    
                    if (eax_4 == 8)
                        int32_t ebx_3 = 0
                        int32_t var_1c_2 = 7
                        int32_t var_20_2 = 0
                        var_30.w = 0
                        int32_t var_8_9 = 0xe
                        int32_t* i
                        
                        if (i_2[5] u< 8)
                            i = i_2
                        else
                            i = *i_2
                        
                        void var_9c
                        
                        if (i != *sub_55d4d0(i_2, &var_9c))
                            int32_t* eax_56
                            
                            do
                                int16_t ecx_49 = *i
                                
                                if (ebx_3 s< *(arg6[1] + 8))
                                    uint32_t eax_52 = zx.d(sub_55d4a0(ecx_49))
                                    int32_t eax_53 = neg.d(eax_52)
                                    ebx_3 += sbb.d(eax_53, eax_53, eax_52 != 0) + 2
                                else
                                    uint32_t eax_44 = zx.d(sub_55d4a0(ecx_49))
                                    int32_t eax_45 = neg.d(eax_44)
                                    ebx_3 += sbb.d(eax_45, eax_45, eax_44 != 0) + 2
                                    
                                    if (var_98 == 1)
                                        void* eax_49 = arg6[1]
                                        
                                        if (ebx_3 s> *(eax_49 + 0x16c) + *(eax_49 + 8))
                                            break
                                    
                                    sub_55d330(&var_30, 1, *i)
                                
                                i += 2
                                eax_56 = sub_55d4d0(i_2, &var_9c)
                            while (i != *eax_56)
                        
                        goto label_5586d8
                    
                    int32_t var_20
                    void* eax_58
                    
                    if (eax_4 != 0xa)
                        if (eax_4 == 0xb)
                            sub_6ae650(&var_48, i_2)
                            int32_t var_8_11 = 0x10
                            sub_6ae650(&var_30, arg6[1] + 0xc)
                            int32_t var_b4_17 = var_20
                            int16_t* eax_59 = &var_30
                            
                            if (var_1c u>= 8)
                                eax_59 = var_30
                            
                            eax_58 = sub_55b010(&var_48, eax_59, &var_30)
                            goto label_5589e2
                        
                        if (eax_4 == 0xd)
                            int32_t eax_61 = *(arg6[1] + 8)
                            
                            if (eax_61 s>= i_2[4])
                                sub_677bb0(0xffffffff)
                            else
                                if (i_2[5] u>= 8)
                                    i_2 = *i_2
                                
                                sub_677bb0(zx.d(*(i_2 + (eax_61 << 1))))
                        else if (eax_4 != 0xc)
                            int32_t var_64_1 = 7
                            int32_t var_68_1 = 0
                            int16_t var_78 = 0
                            sub_52e720(&var_78, 0xad8cc4, 0x15)
                            int32_t var_8_12 = 0x11
                            sub_684160(data_bac424, 2, &var_78)
                            sub_52e8a0(&var_78)
                        else
                            sub_677bb0(sub_6ae470(i_2, 0))
                    else
                        sub_6ae650(&var_48, i_2)
                        int32_t var_8_10 = 0xf
                        sub_6ae650(&var_30, arg6[1] + 0xc)
                        int32_t* eax_57 = &var_30
                        
                        if (var_1c u>= 8)
                            eax_57 = var_30
                        
                        eax_58 = sub_55af30(&var_48, eax_57, nullptr, var_20)
                    label_5589e2:
                        
                        if (eax_58 == 0xffffffff)
                            eax_58 = 0xffffffff
                        
                        sub_677bb0(eax_58)
                        sub_52e8a0(&var_30)
                        sub_52e8a0(&var_48)
                else
                    int32_t var_94_3 = 0
                    int32_t var_4c_1 = 7
                    int32_t var_50_1 = 0
                    int16_t var_60 = 0
                    int32_t var_8_6 = 7
                    int32_t* i_5
                    
                    if (i_2[5] u< 8)
                        i_5 = i_2
                    else
                        i_5 = *i_2
                    
                    int16_t* esi_1 = i_5 + (i_2[4] << 1)
                    
                    while (true)
                        int32_t* i_3
                        
                        if (i_2[5] u< 8)
                            i_3 = i_2
                        else
                            i_3 = *i_2
                        
                        if (esi_1 == i_3)
                            break
                        
                        i_5.w = esi_1[-1]
                        esi_1 = &esi_1[-1]
                        uint32_t eax_26 = zx.d(sub_55d4a0(i_5.w))
                        int32_t eax_27 = neg.d(eax_26)
                        int32_t ecx_29 = var_94_3 + sbb.d(eax_27, eax_27, eax_26 != 0) + 2
                        var_94_3 = ecx_29
                        
                        if (ecx_29 s> *(arg6[1] + 8))
                            break
                        
                        int32_t* eax_32
                        int32_t ecx_31
                        eax_32, ecx_31 = sub_55c5c0(&var_60, *esi_1, &var_48, &var_60)
                        int32_t var_b8_2 = ecx_31
                        var_8_6.b = 8
                        void var_90
                        sub_532840(&var_90, eax_32)
                        var_8_6.b = 9
                        sub_52e3c0(&var_60, &var_90, 0, 0xffffffff)
                        sub_52e8a0(&var_90)
                        var_8_6.b = 7
                        sub_52e8a0(&var_48)
                    
                    sub_60c680(data_bac49c + 0xc, &var_60)
                    sub_52e8a0(&var_60)
            else
                struct _EXCEPTION_REGISTRATION_RECORD* var_1c_1 = eax_4
                int32_t var_94_2 = 0
                int32_t var_20_1 = 0
                var_30.w = 0
                int32_t var_8_4 = 4
                int16_t* i_1
                
                if (i_2[5] u< 8)
                    i_1 = i_2
                else
                    i_1 = *i_2
                
                if (i_1 != *sub_55d4d0(i_2, &var_98))
                    int32_t* eax_21
                    
                    do
                        uint32_t eax_15 = zx.d(sub_55d4a0(*i_1))
                        int32_t eax_16 = neg.d(eax_15)
                        int32_t ecx_18 = var_94_2 + sbb.d(eax_16, eax_16, eax_15 != 0) + 2
                        var_94_2 = ecx_18
                        
                        if (ecx_18 s> *(arg6[1] + 8))
                            break
                        
                        sub_55d330(&var_30, 1, *i_1)
                        i_1 = &i_1[1]
                        eax_21 = sub_55d4d0(i_2, &var_98)
                    while (i_1 != *eax_21)
                
            label_5586d8:
                sub_60c680(data_bac49c + 0xc, &var_30)
                sub_52e8a0(&var_30)
    else
        eax_5 = sub_6ae5c0(&var_30, i_2)
        int32_t var_8_1 = 0
    label_558542:
        sub_60c680(data_bac49c + 0xc, eax_5)
        
        if (var_1c u>= 8)
            j__free(var_30)
else if (ecx == 0)
    sub_60c680(data_bac49c + 0xc, i_2)
else if (ecx == 1)
    result = arg6[1] + 0xc
    
    if (i_2 != result)
        sub_52e3c0(i_2, result, 0, 0xffffffff)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
