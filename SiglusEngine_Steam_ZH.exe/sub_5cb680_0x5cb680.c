// 函数: sub_5cb680
// 地址: 0x5cb680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbb20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, u"playing", 7)
int32_t var_8_1 = 0
var_8_1.b = 1
int16_t var_44
sub_6b8240(sub_5c4880(&var_44))
int32_t var_30

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t result = 0
int32_t var_30_1 = 7
int32_t var_34 = 0
var_44 = 0

if (var_18 u>= 8)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
