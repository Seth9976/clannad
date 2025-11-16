// 函数: sub_639f90
// 地址: 0x639f90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c25b6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
sub_575830(arg1)
int32_t var_8_1 = 0
*arg1 = &C_cfg_wnd_config_base::`vftable'{for `C_tnm_dlg'}
struct NT3::Cc_tab::C_cfg_wnd_config_base::C_tab_base::VTable** var_18 = &arg1[0x2f]
sub_642e20(&arg1[0x2f])
arg1[0x2f] = &C_cfg_wnd_config_base::C_tab_base::`vftable'{for `NT3::Cc_tab'}
var_8_1.b = 1
sub_5cd480(&arg1[0x55])
var_8_1.b = 2
sub_5cd480(&arg1[0x79])
var_8_1.b = 3
sub_5cd480(&arg1[0x9d])
__builtin_memset(&arg1[0xc1], 0, 0x18)
var_8_1.b = 6
sub_63ca10(&arg1[0xc7])
void* var_18_1 = &arg1[0x756]
sub_575830(&arg1[0x756])
arg1[0x784].b = 0
var_8_1.b = 8
arg1[0x756] = &C_cfg_wnd_base_font_msgspd::`vftable'{for `C_cfg_wnd_base'}
sub_63d100(&arg1[0x785])
var_8_1.b = 9
sub_63d1e0(&arg1[0x960])
var_8_1.b = 0xa
sub_63caa0(&arg1[0xa96])
var_8_1.b = 0xb
sub_63cb70(&arg1[0xea2])
var_8_1.b = 0xc
sub_63cc00(&arg1[0x11ce])
var_8_1.b = 0xd
sub_63ccf0(&arg1[0x13e8])
var_8_1.b = 0xe
sub_63cd80(&arg1[0x14f7])
var_8_1.b = 0xf
sub_63ce30(&arg1[0x1631])
var_8_1.b = 0x10
sub_63cec0(&arg1[0x17f4])
var_8_1.b = 0x11
sub_63cf50(&arg1[0x19db])
var_8_1.b = 0x12
sub_63cfe0(&arg1[0x1b7a])
var_8_1.b = 0x13
sub_63d070(&arg1[0x2271])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
