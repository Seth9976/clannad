// 函数: sub_67d270
// 地址: 0x67d270
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7588
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_bc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_c0 = 0xd
int32_t var_18 = 7
wchar16 const* const var_c4 = u"bgmtable.flag"
int32_t var_1c = 0
int16_t var_2c = 0
int32_t var_c0_1 = sub_52e720(&var_2c, var_c4, var_c0)
int32_t var_8_1 = 0
int32_t var_c4_1 = 0
int32_t var_30 = 0
int32_t var_c8 = *(data_bac510 + 0xa4c75c)
int16_t* var_cc = &var_2c
void var_150
void var_ac
__builtin_memcpy(&var_150, &var_ac, 0x80)
int32_t result = sub_5c3640(arg1)

if (var_18 u>= 8)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
