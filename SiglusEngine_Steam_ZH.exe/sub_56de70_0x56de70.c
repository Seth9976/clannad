// 函数: sub_56de70
// 地址: 0x56de70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, &data_ad7c90, nullptr)
int32_t var_8_1 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, u"TAB_SELECT_NO", 0xd)
var_8_1.b = 1
LRESULT hWnd = *(arg1 + 0xbc)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x130b, 0, 0)

sub_6c1f80(arg1 + 0xb8, &var_2c, hWnd, &var_44)

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
sub_6c6290(arg1 + 0x14c)
sub_6c6290(arg1 + 0x480)
sub_6c26c0(arg1)
HWND result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
