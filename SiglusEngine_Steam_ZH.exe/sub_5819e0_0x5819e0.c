// 函数: sub_5819e0
// 地址: 0x5819e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b65d4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_94 = 0
int16_t var_78
int32_t var_60
int16_t var_30
int32_t var_1c
int16_t* ecx_1
int32_t ebx

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_1 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_1 = &var_30
    int32_t var_8_3 = 2
    ebx = 4
else
    int32_t var_8_1 = 0
    int32_t var_94_1 = 1
    ecx_1 = sub_6adbd0(&var_78, sub_5d8dd0(arg3, &var_60))
    int32_t var_8_2 = 1
    ebx = 3

int32_t var_94_2 = ebx
int32_t eax_8 = *(data_bac4e0 + 0x34)

if (eax_8 != 0)
    ecx_1 = eax_8(*(arg2 + 4), *arg4, *arg5, ecx_1, eax_2)

if ((ebx.b & 4) != 0)
    ebx &= 0xfffffffb
    int32_t var_94_3 = ebx
    
    if (var_1c u>= 8)
        ecx_1 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_2 = 0
    var_30 = 0

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_94_4 = ebx
    int32_t var_64
    
    if (var_64 u>= 8)
        ecx_1 = j__free(var_78.d)
    
    int32_t var_64_1 = 7
    int32_t var_68_1 = 0
    var_78 = 0

int32_t var_8_4 = 0xffffffff
int32_t var_4c

if ((ebx.b & 1) != 0)
    ebx &= 0xfffffffe
    int32_t var_94_5 = ebx
    
    if (var_4c u>= 8)
        ecx_1 = j__free(var_60)

*arg6 += 1
int16_t* ecx_7
int32_t ebx_1

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_3 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_7 = &var_30
    int32_t var_8_6 = 4
    ebx_1 = ebx | 0x10
else
    *(arg3 + 0x234)
    int16_t* var_b4_6 = ecx_1
    ecx_7 = sub_6ad9b0(&var_60)
    int32_t var_8_5 = 3
    ebx_1 = ebx | 8

int32_t var_94_6 = ebx_1
int32_t eax_11 = *(data_bac4e0 + 0x34)

if (eax_11 != 0)
    ecx_7 = eax_11(*(arg2 + 4), *arg4, *arg5, ecx_7, eax_2)

if ((ebx_1.b & 0x10) != 0)
    ebx_1 &= 0xffffffef
    int32_t var_94_7 = ebx_1
    
    if (var_1c u>= 8)
        ecx_7 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_4 = 0
    var_30 = 0

int32_t var_8_7 = 0xffffffff

if ((ebx_1.b & 8) != 0)
    ebx_1 &= 0xfffffff7
    int32_t var_94_8 = ebx_1
    
    if (var_4c u>= 8)
        ecx_7 = j__free(var_60)

*arg6 += 1
int16_t* ecx_13
int32_t ebx_2

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_5 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_13 = &var_30
    int32_t var_8_9 = 6
    ebx_2 = ebx_1 | 0x40
else
    *(arg3 + 0xf28)
    int16_t* var_b4_10 = ecx_7
    ecx_13 = sub_6ad9b0(&var_60)
    int32_t var_8_8 = 5
    ebx_2 = ebx_1 | 0x20

int32_t var_94_9 = ebx_2
int32_t eax_14 = *(data_bac4e0 + 0x34)

if (eax_14 != 0)
    eax_14(*(arg2 + 4), *arg4, *arg5, ecx_13, eax_2)

if ((ebx_2.b & 0x40) != 0)
    ebx_2 &= 0xffffffbf
    int32_t var_94_10 = ebx_2
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    int32_t var_20_6 = 0
    var_30 = 0

int32_t var_8_10 = 0xffffffff

if ((ebx_2.b & 0x20) != 0)
    ebx_2 &= 0xffffffdf
    int32_t var_94_11 = ebx_2
    
    if (var_4c u>= 8)
        j__free(var_60)

*arg6 += 1
int32_t var_90
int16_t var_48
int32_t var_34
int16_t* ecx_19
int32_t ebx_3

if (arg3 == 0)
    var_34 = 7
    int32_t var_38_1 = 0
    var_48 = 0
    sub_52e720(&var_48, &data_ad7c90, nullptr)
    ecx_19 = &var_48
    int32_t var_8_12 = 8
    ebx_3 = ebx_2 | 0x100
else
    ecx_19 = sub_6ad930(&var_90, *(arg3 + 0x1d8))
    int32_t var_8_11 = 7
    ebx_3 = ebx_2 | 0x80

int32_t var_94_12 = ebx_3
int32_t result = *(data_bac4e0 + 0x34)

if (result != 0)
    result = result(*(arg2 + 4), *arg4, *arg5, ecx_19, eax_2)

if ((ebx_3 & 0x100) != 0)
    ebx_3 &= 0xfffffeff
    
    if (var_34 u>= 8)
        j__free(var_48.d)
    
    result = 0
    int32_t var_34_1 = 7
    int32_t var_38_2 = 0
    var_48 = 0

int32_t var_7c

if (ebx_3.b s< 0 && var_7c u>= 8)
    result = j__free(var_90)

*arg6 += 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
