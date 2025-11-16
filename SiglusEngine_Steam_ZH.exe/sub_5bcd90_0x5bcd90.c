// 函数: sub_5bcd90
// 地址: 0x5bcd90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bafd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_d4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_d8 = 1
int32_t var_18 = 7
void* const var_dc = &data_af1d3c
int32_t var_1c = 0
int16_t var_2c = 0
int32_t var_8_1 = 0
int32_t var_d8_1 = sub_52e720(&var_2c, var_dc, var_d8)
int32_t var_dc_1 = 0
int32_t var_48 = 1
int32_t var_e0 = *(data_bac510 + 0x10bec)
int32_t var_c4 = 0x1f
int16_t* var_e4 = &var_2c
void var_168
__builtin_memcpy(&var_168, &var_c4, 0x80)
sub_5c3640(arg1 + 0x508)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 8)
    j__free(var_2c.d)

void* var_d8_3 = 1
int32_t var_18_1 = 7
void* const var_dc_2 = &data_af1d40
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_8_3 = 1
int32_t var_d8_4 = sub_52e720(&var_2c, var_dc_2, var_d8_3)
int32_t var_dc_3 = 0
int32_t var_48_1 = 1
int32_t var_e0_1 = *(data_bac510 + 0x10bec)
var_c4 = 0x20
int16_t* var_e4_1 = &var_2c
__builtin_memcpy(&var_168, &var_c4, 0x80)
sub_5c3640(arg1 + 0x5c0)
int32_t var_8_4 = 0xffffffff

if (var_18_1 u>= 8)
    j__free(var_2c.d)

void* var_d8_6 = 1
int32_t var_18_2 = 7
void* const var_dc_4 = &data_af1d44
int32_t var_1c_2 = 0
var_2c = 0
int32_t var_8_5 = 2
int32_t var_d8_7 = sub_52e720(&var_2c, var_dc_4, var_d8_6)
int32_t var_dc_5 = 0
int32_t var_48_2 = 1
int32_t var_e0_2 = *(data_bac510 + 0x10bec)
var_c4 = 0x23
int16_t* var_e4_2 = &var_2c
__builtin_memcpy(&var_168, &var_c4, 0x80)
sub_5c36c0(arg1 + 0x730)
int32_t var_8_6 = 0xffffffff

if (var_18_2 u>= 8)
    j__free(var_2c.d)

void* var_d8_9 = 0xc
int32_t var_30 = 7
wchar16 const* const var_dc_6 = u"global namae"
int32_t var_34 = 0
int16_t var_44 = 0
int32_t var_d8_10 = sub_52e720(&var_44, var_dc_6, var_d8_9)
int32_t var_dc_7 = 0
int32_t var_e0_3 = 0x2be
int32_t var_8_7 = 3
int16_t* var_e4_3 = &var_44
int32_t var_48_3 = 1
var_c4 = 0x6b
__builtin_memcpy(&var_168, &var_c4, 0x80)
int32_t result = sub_5c36c0(arg1 + 0xa10)

if (var_30 u>= 8)
    result = j__free(var_44.d)

*(arg1 + 0xb80) = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
