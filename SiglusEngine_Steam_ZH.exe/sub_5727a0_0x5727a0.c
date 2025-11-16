// 函数: sub_5727a0
// 地址: 0x5727a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b3746
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b4
int32_t eax_2 = __security_cookie ^ &var_b4
int32_t __saved_esi
int32_t var_bc = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_b0
sub_52e820(&var_b0, u"db_wnd_info_dir")
int32_t var_c_1 = 0

if (arg1 + 0x98 != &var_b0)
    sub_52e3c0(arg1 + 0x98, &var_b0, 0, 0xffffffff)

int32_t var_c_2 = 0xffffffff
*(arg1 + 0xb0) = 0x100
*(arg1 + 0xb4) = 0xffffffff
int32_t var_9c

if (var_9c u>= 8)
    j__free(var_b0)

int32_t var_50 = 7
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64, &data_aee288, 8)
int32_t var_c_3 = 1

if (arg1 + 0xbc != &var_64)
    sub_52e3c0(arg1 + 0xbc, &var_64, 0, 0xffffffff)

int32_t var_c_4 = 0xffffffff

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t var_20 = 7
int32_t var_24 = 0
int16_t var_34 = 0
sub_52e720(&var_34, 0xad92b4, 4)
int32_t var_c_5 = 2
int32_t var_68 = 7
int32_t var_6c = 0
int16_t var_7c = 0
sub_52e720(&var_7c, u"state", 5)
var_c_5.b = 3
sub_590400(arg1, &var_7c, &var_34, 0x64)

if (var_68 u>= 8)
    j__free(var_7c.d)

int32_t var_c_6 = 0xffffffff
int32_t var_68_1 = 7
int32_t var_6c_1 = 0
var_7c = 0

if (var_20 u>= 8)
    j__free(var_34.d)

int32_t var_38 = 7
int32_t var_3c = 0
int16_t var_4c = 0
sub_52e720(&var_4c, 0xad92cc, 1)
int32_t var_c_7 = 4
int32_t var_80 = 7
int32_t var_84 = 0
int16_t var_94 = 0
sub_52e720(&var_94, u"value", 5)
var_c_7.b = 5
sub_590400(arg1, &var_94, &var_4c, 0x64)

if (var_80 u>= 8)
    j__free(var_94.d)

int32_t result = 0
int32_t var_80_1 = 7
int32_t var_84_1 = 0
var_94 = 0

if (var_38 u>= 8)
    result = j__free(var_4c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_b4)
return result
