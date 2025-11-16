// 函数: sub_63af90
// 地址: 0x63af90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c27f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct C_cfg_wnd_solo::C_sys_wnd_solo_tweet::VTable** result = arg1
struct C_cfg_wnd_solo::C_sys_wnd_solo_tweet::VTable** result_1 = result
sub_575830(arg1)
result[0x2e].b = 0
int32_t var_8_1 = 0
*result = &C_sys_wnd_solo_tweet::`vftable'{for `C_cfg_wnd_solo'}
int32_t var_28 = sub_5a6f60(&result[0x2f])
result[0x2f] = &C_sys_wnd_solo_tweet_bitmap::`vftable'{for `NT3::Cc_picture'}
sub_6c8050(&result[0x53])
var_8_1.b = 1
sub_5cd600(&result[0x6f])
var_8_1.b = 2
sub_57a0f0(&result[0x93])
var_8_1.b = 3
sub_5cd480(&result[0xb7])
var_8_1.b = 4
sub_5cd480(&result[0xdb])
fsbase->NtTib.ExceptionList = ExceptionList
return result
