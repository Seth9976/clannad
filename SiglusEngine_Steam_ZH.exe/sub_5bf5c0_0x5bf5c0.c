// 函数: sub_5bf5c0
// 地址: 0x5bf5c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb268
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_c0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x80) = 0x4ba
void arg_8
__builtin_memcpy(arg1, &arg_8, 0x80)

if (arg1 + 0x84 != arg2)
    sub_52e3c0(arg1 + 0x84, arg2, 0, 0xffffffff)

*(arg1 + 0x9c) = 0
int32_t var_1c = 7
int32_t var_20 = 0
void arg_88
__builtin_memcpy(arg1 + 0xa0, &arg_88, 0x80)
void* var_c4_2 = 7
int32_t* var_c8_2 = &boost::any::placeholder::`vftable'.vFunc_3
int16_t var_30 = 0
sub_52e720(&var_30, var_c8_2, var_c4_2)
int32_t var_8_1 = 0
int32_t var_34 = 1
int32_t var_b0[0xe]
__builtin_memcpy(&var_b0, &arg_8, 0x80)
var_b0[arg3] = 0
int32_t var_34_1 = var_34 + 1
int16_t* var_c4_3 = &var_30
void var_144
__builtin_memcpy(&var_144, &var_b0, 0x80)
sub_5b7f70(arg1 + 0x214, var_144)
int32_t var_8_2 = 0xffffffff

if (var_1c u>= 8)
    j__free(var_30.d)

*(arg1 + 0x120) = 0xffffffff
*(arg1 + 0x128) = 0
var_30 = 0
void* eax_5 = arg1 + 0x12c
*(arg1 + 0x124) = 0xffffffff
bool cond:0 = *(eax_5 + 0x14) u< 8
int32_t var_1c_1 = 7
int32_t var_20_1 = 0
*(eax_5 + 0x10) = 0

if (not(cond:0))
    eax_5 = *eax_5

*eax_5 = 0
void* eax_6 = arg1 + 0x144
bool cond:1 = *(eax_6 + 0x14) u< 8
*(eax_6 + 0x10) = 0

if (not(cond:1))
    eax_6 = *eax_6

*eax_6 = 0
int32_t result = sub_5c0790(arg1 + 0x15c)
*(arg1 + 0x2c8) = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
