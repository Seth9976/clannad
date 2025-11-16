// 函数: sub_6adde0
// 地址: 0x6adde0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca87d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_134 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_124 = 0
int32_t var_11c
int16_t* eax_4 = sub_6ada50(&ExceptionList, arg7, &var_11c, 0xa)
int32_t var_8_1 = 0
int16_t var_104
int16_t* eax_5 = sub_6ada50(eax_4, arg6, &var_104, 0xa)
var_8_1.b = 1
int16_t var_ec
int16_t* eax_6 = sub_6ada50(eax_5, arg5, &var_ec, 0xa)
var_8_1.b = 2
int16_t var_bc
int16_t* eax_7 = sub_6ada50(eax_6, arg4, &var_bc, 0xa)
var_8_1.b = 3
int16_t var_8c
int16_t* eax_8 = sub_548cb0(eax_7, 0xad94e4, &var_8c, eax_7)
var_8_1.b = 4
int16_t var_5c
int16_t* eax_9 = sub_532b80(eax_8, eax_8, &var_5c, 0xaef4d4)
var_8_1.b = 5
int16_t var_2c
int16_t* eax_10 = sub_5327a0(eax_9, eax_9, &var_2c, eax_6)
var_8_1.b = 6
int16_t var_44
int16_t* eax_11 = sub_532b80(eax_10, eax_10, &var_44, u") - (")
var_8_1.b = 7
int16_t var_a4
int16_t* eax_12 = sub_5327a0(eax_11, eax_11, &var_a4, eax_5)
var_8_1.b = 8
int16_t var_d4
void** eax_13 = sub_532b80(eax_12, eax_12, &var_d4, 0xaef4d4)
var_8_1.b = 9
int16_t var_74
int16_t* eax_14 = sub_5327a0(eax_13, eax_13, &var_74, eax_4)
var_8_1.b = 0xa
sub_532b80(eax_14, eax_14, arg3, &data_ad90a0)
int32_t var_60

if (var_60 u>= 8)
    j__free(var_74.d)

int32_t var_60_1 = 7
int32_t var_64 = 0
var_74 = 0
int32_t var_c0

if (var_c0 u>= 8)
    j__free(var_d4.d)

int32_t var_c0_1 = 7
int32_t var_c4 = 0
var_d4 = 0
int32_t var_90

if (var_90 u>= 8)
    j__free(var_a4.d)

int32_t var_90_1 = 7
int32_t var_94 = 0
var_a4 = 0
int32_t var_30

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_30_1 = 7
int32_t var_34 = 0
var_44 = 0
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c = 0
var_2c = 0
int32_t var_48

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_48_1 = 7
int32_t var_4c = 0
var_5c = 0
int32_t var_78

if (var_78 u>= 8)
    j__free(var_8c.d)

int32_t var_78_1 = 7
int32_t var_7c = 0
var_8c = 0
int32_t var_a8

if (var_a8 u>= 8)
    j__free(var_bc.d)

int32_t var_a8_1 = 7
int32_t var_ac = 0
var_bc = 0
int32_t var_d8

if (var_d8 u>= 8)
    j__free(var_ec.d)

int32_t var_d8_1 = 7
int32_t var_dc = 0
var_ec = 0
int32_t var_f0

if (var_f0 u>= 8)
    j__free(var_104.d)

int32_t var_f0_1 = 7
int32_t var_f4 = 0
var_104 = 0
int32_t var_108

if (var_108 u>= 8)
    j__free(var_11c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
