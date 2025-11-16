// 函数: sub_5a73b0
// 地址: 0x5a73b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9c60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = arg2
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, &data_ad7c90, nullptr)
int32_t var_8_1 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
var_8_1.b = 1
int32_t var_94

if (arg1[0x3a] != 0)
    var_94 = 0x200
    sub_6bfcd0(&arg1[0x18], &var_2c, &arg1[0x36], &var_44, 0, 0, 0x64, 0x64, 0, 0x40030000, 
        WS_EX_CLIENTEDGE, 0, 0, *arg1)

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_8_2 = 0xffffffff
int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_30_1 = 7
int32_t var_34_1 = 0
var_44 = 0
sub_52e720(&var_44, &data_ad7c90, nullptr)
int32_t var_8_3 = 2
int32_t var_18_2 = 7
int32_t var_1c_2 = 0
var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
var_8_3.b = 3

if (arg1[0x7a] != 0)
    var_94 = 0
    sub_6bfcd0(&arg1[0x58], &var_2c, &arg1[0x76], &var_44, 0, 0, 0x64, 0x64, 0, 0x40020001, 
        WS_EX_LEFT, 0, 0, *arg1)

if (var_18_2 u>= 8)
    j__free(var_2c.d)

int32_t var_8_4 = 0xffffffff
int32_t var_18_3 = 7
int32_t var_1c_3 = 0
var_2c = 0

if (var_30_1 u>= 8)
    j__free(var_44.d)

int32_t var_60 = 7
int32_t var_64 = 0
int16_t var_74 = 0
sub_52e720(&var_74, &data_ad7c90, nullptr)
int32_t var_8_5 = 4
int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
sub_52e720(&var_5c, &data_ad7c90, nullptr)
var_8_5.b = 5

if (arg1[0x9e] != 0)
    var_94 = 0
    sub_6bfcd0(&arg1[0x7c], &var_5c, &arg1[0x9a], &var_74, 0, 0, 0x64, 0x64, 0, 0x40020000, 
        WS_EX_LEFT, 0, 0, *arg1)

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_8_6 = 0xffffffff
int32_t var_48_1 = 7
int32_t var_4c_1 = 0
var_5c = 0

if (var_60 u>= 8)
    j__free(var_74.d)

int32_t var_60_1 = 7
var_74 = 0
int32_t var_64_1 = 0
var_94.o = arg4
sub_5a7710(arg1, var_94)
HWND hWnd_1 = arg1[0x19]

if (hWnd_1 != 0 && (GetWindowLongW(hWnd_1, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(arg1[0x19], SW_SHOW)

HWND hWnd_2 = arg1[0x59]

if (hWnd_2 != 0 && (GetWindowLongW(hWnd_2, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(arg1[0x59], SW_SHOW)

HWND hWnd = arg1[0x7d]

if (hWnd != 0 && (GetWindowLongW(hWnd, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(arg1[0x7d], SW_SHOW)

sub_5a8a80(&arg1[0xb], arg3)
HWND result = SetFocus(arg1[0x19])
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
