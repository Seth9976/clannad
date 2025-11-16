// 函数: sub_62bfd0
// 地址: 0x62bfd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c0900
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_74
int16_t* eax_3 = sub_6b2fd0(&var_74)
int32_t var_8_1 = 0
int16_t var_44
int16_t* eax_4 = sub_548cb0(eax_3, &data_af43b4, &var_44, eax_3)
var_8_1.b = 1
int16_t var_2c
int16_t* eax_5 = sub_532b80(eax_4, eax_4, &var_2c, 0xaf4300)
var_8_1.b = 2
int16_t var_5c
int16_t* eax_6 = sub_5327a0(eax_5, eax_5, &var_5c, data_bac510 + 0x1c)
var_8_1.b = 3
sub_684160(data_bac424, 5, eax_6)
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

int32_t result = 0
int32_t var_30_1 = 7
int32_t var_34 = 0
var_44 = 0
int32_t var_60

if (var_60 u>= 8)
    result = j__free(var_74)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
