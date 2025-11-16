// 函数: sub_54eeb0
// 地址: 0x54eeb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b1700
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg4 != arg5)
    result = *arg4
    
    if (result != 0xfffffffb)
        if (result == 0xffffffff)
            result = sub_5506d0(arg3 + 4, arg4[1], arg6[6].b)
            
            if (result != 0)
                sub_54f010(result, arg2, result, &arg4[2], arg5, arg6)
        else if (result == 1 || result == 2)
            arg3.b = 1
            sub_64fb30(arg3.b)
        else if (result != 3)
            void var_34
            int16_t* eax_7 = sub_5483b0(arg3 + 4, &var_34)
            int32_t var_c_1 = 0
            void var_4c
            int16_t* eax_8 = sub_548cb0(eax_7, 0xad88a4, &var_4c, eax_7)
            var_c_1.b = 1
            sub_684160(data_bac424, 2, eax_8)
            sub_52e8a0(&var_4c)
            sub_52e8a0(&var_34)
        else
            arg3.b = 0
            sub_64fb30(arg3.b)
        
        result.b = 1
    else
        void* ecx_1 = *(arg3 + 0xa0)
        
        if (*(ecx_1 + 0x80) != 0x514)
            result.b = 1
        else
            result = sub_560cb0(&arg4[1], arg2, ecx_1, &arg4[1], arg5, arg6)
else
    if (arg3 == 0)
        arg6[5] = 0
    else
        arg6[5] = arg3 + 4
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_54)
return result
