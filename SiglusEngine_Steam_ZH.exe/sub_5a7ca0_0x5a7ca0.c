// 函数: sub_5a7ca0
// 地址: 0x5a7ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@G@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg3 s< 0 || *(arg6 + 0x10) == 0 || arg7 s<= 0)
    result = sub_5a7c30(arg1)
else
    int32_t eax_4 = *(arg1 + 0x2c)
    
    if (eax_4 == *(arg1 + 0x30) || arg2 s< 0)
        result = sub_5a7c30(arg1)
    else
        int32_t eax_5
        int32_t edx_1
        edx_1:eax_5 = muls.dp.d(0x38e38e39, *(arg1 + 0x30) - eax_4)
        int32_t edx_2 = edx_1 s>> 4
        
        if (arg2 s>= (edx_2 u>> 0x1f) + edx_2)
            result = sub_5a7c30(arg1)
        else
            char eax_9 = sub_5a6c50(arg1 + 0x60)
            bool cond:0_1 = *(arg1 + 0x58) != arg2
            void* edi_1 = *(arg1 + 0x2c)
            int32_t* esi_2 = edi_1 + arg2 * 0x48
            char var_91_1
            
            if (arg2 == 0 && arg8 != 0)
                var_91_1 = 1
            
            if (arg2 != 0 || arg8 == 0 || arg3 == esi_2[0xa])
                var_91_1 = 0
            
            int32_t eax_12
            int32_t edx_3
            edx_3:eax_12 = muls.dp.d(0x38e38e39, *(arg1 + 0x30) - edi_1)
            int32_t edx_4 = edx_3 s>> 4
            int32_t ecx_8 = (edx_4 u>> 0x1f) + edx_4
            
            if (var_91_1 != 0 && ecx_8 s>= 2)
                int32_t i = 1
                
                if (ecx_8 - 1 s> 1)
                    void* edi_2 = edi_1 + 0x48
                    
                    do
                        if (arg3 == *(edi_2 + 0x28))
                            sub_5a7b40(arg1)
                            sub_5a7be0(esi_2, edi_2 + 0x48)
                            break
                        
                        i += 1
                        edi_2 += 0x48
                    while (i s< ecx_8 - 1)
            
            char var_92_1 = 0
            int32_t var_1c_1 = 7
            int32_t var_20_1 = 0
            int16_t var_30 = 0
            int32_t var_8_1 = 0
            
            if (esi_2[0xa] != arg3)
                sub_5a7b40(arg1)
                sub_5a88e0(esi_2)
                void var_78
                int16_t* eax_13 = sub_698170(data_bac45c, &var_78, arg3)
                var_8_1.b = 1
                void var_48
                int16_t* eax_14 = sub_532b80(eax_13, data_bac4e4 + 0x1a0, &var_48, &data_ad900c)
                var_8_1.b = 2
                void var_90
                int16_t* eax_15 = sub_5327a0(eax_14, eax_14, &var_90, eax_13)
                var_8_1.b = 3
                void var_60
                int16_t* eax_16 = sub_532b80(eax_15, eax_15, &var_60, &data_af0494)
                var_8_1.b = 4
                
                if (&var_30 != eax_16)
                    sub_52e3c0(&var_30, eax_16, 0, 0xffffffff)
                
                sub_52e8a0(&var_60)
                sub_52e8a0(&var_90)
                sub_52e8a0(&var_48)
                var_8_1.b = 0
                sub_52e8a0(&var_78)
                sub_5a8950(esi_2, arg3)
                var_92_1 = 1
            
            char eax_18
            int32_t temp0_1
            
            if (*esi_2 != esi_2[1])
                eax_18 = sub_5a86f0(arg1 + 4, arg6, arg7)
                temp0_1 = divs.dp.d(sx.q(*(arg1 + 0x14c)), *(arg1 + 0x28))
                *(arg1 + 0x28)
            
            if (*esi_2 != esi_2[1] && temp0_1 s> 0)
                WPARAM edi_6
                
                if (arg8 == 0)
                    edi_6 = arg4
                else
                    if (temp0_1 s>= 8)
                        edi_6 = esi_2[0xf]
                    
                    if (temp0_1 s< 8 || edi_6 == 0xfffe7961)
                        edi_6 = arg5 - (temp0_1 s>> 1)
                    else
                        int32_t eax_22
                        int32_t edx_12
                        edx_12:eax_22 = sx.q(temp0_1)
                        int32_t eax_25 = ((eax_22 - edx_12) s>> 1) - 1
                        
                        if (eax_25 s< 4)
                            eax_25 = 4
                        else if (eax_25 s> 7)
                            eax_25 = 7
                        
                        int32_t edx_13 = edi_6 + eax_25
                        int32_t edx_15 = esi_2[0x10] - eax_25
                        
                        if (arg5 s< edx_13)
                            edi_6 = edi_6 - edx_13 + arg5
                        else if (arg5 s> edx_15)
                            edi_6 = edi_6 - edx_15 + arg5
                
                if (var_92_1 != 0 || eax_18 != 0)
                    int32_t eax_30
                    int32_t edx_16
                    edx_16:eax_30 = muls.dp.d(0x2aaaaaab, esi_2[1] - *esi_2)
                    int32_t edi_11 = temp0_1 s>> 1
                    int32_t edx_17 = edx_16 s>> 2
                    sub_6c3730(arg1 + 0x160, neg.d(edi_11), (edx_17 u>> 0x1f) + edx_17 + edi_11, 
                        temp0_1)
                
                if (edi_6 != sub_6c37b0(arg1 + 0x160))
                    sub_6c3790(arg1 + 0x160, edi_6)
                
                if (arg8 != 0)
                    esi_2[9] += 1
                
                esi_2[0xa] = arg3
                
                if (arg8 != 0)
                    esi_2[0xb] = arg5
                
                if (var_91_1 != 0)
                    esi_2[0xd] = arg5
                
                esi_2[0x10] = temp0_1 - 1 + edi_6
                esi_2[0xf] = edi_6
                esi_2[0x11] = temp0_1
                int32_t var_9c
                
                if (eax_9 == 0 && cond:0_1 == 0 && var_92_1 == 0)
                    var_9c.b = 0
                
                if (eax_9 != 0 || cond:0_1 != 0 || var_92_1 != 0 || eax_18 != 0)
                    var_9c.b = 1
                
                sub_5a8130(arg1, esi_2, var_9c.b)
                *(arg1 + 0x38) = *(esi_2 + 0x28)
                int128_t xmm0_2 = *(esi_2 + 0x38)
                *(arg1 + 0x5c) = 0
                *(arg1 + 0x58) = arg2
                *(arg1 + 0x48) = xmm0_2
                result = sub_52e8a0(&var_30)
            else
                sub_5a7c30(arg1)
                result = sub_52e8a0(&var_30)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
