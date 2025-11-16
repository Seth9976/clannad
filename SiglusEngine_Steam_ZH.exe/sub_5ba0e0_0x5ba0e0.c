// 函数: sub_5ba0e0
// 地址: 0x5ba0e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9baca0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_178 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_3 = arg2
void** var_e4 = eax_3
*(arg1 + 0x80) = 0x6a4
void arg_8
__builtin_memcpy(arg1, &arg_8, 0x80)

if (arg1 + 0x84 != eax_3)
    sub_52e3c0(arg1 + 0x84, eax_3, 0, 0xffffffff)
    eax_3 = var_e4

int16_t* var_17c_2 = &C_tnm_editbox::`vftable'{for `NT3::Cc_edit'}.vFunc_2
*(arg1 + 0x9c) = 0
int32_t var_8_1 = 0
int32_t var_180_2 = 1
int32_t var_184_2 = 0
int32_t var_30
int16_t* var_188 = sub_532b80(eax_3, eax_3, &var_30, var_17c_2)
int32_t var_ec = 1
int32_t var_e0[0x1a]
__builtin_memcpy(&var_e0, &arg_8, 0x80)
var_e0[arg3] = 7
int32_t var_64
int32_t var_64_1 = var_64 + 1
void** var_20c
__builtin_memcpy(&var_20c, &var_e0, 0x80)
int32_t var_208
char var_204
int32_t eax_6 = sub_5c3640(arg1 + 0xa0, var_20c, var_208, var_204)
int32_t var_8_2 = 0xffffffff
int32_t var_1c

if (var_1c u>= 8)
    eax_6 = j__free(var_30)

int32_t var_8_3 = 1
int32_t var_180_3 = 1
int32_t var_184_3 = 0
int16_t* var_188_1 = sub_532b80(eax_6, var_e4, &var_30, u".counter")
int32_t var_ec_1 = 1
__builtin_memcpy(&var_e0, &arg_8, 0x80)
var_e0[arg3] = 6
int32_t var_64_2 = var_64_1 + 1
__builtin_memcpy(&var_20c, &var_e0, 0x80)
sub_5ba740(arg1 + 0x158)
int32_t var_8_4 = 0xffffffff

if (var_1c u>= 8)
    j__free(var_30)

int32_t var_1c_1 = 7
int32_t var_20 = 0
var_30.w = 0
sub_52e720(&var_30, u".frame_action", 0xd)
int32_t var_8_5 = 2
int32_t var_64_3 = 1
int32_t var_ec_2 = 0
__builtin_memcpy(&var_e0, &arg_8, 0x80)
var_e0[arg3] = 9
int32_t var_64_4 = var_64_3 + 1
void var_1f8
void var_168
__builtin_memcpy(&var_1f8, &var_168, 0x80)
void var_278
__builtin_memcpy(&var_278, &var_e0, 0x80)
sub_5bf5c0(arg1 + 0x210, &var_30, var_278)
int32_t var_8_6 = 0xffffffff

if (var_1c_1 u>= 8)
    j__free(var_30)

int32_t var_1c_2 = 7
int32_t var_20_1 = 0
var_30.w = 0
sub_52e720(&var_30, u".frame_action_ch", 0x10)
int32_t var_8_7 = 3
int32_t var_64_5 = 1
__builtin_memcpy(&var_e0, &arg_8, 0x80)
int32_t var_ec_3 = 0
var_e0[arg3] = 0xa
int32_t var_64_6 = var_64_5 + 1
int32_t var_17c_9 = __builtin_memcpy(arg1 + 0x594, &var_168, 0x80)
int32_t var_180_6 = 1
int32_t var_184_4 = 0
int32_t* var_188_2 = &var_30
__builtin_memcpy(&var_20c, &var_e0, 0x80)
int32_t eax_11 = sub_5c0880(arg1 + 0x4dc)
int32_t var_8_8 = 0xffffffff

if (var_1c_2 u>= 8)
    eax_11 = j__free(var_30)

int16_t var_60
int16_t* eax_12 = sub_532b80(eax_11, var_e4, &var_60, &data_ad7d2c)
int32_t var_8_9 = 4
int16_t var_48
int16_t* eax_13 = sub_532b80(eax_12, var_e4, &var_48, u".stage")
var_8_9.b = 5
int32_t var_ec_4 = 1
__builtin_memcpy(&var_e0, &arg_8, 0x80)
var_e0[arg3] = 0
void* eax_15 = arg1 + 0x614
int32_t var_64_7 = var_64_6 + 1

if (eax_15 + 0xb8 != eax_12)
    sub_52e3c0(eax_15 + 0xb8, eax_12, 0, 0xffffffff)
    eax_15 = arg1 + 0x614

*(eax_15 + 0xd0) = 0
void** ecx_14 = __builtin_memcpy(&var_1f8, &var_e0, 0x80)
void** var_1fc = ecx_14
int32_t var_200 = 1
char var_204_1 = 0
var_20c = ecx_14
int32_t ecx_16 = sub_60a340(eax_15, var_20c, eax_13, var_204_1)
int32_t var_34

if (var_34 u>= 8)
    ecx_16 = j__free(var_48.d)

int32_t var_8_10 = 0xffffffff
int32_t var_34_1 = 7
int32_t var_38 = 0
var_48 = 0
int32_t var_4c

if (var_4c u>= 8)
    ecx_16 = j__free(var_60.d)

int32_t var_17c_16 = 1
int32_t var_4c_1 = 7
int32_t var_50 = 0
var_60 = 0
sub_5ba500(arg1, ecx_16)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0
