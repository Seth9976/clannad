// 函数: sub_569db0
// 地址: 0x569db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (arg4 != arg5)
    int32_t eax_3 = *arg4
    
    if (eax_3 == 0xffffffff)
        result = sub_56a730(&arg3[1], arg4[1], arg6[6].b)
        
        if (result != 0)
            sub_569f50(result, arg2, result, &arg4[2], arg5, arg6)
    else if (eax_3 == 1)
        int32_t eax_5
        int32_t edx_1
        edx_1:eax_5 = muls.dp.d(0x6bca1af3, arg3[0x2a] - arg3[0x29])
        int32_t edx_2 = edx_1 s>> 8
        int32_t esi_3 = (edx_2 u>> 0x1f) + edx_2
        sub_56a930(arg3, esi_3 + 1)
        sub_677bb0(esi_3)
    else if (eax_3 != 2)
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        int16_t var_30 = 0
        sub_52e720(&var_30, 0xad9198, 0x1c)
        int32_t var_8_2 = 1
        sub_684160(data_bac424, 2, &var_30)
        sub_52e8a0(&var_30)
    else
        int32_t eax_7
        int32_t edx_3
        edx_3:eax_7 = muls.dp.d(0x6bca1af3, arg3[0x2a] - arg3[0x29])
        int32_t edx_4 = edx_3 s>> 8
        uint32_t eax_9 = edx_4 u>> 0x1f
        int32_t eax_10 = eax_9 + edx_4
        
        if (eax_9 != neg.d(edx_4))
            sub_56a930(arg3, sub_56a710(&arg3[1]) - 1)
        else
            int32_t var_34_1 = 7
            int32_t var_38_1 = eax_10
            int16_t var_48 = eax_10.w
            sub_52e720(&var_48, 0xad9158, 0x1f)
            int32_t var_8_1 = 0
            sub_684160(data_bac424, 7, &var_48)
            sub_52e8a0(&var_48)
else if (arg3 == 0)
    arg6[5] = 0
else
    arg6[5] = &arg3[1]

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
