// 函数: sub_57cdf0
// 地址: 0x57cdf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0ff8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30
int16_t* eax_4 = sub_54edd0(arg3, &var_30)
int32_t var_8_1 = 0
int32_t ecx_2 = *(data_bac4e0 + 0x34)

if (ecx_2 != 0)
    ecx_2 = ecx_2(*(arg2 + 4), *arg4, *arg5, eax_4, eax_2)

int32_t var_8_2 = 0xffffffff
int32_t var_1c

if (var_1c u>= 8)
    ecx_2 = j__free(var_30)

*arg6 += 1
int32_t var_64_3 = ecx_2
*(arg3 + 0xd0)
int16_t* eax_5 = sub_6ad9b0(&var_30)
int32_t var_8_3 = 1
int32_t ecx_5 = *(data_bac4e0 + 0x34)

if (ecx_5 != 0)
    ecx_5 = ecx_5(*(arg2 + 4), *arg4, *arg5, eax_5, eax_2)

int32_t var_8_4 = 0xffffffff

if (var_1c u>= 8)
    ecx_5 = j__free(var_30)

*arg6 += 1
int32_t var_64_6 = ecx_5
*(arg3 + 0xfc)
int32_t var_48
int16_t* result = sub_6ad9b0(&var_48)
int32_t var_8_5 = 2
int32_t ecx_8 = *(data_bac4e0 + 0x34)

if (ecx_8 != 0)
    result = ecx_8(*(arg2 + 4), *arg4, *arg5, result, eax_2)

int32_t var_34

if (var_34 u>= 8)
    result = j__free(var_48)

*arg6 += 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
