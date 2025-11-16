// 函数: sub_535ec0
// 地址: 0x535ec0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?shortsort@@YAXPAD0IP6AHPBX1@Z@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
arg2 = &arg1[1]
*arg1 = *ebx
sub_535fc0(&arg1[1], &ebx[1])
int32_t var_8_1 = 0
arg1[1] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}
arg1[0x24] = 7
arg1[0x23] = 0
arg1[0x1f].w = 0
sub_52e3c0(&arg1[0x1f], &ebx[0x1f], 0, 0xffffffff)
arg1[1] = &Ccfg_wnd_func_chrkoe::Cc_character_chk::`vftable'{for `NT3::Cc_check'}
arg1[0x25] = ebx[0x25]
int32_t var_8_2 = 1
arg2 = &arg1[0x26]
sub_535fc0(&arg1[0x26], &ebx[0x26])
var_8_2.b = 2
arg1[0x26] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}
arg1[0x49] = 7
arg1[0x48] = 0
arg1[0x44].w = 0
sub_52e3c0(&arg1[0x44], &ebx[0x44], 0, 0xffffffff)
arg1[0x26] = &Ccfg_wnd_func_chrkoe::Cc_character_sld::`vftable'{for `NT3::Cc_slider'}
arg1[0x4a] = ebx[0x4a]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
