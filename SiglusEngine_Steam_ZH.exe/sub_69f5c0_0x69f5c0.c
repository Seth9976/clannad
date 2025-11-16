// 函数: sub_69f5c0
// 地址: 0x69f5c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9a50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
int16_t* var_30 = arg1
*arg1 = 0
int32_t var_8_1 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
var_8_1.b = 1

if (arg1 != &var_2c)
    sub_52e3c0(arg1, &var_2c, 0, 0xffffffff)

if (var_18 u>= 8)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
