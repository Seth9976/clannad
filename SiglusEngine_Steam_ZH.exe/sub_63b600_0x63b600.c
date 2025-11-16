// 函数: sub_63b600
// 地址: 0x63b600
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c286e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
sub_575830(arg1)
int32_t var_8_1 = 0
*arg1 = &C_db_wnd_info_cg_table::`vftable'{for `C_db_wnd_info'}
struct NT3::C_window_base::VTable** var_18 = &arg1[0x2e]
sub_642e20(&arg1[0x2e])
var_8_1.b = 1
sub_57a390(&arg1[0x53])
arg1[0x53] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 2
sub_57a390(&arg1[0x120])
arg1[0x120] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
