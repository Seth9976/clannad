// 函数: sub_63da60
// 地址: 0x63da60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c2ba4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::Cc_listview::C_tnm_dbg_listview::VTable** result = arg1
struct NT3::Cc_listview::C_tnm_dbg_listview::VTable** result_1 = result
sub_57a390(arg1)
*result = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
int32_t var_8_1 = 0
sub_57a390(&result[0xcd])
result[0xcd] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 1
sub_5cd480(&result[0x19a])
var_8_1.b = 2
sub_5cd600(&result[0x1be])
sub_6c6d90(&result[0x1e2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
