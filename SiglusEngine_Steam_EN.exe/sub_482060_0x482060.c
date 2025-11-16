// 函数: sub_482060
// 地址: 0x482060
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = sub_482470(arg2, 0)

if (eax_2 == 0xffffffff)
    void* eax_3 = &data_1b164b4
    int32_t var_218_1 = 0
    int32_t ecx_1 = 0
    
    while (*eax_3 != 0)
        ecx_1 += 1
        eax_3 += 0x58
        var_218_1 = ecx_1
        
        if (ecx_1 s>= 0x100)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0xffffffff
    
    if (ecx_1 u<= 0xff)
        char* ebx_1 = ecx_1 * 0x58 + &data_1b16490
        char var_214[0x20c]
        sub_4cfd70(&var_214, arg2)
        int32_t eax_6
        char* ecx_6
        eax_6, ecx_6 = sub_4c3960(&var_214, 0x619c14)
        char* var_260_1 = ecx_6
        int32_t var_264_1 = 0x1d
        char eax_7 = sub_4c5340(eax_6, &var_214, data_703180:8, &ebx_1[0x28], &ebx_1[0x2c], ecx_6)
        
        if (*(ebx_1 + 0x28) != 0)
            char* esi_2 = *(ebx_1 + 0x2c)
            int32_t eax_8 = sub_4d0fe0(eax_7, "ANM32", esi_2, 5)
            
            if (eax_8 == 0)
                *(ebx_1 + 0x30) = esi_2
                void* ecx_9 = *(ebx_1 + 0x30)
                
                if (*(ecx_9 + 8) != 0x100)
                    sub_481f90(var_218_1, eax_8 + 1)
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return 0xffffffff
                
                *(ebx_1 + 0x34) = &esi_2[0xb8]
                int32_t eax_10 = *(ecx_9 + 0x8c)
                uint32_t* var_24c = nullptr
                uint32_t var_248 = 0
                void* esi_4 = &esi_2[0xb8 + eax_10 * 0x60]
                *(ebx_1 + 0x38) = esi_4
                *(ebx_1 + 0x3c) = *(ecx_9 + 0x90) * 0x68 + esi_4
                void* eax_14
                eax_14.b = *(ecx_9 + 0x1c)
                
                if (eax_14.b != 0 && eax_14.b != 0x2a && eax_14.b != 0x3f)
                    sub_427370(eax_14, ecx_9 + 0x1c, &var_24c, arg3, 0, 1, 0, nullptr, 1, 0)
                
                int32_t i = 0
                
                if (*(*(ebx_1 + 0x30) + 0x94) s> 0)
                    int32_t* esi_6 = *(ebx_1 + 0x3c) + 4
                    
                    do
                        int32_t edx_4 = *esi_6
                        int32_t eax_16 = 0
                        
                        if (edx_4 s> 0)
                            void* ecx_15 = &esi_6[1]
                            
                            do
                                if (*ecx_15 == 0xffffffff)
                                    *esi_6 = eax_16
                                    break
                                
                                eax_16 += 1
                                ecx_15 += 4
                            while (eax_16 s< edx_4)
                        
                        i += 1
                        esi_6 = &esi_6[0x1e]
                    while (i s< *(*(ebx_1 + 0x30) + 0x94))
                
                int32_t i_1 = 0
                
                if (*(*(ebx_1 + 0x30) + 0x90) s> 0)
                    int32_t* esi_8 = *(ebx_1 + 0x38) + 4
                    
                    do
                        int32_t edx_5 = *esi_8
                        int32_t eax_19 = 0
                        
                        if (edx_5 s> 0)
                            void* ecx_16 = &esi_8[1]
                            
                            do
                                if (*ecx_16 == 0xffffffff)
                                    *esi_8 = eax_19
                                    break
                                
                                eax_19 += 1
                                ecx_16 += 4
                            while (eax_19 s< edx_5)
                        
                        i_1 += 1
                        esi_8 = &esi_8[0x1a]
                    while (i_1 s< *(*(ebx_1 + 0x30) + 0x90))
                
                int32_t var_238
                
                if (var_24c != 0 && var_238 != 2)
                    void* eax_21 = *(ebx_1 + 0x30)
                    int32_t edi_2 = 0
                    int32_t* esi_9 = *(ebx_1 + 0x34)
                    BOOL var_22c = 0
                    int32_t var_220 = 0
                    int32_t ecx_17 = *(eax_21 + 0x8c)
                    int32_t var_230 = 0
                    BOOL var_228 = 0
                    int32_t var_224 = 0
                    
                    if (ecx_17 s> 0)
                        int32_t eax_22 = ecx_17
                        
                        do
                            int32_t ecx_18 = *esi_9
                            
                            if (ecx_18 != 0 || esi_9[1] != ecx_18 || esi_9[2] != ecx_18
                                    || esi_9[3] != ecx_18)
                                int32_t* eax_23 = *(ebx_1 + 0x34)
                                int32_t edx_6 = 0
                                int32_t eax_29
                                
                                if (edi_2 s> 0)
                                    while (true)
                                        if (ecx_18 == *eax_23)
                                            if (esi_9[1] == eax_23[1] && esi_9[2] == eax_23[2]
                                                    && esi_9[3] == eax_23[3])
                                                break
                                            
                                            ecx_18 = *esi_9
                                        
                                        edx_6 += 1
                                        eax_23 = &eax_23[0x18]
                                        
                                        if (edx_6 s>= edi_2)
                                            goto label_482336
                                    
                                    eax_29 = eax_23[0x10]
                                
                                if (edi_2 s<= 0 || eax_29 == 0xffffffff)
                                label_482336:
                                    int32_t* var_260_2 = &var_220
                                    int32_t var_240
                                    void* var_23c
                                    void* eax_25 = sub_581fe0(&var_22c, var_240, var_248, var_23c, 
                                        nullptr, *esi_9, esi_9[1], esi_9[2], esi_9[3], 0, nullptr, 
                                        &var_22c)
                                    sub_4d24d0(eax_25, &var_228, &var_230, ecx_17, var_220, eax_25, 
                                        "AVG_OLDANM_CONVERT_DATA")
                                    sub_4d6c40(&var_22c, &var_220)
                                    esi_9[0x10] = var_224
                                    var_224 += 1
                                else
                                    esi_9[0x10] = eax_29
                                
                                eax_22 = ecx_17
                            else
                                esi_9[0x10] = 0xffffffff
                            
                            edi_2 += 1
                            esi_9 = &esi_9[0x18]
                        while (edi_2 s< eax_22)
                    
                    sub_4d6c40(&var_24c, &var_248)
                    *(ebx_1 + 0x40) = var_230
                    BOOL eax_27 = var_228
                    *(ebx_1 + 0x44) = eax_27
                    *(ebx_1 + 0x54) = 2
                    *(ebx_1 + 0x24) = 1
                    sub_4cfdf0(eax_27, arg2, ebx_1, 0x24)
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return var_218_1
                
                sub_4d6c40(&var_24c, &var_248)
        
        *(ebx_1 + 0x24) -= 1
        sub_4d6c40(&ebx_1[0x28], &ebx_1[0x2c])
        sub_4d6c40(&ebx_1[0x40], &ebx_1[0x44])
        sub_481ee0(var_218_1)
    
    eax_2 = 0xffffffff

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_2
