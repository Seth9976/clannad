// 函数: sub_59d6f0
// 地址: 0x59d6f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b8f51
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_b0
int32_t eax_2 = __security_cookie ^ &var_b0
int32_t __saved_edi
int32_t var_bc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_52e820(&var_b0, u"db_wnd_info_sound")
int32_t var_c_1 = 0

if (arg1 + 0x98 != &var_b0)
    sub_52e3c0(arg1 + 0x98, &var_b0, 0, 0xffffffff)

int32_t var_c_2 = 0xffffffff
*(arg1 + 0xb0) = 0x100
*(arg1 + 0xb4) = 0xffffffff
int32_t var_9c

if (var_9c u>= 8)
    j__free(var_b0)

int32_t var_50 = 7
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64, &data_af0fb8, 6)
int32_t var_c_3 = 1

if (arg1 + 0xbc != &var_64)
    sub_52e3c0(arg1 + 0xbc, &var_64, 0, 0xffffffff)

int32_t var_c_4 = 0xffffffff

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t var_68 = 7
int32_t var_6c = 0
int16_t var_7c = 0
sub_52e720(&var_7c, 0xad9408, 4)
int32_t var_c_5 = 2
int32_t var_80 = 7
int32_t var_84 = 0
int16_t var_94 = 0
sub_52e720(&var_94, u"type", 4)
var_c_5.b = 3
sub_590400(arg1, &var_94, &var_7c, 0x64)

if (var_80 u>= 8)
    j__free(var_94.d)

int32_t var_c_6 = 0xffffffff
int32_t var_80_1 = 7
int32_t var_84_1 = 0
var_94 = 0

if (var_68 u>= 8)
    j__free(var_7c.d)

int32_t var_68_1 = 7
int32_t var_6c_1 = 0
var_7c = 0
sub_52e720(&var_7c, 0xaee058, 2)
int32_t var_c_7 = 4
int32_t var_80_2 = 7
int32_t var_84_2 = 0
var_94 = 0
sub_52e720(&var_94, 0xaee060, 2)
var_c_7.b = 5
sub_590400(arg1, &var_94, &var_7c, 0x32)

if (var_80_2 u>= 8)
    j__free(var_94.d)

int32_t var_c_8 = 0xffffffff
int32_t var_80_3 = 7
int32_t var_84_3 = 0
var_94 = 0

if (var_68_1 u>= 8)
    j__free(var_7c.d)

int32_t var_68_2 = 7
var_7c = 0
int32_t var_6c_2 = 0
sub_52e720(&var_7c, &data_aee8ac, 4)
int32_t var_c_9 = 6
int32_t var_80_4 = 7
int32_t var_84_4 = 0
var_94 = 0
sub_52e720(&var_94, u"file", 4)
var_c_9.b = 7
sub_590400(arg1, &var_94, &var_7c, 0x64)

if (var_80_4 u>= 8)
    j__free(var_94.d)

int32_t var_c_10 = 0xffffffff
int32_t var_80_5 = 7
int32_t var_84_5 = 0
var_94 = 0

if (var_68_2 u>= 8)
    j__free(var_7c.d)

int32_t var_68_3 = 7
int32_t var_6c_3 = 0
var_7c = 0
sub_52e720(&var_7c, 0xaef3b4, 6)
int32_t var_c_11 = 8
int32_t var_80_6 = 7
int32_t var_84_6 = 0
var_94 = 0
sub_52e720(&var_94, u"volume", 6)
var_c_11.b = 9
sub_590400(arg1, &var_94, &var_7c, 0x32)

if (var_80_6 u>= 8)
    j__free(var_94.d)

int32_t var_c_12 = 0xffffffff
int32_t var_80_7 = 7
int32_t var_84_7 = 0
var_94 = 0

if (var_68_3 u>= 8)
    j__free(var_7c.d)

