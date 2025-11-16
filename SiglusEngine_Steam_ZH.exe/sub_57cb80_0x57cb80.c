// 函数: sub_57cb80
// 地址: 0x57cb80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b4cea
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_70 = 0
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
    int32_t var_8_2 = 1
    ebx = 2
else
    void* var_84_1 = arg3
    sub_5b8040(arg3)
    ecx_1 = sub_6ad9b0(&var_60)
    int32_t var_8_1 = 0
    ebx = 1

int32_t var_70_1 = ebx
int32_t eax_8 = *(data_bac4e0 + 0x34)

if (eax_8 != 0)
    eax_8(*(arg2 + 4), *arg4, *arg5, ecx_1, eax_2)

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_2 = 0
    var_30 = 0

int32_t var_8_3 = 0xffffffff
int32_t var_4c

if ((ebx.b & 1) != 0 && var_4c u>= 8)
    j__free(var_60)

*arg6 += 1
void* const eax_9

if (arg3 == 0)
    eax_9 = &data_ad7c90
else
    eax_9 = &data_aef4a0
    
    if (*(arg3 + 0xa0) == 0)
        eax_9 = &data_ad9270

sub_52e820(&var_30, eax_9)
int32_t var_8_4 = 2
int32_t eax_11 = *(data_bac4e0 + 0x34)

if (eax_11 != 0)
    eax_11(*(arg2 + 4), *arg4, *arg5, &var_30, eax_2)

int32_t var_8_5 = 0xffffffff

if (var_1c u>= 8)
    j__free(var_30.d)

*arg6 += 1
void* const eax_12

if (arg3 == 0)
    eax_12 = &data_ad7c90
else
    eax_12 = &data_aef4a4
    
    if (*(arg3 + 0xa1) == 0)
        eax_12 = &data_aef4ac

sub_52e820(&var_30, eax_12)
int32_t var_8_6 = 3
int32_t eax_14 = *(data_bac4e0 + 0x34)

if (eax_14 != 0)
    eax_14(*(arg2 + 4), *arg4, *arg5, &var_30, eax_2)

int32_t var_8_7 = 0xffffffff

if (var_1c u>= 8)
    j__free(var_30.d)

*arg6 += 1
void* const eax_15

if (arg3 == 0)
    eax_15 = &data_ad7c90
else
    eax_15 = &data_aef4bc
    
    if (*(arg3 + 0xa2) == 0)
        eax_15 = &data_aef4c8

int32_t var_48
sub_52e820(&var_48, eax_15)
int32_t var_8_8 = 4
int32_t result = *(data_bac4e0 + 0x34)

if (result != 0)
    result = result(*(arg2 + 4), *arg4, *arg5, &var_48, eax_2)

int32_t var_34

if (var_34 u>= 8)
    result = j__free(var_48)

*arg6 += 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
