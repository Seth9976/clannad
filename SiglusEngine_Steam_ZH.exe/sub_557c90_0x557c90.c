// 函数: sub_557c90
// 地址: 0x557c90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2528
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *arg6
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg4 != arg5)
    int32_t eax_3 = *arg4
    
    if (eax_3 == 0xffffffff)
        struct _EXCEPTION_REGISTRATION_RECORD** ecx_2 = sub_55bbc0(&arg3[1], arg4[1], arg6[6].b)
        
        if (ecx_2 == 0)
            result = arg6[4]
            
            if (result == 0xa)
                sub_677bb0(0)
            else if (result == 0x14)
                int32_t var_1c_1 = 7
                int32_t var_20_1 = 0
                int16_t var_30 = 0
                sub_52e720(&var_30, &data_ad7c90, nullptr)
                int32_t var_8_1 = 0
                sub_60c680(data_bac49c + 0xc, &var_30)
                sub_52e8a0(&var_30)
        else if (esi == 0)
            sub_677bb0(ecx_2[1])
        else if (esi == 1)
            ecx_2[1] = *(arg6[1] + 8)
    else if (eax_3 == 2)
        sub_55bdc0(arg3, *(arg6[1] + 8))
    else if (eax_3 != 8)
        void var_60
        int16_t* eax_10 = sub_5483b0(&arg3[1], &var_60)
        int32_t var_8_2 = 1
        void var_48
        int16_t* eax_11 = sub_548cb0(eax_10, 0xad88a4, &var_48, eax_10)
        var_8_2.b = 2
        sub_684160(data_bac424, 2, eax_11)
        sub_52e8a0(&var_48)
        sub_52e8a0(&var_60)
    else
        int32_t ebx_1
        
        if (esi != 0)
            ebx_1 = *(arg6[1] + 0x2d0)
        else
            ebx_1 = 0
        
        result = arg6[1]
        int32_t i = result[2]
        
        if (i s<= result[0x5b])
            void* ecx_8 = &arg3[1]
            void* var_64_1 = ecx_8
            
            do
                void* eax_9 = sub_55bbc0(ecx_8, i, arg6[6].b)
                
                if (eax_9 != 0)
                    *(eax_9 + 4) = ebx_1
                
                i += 1
                ecx_8 = var_64_1
            while (i s<= arg6[1][0x5b])
else if (arg3 == 0)
    arg6[5] = 0
else
    arg6[5] = &arg3[1]

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
