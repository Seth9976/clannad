// 函数: sub_6adc60
// 地址: 0x6adc60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca7db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_90 = 0
int32_t var_8c
int16_t* eax_4 = sub_6ada50(&ExceptionList, arg5, &var_8c, 0xa)
int32_t var_8_1 = 0
int16_t var_74
int16_t* eax_5 = sub_6ada50(eax_4, arg4, &var_74, 0xa)
var_8_1.b = 1
int16_t var_44
int16_t* eax_6 = sub_548cb0(eax_5, 0xad94e4, &var_44, eax_5)
var_8_1.b = 2
int16_t var_2c
int16_t* eax_7 = sub_532b80(eax_6, eax_6, &var_2c, 0xaef4d4)
var_8_1.b = 3
int16_t var_5c
int16_t* eax_8 = sub_5327a0(eax_7, eax_7, &var_5c, eax_4)
var_8_1.b = 4
sub_532b80(eax_8, eax_8, arg3, &data_ad90a0)
int32_t var_48

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_48_1 = 7
int32_t var_4c = 0
var_5c = 0
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c = 0
var_2c = 0
int32_t var_30

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_30_1 = 7
int32_t var_34 = 0
var_44 = 0
int32_t var_60

if (var_60 u>= 8)
    j__free(var_74.d)

int32_t var_60_1 = 7
int32_t var_64 = 0
var_74 = 0
int32_t var_78

if (var_78 u>= 8)
    j__free(var_8c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
