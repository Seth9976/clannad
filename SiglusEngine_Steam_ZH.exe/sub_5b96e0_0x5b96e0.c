// 函数: sub_5b96e0
// 地址: 0x5b96e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1130
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5b9860(arg1)
*(arg1 + 0x14c) = 0
int32_t var_34 = 7
int32_t var_38 = 0
int16_t var_48 = 0
sub_52e720(&var_48, &data_ad7c90, nullptr)
int32_t var_8_1 = 0
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
sub_52e720(&var_30, u"siglus_editbox", 0xe)
var_8_1.b = 1

if (*(arg1 + 0x144) != 0)
    sub_6bfcd0(arg1 + 0xbc, &var_30, arg1 + 0x134, &var_48, arg3, arg4, arg5 - arg3, arg6 - arg4, 
        0, 0x40000080, WS_EX_LEFT, 0, 0, data_4ebe3ac)

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t var_1c_1 = 7
int32_t var_20_1 = 0
var_30 = 0

if (var_34 u>= 8)
    j__free(var_48.d)

*(arg1 + 0xa0) = 1
*(arg1 + 0xa4) = arg3.o
*(arg1 + 0xb4) = arg2
sub_5b99a0(arg1)
HWND hWnd = *(arg1 + 0xc0)

if (hWnd != 0 && (GetWindowLongW(hWnd, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(arg1 + 0xc0), SW_SHOW)

HWND result = SetFocus(*(arg1 + 0xc0))
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
