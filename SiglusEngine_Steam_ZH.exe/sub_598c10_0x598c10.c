// 函数: sub_598c10
// 地址: 0x598c10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b882e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD* var_2c
sub_599f00(arg1, &var_2c)
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c)

sub_59a130(arg1)
(*(*arg1 + 0x18))(eax_2)
HWND hWnd = arg1[0x77]

if (hWnd != 0)
    SendMessageW(hWnd, 0x18e, 0, 0)

int32_t var_18_1 = 7
int32_t var_1c = 0
var_2c.w = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
int32_t var_8_1 = 0
int32_t var_78 = 7
int32_t var_7c = 0
int16_t var_8c = 0
sub_52e720(&var_8c, &data_ad7c90, nullptr)
var_8_1.b = 1
int32_t var_f0 = 7
int32_t var_f4 = 0
int16_t var_104 = 0
sub_52e720(&var_104, &data_ad7c90, nullptr)
var_8_1.b = 2
int32_t var_c0 = 7
int32_t var_c4 = 0
int16_t var_d4 = 0
sub_52e720(&var_d4, u"db_wnd_info_scn_control", 0x17)
var_8_1.b = 3
int32_t var_d8 = 7
int32_t var_dc = 0
int16_t var_ec = 0
int32_t ecx_7 = sub_52e720(&var_ec, u"scn_name_list_top", 0x11)
var_8_1.b = 4
int32_t eax_5 = data_bac3a0

if ((eax_5.b & 1) == 0)
    data_bac3a0 = eax_5 | 1
    var_8_1.b = 5
    sub_58fa00()
    ecx_7 = _atexit(j_sub_58fec0)
    var_8_1.b = 4

int32_t var_118_2 = ecx_7
var_8_1.b = 6
struct _EXCEPTION_REGISTRATION_RECORD* var_44
sub_6bad30(&data_bac3a4, &var_ec, sub_6ad9b0(&var_44), &var_d4, &var_104, &var_8c, &var_2c)
int32_t var_30

if (var_30 u>= 8)
    j__free(var_44)

if (var_d8 u>= 8)
    j__free(var_ec.d)

int32_t var_d8_1 = 7
int32_t var_dc_1 = 0
var_ec = 0

if (var_c0 u>= 8)
    j__free(var_d4.d)

int32_t var_c0_1 = 7
int32_t var_c4_1 = 0
var_d4 = 0

if (var_f0 u>= 8)
    j__free(var_104.d)

int32_t var_f0_1 = 7
int32_t var_f4_1 = 0
var_104 = 0

if (var_78 u>= 8)
    j__free(var_8c.d)

int32_t var_8_2 = 0xffffffff
int32_t var_78_1 = 7
int32_t var_7c_1 = 0
var_8c = 0

if (var_18_1 u>= 8)
    j__free(var_2c)

HWND hWnd_1 = arg1[0x9b]

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0x18e, 0, 0)

int32_t var_30_1 = 7
int32_t var_34 = 0
var_44.w = 0
sub_52e720(&var_44, &data_ad7c90, nullptr)
int32_t var_8_3 = 7
int32_t var_90 = 7
int32_t var_94 = 0
int16_t var_a4 = 0
sub_52e720(&var_a4, &data_ad7c90, nullptr)
var_8_3.b = 8
int32_t var_60 = 7
int32_t var_64 = 0
int16_t var_74 = 0
sub_52e720(&var_74, &data_ad7c90, nullptr)
var_8_3.b = 9
int32_t var_a8 = 7
int32_t var_ac = 0
int16_t var_bc = 0
sub_52e720(&var_bc, u"db_wnd_info_scn_control", 0x17)
var_8_3.b = 0xa
int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
int32_t ecx_14 = sub_52e720(&var_5c, u"z_no_list_top", 0xd)
var_8_3.b = 0xb
int32_t eax_9 = data_bac3a0

if ((eax_9.b & 1) == 0)
    data_bac3a0 = eax_9 | 1
    var_8_3.b = 0xc
    sub_58fa00()
    ecx_14 = _atexit(j_sub_58fec0)
    var_8_3.b = 0xb

int32_t var_118_10 = ecx_14
var_8_3.b = 0xd
sub_6bad30(&data_bac3a4, &var_5c, sub_6ad9b0(&var_2c), &var_bc, &var_74, &var_a4, &var_44)

if (var_18_1 u>= 8)
    j__free(var_2c)

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_48_1 = 7
int32_t var_4c_1 = 0
var_5c = 0

if (var_a8 u>= 8)
    j__free(var_bc.d)

int32_t var_a8_1 = 7
int32_t var_ac_1 = 0
var_bc = 0

if (var_60 u>= 8)
    j__free(var_74.d)

int32_t var_60_1 = 7
int32_t var_64_1 = 0
var_74 = 0

if (var_90 u>= 8)
    j__free(var_a4.d)

int32_t var_8_4 = 0xffffffff
int32_t var_90_1 = 7
int32_t var_94_1 = 0
var_a4 = 0

if (var_30_1 u>= 8)
    j__free(var_44)

int32_t var_30_2 = 7
int32_t var_34_1 = 0
var_44.w = 0
sub_6c7840(&arg1[0x20])
sub_6c26c0(arg1)
HWND result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
