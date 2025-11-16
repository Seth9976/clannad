// 函数: sub_6c5080
// 地址: 0x6c5080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc2c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
*(arg1 + 0x264) = 1
*(arg1 + 0x268) = arg2
*(arg1 + 0x26c) = arg3
*(arg1 + 0x270) = 0
HGDIOBJ wParam = GetStockObject(DEFAULT_GUI_FONT)
HWND hWnd_2 = *(arg1 + 4)
int32_t var_1c = 0
int32_t var_18 = 0
int32_t lParam = 0

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0x1038, arg2, &lParam)

int32_t var_28 = 7
int32_t var_2c = 0
int16_t var_3c = 0
var_8_1.b = 1
int16_t var_54
int16_t* eax_5 =
    sub_532b80(sub_52e720(&var_3c, &data_ad7c90, nullptr), arg1 + 8, &var_54, _DUMMY_EDIT")
var_8_1.b = 2

if (*(arg1 + 0x124) != 0)
    sub_6bfcd0(arg1 + 0x9c, eax_5, arg1 + 0x114, &var_3c, lParam, arg3, var_1c - lParam, 
        var_18 - arg3, 0, WS_CHILD, WS_EX_LEFT, 0, 0, *(arg1 + 4))

int32_t var_40

if (var_40 u>= 8)
    j__free(var_54.d)

int32_t var_40_1 = 7
var_8_1.b = 0
int32_t var_44 = 0
var_54 = 0

if (var_28 u>= 8)
    j__free(var_3c.d)

SendMessageW(*(arg1 + 0xa0), 0x30, wParam, 1)
*(arg1 + 0x12c) = arg1
*(arg1 + 0x130) = arg1 + 0x134
void* arg_c
sub_6c2db0(arg1 + 0x9c, &arg_c)
HWND hWnd = *(arg1 + 0xa0)

if (hWnd != 0)
    SendMessageW(hWnd, 0xb1, 0, 0xffffffff)

HWND hWnd_1 = *(arg1 + 0xa0)

if (hWnd_1 != 0 && (GetWindowLongW(hWnd_1, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(arg1 + 0xa0), SW_SHOW)

SetFocus(*(arg1 + 0xa0))

if (arg1 + 0x294 != &arg_c)
    sub_52e3c0(arg1 + 0x294, &arg_c, 0, 0xffffffff)

int32_t* result = &arg_c

if (arg1 + 0x2e0 != &arg_c)
    result = sub_52e3c0(arg1 + 0x2e0, &arg_c, 0, 0xffffffff)

if (arg4 u>= 8)
    result = j__free(arg_c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
