// 函数: sub_5ad9d0
// 地址: 0x5ad9d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9b28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30
int32_t* ecx
int16_t* result = sub_5b0600(ecx, &var_30)
int32_t var_8_1 = 0

if (arg1 != result)
    result = sub_52e3c0(arg1, result, 0, 0xffffffff)

int32_t var_1c

if (var_1c u>= 8)
    result = j__free(var_30)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
