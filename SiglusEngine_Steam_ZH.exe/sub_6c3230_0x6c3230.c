// 函数: sub_6c3230
// 地址: 0x6c3230
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, u"check", 5)
int32_t var_8_1 = 0
char result = sub_6c2330(arg1, &var_2c, arg2, arg3)
HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    WPARAM wParam
    wParam.b = result != 0
    result = SendMessageW(hWnd, 0xf1, wParam, 0)

if (var_18 u>= 8)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
