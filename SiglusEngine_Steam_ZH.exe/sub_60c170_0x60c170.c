// 函数: sub_60c170
// 地址: 0x60c170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be643
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_29c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable* dwInitParam
sub_60c270(&dwInitParam)
int32_t var_8_1 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, u"sys_win_info_solo", 0x11)
var_8_1.b = 1
HWND hWndParent = data_4ebe3ac
void var_44

if (&var_44 != arg1)
    sub_52e3c0(&var_44, arg1, 0, 0xffffffff)

int32_t var_288

if (var_288 == 0)
    void var_284
    sub_52e3c0(&var_284, &var_2c, 0, 0xffffffff)
    char var_234_1 = 0
    DialogBoxParamW(data_4ebe3a8, 0x96, hWndParent, sub_6bfec0, &dwInitParam)

if (var_18 u>= 8)
    j__free(var_2c.d)

sub_60c340(&dwInitParam)
int32_t eax_3
eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 1