int32_t var_68_4 = 7
int32_t var_6c_4 = 0
var_7c = 0
sub_52e720(&var_7c, 0xaf0fc8, 2)
int32_t var_c_13 = 0xa
int32_t var_80_8 = 7
int32_t var_84_8 = 0
var_94 = 0
sub_52e720(&var_94, u"ready", 5)
var_c_13.b = 0xb
sub_590400(arg1, &var_94, &var_7c, 0x32)

if (var_80_8 u>= 8)
    j__free(var_94.d)

int32_t var_c_14 = 0xffffffff
int32_t var_80_9 = 7
int32_t var_84_9 = 0
var_94 = 0

if (var_68_4 u>= 8)
    j__free(var_7c.d)

int32_t var_68_5 = 7
int32_t var_6c_5 = 0
var_7c = 0
sub_52e720(&var_7c, 0xaf0fdc, 2)
int32_t var_c_15 = 0xc
int32_t var_80_10 = 7
int32_t var_84_10 = 0
var_94 = 0
sub_52e720(&var_94, u"delay", 5)
var_c_15.b = 0xd
sub_590400(arg1, &var_94, &var_7c, 0x32)

if (var_80_10 u>= 8)
    j__free(var_94.d)

int32_t var_c_16 = 0xffffffff
int32_t var_80_11 = 7
int32_t var_84_11 = 0
var_94 = 0

if (var_68_5 u>= 8)
    j__free(var_7c.d)

sub_52e820(&var_94, 0xaef3ac)
int32_t var_c_17 = 0xe
sub_52e820(&var_7c, u"state")
var_c_17.b = 0xf
sub_590400(arg1, &var_7c, &var_94, 0x32)

if (var_68_5 u>= 8)
    j__free(var_7c.d)

int32_t var_c_18 = 0xffffffff
int32_t var_68_6 = 7
int32_t var_6c_6 = 0
var_7c = 0

if (var_80_11 u>= 8)
    j__free(var_94.d)

sub_52e820(&var_94, 0xaf0ff0)
int32_t var_c_19 = 0x10
sub_52e820(&var_7c, u"state2")
var_c_19.b = 0x11
sub_590400(arg1, &var_7c, &var_94, 0x32)

if (var_68_6 u>= 8)
    j__free(var_7c.d)

int32_t var_c_20 = 0xffffffff
int32_t var_68_7 = 7
int32_t var_6c_7 = 0
var_7c = 0

if (var_80_11 u>= 8)
    j__free(var_94.d)

sub_52e820(&var_94, 0xaf1008)
int32_t var_c_21 = 0x12
sub_52e820(&var_7c, u"option")
var_c_21.b = 0x13
sub_590400(arg1, &var_7c, &var_94, 0x32)

if (var_68_7 u>= 8)
    j__free(var_7c.d)

int32_t var_c_22 = 0xffffffff
int32_t var_68_8 = 7
int32_t var_6c_8 = 0
var_7c = 0

if (var_80_11 u>= 8)
    j__free(var_94.d)

sub_52e820(&var_94, u"bgmfade")
int32_t var_c_23 = 0x14
sub_52e820(&var_7c, u"bgmfade")
var_c_23.b = 0x15
sub_590400(arg1, &var_7c, &var_94, 0x32)

if (var_68_8 u>= 8)
    j__free(var_7c.d)

int32_t var_c_24 = 0xffffffff
int32_t var_68_9 = 7
int32_t var_6c_9 = 0
var_7c = 0

if (var_80_11 u>= 8)
    j__free(var_94.d)

void* var_34
sub_52e820(&var_34, u"bgmfade2")
int32_t var_c_25 = 0x16
int16_t var_4c
sub_52e820(&var_4c, u"bgmfade2")
var_c_25.b = 0x17
sub_590400(arg1, &var_4c, &var_34, 0x32)
int32_t var_38

if (var_38 u>= 8)
    j__free(var_4c.d)

int32_t result = 0
int32_t var_38_1 = 7
int32_t var_3c = 0
var_4c = 0
int32_t var_20

if (var_20 u>= 8)
    result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_b0)
return result
