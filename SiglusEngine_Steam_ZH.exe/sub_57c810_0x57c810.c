// 函数: sub_57c810
// 地址: 0x57c810
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b4c72
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c = 0
int32_t var_48
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
    *arg3
    int32_t* var_6c_1 = arg3
    ecx_1 = sub_6ad9b0(&var_48)
    int32_t var_8_1 = 0
    ebx = 1

int32_t var_4c_1 = ebx
int32_t result = *(data_bac4e0 + 0x34)

if (result != 0)
    result = result(*(arg2 + 4), *arg4, *arg5, ecx_1, eax_2)

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    result = 0
    int32_t var_1c_1 = 7
    int32_t var_20_2 = 0
    var_30 = 0

int32_t var_34

if ((ebx.b & 1) != 0 && var_34 u>= 8)
    result = j__free(var_48)

*arg6 += 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
