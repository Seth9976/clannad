// 函数: sub_57db60
// 地址: 0x57db60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b512d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = 0
int32_t var_60
int16_t var_30
int32_t var_1c
int16_t* ecx_3
int32_t ebx

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_1 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_3 = &var_30
    int32_t var_8_2 = 1
    ebx = 2
else
    int32_t var_a4_1 = *(arg3 + 0x148) - *(arg3 + 0x144)
    ecx_3 = sub_6ad9b0(&var_60)
    int32_t var_8_1 = 0
    ebx = 1

int32_t var_7c_1 = ebx
int32_t eax_11 = *(data_bac4e0 + 0x34)

if (eax_11 != 0)
    eax_11(*(arg2 + 4), *arg4, *arg5, ecx_3, eax_2)

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_7c_2 = ebx
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_2 = 0
    var_30 = 0

int32_t var_8_3 = 0xffffffff
int32_t var_4c

if ((ebx.b & 1) != 0)
    ebx &= 0xfffffffe
    int32_t var_7c_3 = ebx
    
    if (var_4c u>= 8)
        j__free(var_60)

*arg6 += 1
int16_t* ecx_9
int32_t ebx_1

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_3 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_9 = &var_30
    int32_t var_8_5 = 3
    ebx_1 = ebx | 8
else
    int32_t var_a4_5 = *(arg3 + 0x304) - *(arg3 + 0x300)
    ecx_9 = sub_6ad9b0(&var_60)
    int32_t var_8_4 = 2
    ebx_1 = ebx | 4

int32_t var_7c_4 = ebx_1
int32_t eax_19 = *(data_bac4e0 + 0x34)

if (eax_19 != 0)
    eax_19(*(arg2 + 4), *arg4, *arg5, ecx_9, eax_2)

if ((ebx_1.b & 8) != 0)
    ebx_1 &= 0xfffffff7
    int32_t var_7c_5 = ebx_1
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_4 = 0
    var_30 = 0

int32_t var_8_6 = 0xffffffff

if ((ebx_1.b & 4) != 0)
    ebx_1 &= 0xfffffffb
    int32_t var_7c_6 = ebx_1
    
    if (var_4c u>= 8)
        j__free(var_60)

*arg6 += 1
int16_t* ecx_15
int32_t ebx_2

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_5 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_15 = &var_30
    int32_t var_8_8 = 5
    ebx_2 = ebx_1 | 0x20
else
    int32_t var_a4_9 = *(arg3 + 0x43c) - *(arg3 + 0x438)
    ecx_15 = sub_6ad9b0(&var_60)
    int32_t var_8_7 = 4
    ebx_2 = ebx_1 | 0x10

int32_t var_7c_7 = ebx_2
int32_t eax_27 = *(data_bac4e0 + 0x34)

if (eax_27 != 0)
    eax_27(*(arg2 + 4), *arg4, *arg5, ecx_15, eax_2)

if ((ebx_2.b & 0x20) != 0)
    ebx_2 &= 0xffffffdf
    int32_t var_7c_8 = ebx_2
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    int32_t var_20_6 = 0
    var_30 = 0

int32_t var_8_9 = 0xffffffff

if ((ebx_2.b & 0x10) != 0)
    ebx_2 &= 0xffffffef
    int32_t var_7c_9 = ebx_2
    
    if (var_4c u>= 8)
        j__free(var_60)

*arg6 += 1
int32_t var_78
int16_t var_48
int32_t var_34
int16_t* ecx_21
int32_t ebx_3

if (arg3 == 0)
    var_34 = 7
    int32_t var_38_1 = 0
    var_48 = 0
    sub_52e720(&var_48, &data_ad7c90, nullptr)
    ecx_21 = &var_48
    int32_t var_8_11 = 7
    ebx_3 = ebx_2 | 0x80
else
    int32_t var_a4_13 = *(arg3 + 0x8dc) - *(arg3 + 0x8d8)
    ecx_21 = sub_6ad9b0(&var_78)
    int32_t var_8_10 = 6
    ebx_3 = ebx_2 | 0x40

int32_t var_7c_10 = ebx_3
int32_t result = *(data_bac4e0 + 0x34)

if (result != 0)
    result = result(*(arg2 + 4), *arg4, *arg5, ecx_21, eax_2)

if (ebx_3.b s< 0)
    ebx_3 &= 0xffffff7f
    
    if (var_34 u>= 8)
        j__free(var_48.d)
    
    result = 0
    int32_t var_34_1 = 7
    int32_t var_38_2 = 0
    var_48 = 0

int32_t var_64

if ((ebx_3.b & 0x40) != 0 && var_64 u>= 8)
    result = j__free(var_78)

*arg6 += 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
