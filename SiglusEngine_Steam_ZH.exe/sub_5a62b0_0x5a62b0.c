// 函数: sub_5a62b0
// 地址: 0x5a62b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AAVios_base@2@DPADI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_cc = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x444) != 0)
    HWND hWnd = *(arg1 + 0x390)
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0x130c, 0, 0)
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    int16_t var_44 = 0
    sub_52e720(&var_44, 0xad7a70, 7)
    int32_t var_8_1 = 0
    LRESULT hWnd_1 = *(arg1 + 0x26c)
    
    if (hWnd_1 != 0)
        hWnd_1 = SendMessageW(hWnd_1, 0x147, 0, 0)
    
    int32_t edi_1 = arg2
    int32_t eax_3 = *((hWnd_1 << 2) + &data_ada7a0)
    void* ebx_1 = *(arg1 + 0x444)
    
    if (edi_1 s< 0 || var_34_1 == 0 || eax_3 s<= 0)
        result = sub_5a7c30(ebx_1)
    else
        int32_t eax_4 = *(ebx_1 + 0x2c)
        
        if (eax_4 == *(ebx_1 + 0x30))
            result = sub_5a7c30(ebx_1)
        else
            int32_t eax_5
            int32_t edx_1
            edx_1:eax_5 = muls.dp.d(0x38e38e39, *(ebx_1 + 0x30) - eax_4)
            int32_t edx_2 = edx_1 s>> 4
            
            if ((edx_2 u>> 0x1f) + edx_2 s<= 0)
                result = sub_5a7c30(ebx_1)
            else
                char eax_9 = sub_5a6c50(ebx_1 + 0x60)
                bool cond:0_1 = *(ebx_1 + 0x58) != 0
                int32_t* esi_1 = *(ebx_1 + 0x2c)
                bool var_ad_1 = edi_1 != esi_1[0xa]
                int32_t eax_10
                int32_t edx_3
                edx_3:eax_10 = muls.dp.d(0x38e38e39, *(ebx_1 + 0x30) - esi_1)
                int32_t edx_4 = edx_3 s>> 4
                int32_t ecx_8 = (edx_4 u>> 0x1f) + edx_4
                
                if (var_ad_1 != 0 && ecx_8 s>= 2)
                    int32_t eax_11 = 1
                    
                    if (ecx_8 - 1 s> 1)
                        void* edi_2 = &esi_1[0x12]
                        
                        while (true)
                            if (arg2 == *(edi_2 + 0x28))
                                sub_5a7b40(ebx_1)
                                sub_5a7be0(esi_1, edi_2 + 0x48)
                                edi_1 = arg2
                                break
                            
                            eax_11 += 1
                            edi_2 += 0x48
                            
                            if (eax_11 s>= ecx_8 - 1)
                                edi_1 = arg2
                                break
                
                char var_a5_1 = 0
                int32_t var_18_1 = 7
                int32_t var_1c_1 = 0
                int16_t var_2c = 0
                var_8_1.b = 1
                
                if (esi_1[0xa] != edi_1)
                    sub_5a7b40(ebx_1)
                    sub_5a88e0(esi_1)
                    void var_74
                    int16_t* eax_12 = sub_698170(data_bac45c, &var_74, edi_1)
                    var_8_1.b = 2
                    void var_5c
                    int16_t* eax_13 = sub_532b80(eax_12, data_bac4e4 + 0x1a0, &var_5c, &data_ad900c)
                    var_8_1.b = 3
                    void var_8c
                    int16_t* eax_14 = sub_5327a0(eax_13, eax_13, &var_8c, eax_12)
                    var_8_1.b = 4
                    void var_a4
                    int16_t* eax_15 = sub_532b80(eax_14, eax_14, &var_a4, &data_af0494)
                    var_8_1.b = 5
                    
                    if (&var_2c != eax_15)
                        sub_52e3c0(&var_2c, eax_15, 0, 0xffffffff)
                    
                    sub_52e8a0(&var_a4)
                    sub_52e8a0(&var_8c)
                    sub_52e8a0(&var_5c)
                    var_8_1.b = 1
                    sub_52e8a0(&var_74)
                    sub_5a8950(esi_1, arg2)
                    var_a5_1 = 1
                
                if (*esi_1 != esi_1[1])
                    char eax_17 = sub_5a86f0(ebx_1 + 4, &var_44, eax_3)
                    int32_t temp0_1 = divs.dp.d(sx.q(*(ebx_1 + 0x14c)), *(ebx_1 + 0x28))
                    *(ebx_1 + 0x28)
                    
                    if (temp0_1 s> 0)
                        WPARAM edi_5
                        
                        if (temp0_1 s>= 8)
                            edi_5 = esi_1[0xf]
                        
                        if (temp0_1 s< 8 || edi_5 == 0xfffe7961)
                            edi_5 = arg3 - (temp0_1 s>> 1)
                        else
                            int32_t eax_21
                            int32_t edx_12
                            edx_12:eax_21 = sx.q(temp0_1)
                            int32_t eax_24 = ((eax_21 - edx_12) s>> 1) - 1
                            
                            if (eax_24 s< 4)
                                eax_24 = 4
                            else if (eax_24 s> 7)
                                eax_24 = 7
                            
                            int32_t edx_13 = edi_5 + eax_24
                            int32_t edx_15 = esi_1[0x10] - eax_24
                            
                            if (arg3 s< edx_13)
                                edi_5 = edi_5 - edx_13 + arg3
                            else if (arg3 s> edx_15)
                                edi_5 = edi_5 - edx_15 + arg3
                        
                        if (var_a5_1 != 0 || eax_17 != 0)
                            int32_t eax_29
                            int32_t edx_16
                            edx_16:eax_29 = muls.dp.d(0x2aaaaaab, esi_1[1] - *esi_1)
                            int32_t edi_10 = temp0_1 s>> 1
                            int32_t edx_17 = edx_16 s>> 2
                            sub_6c3730(ebx_1 + 0x160, neg.d(edi_10), 
                                (edx_17 u>> 0x1f) + edx_17 + edi_10, temp0_1)
                        
                        if (edi_5 != sub_6c37b0(ebx_1 + 0x160))
                            sub_6c3790(ebx_1 + 0x160, edi_5)
                        
                        esi_1[9] += 1
                        esi_1[0xa] = arg2
                        esi_1[0xb] = arg3
                        
                        if (var_ad_1 != 0)
                            esi_1[0xd] = arg3
                        
                        esi_1[0x10] = temp0_1 - 1 + edi_5
                        esi_1[0xf] = edi_5
                        esi_1[0x11] = temp0_1
                        WPARAM var_ac_3
                        
                        if (eax_9 == 0 && cond:0_1 == 0 && var_a5_1 == 0)
                            var_ac_3.b = 0
                        
                        if (eax_9 != 0 || cond:0_1 != 0 || var_a5_1 != 0 || eax_17 != 0)
                            var_ac_3.b = 1
                        
                        sub_5a8130(ebx_1, esi_1, var_ac_3.b)
                        *(ebx_1 + 0x38) = *(esi_1 + 0x28)
                        int128_t xmm0_2 = *(esi_1 + 0x38)
                        *(ebx_1 + 0x5c) = 0
                        *(ebx_1 + 0x58) = 0
                        *(ebx_1 + 0x48) = xmm0_2
                        result = sub_52e8a0(&var_2c)
                    else
                        sub_5a7c30(ebx_1)
                        result = sub_52e8a0(&var_2c)
                else
                    sub_5a7c30(ebx_1)
                    result = sub_52e8a0(&var_2c)
    
    if (var_30_1 u>= 8)
        result = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
