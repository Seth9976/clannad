// 函数: ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_W_N@Z
// 地址: 0x60e410
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be97b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_98 = 0
int32_t var_90
int16_t* eax_4 = sub_532b80(&ExceptionList, arg2, &var_90, &data_ad900c)
int32_t var_8_1 = 0
int16_t var_78
int16_t* eax_5 = sub_5327a0(eax_4, eax_4, &var_78, arg4)
var_8_1.b = 1
int16_t var_60
int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_60, u"\gan\")
var_8_1.b = 2
int16_t var_30
int16_t* eax_7 = sub_5327a0(eax_6, eax_6, &var_30, arg5)
var_8_1.b = 3
int16_t var_48
int16_t* eax_8 = sub_532b80(eax_7, eax_7, &var_48, &data_ad7d2c)
var_8_1.b = 4
sub_5327a0(eax_8, eax_8, arg3, arg6)
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
int32_t var_64

if (var_64 u>= 8)
    j__free(var_78.d)

int32_t var_64_1 = 7
int32_t var_68 = 0
var_78 = 0
int32_t var_7c

if (var_7c u>= 8)
    j__free(var_90)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
