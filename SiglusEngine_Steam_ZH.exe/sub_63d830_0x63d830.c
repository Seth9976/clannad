// 函数: sub_63d830
// 地址: 0x63d830
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c2b60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
sub_536280(arg1)
int32_t var_8_1 = 0
sub_536280(&arg1[0x24])
var_8_1.b = 1
sub_536280(&arg1[0x48])
var_8_1.b = 2
sub_57a270(&arg1[0x6c])
var_8_1.b = 3
sub_5cd480(&arg1[0x91])
var_8_1.b = 4
sub_642e20(&arg1[0xb5])
arg1[0xb5] = &C_db_wnd_info_trace::Ctab_text::`vftable'{for `NT3::Cc_tab'}
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
