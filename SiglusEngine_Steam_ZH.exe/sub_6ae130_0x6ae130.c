// 函数: sub_6ae130
// 地址: 0x6ae130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca91d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_138 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_128 = 0
int32_t var_120
int16_t* eax_3 = sub_6ad960(&var_120, arg4)
int32_t var_8_1 = 0
int16_t var_108
int16_t* eax_4 = sub_6ad960(&var_108, arg5)
var_8_1.b = 1
int16_t var_f0
int16_t* eax_5 = sub_6ad960(&var_f0, arg6)
var_8_1.b = 2
int16_t var_c0
int16_t* eax_6 = sub_6ad960(&var_c0, arg7)
var_8_1.b = 3
int16_t var_90
int16_t* eax_7 = sub_548cb0(eax_6, 0xad94e4, &var_90, eax_6)
var_8_1.b = 4
int16_t var_60
int16_t* eax_8 = sub_532b80(eax_7, eax_7, &var_60, 0xaef4d4)
var_8_1.b = 5
int16_t var_30
int16_t* eax_9 = sub_5327a0(eax_8, eax_8, &var_30, eax_5)
var_8_1.b = 6
int16_t var_48
int16_t* eax_10 = sub_532b80(eax_9, eax_9, &var_48, 0xaef4d4)
var_8_1.b = 7
int16_t var_a8
int16_t* eax_11 = sub_5327a0(eax_10, eax_10, &var_a8, eax_4)
var_8_1.b = 8
int16_t var_d8
int16_t* eax_12 = sub_532b80(eax_11, eax_11, &var_d8, 0xaef4d4)
var_8_1.b = 9
int16_t var_78
int16_t* eax_13 = sub_5327a0(eax_12, eax_12, &var_78, eax_3)
var_8_1.b = 0xa
sub_532b80(eax_13, eax_13, arg3, &data_ad90a0)
int32_t var_64

if (var_64 u>= 8)
    j__free(var_78.d)

int32_t var_64_1 = 7
int32_t var_68 = 0
var_78 = 0
int32_t var_c4

if (var_c4 u>= 8)
    j__free(var_d8.d)

int32_t var_c4_1 = 7
int32_t var_c8 = 0
var_d8 = 0
int32_t var_94

if (var_94 u>= 8)
    j__free(var_a8.d)

int32_t var_94_1 = 7
int32_t var_98 = 0
var_a8 = 0
int32_t var_34

if (var_34 u>= 8)
    j__free(var_48.d)

int32_t var_34_1 = 7
int32_t var_38 = 0
var_48 = 0
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t var_1c_1 = 7
int32_t var_20 = 0
var_30 = 0
int32_t var_4c

if (var_4c u>= 8)
    j__free(var_60.d)

int32_t var_4c_1 = 7
int32_t var_50 = 0
var_60 = 0
int32_t var_7c

if (var_7c u>= 8)
    j__free(var_90.d)

int32_t var_7c_1 = 7
int32_t var_80 = 0
var_90 = 0
int32_t var_ac

if (var_ac u>= 8)
    j__free(var_c0.d)

int32_t var_ac_1 = 7
int32_t var_b0 = 0
var_c0 = 0
int32_t var_dc

if (var_dc u>= 8)
    j__free(var_f0.d)

int32_t var_dc_1 = 7
int32_t var_e0 = 0
var_f0 = 0
int32_t var_f4

if (var_f4 u>= 8)
    j__free(var_108.d)

int32_t var_f4_1 = 7
int32_t var_f8 = 0
var_108 = 0
int32_t var_10c

if (var_10c u>= 8)
    j__free(var_120)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
