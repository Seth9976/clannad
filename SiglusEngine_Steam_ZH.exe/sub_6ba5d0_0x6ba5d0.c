// 函数: sub_6ba5d0
// 地址: 0x6ba5d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb7c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (&arg1[8] != arg2)
    sub_52e3c0(&arg1[8], arg2, 0, 0xffffffff)

int32_t var_4c = 7
int32_t var_50 = 0
int16_t var_60 = 0
int128_t var_48
__builtin_memset(&var_48, 0, 0x1a)
int32_t var_1c = 7
int32_t var_20 = 0
int32_t var_8_1 = 0
sub_6bdef0(&arg1[8], &var_60)
sub_6baaa0(arg1, &var_60)
int16_t var_30

if (var_1c u>= 8)
    j__free(var_30.d)
int32_t var_1c_1 = 7
int32_t var_20_1 = 0
int16_t var_30_1 = 0
sub_6bbbb0(&var_48:0xc)
sub_6ba6f0(&var_60)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0
