// 函数: sub_54ff60
// 地址: 0x54ff60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1820
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg4 != arg5)
    int32_t eax_3 = *arg4
    
    if (eax_3 == 0xffffffff)
        result = sub_5508d0(&arg3[1], arg4[1], arg6[6].b)
        
        if (result != 0)
            sub_550080(result, arg2, result, &arg4[2], arg5, arg6)
    else if (eax_3 == 1)
        sub_550bd0(arg3)
        sub_550ad0(arg3, *(arg6[1] + 8))
    else if (eax_3 != 2)
        void var_30
        int16_t* eax_6 = sub_5483b0(&arg3[1], &var_30)
        int32_t var_8_1 = 0
        void var_48
        int16_t* eax_7 = sub_548cb0(eax_6, 0xad88c8, &var_48, eax_6)
        var_8_1.b = 1
        sub_684160(data_bac424, 2, eax_7)
        sub_52e8a0(&var_48)
        sub_52e8a0(&var_30)
    else
        sub_550bd0(arg3)
else if (arg3 == 0)
    arg6[5] = 0
else
    arg6[5] = &arg3[1]

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
