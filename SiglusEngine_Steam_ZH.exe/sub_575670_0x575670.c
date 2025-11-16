// 函数: sub_575670
// 地址: 0x575670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b45f4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct C_db_wnd_info::C_db_wnd_info_listview::VTable** result = arg1
struct C_db_wnd_info::C_db_wnd_info_listview::VTable** result_1 = result
sub_575830(arg1)
int32_t var_8_1 = 0
*result = &C_db_wnd_info_listview::`vftable'{for `C_db_wnd_info'}
result[0x34] = 7
result[0x33] = 0
result[0x2f].w = 0
result[0x35] = 0
result[0x36] = 0
result[0x37] = 0
var_8_1.b = 2
sub_57a390(&result[0x38])
result[0x38] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
fsbase->NtTib.ExceptionList = ExceptionList
return result
