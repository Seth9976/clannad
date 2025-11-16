// 函数: sub_55fcb0
// 地址: 0x55fcb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_bac464
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 != arg2)
    if (*arg1 != 0xffffffff)
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        int16_t var_30 = 0
        sub_52e720(&var_30, 0xad8f64, 0x1e)
        int32_t var_8_1 = 0
        sub_684160(data_bac424, 2, &var_30)
        
        if (var_1c_1 u>= 8)
            j__free(var_30.d)
    else
        result = sub_560860(ecx + 4, arg1[1], arg3[6].b)
        
        if (result != 0)
            if (&arg1[2] != arg2)
                sub_55fda0(result, &arg1[2], result, arg3)
            else
                arg3[5] = result
else if (ecx == 0)
    arg3[5] = 0
else
    arg3[5] = ecx + 4

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
