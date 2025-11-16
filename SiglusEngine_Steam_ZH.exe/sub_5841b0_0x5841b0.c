// 函数: sub_5841b0
// 地址: 0x5841b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b6ffb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c4 = 0
int32_t var_4c = 7
int32_t var_50 = 0
int16_t var_60 = 0
int32_t var_8_1 = 0
int16_t var_48
int16_t var_30
int32_t var_1c
int16_t* ecx_11
int32_t ebx

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_1 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_11 = &var_30
    int32_t var_8_2 = 6
    ebx = 2
else
    int32_t eax_5 = *(arg3 + 0xa0)
    int32_t ecx_2
    
    if (eax_5 != 0)
        int16_t* ecx_5
        
        if (eax_5 == 1)
            int32_t var_7c_1 = 7
            int32_t var_80_1 = 0
            int16_t var_90 = 0
            sub_52e720(&var_90, 0xaef55c, 8)
            var_8_1.b = 2
            sub_52e3c0(&var_60, &var_90, 0, 0xffffffff)
            ecx_5 = &var_90
        else if (eax_5 != 2)
            int32_t var_ac_1 = 7
            int32_t var_b0_1 = 0
            int16_t var_c0 = 0
            sub_52e720(&var_c0, "\Pbk", 2)
            var_8_1.b = 4
            sub_52e3c0(&var_60, &var_c0, 0, 0xffffffff)
            ecx_5 = &var_c0
        else
            int32_t var_94_1 = 7
            int32_t var_98_1 = 0
            int16_t var_a8 = 0
            sub_52e720(&var_a8, 0xaef5ac, 9)
            var_8_1.b = 3
            sub_52e3c0(&var_60, &var_a8, 0, 0xffffffff)
            ecx_5 = &var_a8
        
        var_8_1.b = 0
        ecx_2 = sub_52e8a0(ecx_5)
    else
        int32_t var_64_1 = 7
        int32_t var_68_1 = eax_5
        int16_t var_78 = eax_5.w
        sub_52e720(&var_78, 0xaef570, 0xa)
        var_8_1.b = 1
        ecx_2 = sub_52e3c0(&var_60, &var_78, 0, 0xffffffff)
        var_8_1.b = 0
        
        if (var_64_1 u>= 8)
            ecx_2 = j__free(var_78.d)
    
    *(arg3 + 0xa4)
    int32_t var_e4_2 = ecx_2
    ecx_11 = sub_6ad9b0(&var_48)
    var_8_1.b = 5
    ebx = 1

int32_t var_c4_1 = ebx
int32_t eax_8 = *(data_bac4e0 + 0x34)

if (eax_8 != 0)
    ecx_11 = eax_8(*(arg2 + 4), *arg4, *arg5, ecx_11, eax_2)

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_c4_2 = ebx
    
    if (var_1c u>= 8)
        ecx_11 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_2 = 0
    var_30 = 0

int32_t var_8_3 = 0
int32_t var_34

if ((ebx.b & 1) != 0)
    ebx &= 0xfffffffe
    int32_t var_c4_3 = ebx
    
    if (var_34 u>= 8)
        ecx_11 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_1 = 0
    var_48 = 0

void* eax_9 = data_bac4e0
*arg6 += 1
int32_t eax_10 = *(eax_9 + 0x34)

if (eax_10 != 0)
    ecx_11 = eax_10(*(arg2 + 4), *arg4, *arg5, &var_60, eax_2)

*arg6 += 1
int16_t* ecx_20
int32_t ebx_1

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_3 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_20 = &var_30
    int32_t var_8_4 = 8
    ebx_1 = ebx | 8
else
    *(arg3 + 0xc4)
    int16_t* var_e4_7 = ecx_11
    ecx_20 = sub_6ad9b0(&var_48)
    var_8_3.b = 7
    ebx_1 = ebx | 4

int32_t var_c4_4 = ebx_1
int32_t eax_13 = *(data_bac4e0 + 0x34)

if (eax_13 != 0)
    ecx_20 = eax_13(*(arg2 + 4), *arg4, *arg5, ecx_20, eax_2)

if ((ebx_1.b & 8) != 0)
    ebx_1 &= 0xfffffff7
    int32_t var_c4_5 = ebx_1
    
    if (var_1c u>= 8)
        ecx_20 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_4 = 0
    var_30 = 0

int32_t var_8_5 = 0

if ((ebx_1.b & 4) != 0)
    ebx_1 &= 0xfffffffb
    int32_t var_c4_6 = ebx_1
    
    if (var_34 u>= 8)
        ecx_20 = j__free(var_48.d)

*arg6 += 1
int16_t* ecx_26
int32_t ebx_2

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_5 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_26 = &var_30
    int32_t var_8_6 = 0xa
    ebx_2 = ebx_1 | 0x20
else
    *(arg3 + 0xc8)
    int16_t* var_e4_11 = ecx_20
    ecx_26 = sub_6ad9b0(&var_48)
    var_8_5.b = 9
    ebx_2 = ebx_1 | 0x10

int32_t var_c4_7 = ebx_2
int32_t result = *(data_bac4e0 + 0x34)

if (result != 0)
    result = result(*(arg2 + 4), *arg4, *arg5, ecx_26, eax_2)

if ((ebx_2.b & 0x20) != 0)
    ebx_2 &= 0xffffffdf
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    result = 0
    int32_t var_1c_1 = 7
    int32_t var_20_6 = 0
    var_30 = 0

if ((ebx_2.b & 0x10) != 0 && var_34 u>= 8)
    result = j__free(var_48.d)

*arg6 += 1

if (var_4c u>= 8)
    result = j__free(var_60.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
