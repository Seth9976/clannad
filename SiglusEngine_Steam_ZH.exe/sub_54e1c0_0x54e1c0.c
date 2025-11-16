// 函数: sub_54e1c0
// 地址: 0x54e1c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1588
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_bac46c
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 != arg2)
    int32_t eax_3 = *arg1
    
    if (eax_3 == 0xffffffff)
        result = sub_54e520(edi + 4, arg1[1], *(arg3 + 0x18))
        
        if (result == 0)
            result = *(arg3 + 0x10)
            
            if (result == 0xa)
                sub_677bb0(0)
            else if (result == 0x14)
                int32_t var_34_1 = 7
                int32_t var_38_1 = 0
                int16_t var_48 = 0
                sub_52e720(&var_48, &data_ad7c90, nullptr)
                int32_t var_8_1 = 0
                sub_60c680(data_bac49c + 0xc, &var_48)
                sub_52e8a0(&var_48)
        else if (&arg1[2] != arg2)
            sub_54e390(result, &arg1[2], result, arg3)
        else
            *(arg3 + 0x14) = result
    else if (eax_3 != 1)
        int32_t var_60
        int16_t* eax_5 = sub_5483b0(edi + 4, &var_60)
        int32_t var_8_2 = 1
        int16_t var_30
        int16_t* eax_6 = sub_548cb0(eax_5, 0xad88a4, &var_30, eax_5)
        var_8_2.b = 2
        sub_684160(data_bac424, 2, eax_6)
        int32_t var_1c
        
        if (var_1c u>= 8)
            j__free(var_30.d)
        
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        var_30 = 0
        int32_t var_4c
        
        if (var_4c u>= 8)
            j__free(var_60)
    else
        int32_t edx_2
        edx_2:result = muls.dp.d(0x30c30c31, *(edi + 0xa8) - *(edi + 0xa4))
        int32_t edx_3 = edx_2 s>> 6
        int32_t i_1 = (edx_3 u>> 0x1f) + edx_3
        
        if (i_1 s> 0)
            int32_t ecx_9 = 0
            int32_t i
            
            do
                ecx_9 += 0x150
                *(ecx_9 + *(edi + 0xa4) - 4) = 0
                i = i_1
                i_1 -= 1
            while (i != 1)
else if (edi == 0)
    *(arg3 + 0x14) = 0
else
    *(arg3 + 0x14) = edi + 4

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
