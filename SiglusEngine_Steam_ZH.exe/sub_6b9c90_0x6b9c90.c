// 函数: sub_6b9c90
// 地址: 0x6b9c90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb708
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 7
int32_t var_38 = 0
int16_t var_48 = 0
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
int32_t var_8_1 = 0
int32_t var_50 = arg3
int32_t var_4c = arg2

if (&var_30 != arg4)
    sub_52e3c0(&var_30, arg4, 0, 0xffffffff)

sub_6b9620(&var_50)

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t result = 0
int32_t var_1c_1 = 7
int32_t var_20_1 = 0
var_30 = 0

if (var_34 u>= 8)
    result = j__free(var_48.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
