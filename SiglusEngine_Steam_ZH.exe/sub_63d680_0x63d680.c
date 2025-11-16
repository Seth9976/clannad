// 函数: sub_63d680
// 地址: 0x63d680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c2b04
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
sub_5cd480(arg1)
int32_t var_8_1 = 0
sub_5cd480(&arg1[0x24])
var_8_1.b = 1
sub_642ca0(&arg1[0x48])
arg1[0x48] = &C_tnm_dbg_listbox::`vftable'{for `NT3::Cc_listbox'}
var_8_1.b = 2
sub_642ca0(&arg1[0x6c])
arg1[0x6c] = &C_tnm_dbg_listbox::`vftable'{for `NT3::Cc_listbox'}
sub_6c6d90(&arg1[0x90])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
