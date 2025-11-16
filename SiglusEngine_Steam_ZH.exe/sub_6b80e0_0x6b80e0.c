// 函数: sub_6b80e0
// 地址: 0x6b80e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30
int32_t var_48 = var_30
void** var_4c = arg1
sub_55d500(*arg2, arg2[1])
arg2[1] = *arg2
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
int32_t var_8_1 = 0
int32_t ebx

if (sub_6b7d10(arg1, &var_2c) != 0)
    sub_6ad780(&var_2c, arg2)
    ebx.b = 1
else
    ebx.b = 0

if (var_18 u>= 8)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return ebx.b
