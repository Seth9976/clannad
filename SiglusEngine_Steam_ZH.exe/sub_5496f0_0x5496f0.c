// 函数: sub_5496f0
// 地址: 0x5496f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg4 != arg5)
    int32_t eax_3 = *arg4
    
    if (eax_3 == 0xffffffff)
        result = sub_54a4f0(&arg3[1], arg4[1], arg6[6].b)
        
        if (result != 0)
            sub_549820(result, arg2, result, &arg4[2], arg5, arg6)
    else if (eax_3 == 1)
        sub_54a6f0(arg3, arg6[1][2])
    else if (eax_3 != 2)
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        int16_t var_30 = 0
        sub_52e720(&var_30, 0xad862c, 0x1c)
        int32_t var_8_1 = 0
        sub_684160(data_bac424, 2, &var_30)
        sub_52e8a0(&var_30)
    else
        int32_t eax_6
        int32_t edx_3
        edx_3:eax_6 = muls.dp.d(0x51eb851f, arg3[0x2a] - arg3[0x29])
        int32_t edx_4 = edx_3 s>> 8
        sub_677bb0((edx_4 u>> 0x1f) + edx_4)
else if (arg3 == 0)
    arg6[5] = 0
else
    arg6[5] = &arg3[1]

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
