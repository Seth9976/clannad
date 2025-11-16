// 函数: sub_6bb7d0
// 地址: 0x6bb7d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cba18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_48 = arg1
int32_t* result_1 = arg2
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
int32_t var_8_1 = 0
int32_t* var_44
sub_6bb6f0(var_48, &var_44, result_1, &var_2c, arg4, arg5, arg6, arg7)

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t* ebx_1 = var_44
int32_t var_34
int32_t var_30
int32_t* result

if (var_34 != 0)
    int32_t* eax_5 = &var_44
    
    if (var_30 u>= 8)
        eax_5 = ebx_1
    
    void* eax_6 = eax_5 + (var_34 << 1)
    int32_t* ecx_3 = &var_44
    
    if (var_30 u>= 8)
        ecx_3 = ebx_1
    
    var_48 = ecx_3
    result = arg3
    
    if (sub_6af490(eax_6, &result_1, &var_48, eax_6) != 0)
        result = result_1
else
    result = arg3

if (var_30 u>= 8)
    j__free(ebx_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
