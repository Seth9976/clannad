// 函数: sub_557680
// 地址: 0x557680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b24e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *arg7
uint32_t result

if (arg5 != arg6)
    int32_t eax_3 = *arg5
    
    if (eax_3 == 0xffffffff)
        int32_t edx_1 = arg5[1]
        
        if (arg2 - 1 u<= 0x1f)
            switch (arg2 + &jump_table_557b98[6]:3)
                case &lookup_table_557bb4
                    if (ecx == 0)
                        sub_677bb0(sub_5c2920(arg3, edx_1))
                    else if (ecx == 1)
                        sub_5c1ee0(arg3, edx_1, *(arg7[1] + 8))
                case &lookup_table_557bb4[1]
                    if (ecx == 0)
                        sub_677bb0(sub_5c2b10(arg3, edx_1))
                    else if (ecx == 1)
                        sub_5c20e0(arg3, edx_1, *(arg7[1] + 8))
                case &lookup_table_557bb4[3]
                    if (ecx == 0)
                        sub_677bb0(sub_5c2d10(arg3, edx_1))
                    else if (ecx == 1)
                        sub_5c22f0(arg3, edx_1, *(arg7[1] + 8))
                case &lookup_table_557bb4[7]
                    if (ecx == 0)
                        sub_677bb0(sub_5c2f10(arg3, edx_1))
                    else if (ecx == 1)
                        sub_5c2500(arg3, edx_1, *(arg7[1] + 8))
                case &lookup_table_557bb4[0xf]
                    if (ecx == 0)
                        sub_677bb0(sub_5c3110(arg3, edx_1))
                    else if (ecx == 1)
                        sub_5c2710(arg3, edx_1, *(arg7[1] + 8))
                case &lookup_table_557bb4[0x1f]
                    if (ecx == 0)
                        sub_677bb0(sub_557650(arg3, edx_1))
                    else if (ecx == 1)
                        sub_557630(arg3, edx_1, *(arg7[1] + 8))
    else if (eax_3 == 3)
        sub_557680(arg4, &arg5[1], arg6, arg7, eax_2)
    else if (eax_3 == 4)
        sub_557680(arg4, &arg5[1], arg6, arg7, eax_2)
    else if (eax_3 == 5)
        sub_557680(arg4, &arg5[1], arg6, arg7, eax_2)
    else if (eax_3 == 7)
        sub_557680(arg4, &arg5[1], arg6, arg7, eax_2)
    else if (eax_3 == 6)
        sub_557680(arg4, &arg5[1], arg6, arg7, eax_2)
    else if (eax_3 == 0xa)
        sub_55b2b0(arg3)
    else if (eax_3 == 2)
        sub_55b310(arg3, *(arg7[1] + 8))
    else if (eax_3 == 9)
        int32_t ecx_26 = 0
        
        if (arg2 - 1 u> 0x1f)
            sub_677bb0(ecx_26)
        else
            switch (arg2 + &jump_table_557bd4[6]:3)
                case &lookup_table_557bf0
                    sub_677bb0((*(arg3 + 0xa8) - *(arg3 + 0xa4)) s>> 2 << 5)
                case &lookup_table_557bf0[1]
                    sub_677bb0((*(arg3 + 0xa8) - *(arg3 + 0xa4)) s>> 2 << 4)
                case &lookup_table_557bf0[2], &lookup_table_557bf0[4], &lookup_table_557bf0[5], 
                        &lookup_table_557bf0[6], &lookup_table_557bf0[8], &lookup_table_557bf0[9], 
                        &lookup_table_557bf0[0xa], &lookup_table_557bf0[0xb], 
                        &lookup_table_557bf0[0xc], &lookup_table_557bf0[0xd], 
                        &lookup_table_557bf0[0xe], &lookup_table_557bf0[0x10], 
                        &lookup_table_557bf0[0x11], &lookup_table_557bf0[0x12], 
                        &lookup_table_557bf0[0x13], &lookup_table_557bf0[0x14], 
                        &lookup_table_557bf0[0x15], &lookup_table_557bf0[0x16], 
                        &lookup_table_557bf0[0x17], &lookup_table_557bf0[0x18], 
                        &lookup_table_557bf0[0x19], &lookup_table_557bf0[0x1a], 
                        &lookup_table_557bf0[0x1b], &lookup_table_557bf0[0x1c], 
                        &lookup_table_557bf0[0x1d], &lookup_table_557bf0[0x1e]
                    sub_677bb0(ecx_26)
                case &lookup_table_557bf0[3]
                    sub_677bb0((*(arg3 + 0xa8) - *(arg3 + 0xa4)) s>> 2 << 3)
                case &lookup_table_557bf0[7]
                    sub_677bb0((*(arg3 + 0xa8) - *(arg3 + 0xa4)) & 0xfffffffc)
                case &lookup_table_557bf0[0xf]
                    sub_677bb0(((*(arg3 + 0xa8) - *(arg3 + 0xa4)) s>> 2) * 2)
                case &lookup_table_557bf0[0x1f]
                    sub_677bb0((*(arg3 + 0xa8) - *(arg3 + 0xa4)) s>> 2)
    else if (eax_3 == 8)
        if (ecx != 0)
            ecx = *(arg7[1] + 0x2d0)
        
        result = arg7[1]
        int32_t var_48_1 = ecx
        int32_t i_2 = *(result + 8)
        
        if (i_2 s<= *(result + 0x16c))
            result = arg2 - 1
            uint32_t result_1 = result
            int32_t i = i_2
            
            do
                switch (result)
                    case 0
                        sub_5c1ee0(arg3, i, ecx)
                    case 1
                        sub_5c20e0(arg3, i, ecx)
                    case 3
                        sub_5c22f0(arg3, i, ecx)
                    case 7
                        sub_5c2500(arg3, i, ecx)
                    case 0xf
                        sub_5c2710(arg3, i, ecx)
                    case 0x1f
                        sub_557630(arg3, i, ecx)
                
                i += 1
                ecx = var_48_1
                result = result_1
            while (i s<= *(arg7[1] + 0x16c))
    else if (eax_3 != 1)
        void var_44
        int16_t* eax_31 = sub_5483b0(arg3 + 4, &var_44)
        int32_t var_8_1 = 0
        void var_2c
        int16_t* eax_32 = sub_548cb0(eax_31, 0xad88a4, &var_2c, eax_31)
        var_8_1.b = 1
        sub_684160(data_bac424, 2, eax_32)
        sub_52e8a0(&var_2c)
        sub_52e8a0(&var_44)
    else
        result = arg7[1]
        void* i_1 = result + 0x164
        uint32_t result_2 = *(result + 8)
        
        if (i_1 u< arg7[2])
            result = result_2
            int32_t ecx_56 = arg2 - 1
            int32_t var_48_2 = ecx_56
            
            do
                if (ecx_56 u<= 0x1f)
                    switch (ecx_56)
                        case 0
                            sub_5c1ee0(arg3, result_2, *(i_1 + 8))
                            ecx_56 = var_48_2
                        case 1
                            sub_5c20e0(arg3, result_2, *(i_1 + 8))
                            ecx_56 = var_48_2
                        case 3
                            sub_5c22f0(arg3, result_2, *(i_1 + 8))
                            ecx_56 = var_48_2
                        case 7
                            sub_5c2500(arg3, result_2, *(i_1 + 8))
                            ecx_56 = var_48_2
                        case 0xf
                            sub_5c2710(arg3, result_2, *(i_1 + 8))
                            ecx_56 = var_48_2
                        case 0x1f
                            sub_557630(arg3, result_2, *(i_1 + 8))
                            ecx_56 = var_48_2
                    
                    result = result_2
                
                i_1 += 0x164
                result += 1
                result_2 = result
            while (i_1 u< arg7[2])
else if (arg3 == 0)
    arg7[5] = 0
else
    arg7[5] = arg3 + 4

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
