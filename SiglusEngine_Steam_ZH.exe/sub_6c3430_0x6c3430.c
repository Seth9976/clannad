// 函数: sub_6c3430
// 地址: 0x6c3430
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3778
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HWND hWnd = *(arg1 + 4)
int32_t var_18 = 0
LRESULT eax_4

if (hWnd != 0)
    eax_4 = SendMessageW(hWnd, 0x149, arg3, 0)
else
    eax_4 = 0

LPARAM lParam_2
sub_6c3ce0(&lParam_2, eax_4 + 0x10)
int32_t var_8_1 = 0
LPARAM lParam_1 = lParam_2
LPARAM lParam = lParam_1
int32_t var_20

if (lParam_1 == var_20)
    lParam = 0

HWND hWnd_1 = *(arg1 + 4)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0x148, arg3, lParam)

LPARAM lParam_3 = lParam_1

if (lParam_1 == var_20)
    lParam_3 = 0

sub_52e820(arg2, lParam_3)

if (lParam_1 != 0)
    j__free(lParam_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
