// 函数: sub_553f50
// 地址: 0x553f50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b22b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg4 != arg5)
    int32_t eax_5 = *arg4
    
    if (eax_5 != 0xfffffffb)
        if (eax_5 == 0xffffffff)
            void* eax_9 = sub_556ed0(&arg3[1], arg4[1], arg6[6].b)
            
            if (eax_9 == 0)
                result = arg6[4]
                
                if (result == 0xa)
                    sub_677bb0(0)
                else if (result == 0x14)
                    int32_t var_50_1 = 7
                    int32_t var_54_1 = 0
                    int16_t var_64 = 0
                    sub_52e720(&var_64, &data_ad7c90, nullptr)
                    int32_t var_c_1 = 0
                    sub_60c680(data_bac49c + 0xc, &var_64)
                    sub_52e8a0(&var_64)
            else
                sub_554130(eax_9, arg2, eax_9, &arg4[2], arg5, arg6)
        else if (eax_5 == 4)
            sub_5570d0(arg3, *(arg6[1] + 8))
        else if (eax_5 != 3)
            void var_34
            int16_t* eax_12 = sub_5483b0(&arg3[1], &var_34)
            int32_t var_c_2 = 1
            void var_4c
            int16_t* eax_13 = sub_548cb0(eax_12, 0xad88a4, &var_4c, eax_12)
            var_c_2.b = 2
            sub_684160(data_bac424, 2, eax_13)
            sub_52e8a0(&var_4c)
            sub_52e8a0(&var_34)
        else
            sub_677bb0(sub_556ea0(&arg3[1]))
        
        result.b = 1
    else
        void* ecx_1 = arg3[0x28]
        result = *(ecx_1 + 0x80)
        
        if (result == 0x514)
            result = sub_560cb0(&arg4[1], arg2, ecx_1, &arg4[1], arg5, arg6)
        else if (result != 0x51e)
            result.b = 1
        else
            result = sub_554130(&arg4[1], arg2, ecx_1, &arg4[1], arg5, arg6)
else
    if (arg3 == 0)
        arg6[5] = 0
    else
        arg6[5] = &arg3[1]
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_6c)
return result
