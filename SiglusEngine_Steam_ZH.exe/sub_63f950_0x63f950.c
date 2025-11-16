// 函数: sub_63f950
// 地址: 0x63f950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c317e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
sub_642d60(arg1)
int32_t var_8_1 = 0
sub_5cd600(&arg1[0x24])
arg1[0x24] = &Ccfg_wnd_func_chrkoe::Cc_chalst::`vftable'{for `NT3::Cc_static'}
var_8_1.b = 1
sub_5a8f70(&arg1[0x49])
var_8_1.b = 2
sub_5cd480(&arg1[0x6d])
var_8_1.b = 3
sub_5cd480(&arg1[0x91])
var_8_1.b = 4
sub_5cd480(&arg1[0xb5])
var_8_1.b = 5
sub_5cd480(&arg1[0xd9])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
