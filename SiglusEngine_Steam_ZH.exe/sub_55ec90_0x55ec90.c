// 函数: sub_55ec90
// 地址: 0x55ec90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg4 != arg5)
    if (*arg4 != 0xffffffff)
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        int16_t var_30 = 0
        sub_52e720(&var_30, 0xad8ea4, 0x1b)
        int32_t var_8_1 = 0
        sub_684160(data_bac424, 2, &var_30)
        
        if (var_1c_1 u>= 8)
            j__free(var_30.d)
    else
        result = sub_560660(arg3 + 4, arg4[1], arg6[6].b)
        
        if (result != 0)
            if (&arg4[2] != arg5)
                sub_55ed80(result, &arg4[2], result, arg6)
            else
                arg6[5] = result
else if (arg3 == 0)
    arg6[5] = 0
else
    arg6[5] = arg3 + 4

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
