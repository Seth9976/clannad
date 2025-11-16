// 函数: sub_608140
// 地址: 0x608140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be52b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_1dc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_3 = arg2
void** var_14c = eax_3
*(arg1 + 0x80) = 0x514
void arg_c
__builtin_memcpy(arg1, &arg_c, 0x80)

if (arg1 + 0x84 != eax_3)
    sub_52e3c0(arg1 + 0x84, eax_3, 0, 0xffffffff)
    eax_3 = var_14c

int16_t* var_1e0_2 = &boost::bad_function_call::`vftable'{for `std::runtime_error'}.vFunc_2
*(arg1 + 0x9c) = 0
int32_t var_2c
int16_t* eax_4 = sub_532b80(eax_3, eax_3, &var_2c, var_1e0_2)
int32_t var_8_1 = 0
int32_t var_150 = 1
int32_t var_144
__builtin_memcpy(&var_144, &arg_c, 0x80)
int32_t var_150_1 = 1
int32_t var_ac[0xe]
__builtin_memcpy(&var_ac, &arg_c, 0x80)
(&var_144)[arg4] = 2
int32_t var_c8
int32_t var_c8_1 = var_c8 + 1
var_ac[arg4] = 6
int32_t var_30
int32_t var_30_1 = var_30 + 1
int32_t eax_7 = *(data_bac510 + 0x1d374)
int32_t var_1e4_2 = __builtin_memcpy(arg1 + 0x314, &var_144, 0x80)
int32_t var_1e8_2 = eax_7
int16_t* var_1ec = eax_4
void** var_270
__builtin_memcpy(&var_270, &var_ac, 0x80)
int32_t var_26c
int32_t eax_8 = sub_5c1a40(arg1 + 0x25c, var_270, var_26c)
int32_t var_8_2 = 0xffffffff
int32_t var_18

if (var_18 u>= 8)
    eax_8 = j__free(var_2c)

int16_t* eax_9 = sub_532b80(eax_8, var_14c, &var_2c, u".object")
int32_t var_8_3 = 1
int32_t var_30_2 = 1
int32_t var_c8_2 = 2
__builtin_memcpy(&var_ac, &arg_c, 0x80)
var_144 = 0xfffffffb
int32_t var_140 = 8
int32_t var_150_2 = 2
int32_t var_1cc = 0xfffffffb
void var_25c
__builtin_memcpy(&var_25c, &var_144, 0x80)
int32_t var_1c8 = 6
var_ac[arg4] = 2
int32_t var_30_3 = var_30_2 + 1
void* eax_11 = data_bac510
void var_2dc
__builtin_memcpy(&var_2dc, &var_1cc, 0x80)
void var_35c
__builtin_memcpy(&var_35c, &var_ac, 0x80)
int32_t eax_12 = sub_5f0c10(arg1 + 0xa0, eax_9, (*(eax_11 + 0x2077c)).b, 0, arg3, 1, 1, arg1)
int32_t var_8_4 = 0xffffffff

if (var_18 u>= 8)
    eax_12 = j__free(var_2c)

int16_t* eax_13 = sub_532b80(eax_12, var_14c, &var_2c, u".mwnd")
int32_t var_8_5 = 2
int32_t var_30_4 = 1
__builtin_memcpy(&var_ac, &arg_c, 0x80)
int32_t var_150_3 = 2
var_ac[arg4] = 3
void* eax_15 = data_bac510
int32_t var_30_5 = var_30_4 + 1
var_1cc = 0xfffffffb
int32_t var_1c8_1 = 6
int32_t eax_16 = *(eax_15 + 0xa3e7c4)
__builtin_memcpy(arg1 + 0x44c, &var_1cc, 0x80)
void** ecx_9 = __builtin_memcpy(&var_25c, &var_ac, 0x80)
void* var_260 = arg1
void** var_264 = ecx_9
var_270 = ecx_9
int32_t eax_17 = sub_5da8f0(arg1 + 0x394, var_270, eax_13, eax_16)
int32_t var_8_6 = 0xffffffff

if (var_18 u>= 8)
    eax_17 = j__free(var_2c)

int16_t* eax_18 = sub_532b80(eax_17, var_14c, &var_2c, u".btnselitem")
int32_t var_8_7 = 3
int32_t var_150_4 = 1
__builtin_memcpy(&var_ac, &arg_c, 0x80)
var_ac[arg4] = 5
int32_t var_30_6 = var_30_5 + 1
int16_t* var_26c_2 = eax_18
var_270 = __builtin_memcpy(&var_25c, &var_ac, 0x80)
sub_5b0670(arg1 + 0x4cc, var_270)
int32_t eax_20 = sub_5ada90(arg1 + 0x4cc)
int32_t var_8_8 = 0xffffffff

if (var_18 u>= 8)
    eax_20 = j__free(var_2c)

int16_t* eax_21 = sub_532b80(eax_20, var_14c, &var_2c, u".world")
int32_t var_8_9 = 4
int32_t ecx_16 = __builtin_memcpy(&var_ac, &arg_c, 0x80)
int32_t var_150_5 = 1
var_ac[arg4] = 8
int32_t var_30_7 = var_30_6 + 1
int32_t var_1e4_3 = ecx_16
int32_t var_1e8_3 = *(data_bac510 + 0x17768)
int16_t* var_1ec_1 = eax_21
__builtin_memcpy(&var_270, &var_ac, 0x80)
int32_t eax_24 = sub_609be0(arg1 + 0x6c4)
int32_t var_8_10 = 0xffffffff

if (var_18 u>= 8)
    eax_24 = j__free(var_2c)

int16_t* eax_25 = sub_532b80(eax_24, var_14c, &var_2c, 
    &boost::detail::sp_counted_impl_pd<int32_t*, struct boost::checked_array_deleter<int32_t> >::`vftable'{for `boost::detail::sp_counted_base'}
        .vFunc_5)
int32_t var_8_11 = 5
int32_t var_150_6 = 1
int32_t ecx_19 = __builtin_memcpy(&var_ac, &arg_c, 0x80)
var_ac[arg4] = 4
int32_t var_30_8 = var_30_7 + 1
int32_t var_1e4_4 = ecx_19
int32_t var_1e8_4 = *(data_bac510 + 0xa47f4c)
int16_t* var_1ec_2 = eax_25
__builtin_memcpy(&var_270, &var_ac, 0x80)
int32_t eax_28 = sub_5fcf60(arg1 + 0x77c)
int32_t var_8_12 = 0xffffffff

if (var_18 u>= 8)
    eax_28 = j__free(var_2c)

int16_t var_c4
int16_t* eax_29 = sub_532b80(eax_28, var_14c, &var_c4, u".quake")
int32_t var_8_13 = 6
int32_t var_150_7 = 1
int32_t ecx_22 = __builtin_memcpy(&var_ac, &arg_c, 0x80)
var_ac[arg4] = 7
int32_t var_30_9 = var_30_8 + 1
int32_t var_1e4_5 = ecx_22
int32_t var_1e8_5 = *(data_bac510 + 0xa48b54)
int16_t* var_1ec_3 = eax_29
__builtin_memcpy(&var_270, &var_ac, 0x80)
sub_5fcc90(arg1 + 0x834)
int32_t var_8_14 = 0xffffffff
int32_t var_b0

if (var_b0 u>= 8)
    j__free(var_c4.d)

int32_t var_b0_1 = 7
int32_t var_1e0_16 = 1
int32_t var_b4 = 0
var_c4 = 0
int32_t result = sub_6086f0(arg1, var_1e0_16)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
