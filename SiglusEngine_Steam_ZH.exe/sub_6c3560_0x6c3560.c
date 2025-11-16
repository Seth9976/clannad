// 函数: sub_6c3560
// 地址: 0x6c3560
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
sub_52e720(&var_30, u"sel_no", 6)
int32_t var_8_1 = 0
LRESULT hWnd = *(arg1 + 4)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x147, 0, 0)

struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6c1f80(arg1, &var_30, hWnd, arg2)

if (var_1c u>= 8)
    result = j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
