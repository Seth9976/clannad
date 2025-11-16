// 函数: sub_550080
// 地址: 0x550080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1130
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg4 == arg5)
    arg6[5] = arg3
else if (*arg4 != 0)
    int32_t var_48
    int16_t* eax_4 = sub_5483b0(arg3, &var_48)
    int32_t var_8_1 = 0
    int16_t var_30
    int16_t* eax_5 = sub_548cb0(eax_4, 0xad890c, &var_30, eax_4)
    var_8_1.b = 1
    sub_684160(data_bac424, 2, eax_5)
    int32_t var_1c
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    var_30 = 0
    int32_t var_34
    
    if (var_34 u>= 8)
        j__free(var_48)
else
    sub_553f50(&arg4[1], arg2, arg3 + 0xa0, &arg4[1], arg5, arg6)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
