// 函数: sub_640b20
// 地址: 0x640b20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c354e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::Cc_tab::C_sys_wnd_func_saveload::Cc_tab_saveload::VTable** result = arg1
struct NT3::Cc_tab::C_sys_wnd_func_saveload::Cc_tab_saveload::VTable** result_1 = result
sub_642e20(arg1)
*result = &C_sys_wnd_func_saveload::Cc_tab_saveload::`vftable'{for `NT3::Cc_tab'}
int32_t var_8_1 = 0
sub_57a390(&result[0x26])
result[0x26] = &C_sys_wnd_func_saveload::Cc_lst_saveload::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 1
sub_536280(&result[0xf4])
result[0xf4] = &C_sys_wnd_func_saveload::Cc_chk_saveload::`vftable'{for `NT3::Cc_check'}
var_8_1.b = 2
sub_536280(&result[0x119])
result[0x119] = &C_sys_wnd_func_saveload::Cc_chk_saveload::`vftable'{for `NT3::Cc_check'}
var_8_1.b = 3
sub_5cd480(&result[0x13e])
result[0x13e] = &C_sys_wnd_func_saveload::Cc_btn_saveload::`vftable'{for `NT3::Cc_button'}
var_8_1.b = 4
sub_5cd480(&result[0x163])
result[0x163] = &C_sys_wnd_func_saveload::Cc_btn_saveload::`vftable'{for `NT3::Cc_button'}
var_8_1.b = 5
sub_5cd480(&result[0x188])
result[0x188] = &C_sys_wnd_func_saveload::Cc_btn_saveload::`vftable'{for `NT3::Cc_button'}
fsbase->NtTib.ExceptionList = ExceptionList
return result
