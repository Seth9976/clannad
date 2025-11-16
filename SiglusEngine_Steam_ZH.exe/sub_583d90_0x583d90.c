// 函数: sub_583d90
// 地址: 0x583d90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b6ee2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg4
int32_t* edx = arg5
int32_t var_dc = 0
int32_t* var_e4 = ecx
int32_t* var_e0 = edx
int32_t var_34 = 7
int32_t var_38 = 0
int16_t var_48 = 0
int32_t var_8_1 = 0

if (arg3 != 0)
    int32_t eax_3 = sub_55e1a0(arg3 + 0xf4)
    int16_t* ecx_4
    
    if (eax_3 == 1)
        eax_3.b = *(arg3 + 0xec)
        
        if (eax_3.b == 0)
            int32_t var_64_1 = 7
            int32_t var_68_1 = 0
            int16_t var_78 = 0
            sub_52e720(&var_78, 0xaef570, 0xa)
            var_8_1.b = 2
            sub_52e3c0(&var_48, &var_78, 0, 0xffffffff)
            ecx_4 = &var_78
        else
            int32_t var_4c_1 = 7
            int32_t var_50_1 = 0
            int16_t var_60 = 0
            sub_52e720(&var_60, 0xaef55c, 8)
            var_8_1.b = 1
            sub_52e3c0(&var_48, &var_60, 0, 0xffffffff)
            ecx_4 = &var_60
    else if (eax_3 != 2)
        int32_t var_c4_1 = 7
        int32_t var_c8_1 = 0
        int16_t var_d8 = 0
        sub_52e720(&var_d8, &data_ad7c90, nullptr)
        var_8_1.b = 4
        sub_52e3c0(&var_48, &var_d8, 0, 0xffffffff)
        ecx_4 = &var_d8
    else
        int32_t var_ac_1 = 7
        int32_t var_b0_1 = 0
        int16_t var_c0 = 0
        sub_52e720(&var_c0, 0xaef548, 8)
        var_8_1.b = 3
        sub_52e3c0(&var_48, &var_c0, 0, 0xffffffff)
        ecx_4 = &var_c0
    
    var_8_1.b = 0
    sub_52e8a0(ecx_4)
    edx = var_e0
    ecx = var_e4

int32_t eax_5 = *(data_bac4e0 + 0x34)

if (eax_5 != 0)
    eax_5(*(arg2 + 4), *ecx, *edx, &var_48, eax_2)

*arg6 += 1
int16_t var_a8
int32_t var_90
int16_t var_30
int32_t var_1c
int16_t* ecx_13
int32_t ebx_2

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_1 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_13 = &var_30
    int32_t var_8_3 = 7
    ebx_2 = 4
else
    var_8_1.b = 5
    int32_t var_dc_1 = 1
    ecx_13 = sub_6adbd0(&var_a8, sub_54edd0(arg3, &var_90))
    int32_t var_8_2 = 6
    ebx_2 = 3

int32_t var_dc_2 = ebx_2
int32_t eax_9 = *(data_bac4e0 + 0x34)

if (eax_9 != 0)
    ecx_13 = eax_9(*(arg2 + 4), *var_e4, *var_e0, ecx_13, eax_2)

if ((ebx_2.b & 4) != 0)
    ebx_2 &= 0xfffffffb
    int32_t var_dc_3 = ebx_2
    
    if (var_1c u>= 8)
        ecx_13 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_2 = 0
    var_30 = 0

if ((ebx_2.b & 2) != 0)
    ebx_2 &= 0xfffffffd
    int32_t var_dc_4 = ebx_2
    int32_t var_94
    
    if (var_94 u>= 8)
        ecx_13 = j__free(var_a8.d)
    
    int32_t var_94_1 = 7
    int32_t var_98_1 = 0
    var_a8 = 0

int32_t var_8_4 = 0
int32_t var_7c

if ((ebx_2.b & 1) != 0)
    ebx_2 &= 0xfffffffe
    int32_t var_dc_5 = ebx_2
    
    if (var_7c u>= 8)
        ecx_13 = j__free(var_90)

*arg6 += 1
int16_t* ecx_19
int32_t ebx_3

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_3 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_19 = &var_30
    int32_t var_8_5 = 9
    ebx_3 = ebx_2 | 0x10
else
    *(arg3 + 0xe0)
    int16_t* var_fc_7 = ecx_13
    ecx_19 = sub_6ad9b0(&var_90)
    var_8_4.b = 8
    ebx_3 = ebx_2 | 8

int32_t var_dc_6 = ebx_3
int32_t result = *(data_bac4e0 + 0x34)

if (result != 0)
    result = result(*(arg2 + 4), *var_e4, *var_e0, ecx_19, eax_2)

if ((ebx_3.b & 0x10) != 0)
    ebx_3 &= 0xffffffef
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    result = 0
    int32_t var_1c_1 = 7
    int32_t var_20_4 = 0
    var_30 = 0

if ((ebx_3.b & 8) != 0 && var_7c u>= 8)
    result = j__free(var_90)

*arg6 += 1

if (var_34 u>= 8)
    result = j__free(var_48.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
