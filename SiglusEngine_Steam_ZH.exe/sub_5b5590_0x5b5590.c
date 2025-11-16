// 函数: sub_5b5590
// 地址: 0x5b5590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba8b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_3 = arg2
void** var_cc = eax_3
*(arg1 + 0x80) = 0x3fc
void arg_8
__builtin_memcpy(arg1, &arg_8, 0x80)

if (arg1 + 0x84 != eax_3)
    sub_52e3c0(arg1 + 0x84, eax_3, 0, 0xffffffff)
    eax_3 = var_cc

int16_t* var_e4_2 = &data_af1ab4
*(arg1 + 0x9c) = 0
int32_t var_48
int16_t* eax_4 = sub_532b80(eax_3, eax_3, &var_48, var_e4_2)
int32_t var_8_1 = 0
int32_t var_4c = 1
int32_t var_c8[0x14]
__builtin_memcpy(&var_c8, &arg_8, 0x80)
var_c8[arg3] = 0
int32_t var_4c_1 = var_4c + 1
int32_t var_e8_2 = 1
int32_t var_ec_2 = *(data_bac510 + 0x10bf0)
int16_t* var_f0 = eax_4
void var_174
__builtin_memcpy(&var_174, &var_c8, 0x80)
int32_t eax_7 = sub_5c3640(arg1 + 0x158)
int32_t var_8_2 = 0xffffffff
int32_t var_34

if (var_34 u>= 8)
    eax_7 = j__free(var_48)

int16_t* eax_8 = sub_532b80(eax_7, var_cc, &var_48, &data_af1abc)
int32_t var_8_3 = 1
int32_t var_4c_2 = 1
__builtin_memcpy(&var_c8, &arg_8, 0x80)
var_c8[arg3] = 1
int32_t var_4c_3 = var_4c_2 + 1
int32_t var_e8_3 = 1
int32_t var_ec_3 = *(data_bac510 + 0x10bf0)
int16_t* var_f0_1 = eax_8
__builtin_memcpy(&var_174, &var_c8, 0x80)
sub_5c36c0(arg1 + 0x210)
int32_t var_8_4 = 0xffffffff

if (var_34 u>= 8)
    j__free(var_48)

void* var_e4_6 = 0xe
int32_t var_1c = 7
wchar16 const* const var_e8_4 = u"user_call_prop"
int32_t var_20 = 0
int16_t var_30 = 0
sub_52e720(&var_30, var_e8_4, var_e4_6)
int32_t var_8_5 = 2
int32_t var_4c_4 = 0
int16_t* var_f0_2 = &var_30
__builtin_memcpy(&var_174, &var_c8, 0x80)
sub_5b6480(arg1 + 0xa0, var_174)
int32_t var_8_6 = 0xffffffff

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t var_1c_1 = 7
int32_t var_20_1 = 0
var_30 = 0
sub_55b2b0(arg1 + 0x158)
sub_55b650(arg1 + 0x210)
int32_t result = sub_5b6500(arg1 + 0xa0)
*(arg1 + 0x2c8) = 0
*(arg1 + 0x2cc) = 0
*(arg1 + 0x2d0) = 0
*(arg1 + 0x2d4) = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
