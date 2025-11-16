// 函数: sub_5999d0
// 地址: 0x5999d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b89d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t var_10c
int32_t eax_2 = __security_cookie ^ &var_10c
int32_t __saved_esi
int32_t var_114 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 7
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64, &data_ad7c90, nullptr)
int32_t var_c_1 = 0
int32_t var_98 = 7
int32_t var_9c = 0
int16_t var_ac = 0
sub_52e720(&var_ac, &data_ad7c90, nullptr)
var_c_1.b = 1
int32_t var_68 = 7
int32_t var_6c = 0
int16_t var_7c = 0
sub_52e720(&var_7c, &data_ad7c90, nullptr)
var_c_1.b = 2
int32_t var_c8 = 7
int32_t var_cc = 0
int16_t var_dc = 0
sub_52e720(&var_dc, u"db_wnd_info_scn_control", 0x17)
var_c_1.b = 3
int32_t var_38 = 7
int32_t var_3c = 0
int16_t var_4c = 0
sub_52e720(&var_4c, u"scn_name", 8)
var_c_1.b = 4
int32_t eax_5 = data_bac3a0

if ((eax_5.b & 1) == 0)
    data_bac3a0 = eax_5 | 1
    var_c_1.b = 5
    sub_58fa00()
    _atexit(j_sub_58fec0)
    var_c_1.b = 4

sub_6bad30(&data_bac3a4, &var_4c, arg1 + 0x364, &var_dc, &var_7c, &var_ac, &var_64)

if (var_38 u>= 8)
    j__free(var_4c.d)

int32_t var_38_1 = 7
int32_t var_3c_1 = 0
var_4c = 0

if (var_c8 u>= 8)
    j__free(var_dc.d)

int32_t var_c8_1 = 7
int32_t var_cc_1 = 0
var_dc = 0

if (var_68 u>= 8)
    j__free(var_7c.d)

int32_t var_68_1 = 7
int32_t var_6c_1 = 0
var_7c = 0

if (var_98 u>= 8)
    j__free(var_ac.d)

int32_t var_c_2 = 0xffffffff
int32_t var_98_1 = 7
int32_t var_9c_1 = 0
var_ac = 0

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t var_20 = 7
int32_t var_24 = 0
int16_t var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
int32_t var_c_3 = 6
int32_t var_80 = 7
int32_t var_84 = 0
int16_t var_94 = 0
sub_52e720(&var_94, &data_ad7c90, nullptr)
var_c_3.b = 7
int32_t var_b0 = 7
int32_t var_b4 = 0
int16_t var_c4 = 0
sub_52e720(&var_c4, &data_ad7c90, nullptr)
var_c_3.b = 8
int32_t var_e0 = 7
int32_t var_e4 = 0
int16_t var_f4 = 0
sub_52e720(&var_f4, u"db_wnd_info_scn_control", 0x17)
var_c_3.b = 9
int32_t var_f8 = 7
int32_t var_fc = 0
var_10c = 0
int32_t ecx_10 = sub_52e720(&var_10c, u"z_no", 4)
var_c_3.b = 0xa
int32_t eax_8 = data_bac3a0

if ((eax_8.b & 1) == 0)
    data_bac3a0 = eax_8 | 1
    var_c_3.b = 0xb
    sub_58fa00()
    ecx_10 = _atexit(j_sub_58fec0)
    var_c_3.b = 0xa

*(arg1 + 0x37c)
int32_t var_118_6 = ecx_10
var_c_3.b = 0xc
sub_6bad30(&data_bac3a4, &var_10c, sub_6ad9b0(&var_64), &var_f4, &var_c4, &var_94, &var_34)

if (var_50 u>= 8)
    j__free(var_64.d)

if (var_f8 u>= 8)
    j__free(var_10c.d)

int32_t var_f8_1 = 7
int32_t var_fc_1 = 0
var_10c = 0

if (var_e0 u>= 8)
    j__free(var_f4.d)

int32_t var_e0_1 = 7
int32_t var_e4_1 = 0
var_f4 = 0

if (var_b0 u>= 8)
    j__free(var_c4.d)

int32_t var_b0_1 = 7
int32_t var_b4_1 = 0
var_c4 = 0

if (var_80 u>= 8)
    j__free(var_94.d)

int32_t result = 0
int32_t var_80_1 = 7
int32_t var_84_1 = 0
var_94 = 0

if (var_20 u>= 8)
    result = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_10c)
return result
