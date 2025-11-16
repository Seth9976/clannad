// 函数: sub_560cb0
// 地址: 0x560cb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b2c70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg4 != arg5)
    int32_t eax_5 = *arg4
    
    if (eax_5 == 2)
        sub_553f50(&arg4[1], arg2, arg3 + 0xa0, &arg4[1], arg5, arg6)
    else if (eax_5 == 3)
        sub_54eeb0(&arg4[1], arg2, arg3 + 0x394, &arg4[1], arg5, arg6)
    else if (eax_5 == 6)
        sub_560e80(&arg4[1], arg2, arg3 + 0x25c, &arg4[1], arg5, arg6)
    else if (eax_5 == 5)
        sub_54ff60(&arg4[1], arg2, arg3 + 0x4cc, &arg4[1], arg5, arg6)
    else if (eax_5 == 8)
        sub_569db0(&arg4[1], arg2, arg3 + 0x6c4, &arg4[1], arg5, arg6)
    else if (eax_5 == 4)
        sub_5496f0(&arg4[1], arg2, arg3 + 0x77c, &arg4[1], arg5, arg6)
    else if (eax_5 == 7)
        sub_549ec0(&arg4[1], arg6, arg3 + 0x834, &arg4[1], arg5, arg6)
    else if (eax_5 == 0)
        sub_5570d0(arg3 + 0xa0, *(arg6[1] + 8))
    else if (eax_5 != 1)
        void var_34
        int16_t* eax_15 = sub_5483b0(arg3, &var_34)
        int32_t var_c_1 = 0
        int16_t* eax_16 = sub_548cb0(eax_15, 0xad88a4, &var_4c, eax_15)
        var_c_1.b = 1
        sub_684160(data_bac424, 2, eax_16)
        sub_52e8a0(&var_4c)
        sub_52e8a0(&var_34)
    else
        sub_5616f0(arg3 + 0x394, *(arg6[1] + 8))
else
    arg6[5] = arg3

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_4c)
return result
