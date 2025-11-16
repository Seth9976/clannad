// 函数: sub_5c9a10
// 地址: 0x5c9a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t var_30
int16_t* eax_3 = sub_5b0600(arg2, &var_30)
int32_t var_8_1 = 0

if (arg1 + 0xac != eax_3)
    sub_52e3c0(arg1 + 0xac, eax_3, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t var_1c_1 = 7
int32_t var_20 = 0
var_30 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_5c9ac0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
