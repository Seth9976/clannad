// 函数: sub_582ed0
// 地址: 0x582ed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b6b06
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
int32_t var_8_1 = 0

if (arg3 != 0)
    int32_t eax_4 = *(arg3 + 0xa0) + 1
    
    if (eax_4 u<= 4)
        int16_t* ecx_2
        
        switch (eax_4)
            case 0
                int32_t var_64_1 = 7
                int32_t var_68_1 = 0
                int16_t var_78 = 0
                sub_52e720(&var_78, &data_ad7c90, nullptr)
                var_8_1.b = 1
                sub_52e3c0(&var_30, &var_78, 0, 0xffffffff)
                ecx_2 = &var_78
            case 1
                int32_t var_34_1 = 7
                int32_t var_38_1 = 0
                int16_t var_48 = 0
                sub_52e720(&var_48, 0xaef50c, 6)
                var_8_1.b = 2
                sub_52e3c0(&var_30, &var_48, 0, 0xffffffff)
                ecx_2 = &var_48
            case 2
                int32_t var_4c_1 = 7
                int32_t var_50_1 = 0
                int16_t var_60 = 0
                sub_52e720(&var_60, 0xaef51c, 6)
                var_8_1.b = 3
                sub_52e3c0(&var_30, &var_60, 0, 0xffffffff)
                ecx_2 = &var_60
            case 3
                int32_t var_7c_1 = 7
                int32_t var_80_1 = 0
                int16_t var_90 = 0
                sub_52e720(&var_90, 0xaef52c, 7)
                var_8_1.b = 4
                sub_52e3c0(&var_30, &var_90, 0, 0xffffffff)
                ecx_2 = &var_90
            case 4
                int32_t var_94_1 = 7
                int32_t var_98_1 = 0
                int16_t var_a8 = 0
                sub_52e720(&var_a8, 0xaef53c, 5)
                var_8_1.b = 5
                sub_52e3c0(&var_30, &var_a8, 0, 0xffffffff)
                ecx_2 = &var_a8
        
        var_8_1.b = 0
        sub_52e8a0(ecx_2)

int32_t result = *(data_bac4e0 + 0x34)

if (result != 0)
    result = result(*(arg2 + 4), *arg4, *arg5, &var_30, eax_2)

*arg6 += 1

if (var_1c u>= 8)
    result = j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
