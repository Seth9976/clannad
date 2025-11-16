// 函数: sub_594bc0
// 地址: 0x594bc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b82c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_esi
int32_t var_8c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_80
sub_52e820(&var_80, u"db_wnd_info_proc_stack")
int32_t var_c_1 = 0

if (arg1 + 0x98 != &var_80)
    sub_52e3c0(arg1 + 0x98, &var_80, 0, 0xffffffff)

int32_t var_c_2 = 0xffffffff
*(arg1 + 0xb0) = 0x100
*(arg1 + 0xb4) = 0xffffffff
int32_t var_6c

if (var_6c u>= 8)
    j__free(var_80)

int32_t var_38 = 7
int32_t var_3c = 0
int16_t var_4c = 0
sub_52e720(&var_4c, &data_af03b0, 0xa)
int32_t var_c_3 = 1

if (arg1 + 0xbc != &var_4c)
    sub_52e3c0(arg1 + 0xbc, &var_4c, 0, 0xffffffff)

int32_t var_c_4 = 0xffffffff

if (var_38 u>= 8)
    j__free(var_4c.d)

int32_t var_20 = 7
int32_t var_24 = 0
int16_t var_34 = 0
sub_52e720(&var_34, 0xaf03c8, 4)
int32_t var_c_5 = 2
int32_t var_50 = 7
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64, u"proc", 4)
var_c_5.b = 3
sub_590400(arg1, &var_64, &var_34, 0xc8)

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t result = 0
int32_t var_50_1 = 7
int32_t var_54_1 = 0
var_64 = 0

if (var_20 u>= 8)
    result = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_84)
return result
