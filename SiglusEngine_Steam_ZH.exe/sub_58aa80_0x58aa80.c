// 函数: sub_58aa80
// 地址: 0x58aa80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b74d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
int32_t __saved_esi
int32_t var_84 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 7
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64, 0xad9254, 4)
int32_t var_c_1 = 0
var_7c = 0
int32_t var_68 = 7
int32_t var_6c = 0
sub_52e720(&var_7c, u"Flag", 4)
var_c_1.b = 1
sub_590400(arg1, &var_7c, &var_64, 0x32)

if (var_68 u>= 8)
    j__free(var_7c.d)

int32_t var_c_2 = 0xffffffff
int32_t var_68_1 = 7
int32_t var_6c_1 = 0
var_7c = 0

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t var_50_1 = 7
int32_t var_54_1 = 0
var_64 = 0
sub_52e720(&var_64, 0xad92cc, 1)
int32_t var_c_3 = 2
int32_t var_68_2 = 7
int32_t var_6c_2 = 0
var_7c = 0
sub_52e720(&var_7c, u"value", 5)
var_c_3.b = 3
sub_590400(arg1, &var_7c, &var_64, 0x32)

if (var_68_2 u>= 8)
    j__free(var_7c.d)

int32_t var_c_4 = 0xffffffff
int32_t var_68_3 = 7
int32_t var_6c_3 = 0
var_7c = 0

if (var_50_1 u>= 8)
    j__free(var_64.d)

int32_t var_20 = 7
int32_t var_24 = 0
int16_t var_34 = 0
sub_52e720(&var_34, 0xaef6a0, 4)
int32_t var_c_5 = 4
int32_t var_38 = 7
int32_t var_3c = 0
int16_t var_4c = 0
sub_52e720(&var_4c, u"comment", 7)
var_c_5.b = 5
sub_590400(arg1, &var_4c, &var_34, 0x64)

if (var_38 u>= 8)
    j__free(var_4c.d)

int32_t result = 0
int32_t var_38_1 = 7
int32_t var_3c_1 = 0
var_4c = 0

if (var_20 u>= 8)
    result = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_7c)
return result
