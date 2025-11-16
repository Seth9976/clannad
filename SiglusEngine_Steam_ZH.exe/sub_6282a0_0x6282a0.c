// 函数: sub_6282a0
// 地址: 0x6282a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c03f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
int32_t var_44
sub_6819f0(&var_44, arg2)
int32_t var_8_1 = 0
int16_t var_2c
int32_t* eax_3 = sub_6b4150(&var_2c, &var_44)
var_8_1.b = 1

if (&var_44 != eax_3)
    sub_52e3c0(&var_44, eax_3, 0, 0xffffffff)

var_8_1.b = 0
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c = 0
var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
var_8_1.b = 2
sub_626f80(&var_2c, data_bac4d8 + 0x48, arg1, &var_2c, &var_44, 0, 1, 0, 0)

if (var_18_1 u>= 8)
    j__free(var_2c.d)

int32_t var_18_2 = 7
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_30

if (var_30 u>= 8)
    j__free(var_44)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
