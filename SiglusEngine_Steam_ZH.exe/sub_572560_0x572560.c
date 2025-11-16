// 函数: sub_572560
// 地址: 0x572560
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b14a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
sub_6c2ec0(arg1 + 0x148, &var_2c)
int32_t var_8_1 = 0
int32_t* ecx_2 = data_bac4e4 + 0x1a0

if (ecx_2 != &var_2c)
    sub_52e3c0(ecx_2, &var_2c, 0, 0xffffffff)

int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
