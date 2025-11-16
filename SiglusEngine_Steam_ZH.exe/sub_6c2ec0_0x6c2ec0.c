// 函数: sub_6c2ec0
// 地址: 0x6c2ec0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc191
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_58 = 0
int16_t* var_64 = arg2
LPARAM lParam_2 = 0
int32_t var_50 = 0
int32_t var_4c = 0
int32_t var_8_1 = 1
LRESULT hWnd = *(arg1 + 4)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0xe, 0, 0)

sub_6afe20(&lParam_2, hWnd + 0x10)
LPARAM lParam_1 = lParam_2
LPARAM lParam = lParam_1

if (lParam_1 == var_50)
    lParam = 0

HWND hWnd_1 = *(arg1 + 4)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0xd, hWnd + 0x10, lParam)

int16_t* lParam_3 = lParam_1

if (lParam_1 == var_50)
    lParam_3 = nullptr

sub_52e820(arg2, lParam_3)
int32_t var_58_1 = 1
int32_t var_34 = 7
int32_t var_38 = 0
int16_t var_48 = 0
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
var_8_1.b = 3
sub_55d330(&var_48, 1, 0xa)
sub_55d330(&var_30, 1, 0xd)
sub_55d330(&var_30, 1, 0xa)
sub_6aeaf0(&var_48, &var_30, arg2, &var_48)

if (var_1c u>= 8)
    j__free(var_30.d)

if (var_34 u>= 8)
    j__free(var_48.d)

if (lParam_1 != 0)
    j__free(lParam_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2
