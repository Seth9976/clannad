// 函数: sub_6bef60
// 地址: 0x6bef60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbed1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_60 = 0
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0
int16_t* var_64 = arg1
sub_52e3c0(arg1, arg2, 0, 0xffffffff)
int32_t var_8_2 = 0
int32_t var_60_1 = 1
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, u"&amp;", 5)
int32_t var_8_3 = 1
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, 0xaf8b9c, 1)
var_8_3.b = 2
int16_t var_5c
int16_t* eax_5 = sub_6aed20(&var_2c, arg1, &var_5c, &var_2c, &var_44)
var_8_3.b = 3

if (arg1 != eax_5)
    sub_52e3c0(arg1, eax_5, 0, 0xffffffff)

int32_t var_48

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_48_1 = 7
int32_t var_4c = 0
var_5c = 0

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
var_8_3.b = 0
int32_t var_1c_1 = 0
var_2c = 0

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_30_1 = 7
int32_t var_34_1 = 0
var_44 = 0
sub_52e720(&var_44, u"&lt;", 4)
int32_t var_8_4 = 4
int32_t var_18_2 = 7
int32_t var_1c_2 = 0
var_2c = 0
sub_52e720(&var_2c, &(*U"/=?<")[3], 1)
var_8_4.b = 5
void** eax_7 = sub_6aed20(&var_2c, arg1, &var_5c, &var_2c, &var_44)
var_8_4.b = 6

if (arg1 != eax_7)
    sub_52e3c0(arg1, eax_7, 0, 0xffffffff)

if (var_48_1 u>= 8)
    j__free(var_5c.d)

int32_t var_48_2 = 7
int32_t var_4c_1 = 0
var_5c = 0

if (var_18_2 u>= 8)
    j__free(var_2c.d)

int32_t var_18_3 = 7
var_8_4.b = 0
int32_t var_1c_3 = 0
var_2c = 0

if (var_30_1 u>= 8)
    j__free(var_44.d)

int32_t var_30_2 = 7
int32_t var_34_2 = 0
var_44 = 0
sub_52e720(&var_44, u"&gt;", 4)
int32_t var_8_5 = 7
int32_t var_18_4 = 7
int32_t var_1c_4 = 0
var_2c = 0
sub_52e720(&var_2c, 0xb02dec, 1)
var_8_5.b = 8
void** eax_9 = sub_6aed20(&var_2c, arg1, &var_5c, &var_2c, &var_44)
var_8_5.b = 9

if (arg1 != eax_9)
    sub_52e3c0(arg1, eax_9, 0, 0xffffffff)

if (var_48_2 u>= 8)
    j__free(var_5c.d)

int32_t var_48_3 = 7
int32_t var_4c_2 = 0
var_5c = 0

if (var_18_4 u>= 8)
    j__free(var_2c.d)

int32_t var_18_5 = 7
int32_t var_1c_5 = 0
var_2c = 0

if (var_30_2 u>= 8)
    j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
