// 函数: sub_5483f0
// 地址: 0x5483f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_bac460
uint32_t result

if (arg3 != arg4)
    if (*arg3 != 0xffffffff)
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        int16_t var_30 = 0
        sub_52e720(&var_30, 0xad84dc, 0x1a)
        int32_t var_8_1 = 0
        sub_684160(data_bac424, 2, &var_30)
        
        if (var_1c_1 u>= 8)
            j__free(var_30.d)
    else
        result = sub_548970(ecx + 4, arg3[1], arg5[6].b)
        
        if (result != 0)
            if (&arg3[2] == arg4)
                arg5[5] = result
            else
                sub_5484e0(result, &arg3[2], arg2, arg4, arg5)
else if (ecx == 0)
    arg5[5] = 0
else
    arg5[5] = ecx + 4

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
