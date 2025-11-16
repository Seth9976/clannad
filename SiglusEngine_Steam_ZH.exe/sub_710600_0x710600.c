// 函数: sub_710600
// 地址: 0x710600
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1120
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_30
sub_6b3810(arg2, sub_70ee20(arg1 + 0x110, &var_30), nullptr, 0xffffffff)
int32_t var_8_2 = 0xffffffff
int32_t var_1c

if (var_1c u>= 0x10)
    j__free(var_30)

int32_t var_8_3 = 1
int32_t var_48
int32_t* result = sub_6b3810(arg2, sub_70f320(arg1 + 0x18c, &var_48), nullptr, 0xffffffff)
int32_t var_34

if (var_34 u>= 0x10)
    result = j__free(var_48)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
