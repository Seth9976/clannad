// 函数: sub_584be0
// 地址: 0x584be0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7144
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = 0
int32_t var_78
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
    ecx_1 = sub_6adbd0(&var_78, arg3 + 0x12c)
    int32_t var_8_1 = 0
    ebx = 1

int32_t var_7c_1 = ebx
int32_t eax_7 = *(data_bac4e0 + 0x34)

if (eax_7 != 0)
    eax_7(*(arg2 + 4), *arg4, *arg5, ecx_1, eax_2)

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_7c_2 = ebx
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    int32_t var_20_2 = 0
    var_30 = 0

int32_t var_8_3 = 0xffffffff

if ((ebx.b & 1) != 0)
    ebx &= 0xfffffffe
    int32_t var_7c_3 = ebx
    int32_t var_64
    
    if (var_64 u>= 8)
        j__free(var_78)

*arg6 += 1
int32_t var_60
int16_t var_48
int32_t var_34
int16_t* ecx_7
int32_t ebx_1

if (arg3 == 0)
    var_34 = 7
    int32_t var_38_1 = 0
    var_48 = 0
    sub_52e720(&var_48, &data_ad7c90, nullptr)
    ecx_7 = &var_48
    int32_t var_8_5 = 3
    ebx_1 = ebx | 8
else
    ecx_7 = sub_6adbd0(&var_60, arg3 + 0x144)
    int32_t var_8_4 = 2
    ebx_1 = ebx | 4

int32_t var_7c_4 = ebx_1
int32_t result = *(data_bac4e0 + 0x34)

if (result != 0)
    result = result(*(arg2 + 4), *arg4, *arg5, ecx_7, eax_2)

if ((ebx_1.b & 8) != 0)
    ebx_1 &= 0xfffffff7
    
    if (var_34 u>= 8)
        j__free(var_48.d)
    
    result = 0
    int32_t var_34_1 = 7
    int32_t var_38_2 = 0
    var_48 = 0

int32_t var_4c

if ((ebx_1.b & 4) != 0 && var_4c u>= 8)
    result = j__free(var_60)

*arg6 += 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
