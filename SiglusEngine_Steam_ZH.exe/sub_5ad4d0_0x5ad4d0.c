// 函数: sub_5ad4d0
// 地址: 0x5ad4d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b3b50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_esi
int32_t var_5c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50
sub_52e820(&var_50, u"db_wnd_info_world")
int32_t var_c_1 = 0

if (arg1 + 0x98 != &var_50)
    sub_52e3c0(arg1 + 0x98, &var_50, 0, 0xffffffff)

int32_t var_c_2 = 0xffffffff
*(arg1 + 0xb0) = 0x100
*(arg1 + 0xb4) = 0xffffffff
int32_t var_3c

if (var_3c u>= 8)
    j__free(var_50)

int32_t var_20 = 7
int32_t var_24 = 0
int16_t var_34 = 0
sub_52e720(&var_34, &data_af1964, 6)
int32_t var_c_3 = 1
int32_t* result = &var_34

if (arg1 + 0xbc != &var_34)
    result = sub_52e3c0(arg1 + 0xbc, &var_34, 0, 0xffffffff)

if (var_20 u>= 8)
    result = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_54)
return result
