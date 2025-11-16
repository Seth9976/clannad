// 函数: sub_572a60
// 地址: 0x572a60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b41f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_esi
int32_t eax_4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 7
int32_t var_3c = 0
var_4c = 0
sub_52e720(&var_4c, 0xaee29c, 6)
int32_t var_c_1 = 0
int32_t eax_6 = *(data_bac4e0 + 0x18)

if (eax_6 != 0)
    eax_6(*(arg1 + 0xe4), 0, &var_4c, eax_4)

int32_t var_c_2 = 0xffffffff

if (var_38 u>= 8)
    j__free(var_4c.d)

int32_t var_38_1 = 7
int32_t var_3c_1 = 0
var_4c = 0
sub_52e720(&var_4c, 0xaee2ac, 6)
int32_t var_c_3 = 1
int32_t eax_8 = *(data_bac4e0 + 0x18)

if (eax_8 != 0)
    eax_8(*(arg1 + 0xe4), 0, &var_4c, eax_4)

int32_t var_c_4 = 0xffffffff

if (var_38_1 u>= 8)
    j__free(var_4c.d)

int32_t var_38_2 = 7
int32_t var_3c_2 = 0
var_4c = 0
sub_52e720(&var_4c, 0xaee2bc, 7)
int32_t var_c_5 = 2
int32_t eax_10 = *(data_bac4e0 + 0x18)

if (eax_10 != 0)
    eax_10(*(arg1 + 0xe4), 0, &var_4c, eax_4)

int32_t var_c_6 = 0xffffffff

if (var_38_2 u>= 8)
    j__free(var_4c.d)

int32_t var_38_3 = 7
int32_t var_3c_3 = 0
var_4c = 0
sub_52e720(&var_4c, "\Omi", 6)
int32_t var_c_7 = 3
int32_t eax_12 = *(data_bac4e0 + 0x18)

if (eax_12 != 0)
    eax_12(*(arg1 + 0xe4), 0, &var_4c, eax_4)

int32_t var_c_8 = 0xffffffff

if (var_38_3 u>= 8)
    j__free(var_4c.d)

int32_t var_20 = 7
int32_t var_24 = 0
int16_t var_34 = 0
sub_52e720(&var_34, 0xaee2dc, 7)
int32_t var_c_9 = 4
int32_t result = *(data_bac4e0 + 0x18)

if (result != 0)
    result = result(*(arg1 + 0xe4), 0, &var_34, eax_4)

if (var_20 u>= 8)
    result = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_4c)
return result
