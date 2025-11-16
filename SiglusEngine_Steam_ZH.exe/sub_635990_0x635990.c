// 函数: sub_635990
// 地址: 0x635990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c17aa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14_1 = arg1
sub_575830(arg1)
int32_t var_8_1 = 0
*arg1 = &C_db_wnd_info_koe::`vftable'{for `C_db_wnd_info'}
sub_5cd600(&arg1[0x2e])
var_8_1.b = 1
sub_5cd600(&arg1[0x52])
var_8_1.b = 2
sub_5cd600(&arg1[0x76])
sub_6bfab0(&arg1[0x9a])
arg1[0xbd] = 7
arg1[0xbc] = 0
arg1[0xb8].w = 0
arg1[0xb1] = 7
arg1[0x9a] = &NT3::Cc_progress::`vftable'{for `NT3::C_control'}
var_8_1.b = 4
sub_5a6f60(&arg1[0xbe])
var_8_1.b = 5
sub_5cd600(&arg1[0xe2])
var_8_1.b = 6
sub_5cd480(&arg1[0x106])
var_8_1.b = 7
int32_t var_20 = sub_536280(&arg1[0x12a])
sub_6c8050(&arg1[0x14e])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
