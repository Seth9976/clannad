// 函数: sub_584670
// 地址: 0x584670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b6de4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg4
int32_t* edx = arg5
int32_t var_b4 = 0
int32_t* var_ac = ecx
int32_t* var_b0 = edx
int32_t var_4c = 7
int32_t var_50 = 0
int16_t var_60 = 0
int32_t var_8_1 = 0

if (arg3 != 0)
    int32_t eax_3 = sub_601c40(arg3)
    
    if (eax_3 != 1)
        int16_t* ecx_6
        
        if (eax_3 != 2)
            int32_t var_7c_1 = 7
            int32_t var_80_1 = 0
            int16_t var_90 = 0
            sub_52e720(&var_90, &data_ad7c90, nullptr)
            var_8_1.b = 3
            sub_52e3c0(&var_60, &var_90, 0, 0xffffffff)
            ecx_6 = &var_90
        else
            int32_t var_64_1 = 7
            int32_t var_68_1 = 0
            int16_t var_78 = 0
            sub_52e720(&var_78, 0xaef548, 8)
            var_8_1.b = 2
            sub_52e3c0(&var_60, &var_78, 0, 0xffffffff)
            ecx_6 = &var_78
        
        var_8_1.b = 0
        sub_52e8a0(ecx_6)
    else
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        int16_t var_30 = 0
        sub_52e720(&var_30, 0xaef588, 2)
        var_8_1.b = 1
        sub_52e3c0(&var_60, &var_30, 0, 0xffffffff)
        var_8_1.b = 0
        
        if (var_1c_1 u>= 8)
            j__free(var_30.d)
        
        int32_t var_1c_2 = 7
        int32_t var_20_2 = 0
        var_30 = 0
    
    ecx = var_ac
    edx = var_b0

int32_t eax_5 = *(data_bac4e0 + 0x34)

if (eax_5 != 0)
    ecx = eax_5(*(arg2 + 4), *ecx, *edx, &var_60, eax_2)

*arg6 += 1
int32_t var_a8
int16_t var_48
int32_t var_34
int16_t* ecx_10
int32_t ebx_2

if (arg3 == 0)
    var_34 = 7
    int32_t var_38_1 = 0
    var_48 = 0
    sub_52e720(&var_48, &data_ad7c90, nullptr)
    ecx_10 = &var_48
    int32_t var_8_2 = 5
    ebx_2 = 2
else
    *(arg3 + 0xa4)
    int32_t* var_cc_3 = ecx
    ecx_10 = sub_6ad9b0(&var_a8)
    var_8_1.b = 4
    ebx_2 = 1

int32_t var_b4_1 = ebx_2
int32_t result = *(data_bac4e0 + 0x34)

if (result != 0)
    result = result(*(arg2 + 4), *var_ac, *var_b0, ecx_10, eax_2)

if ((ebx_2.b & 2) != 0)
    ebx_2 &= 0xfffffffd
    
    if (var_34 u>= 8)
        j__free(var_48.d)
    
    result = 0
    int32_t var_34_1 = 7
    int32_t var_38_2 = 0
    var_48 = 0

int32_t var_94

if ((ebx_2.b & 1) != 0 && var_94 u>= 8)
    result = j__free(var_a8)

*arg6 += 1

if (var_4c u>= 8)
    result = j__free(var_60.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
