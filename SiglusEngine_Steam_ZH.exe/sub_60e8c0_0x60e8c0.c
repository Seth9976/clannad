// 函数: sub_60e8c0
// 地址: 0x60e8c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be9f1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_dc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c8 = 0
int32_t var_bc
int16_t* eax_4 = sub_532b80(arg7, arg2, &var_bc, &data_ad900c)
int32_t var_8_1 = 0
int16_t var_8c
int16_t* eax_5 = sub_5327a0(eax_4, eax_4, &var_8c, arg4)
var_8_1.b = 1
int16_t var_a4
int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_a4, &data_ad900c)
var_8_1.b = 2
int16_t var_5c
int16_t* eax_7 = sub_5327a0(eax_6, eax_6, &var_5c, arg5)
var_8_1.b = 3
int16_t var_44
int16_t* eax_8 = sub_532b80(eax_7, eax_7, &var_44, &data_ad900c)
var_8_1.b = 4
int16_t var_2c
int16_t* eax_9 = sub_5327a0(eax_8, eax_8, &var_2c, arg6)
var_8_1.b = 5
int16_t var_74
int16_t* eax_10 = sub_532b80(eax_9, eax_9, &var_74, &data_ad7d2c)
var_8_1.b = 6
sub_5327a0(eax_10, eax_10, arg3, arg7)
int32_t var_60

if (var_60 u>= 8)
    j__free(var_74.d)

int32_t var_60_1 = 7
int32_t var_64 = 0
var_74 = 0
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
int32_t var_48

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_48_1 = 7
int32_t var_4c = 0
var_5c = 0
int32_t var_90

if (var_90 u>= 8)
    j__free(var_a4.d)

int32_t var_90_1 = 7
int32_t var_94 = 0
var_a4 = 0
int32_t var_78

if (var_78 u>= 8)
    j__free(var_8c.d)

int32_t var_78_1 = 7
int32_t var_7c = 0
var_8c = 0
int32_t var_a8

if (var_a8 u>= 8)
    j__free(var_bc)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
