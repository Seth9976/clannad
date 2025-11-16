// 函数: sub_60f460
// 地址: 0x60f460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
sub_52e720(&var_30, 0xaf3944, 3)
int32_t var_8_1 = 0
sub_60f150(&var_30, data_bac4d8 + 0x18, arg3, &var_30, arg2, arg4, 1)

if (var_1c u>= 8)
    j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
