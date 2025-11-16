// 函数: sub_5ddaa0
// 地址: 0x5ddaa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc55f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4e4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
void* result = arg3
int32_t* var_4b0 = edi
void* result_1 = result

if (edi[4] != 0)
    int32_t esi_4 = (*(arg1 + 0x1b0) - *(arg1 + 0x1ac)) s/ 0x3b4 + edi[4]
    
    if ((*(arg1 + 0x1b4) - *(arg1 + 0x1ac)) s/ 0x3b4 u< esi_4)
        if (esi_4 u> 0x45217c)
            sub_743191("vector<T> too long")
            noreturn
        
        sub_5b4d00(arg1 + 0x1ac, esi_4)
    
    int32_t* esi_5
    
    if (edi[5] u< 8)
        esi_5 = edi
    else
        esi_5 = *edi
    
    int32_t* var_4b4 = esi_5
    
    while (true)
        int32_t edx_7 = edi[5]
        int32_t* eax_8
        
        if (edx_7 u< 8)
            eax_8 = edi
        else
            eax_8 = *edi
        
        int32_t ecx_6 = edi[4] * 2
        result = eax_8 + ecx_6
        
        if (esi_5 == result)
            break
        
        int32_t* eax_9 = var_4b0
        int32_t* edi_1 = esi_5
        int32_t var_4ac = 0
        uint32_t var_4bc = 0xffffffff
        
        if (edx_7 u>= 8)
            eax_9 = *eax_9
        
        void* eax_10 = eax_9 + ecx_6
        sub_64f180(eax_10, &var_4ac, &var_4b4, eax_10, &var_4bc)
        uint32_t esi_6 = var_4bc
        
        if (esi_6 == 0xa)
            sub_5de520(arg1)
            esi_5 = var_4b4
            edi = var_4b0
        else if (esi_6 != 7)
            int32_t eax_11 = var_4ac
            int32_t eax_18
            
            if (eax_11 != 0)
            label_5ddc61:
                eax_18 = *(arg1 + 0xf0)
            label_5ddc67:
                void* edx_10 = data_bac510
                int32_t ecx_11 = *(arg1 + 0xf4) + eax_18
                bool cond:0_1
                
                if (*(edx_10 + 0x10bd8) == 1)
                    int32_t eax_20 = *(arg1 + 0xe4) + ecx_11
                    int32_t ecx_12 = *(arg1 + 0x130)
                    
                    if (eax_20 s> *(arg1 + 0x18) + ecx_12)
                        goto label_5ddce3
                    
                    cond:0_1 = eax_20 s<= ecx_12
                    goto label_5ddcd4
                
                int32_t eax_24 = *(arg1 + 0xe0) + ecx_11
                int32_t ecx_13 = *(arg1 + 0x12c)
                
                if (eax_24 s<= *(arg1 + 0x18) + ecx_13)
                    cond:0_1 = eax_24 s<= ecx_13
                label_5ddcd4:
                    
                    if (cond:0_1)
                        goto label_5ddd1e
                    
                    if (sub_5dd6d0(esi_6.w) != 0)
                        goto label_5ddd1e
                    
                    goto label_5ddce3
                
            label_5ddce3:
                sub_5de520(arg1)
                
                if (var_4ac != 0)
                label_5ddd11:
                    edx_10 = data_bac510
                label_5ddd1e:
                    void var_44
                    void** eax_30
                    void* result_2
                    int32_t var_4c8
                    
                    if (*(edx_10 + 0x10bd8) != 1)
                        result = *(arg1 + 0xe4)
                        
                        if (result s>= *(arg1 + 0x130))
                            result_2 = result_1
                            
                            if (result_2 == 0)
                                break
                            
                            eax_30 = sub_5df420(&var_44, edi_1, *sub_55d4d0(var_4b0, &var_4c8))
                            int32_t var_8_5 = 1
                        else
                        label_5ddd7f:
                            int32_t var_4a4
                            sub_5db1c0(&var_4a4)
                            int32_t var_8_2 = 2
                            int32_t eax_31 = *(arg1 + 0xfc)
                            void* edx_11 = data_bac4e4
                            int32_t var_4b8_1 = eax_31
                            
                            if (eax_31 == 0xffffffff)
                                int32_t eax_32
                                
                                if (*(edx_11 + 0x16c) != 0)
                                    eax_32 = *(arg1 + 0x164)
                                    var_4b8_1 = eax_32
                                
                                if (*(edx_11 + 0x16c) == 0 || eax_32 == 0xffffffff)
                                    var_4b8_1 = *(arg1 + 0x24)
                            
                            int32_t ecx_19 = *(arg1 + 0x100)
                            int32_t var_4c4_1 = ecx_19
                            
                            if (ecx_19 == 0xffffffff)
                                int32_t ecx_20
                                
                                if (*(edx_11 + 0x16c) != 0)
                                    ecx_20 = *(arg1 + 0x168)
                                    var_4c4_1 = ecx_20
                                
                                if (*(edx_11 + 0x16c) == 0 || ecx_20 == 0xffffffff)
                                    var_4c4_1 = *(arg1 + 0x28)
                            
                            int32_t eax_35 = *(arg1 + 0x104)
                            int32_t var_4a8_3 = eax_35
                            
                            if (eax_35 == 0xffffffff)
                                int32_t eax_36
                                
                                if (*(edx_11 + 0x16c) != 0)
                                    eax_36 = *(arg1 + 0x16c)
                                    var_4a8_3 = eax_36
                                
                                if (*(edx_11 + 0x16c) == 0 || eax_36 == 0xffffffff)
                                    var_4a8_3 = *(arg1 + 0x2c)
                            
                            int32_t edx_13 = *(arg1 + 0xec) + *(arg1 + 0xe4)
                            int32_t ecx_22 = *(arg1 + 0xe8) + *(arg1 + 0xe0)
                            bool cond:1_1 = var_4ac == 1
                            int32_t esi_7 = var_4b8_1
                            int32_t eax_38 = *(arg1 + 0xf0)
                            var_4c8 = 0
                            
                            if (cond:1_1)
                                esi_7 = var_4c8
                            
                            bool cond:2_1 = *(arg1 + 0x1a6) == 0
                            int32_t var_49c_1 = eax_38
                            int32_t var_498_1 = esi_7
                            var_4a4 = var_4ac
                            uint32_t esi_9 = var_4bc
                            int32_t var_494_1 = var_4c4_1
                            uint32_t var_4a0_1 = esi_9
                            int32_t var_490_1 = var_4a8_3
                            int32_t var_48c_1 = ecx_22
                            int32_t var_488_1 = edx_13
                            
                            if (not(cond:2_1))
                                *(arg1 + 0x180) = *(arg1 + 0xe0)
                                *(arg1 + 0x184) = *(arg1 + 0xe4)
                                *(arg1 + 0x1a6) = 0
                            
                            int32_t eax_45 = *(arg1 + 0xf4)
                            
                            if (*(data_bac510 + 0x10bd8) != 1)
                                *(arg1 + 0xe0) += eax_45 + eax_18
                            else
                                *(arg1 + 0xe4) += eax_45 + eax_18
                            
                            int32_t ecx_23 = var_4ac
                            
                            if (ecx_23 == 0
                                    && (esi_9 == 0x300c || esi_9 == 0x300e || esi_9 == 0xff08))
                                if (*(arg1 + 0x1a5) != 0)
                                    sub_5de760(arg1, esi_9.w)
                                    ecx_23 = var_4ac
                                else if (esi_9 == zx.d(*(arg1 + 0x174)))
                                    *(arg1 + 0x178) += 1
                            
                            int32_t eax_49 = *(arg1 + 0x178)
                            
                            if (eax_49 s> 0)
                                if (ecx_23 == 0)
                                    int16_t ecx_25 = *(arg1 + 0x174)
                                    
                                    if (ecx_25 == 0x300c && esi_9 == 0x300d)
                                        *(arg1 + 0x178) = eax_49 - 1
                                    
                                    if (ecx_25 == 0x300e && esi_9 == 0x300f)
                                        *(arg1 + 0x178) -= 1
                                    
                                    if (ecx_25 == 0xff08 && esi_9 == 0xff09)
                                        *(arg1 + 0x178) -= 1
                                
                                if (*(arg1 + 0x178) == 0)
                                    *(arg1 + 0x170) = 0
                                    *(arg1 + 0x174) = 0
                                    *(arg1 + 0x178) = 0
                            
                            if (*(arg1 + 0x1a7) != 0)
                                int32_t var_94
                                EnumC13Lines::EnumC13Lines(&var_94)
                                var_8_2.b = 3
                                
                                if (var_94 == 0xffffffff)
                                    sub_688a50(&var_94)
                                
                                int32_t eax_51 = *(arg1 + 0x194)
                                int32_t eax_52 = *(arg1 + 0x19c)
                                int32_t eax_53 = *(arg1 + 0x1a0)
                                int32_t var_ec = (*(arg1 + 0x1b0) - *(arg1 + 0x1ac)) s/ 0x3b4
                                void var_e8
                                sub_551b10(&var_e8, &var_94)
                                int32_t var_a4_1 = eax_51
                                int32_t var_a0_1 = eax_52
                                int32_t var_9c_1 = eax_53
                                var_8_2.b = 4
                                int32_t* eax_61
                                void* ecx_31
                                eax_61, ecx_31 = sub_5644a0(&var_ec)
                                int32_t* var_4e8_9 = eax_61
                                void* var_4ec_3 = &eax_61[4]
                                void** var_4d4
                                sub_5df050(arg1 + 0x1b8, &var_4d4, ecx_31)
                                var_8_2.b = 3
                                sub_67d400(&var_e8)
                                var_8_2.b = 2
                                sub_67d400(&var_94)
                            
                            sub_5b4a00(arg1 + 0x1ac, &var_4a4)
                            esi_5 = var_4b4
                            
                            if (var_4ac != 0)
                                int32_t var_18_1 = 7
                                int32_t var_1c_1 = 0
                                int16_t var_2c = 0
                                
                                if (edi_1 != esi_5)
                                    sub_52e720(&var_2c, edi_1, (esi_5 - edi_1) s>> 1)
                                
                                var_8_2.b = 5
                                sub_532870(arg1 + 0x134, &var_2c, 0, 0xffffffff)
                                
                                if (var_18_1 u>= 8)
                                    j__free(var_2c.d)
                                
                                int32_t var_18_2 = 7
                                int32_t var_1c_2 = 0
                                var_2c = 0
                            else
                                sub_5df3d0(arg1 + 0x134, var_4bc.w)
                            
                            *(arg1 + 0x1a5) = 0
                            int32_t var_8_3 = 7
                            void var_220
                            sub_6efc80(&var_220)
                            var_8_3.b = 6
                            void var_350
                            sub_6efc80(&var_350)
                            int32_t var_8_4 = 0xffffffff
                            void var_480
                            sub_6efc80(&var_480)
                            edi = var_4b0
                            continue
                    else
                        result = neg.d(*(arg1 + 0x12c))
                        
                        if (*(arg1 + 0xe0) s> result)
                            goto label_5ddd7f
                        
                        result_2 = result_1
                        
                        if (result_2 == 0)
                            break
                        
                        eax_30 = sub_5df420(&var_44, edi_1, *sub_55d4d0(var_4b0, &var_4c8))
                        int32_t var_8_1 = 0
                    
                    if (result_2 != eax_30)
                        sub_52e3c0(result_2, eax_30, 0, 0xffffffff)
                    
                    result = sub_52e8a0(&var_44)
                    break
                
                if (esi_6 != 0x20 && esi_6 != 0x3000)
                    goto label_5ddd11
            else if (esi_6 != 0)
                if (eax_11 != 0)
                    goto label_5ddc61
                
                int32_t eax_12 = data_b9c398
                
                if ((eax_12.b & 1) == 0)
                    data_b9c398 = eax_12 | 1
                    sub_6ad730()
                
                if (*(zx.d(esi_6.w) + 0xb9c3a0) != 1)
                    goto label_5ddc61
                
                int32_t eax_16
                int32_t edx_9
                edx_9:eax_16 = sx.q(*(arg1 + 0xf0))
                eax_18 = (eax_16 - edx_9) s>> 1
                goto label_5ddc67
            esi_5 = var_4b4
            edi = var_4b0
        else
            *(arg1 + 0x170) = 0
            *(arg1 + 0x174) = 0
            *(arg1 + 0x178) = 0
            sub_5de520(arg1)
            esi_5 = var_4b4
            edi = var_4b0
            *(arg1 + 0x1a5) = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
