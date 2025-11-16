// 函数: sub_5f8860
// 地址: 0x5f8860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_58 = ebx
int32_t var_64 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *(arg1 + 0xa0)

if (ecx != 0xffffffff)
    int32_t eax_3 = arg2
    
    if (*(arg1 + 0xb3) != 0)
        eax_3 = arg3
    
    result = eax_3 + *(arg1 + 0xc4)
    *(arg1 + 0xc4) = result
    int16_t var_7c
    void* var_48
    int16_t var_2c
    
    if (ecx == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
        result -= *(arg1 + 0xcc)
        
        if (result_1 - *(arg1 + 0xcc) s>= 0)
            while (true)
                int32_t temp8_1 = *(arg1 + 0xc8)
                *(arg1 + 0xc8) += 1
                int32_t edi_1 = *(arg1 + 0xc8)
                int32_t var_4c_1 = 0
                *(arg1 + 0xc4) = 0
                
                if (temp8_1 + 1 s>= 0)
                    int32_t eax_4
                    int32_t edx_1
                    edx_1:eax_4 = muls.dp.d(0x38e38e39, *(arg1 + 0xbc) - *(arg1 + 0xb8))
                    int32_t edx_2 = edx_1 s>> 3
                    
                    if (edi_1 s< (edx_2 u>> 0x1f) + edx_2)
                        void* var_68_1 = 0xffffffff
                        int32_t var_18_1 = 7
                        int32_t var_1c_1 = 0
                        void** eax_9 = *(arg1 + 0xb8) + edi_1 * 0x24
                        int32_t var_6c_1 = 0
                        var_2c = 0
                        sub_52e3c0(&var_2c, eax_9, var_6c_1, var_68_1)
                        int32_t var_8_1 = 0
                        void* edi_2 = *(arg1 + 0xa4)
                        
                        if (edi_2 == 0xffffffff)
                            var_48 = edi_2
                            int32_t var_68_2 = 7
                            int32_t var_6c_2 = 0
                            var_7c = 0
                            sub_52e3c0(&var_7c, &var_2c, 0, edi_2)
                            sub_601740(data_bac468 + 0x194, &var_48, var_7c)
                            void* eax_10 = var_48
                            
                            if (eax_10 s>= 0)
                                void* ecx_9 = data_bac468 + 0x194
                                void* var_68_4 = ecx_9
                                var_4c_1 = sub_608080(sub_601f40(ecx_9, eax_10))
                        else if (edi_2 s>= 0)
                            void* eax_12 = data_bac468
                            
                            if (edi_2 s< (*(eax_12 + 0x2f4) - *(eax_12 + 0x2f0)) s/ 0x250)
                                int32_t var_68_5 = 7
                                int32_t var_6c_3 = 0
                                var_7c = 0
                                sub_52e3c0(&var_7c, &var_2c, 0, 0xffffffff)
                                sub_601ff0(*(arg1 + 0xa4) * 0x250 + *(data_bac468 + 0x2f0), 
                                    nullptr, 0, nullptr, *(arg1 + 0xa8), *(arg1 + 0xac), 
                                    *(arg1 + 0xb0), *(arg1 + 0xb1), *(arg1 + 0xb2), 0, var_7c)
                                void* ecx_17 = *(arg1 + 0xa4) * 0x250 + *(data_bac468 + 0x2f0)
                                void* var_68_6 = ecx_17
                                var_4c_1 = sub_608080(ecx_17 + 0xf4)
                        
                        int32_t ecx_18 = *(arg1 + 0xc8) * 9
                        int32_t eax_24 = *(arg1 + 0xb8)
                        int32_t* edi_4 = eax_24 + 0x1c + (ecx_18 << 2)
                        void** ebx_2 = eax_24 + ((ecx_18 + 6) << 2)
                        void** ecx_20 = ebx_2
                        
                        if (*edi_4 s< *ebx_2)
                            ecx_20 = edi_4
                        
                        int32_t edx_6 = 0
                        
                        if (*(arg1 + 0xb4) != 0)
                            edx_6 = var_4c_1
                        
                        void* ecx_22 = *ecx_20 + edx_6
                        bool cond:5_1 = *ebx_2 s< *edi_4
                        var_48 = ecx_22
                        
                        if (cond:5_1)
                            ebx_2 = edi_4
                        
                        void* edi_6 = *ebx_2 + edx_6
                        
                        if (edi_6 != ecx_22)
                            int32_t eax_27 = sub_746b2c()
                            void* ecx_23 = var_48
                            edi_6 = ecx_23 + mods.dp.d(sx.q(eax_27), edi_6 - ecx_23)
                        
                        int32_t var_8_2 = 0xffffffff
                        *(arg1 + 0xcc) = edi_6
                        
                        if (var_18_1 u>= 8)
                            j__free(var_2c.d)
                        
                        int32_t eax_30 = *(arg1 + 0xc4)
                        result = eax_30 - *(arg1 + 0xcc)
                        
                        if (eax_30 - *(arg1 + 0xcc) s< 0)
                            break
                        
                        continue
                
                result = sub_5f85b0(arg1)
                break
    else if (ecx == 1)
        struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
        result -= *(arg1 + 0xcc)
        
        if (result_2 - *(arg1 + 0xcc) s>= 0)
            int32_t eax_58
            
            do
                int32_t eax_31
                int32_t edx_9
                edx_9:eax_31 = muls.dp.d(0x38e38e39, *(arg1 + 0xbc) - *(arg1 + 0xb8))
                int32_t edx_10 = edx_9 s>> 3
                int32_t eax_33 = *(arg1 + 0xc8) + 1
                int32_t var_4c_2 = 0
                *(arg1 + 0xc4) = 0
                int32_t temp1_2 = mods.dp.d(sx.q(eax_33), (edx_10 u>> 0x1f) + edx_10)
                void* var_68_8 = 0xffffffff
                *(arg1 + 0xc8) = temp1_2
                int32_t var_18_2 = 7
                int32_t var_1c_2 = 0
                void** eax_37 = *(arg1 + 0xb8) + temp1_2 * 0x24
                int32_t var_6c_4 = 0
                var_2c = 0
                sub_52e3c0(&var_2c, eax_37, var_6c_4, var_68_8)
                int32_t var_8_3 = 1
                void* edi_8 = *(arg1 + 0xa4)
                
                if (edi_8 == 0xffffffff)
                    var_48 = edi_8
                    int32_t var_68_9 = 7
                    int32_t var_6c_5 = 0
                    var_7c = 0
                    sub_52e3c0(&var_7c, &var_2c, 0, edi_8)
                    sub_601740(data_bac468 + 0x194, &var_48, var_7c)
                    void* eax_38 = var_48
                    
                    if (eax_38 s>= 0)
                        void* ecx_36 = data_bac468 + 0x194
                        void* var_68_11 = ecx_36
                        var_4c_2 = sub_608080(sub_601f40(ecx_36, eax_38))
                else if (edi_8 s>= 0)
                    void* eax_40 = data_bac468
                    
                    if (edi_8 s< (*(eax_40 + 0x2f4) - *(eax_40 + 0x2f0)) s/ 0x250)
                        sub_536170(&var_7c, &var_2c)
                        sub_601ff0(*(arg1 + 0xa4) * 0x250 + *(data_bac468 + 0x2f0), nullptr, 0, 
                            nullptr, *(arg1 + 0xa8), *(arg1 + 0xac), *(arg1 + 0xb0), 
                            *(arg1 + 0xb1), *(arg1 + 0xb2), 0, var_7c)
                        void* ecx_44 = *(arg1 + 0xa4) * 0x250 + *(data_bac468 + 0x2f0)
                        void* var_68_12 = ecx_44
                        var_4c_2 = sub_608080(ecx_44 + 0xf4)
                
                int32_t ecx_45 = *(arg1 + 0xc8) * 9
                int32_t eax_52 = *(arg1 + 0xb8)
                void** edi_10 = eax_52 + 0x1c + (ecx_45 << 2)
                void** ebx_3 = eax_52 + ((ecx_45 + 6) << 2)
                void** ecx_47 = ebx_3
                
                if (*edi_10 s< *ebx_3)
                    ecx_47 = edi_10
                
                int32_t edx_16 = 0
                
                if (*(arg1 + 0xb4) != 0)
                    edx_16 = var_4c_2
                
                void* ecx_49 = *ecx_47 + edx_16
                bool cond:2_1 = *ebx_3 s< *edi_10
                var_48 = ecx_49
                
                if (cond:2_1)
                    ebx_3 = edi_10
                
                void* edi_12 = *ebx_3 + edx_16
                
                if (edi_12 != ecx_49)
                    int32_t eax_55 = sub_746b2c()
                    void* ecx_50 = var_48
                    edi_12 = ecx_50 + mods.dp.d(sx.q(eax_55), edi_12 - ecx_50)
                
                int32_t var_8_4 = 0xffffffff
                *(arg1 + 0xcc) = edi_12
                
                if (var_18_2 u>= 8)
                    j__free(var_2c.d)
                
                eax_58 = *(arg1 + 0xc4)
                result = eax_58 - *(arg1 + 0xcc)
            while (eax_58 - *(arg1 + 0xcc) s>= 0)
    else if (ecx == 2)
        struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result
        result -= *(arg1 + 0xcc)
        
        if (result_3 - *(arg1 + 0xcc) s>= 0)
            int32_t eax_98
            
            do
                int32_t ebx_5 = 0
                *(arg1 + 0xd0) = *(arg1 + 0xc8)
                int32_t eax_60
                int32_t edx_19
                edx_19:eax_60 = muls.dp.d(0x38e38e39, *(arg1 + 0xbc) - *(arg1 + 0xb8))
                int32_t var_4c_3 = 0
                int32_t edx_20 = edx_19 s>> 3
                int32_t edi_16 = (edx_20 u>> 0x1f) + edx_20
                int32_t edx_21 = 0
                
                if (edi_16 s> 0)
                    int32_t* ecx_54 = *(arg1 + 0xb8) + 0x20
                    
                    do
                        if (edx_21 != *(arg1 + 0xc8))
                            ebx_5 += *ecx_54 << 1
                        else
                            ebx_5 += *ecx_54
                        
                        edx_21 += 1
                        ecx_54 = &ecx_54[9]
                    while (edx_21 s< edi_16)
                
                int32_t edi_17 = 0
                void* edx_22
                
                if (ebx_5 != 0)
                    edx_22 = mods.dp.d(sx.q(sub_746b2c()), ebx_5)
                else
                    edx_22 = nullptr
                
                var_48 = edx_22
                
                if (edi_16 s> 0)
                    int32_t edx_24 = 0
                    int32_t ecx_55 = 0
                    
                    do
                        int32_t eax_65 = *(arg1 + 0xb8)
                        
                        if (ecx_55 != *(arg1 + 0xd0))
                            edi_17 += *(edx_24 + eax_65 + 0x20) << 1
                        else
                            edi_17 += *(edx_24 + eax_65 + 0x20)
                        
                        if (var_48 s< edi_17)
                            *(arg1 + 0xc8) = ecx_55
                            break
                        
                        ecx_55 += 1
                        edx_24 += 0x24
                    while (ecx_55 s< edi_16)
                
                int32_t eax_67 = *(arg1 + 0xc8)
                void* var_68_14 = 0xffffffff
                *(arg1 + 0xc4) = 0
                int32_t var_30_1 = 7
                int32_t var_34_1 = 0
                void** eax_69 = *(arg1 + 0xb8) + eax_67 * 0x24
                int32_t var_6c_6 = 0
                int16_t var_44 = 0
                sub_52e3c0(&var_44, eax_69, var_6c_6, var_68_14)
                int32_t var_8_5 = 2
                void* edi_18 = *(arg1 + 0xa4)
                
                if (edi_18 == 0xffffffff)
                    var_48 = edi_18
                    int32_t var_68_15 = 7
                    int32_t var_6c_7 = 0
                    var_7c = 0
                    sub_52e3c0(&var_7c, &var_44, 0, edi_18)
                    sub_601740(data_bac468 + 0x194, &var_48, var_7c)
                    void* edi_19 = var_48
                    
                    if (edi_19 s>= 0)
                        void* ebx_7 = data_bac468
                        int32_t eax_70
                        int32_t edx_25
                        edx_25:eax_70 = muls.dp.d(0x2f149903, *(ebx_7 + 0x240) - *(ebx_7 + 0x23c))
                        int32_t edx_26 = edx_25 s>> 6
                        int32_t* edi_21
                        
                        if ((edx_26 u>> 0x1f) + edx_26 s<= edi_19)
                            edi_21 = nullptr
                        else
                            edi_21 = edi_19 * 0x15c + *(ebx_7 + 0x23c)
                        
                        HANDLE ebx_8 = *edi_21
                        
                        if (ebx_8 != 0)
                            WaitForSingleObject(ebx_8, 0xffffffff)
                        
                        void* edi_22 = edi_21[0x48]
                        
                        if (edi_22 == 0)
                            var_4c_3 = 0
                        else
                            int32_t eax_75
                            int32_t edx_27
                            edx_27:eax_75 = sx.q(*(edi_22 + 8))
                            *(edi_22 + 0xc)
                            var_4c_3 = divs.dp.d(
                                sx.q(divs.dp.d(sx.q(*(edi_22 + 0x10)), 
                                    (((edx_27 & 7) + eax_75) s>> 3) * *(edi_22 + 4)) * 0x3e8), 
                                *(edi_22 + 0xc))
                        
                        if (ebx_8 != 0)
                            ReleaseSemaphore(ebx_8, 1, nullptr)
                else if (edi_18 s>= 0)
                    void* eax_82 = data_bac468
                    
                    if (edi_18 s< (*(eax_82 + 0x2f4) - *(eax_82 + 0x2f0)) s/ 0x250)
                        int32_t var_68_18 = 7
                        int32_t var_6c_10 = 0
                        var_7c = 0
                        sub_52e3c0(&var_7c, &var_44, 0, 0xffffffff)
                        sub_601ff0(*(arg1 + 0xa4) * 0x250 + *(data_bac468 + 0x2f0), nullptr, 0, 
                            nullptr, *(arg1 + 0xa8), *(arg1 + 0xac), *(arg1 + 0xb0), 
                            *(arg1 + 0xb1), *(arg1 + 0xb2), 0, var_7c)
                        void* ecx_72 = *(arg1 + 0xa4) * 0x250 + *(data_bac468 + 0x2f0)
                        void* var_68_19 = ecx_72
                        var_4c_3 = sub_608080(ecx_72 + 0xf4)
                
                int32_t edx_35 = *(arg1 + 0xc8) * 9
                int32_t ecx_75 = *(arg1 + 0xb8)
                int32_t* edi_24 = ecx_75 + 0x1c + (edx_35 << 2)
                int32_t* ebx_10 = ecx_75 + 0x18 + (edx_35 << 2)
                int32_t* ecx_76 = ebx_10
                
                if (*(ecx_75 + 0x1c + (edx_35 << 2)) s< *(ecx_75 + 0x18 + (edx_35 << 2)))
                    ecx_76 = edi_24
                
                int32_t edx_36 = 0
                
                if (*(arg1 + 0xb4) != 0)
                    edx_36 = var_4c_3
                
                int32_t ecx_78 = *ecx_76 + edx_36
                
                if (*ebx_10 s< *edi_24)
                    ebx_10 = edi_24
                
                int32_t edi_26 = *ebx_10 + edx_36
                
                if (edi_26 != ecx_78)
                    edi_26 = ecx_78 + mods.dp.d(sx.q(sub_746b2c()), edi_26 - ecx_78)
                
                int32_t var_8_6 = 0xffffffff
                *(arg1 + 0xcc) = edi_26
                
                if (var_30_1 u>= 8)
                    j__free(var_44.d)
                
                eax_98 = *(arg1 + 0xc4)
                result = eax_98 - *(arg1 + 0xcc)
            while (eax_98 - *(arg1 + 0xcc) s>= 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
