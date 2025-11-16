// 函数: sub_63b6c0
// 地址: 0x63b6c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c29be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
sub_575830(arg1)
int32_t var_8_1 = 0
*arg1 = &C_db_wnd_info_element::`vftable'{for `C_db_wnd_info'}
sub_642ef0(&arg1[0x2e])
var_8_1.b = 1
sub_57a390(&arg1[0x52])
arg1[0x52] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 2
sub_57a390(&arg1[0x11f])
arg1[0x11f] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 3
sub_57a390(&arg1[0x1ec])
arg1[0x1ec] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 4
sub_57a390(&arg1[0x2b9])
arg1[0x2b9] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 5
sub_57a390(&arg1[0x386])
arg1[0x386] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 6
sub_57a390(&arg1[0x453])
arg1[0x453] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 7
sub_57a390(&arg1[0x520])
arg1[0x520] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 8
sub_57a390(&arg1[0x5ed])
arg1[0x5ed] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 9
sub_57a390(&arg1[0x6ba])
arg1[0x6ba] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 0xa
sub_57a390(&arg1[0x787])
arg1[0x787] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 0xb
sub_57a390(&arg1[0x854])
arg1[0x854] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 0xc
sub_57a390(&arg1[0x921])
arg1[0x921] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 0xd
sub_57a390(&arg1[0x9ee])
arg1[0x9ee] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 0xe
sub_57a390(&arg1[0xabb])
arg1[0xabb] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 0xf
sub_57a390(&arg1[0xb88])
arg1[0xb88] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 0x10
sub_57a390(&arg1[0xc55])
arg1[0xc55] = &C_tnm_dbg_listview::`vftable'{for `NT3::Cc_listview'}
var_8_1.b = 0x11
sub_5cd480(&arg1[0xd22])
var_8_1.b = 0x12
sub_5cd480(&arg1[0xd46])
sub_6c6d90(&arg1[0xd6a])
sub_6c6d90(&arg1[0xd85])
var_8_1.b = 0x15
arg1[0xda0] = 0
arg1[0xda1] = 0
arg1[0xda0] = sub_642700()
__builtin_memset(&arg1[0xda2], 0, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
