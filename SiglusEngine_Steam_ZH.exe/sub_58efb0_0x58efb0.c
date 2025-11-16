// 函数: sub_58efb0
// 地址: 0x58efb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b7b74
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b0
int32_t eax_2 = __security_cookie ^ &var_b0
int32_t __saved_esi
int32_t var_bc = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 7
int32_t var_3c = 0
int16_t var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
int32_t var_c_1 = 0
int32_t var_80 = 7
int32_t var_84 = 0
int16_t var_94 = 0
sub_52e720(&var_94, &data_ad7c90, nullptr)
var_c_1.b = 1
int32_t var_98 = 7
int32_t var_9c = 0
int16_t var_ac = 0
sub_52e720(&var_ac, &data_ad7c90, nullptr)
var_c_1.b = 2
int32_t var_68 = 7
int32_t var_6c = 0
int16_t var_7c = 0
sub_52e720(&var_7c, u"db_wnd_info_koe", 0xf)
var_c_1.b = 3
int32_t var_50 = 7
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64, u"copy_by_click", 0xd)
var_c_1.b = 4
HWND hWnd = *(arg1 + 0x4ac)

if (hWnd != 0)
    SendMessageW(hWnd, 0xf0, 0, 0)

int32_t ecx_6 = data_bac3a0

if ((ecx_6.b & 1) == 0)
    data_bac3a0 = ecx_6 | 1
    var_c_1.b = 5
    sub_58fa00()
    ecx_6 = _atexit(j_sub_58fec0)
    var_c_1.b = 4

int32_t var_c0 = ecx_6
var_c_1.b = 6
int32_t var_34
sub_6bad30(&data_bac3a4, &var_64, sub_6ad9b0(&var_34), &var_7c, &var_ac, &var_94, &var_4c)
int32_t var_20

if (var_20 u>= 8)
    j__free(var_34)

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t var_50_1 = 7
int32_t var_54_1 = 0
var_64 = 0

if (var_68 u>= 8)
    j__free(var_7c.d)

int32_t var_68_1 = 7
int32_t var_6c_1 = 0
var_7c = 0

if (var_98 u>= 8)
    j__free(var_ac.d)

int32_t var_98_1 = 7
int32_t var_9c_1 = 0
var_ac = 0

if (var_80 u>= 8)
    j__free(var_94.d)

int32_t result = 0
int32_t var_80_1 = 7
int32_t var_84_1 = 0
var_94 = 0

if (var_38 u>= 8)
    result = j__free(var_4c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_b0)
return result
