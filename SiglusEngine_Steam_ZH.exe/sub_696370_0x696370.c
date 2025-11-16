// 函数: sub_696370
// 地址: 0x696370
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8e9b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 7
void* const var_ac = nullptr
int32_t* var_b0 = &data_ad7c90
int32_t var_20 = 0
int16_t var_30 = 0
sub_52e720(&var_30, var_b0, var_ac)
void* const var_b0_1 = &data_ad90c0
int32_t var_8_1 = 0
int32_t var_b8 = *(arg1 + 0xa4dffc) + 1
void var_d0
sub_52e820(&var_d0, u"Gameexe.dat")
int16_t var_90
int16_t* eax_6 = sub_6ae4c0(&var_90, var_d0)
var_8_1.b = 1
int16_t var_78
int16_t* eax_7 = sub_5327a0(eax_6, eax_6, &var_78, arg1 + 0xa4e000)
var_8_1.b = 2
int16_t var_60
int16_t* eax_8 = sub_532b80(eax_7, eax_7, &var_60, var_b0_1)
var_8_1.b = 3
var_8_1.b = 4
int16_t var_48
sub_6b9da0(sub_5327a0(eax_8, eax_8, &var_48, arg2), &var_30)
int32_t var_34

if (var_34 u>= 8)
    j__free(var_48.d)

int32_t var_34_1 = 7
int32_t var_38 = 0
var_48 = 0
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
    j__free(var_90.d)

int32_t var_7c_1 = 7
int32_t var_80 = 0
var_90 = 0

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
