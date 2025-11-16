// 函数: sub_6ba960
// 地址: 0x6ba960
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t var_2c
sub_6b3e90(&var_2c, &arg1[8])
int32_t var_8_1 = 0
sub_6b4260(&var_2c)
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_60 = 7
int32_t var_64 = 0
int16_t var_74 = 0
int128_t var_5c
__builtin_memset(&var_5c, 0, 0x1a)
int32_t var_30 = 7
int32_t var_34 = 0
int32_t var_8_2 = 1
sub_52e3c0(&var_74, &data_4ebe3f8, 0, 0xffffffff)
sub_6ba770(arg1, &var_74)
int32_t var_18_1 = 7
int32_t var_1c = 0
var_2c = 0
var_8_2.b = 2
sub_6be940(&var_74, &var_2c, 0)
sub_6b8240(&arg1[8])

if (var_18_1 u>= 8)
    j__free(var_2c.d)

int16_t var_44

if (var_30 u>= 8)
    j__free(var_44.d)
int32_t var_30_1 = 7
int32_t var_34_1 = 0
int16_t var_44_1 = 0
sub_6bbbb0(&var_5c:0xc)
sub_6ba6f0(&var_74)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0
