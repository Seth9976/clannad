// 函数: sub_5fa690
// 地址: 0x5fa690
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd4d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_3 = arg2
void** var_cc = eax_3
*(arg1 + 0x80) = 0x546
void arg_8
__builtin_memcpy(arg1, &arg_8, 0x80)

if (arg1 + 0x84 != eax_3)
    sub_52e3c0(arg1 + 0x84, eax_3, 0, 0xffffffff)
    eax_3 = var_cc

int16_t* var_e4_2 = &boost::detail::sp_counted_impl_pd<int32_t*, struct boost::checked_array_deleter<int32_t> >::`vftable'{for `boost::detail::sp_counted_base'}
    .vFunc_5
*(arg1 + 0x9c) = 0
int32_t var_48
int16_t* eax_4 = sub_532b80(eax_3, eax_3, &var_48, var_e4_2)
int32_t var_8_1 = 0
int32_t var_4c = 1
int32_t var_c8[0x14]
int32_t ecx_2 = __builtin_memcpy(&var_c8, &arg_8, 0x80)
var_c8[arg3] = 0x1f
int32_t var_4c_1 = var_4c + 1
int32_t var_e8_2 = ecx_2
int32_t var_ec_2 = *(data_bac510 + 0xa47f4c)
int16_t* var_f0 = eax_4
void var_174
__builtin_memcpy(&var_174, &var_c8, 0x80)
int32_t eax_7 = sub_5fcf60(arg1 + 0xa0)
int32_t var_8_2 = 0xffffffff
int32_t var_34

if (var_34 u>= 8)
    eax_7 = j__free(var_48)

int16_t var_30
int16_t* eax_8 = sub_532b80(eax_7, var_cc, &var_30, u".quake")
int32_t var_8_3 = 1
int32_t var_4c_2 = 1
int32_t ecx_5 = __builtin_memcpy(&var_c8, &arg_8, 0x80)
var_c8[arg3] = 0x19
int32_t var_4c_3 = var_4c_2 + 1
int32_t var_e8_3 = ecx_5
int32_t var_ec_3 = *(data_bac510 + 0xa48b54)
int16_t* var_f0_1 = eax_8
__builtin_memcpy(&var_174, &var_c8, 0x80)
sub_5fcc90(arg1 + 0x168)
int32_t var_8_4 = 0xffffffff
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t var_1c_1 = 7
int32_t var_20 = 0
var_30 = 0
sub_5fcfe0(arg1 + 0xa0)
*(arg1 + 0x158) = 0xffffffff
*(arg1 + 0x15c) = 0
*(arg1 + 0x160) = 0
*(arg1 + 0x164) = 0
int32_t result = sub_5fcd10(arg1 + 0x168)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
