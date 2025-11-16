// 函数: sub_6c2db0
// 地址: 0x6c2db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc138
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c = 7
int32_t var_50 = 0
int16_t var_60 = 0
int32_t var_8_1 = 0
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
var_8_1.b = 1
sub_55d330(&var_60, 1, 0xa)
sub_55d330(&var_30, 1, 0xd)
sub_55d330(&var_30, 1, 0xa)
int16_t var_48
sub_6aed20(&var_60, arg2, &var_48, &var_60, &var_30)
var_8_1.b = 2
sub_6c1b50(arg1, &var_48)
int32_t var_34

if (var_34 u>= 8)
    j__free(var_48.d)

int32_t result = 0
int32_t var_34_1 = 7
int32_t var_38 = 0
var_48 = 0

if (var_1c u>= 8)
    result = j__free(var_30.d)

if (var_4c u>= 8)
    result = j__free(var_60.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
